//
//  ResourceManager.cpp
//  Project
//
//  Created by 孙 少磊 on 13-1-9.
//
//首先请求resource_version, 判断filelist版本号
//然后获取res_info, 即filelist
//再按照filelist下载file
//

#include "Common.h"
#include "ResourceManager.h"
#include "PlatformCommon.h"
#include "GoddessUtils.h"
#include <string>

using namespace std;
using namespace cocos2d;
using namespace cocos2d::extension;

ResourceManager::ResourceManager(MainGame *mainGame)
{
    // 获得游戏主逻辑实例,用于加载完资源后发出启动游戏的信号
    this->mainGame = mainGame;    
    newFileNum = 0;
    downNum = 0;
    this->localClientVersion = GET_CLIIENT_VERSION();
}

ResourceManager::~ResourceManager(){
    // 释放资源，你懂得
    //CCHttpClient::getInstance()->destroyInstance();
}

void ResourceManager::updateResource(){
    // 第一个http请求，向服务器固定URL请求当前最新的资源列表版本号
    char url[128];
    sprintf(url, "%s%s?platform=%s", GET_API_URL(), "version", MACRO_VALUE(GAME_PLATFORM));
    requestPath(url, httpresponse_selector(ResourceManager::getVersionCallBack), "version");
}

void ResourceManager::requestPath(const char* url, SEL_HttpResponse call_back, const char* tag)
{
    CCHttpRequest* request = new CCHttpRequest();
	request->setUrl(url);
    request->setRequestType(CCHttpRequest::kHttpGet);
    request->setResponseCallback(this, call_back);
    request->setTag(tag);
    
    CCHttpClient::getInstance()->send(request);
    request->release();
}

void ResourceManager::getVersionCallBack(CCNode *sender, void *data)
{
    CCHttpResponse *response = (CCHttpResponse*)data;
    if (!response) return;

    int status = response->getResponseCode();
    string tag = response->getHttpRequest()->getTag();
    
    CCLOG("response code: %d %s", status, response->getHttpRequest()->getUrl());

    if (!response->isSucceed() or status != 200)
    {
        CCMessageBox("当前网络不可用, 请检查网络", "");
        return;
    }
    
    vector<char> *buffer = response->getResponseData();     // buffer is version,static_path
    string responseData(buffer->begin(),buffer->end());
    
    int pos = responseData.find_first_of(',', 0);
    this->static_url = responseData.substr(0, pos);
    string tmp = responseData.substr(pos+1);
    pos = tmp.find_first_of(',', 0);
    this->newClientVersion = tmp.substr(0, pos);
    this->newVersion = tmp.substr(pos+1);
    
    if (MACRO_NAME(DEV) != MACRO_VALUE(GAME_PLATFORM)){
        if (this->checkLocalVersion()) {
            this->mainGame->updateFinish();
            return;
        }
    }else{
        if (this->localClientVersion != this->newClientVersion){
            this->mainGame->clientExpired();
            return;
        }
    }
    
    this->loadResource();
}

bool ResourceManager::checkLocalVersion()
{
    // 获取可写的磁盘目录
    unsigned long fileSize;
    unsigned char *data = CCFileUtils::sharedFileUtils()->getFileData(LOCAL_FILENAME, "r", &fileSize);
    
    if (!data) {
        this->localVersion = "000";
    }else{
        string version((char*)data, 0, fileSize);
        this->localVersion = version.substr(0, version.find("\n"));
        delete[] data;
    }
    
    if(this->localVersion == this->newVersion) return true;     // 如果本地版本号和网络上的版本号相同返回false，不用更新
 
    return false;
}

void ResourceManager::loadResource()
{
    unsigned long fileSize;
    unsigned char *data = CCFileUtils::sharedFileUtils()->getFileData(LOCAL_FILENAME, "r", &fileSize);
    
    string fileData;
    if (!data){
        fileData = "";
    }else{
        fileData = string((char*)data);
        delete[] data;
    }
    
    buildResource(&this->local_resource, fileData);
    
    string remoteStaticUrl = this->static_url + this->newVersion + "/resource_version";
    requestPath(remoteStaticUrl.c_str(), httpresponse_selector(ResourceManager::loadResourceCallBack), LOCAL_FILENAME);
}

void ResourceManager::loadResourceCallBack(CCNode *sender, void *data){
    
    CCHttpResponse *response = (CCHttpResponse*)data;
    if (!response) return;
    
    int status = response->getResponseCode();
    string tag = response->getHttpRequest()->getTag();
    
    CCLOG("response code: %d %s", status, response->getHttpRequest()->getUrl());
    
    if (!response->isSucceed() or status != 200)
    {
        CCMessageBox("API 异常，请检查网络", "");
        return;
    }
    
    vector<char> *buffer = response->getResponseData();     // buffer is version,static_path
    string responseData(buffer->begin(),buffer->end());
    

    buildResource(&this->net_resource, responseData);
    
    // 检测网络类型 如果不是wifi状态提示
    PlatformCommon::getInstance()->checkNetWorkTypeAndAlert();
}

void ResourceManager::buildResource(std::map<std::string ,std::string>* res_map, string data){
    
    string substring;
    string::size_type start = 0, index;
    bool hasEnd = false;
    
    do
    {
        index = data.find_first_of("\r\n", start);     // 查找\n标示符
        if (index != string::npos)
        {
            substring = data.substr(start,index-start);     // 截取出本次拆分好的数据
            int pos = substring.find_first_of(':', 0);     // 把拆分好的数据再次按照 : 拆分
            string key = substring.substr(0, pos);     // 提取出 filename
            string value = substring.substr(pos+1);     // 提取出 version
            
            res_map->insert(map<string,string>::value_type(key,value));
            start = data.find_first_not_of("\r\n", index);
            if (start == string::npos){
                hasEnd = true;
                break;
            }
        }
    }while(index != string::npos);
    
    // 处理一下数据尾
    if(!hasEnd){
        substring = data.substr(start);
        int pos = substring.find_first_of(':', 0);
        string key = substring.substr(0, pos);
        string value = substring.substr(pos+1);
        res_map->insert(map<string,string>::value_type(key,value));
    }
    
}

void ResourceManager::startDownload()
{
    // 从网络资源列表中遍历，如果是本地没有的资源，加入到下载列表中
    map<string, string>::iterator iter;
    for(iter=net_resource.begin(); iter!=net_resource.end(); ++iter)
    {
        map<string, string>::iterator tmp = local_resource.find(iter->first);

        if(tmp == local_resource.end())
        {
            downLoad_resource.insert(map<string, string>::value_type(iter->first, iter->second));
        }else if(tmp->second != iter->second){
            downLoad_resource.insert(map<string, string>::value_type(iter->first, iter->second));
        }
    }
    if (!downLoad_resource.size()){
        recordFile();
        return;
    }
    
    // 循环下载列表，开始发出下载文件的请求
    for(iter=downLoad_resource.begin(); iter!=downLoad_resource.end(); ++iter)
    {
        downLoadFile(iter->first, iter->second);
    }
}

void ResourceManager::downLoadFile(std::string filename, std::string version)
{
    newFileNum++;     // 用来计数需要下载的文件数量

    string url = this->static_url + this->newVersion + "/" + filename;
    string tag = filename + ":" + version;
    requestPath(url.c_str(), httpresponse_selector(ResourceManager::downloadCallBack), tag.c_str());
}

void ResourceManager::downloadCallBack(CCNode *sender, void *data)
{
    CCHttpResponse *response = (CCHttpResponse*)data;
    
    if (!response)
    {
        downNum++;
        recordFile();
        return;
    }
    
    string tag = response->getHttpRequest()->getTag();     // tag 里面记录文件名 filename:version

    // tag 结构为 filename:version 需要拆解出来 filename 和 version
    int pos = tag.find_first_of(':', 0);
    string filename = tag.substr(0, pos);
    string version = tag.substr(pos+1);

    // int statusCode = response->getResponseCode();
    // CCLOG("response code: %d %s", statusCode, response->getHttpRequest()->getUrl());
    
    if (!response->isSucceed())
    {
        CCLOG("error buffer: %s", response->getErrorBuffer());
        downNum++;
        recordFile();
        return;
    }

    vector<char> *buffer = response->getResponseData();
	string responseData(buffer->begin(),buffer->end());
    
    //检测路径文件夹是否存在 否则创建
    string path = CCFileUtils::sharedFileUtils()->getWritablePath();
    int dic_pos = filename.find_first_of('/', 0);
    while ( dic_pos >= 0 ){
        string dictory = path + filename.substr(0, dic_pos);
        if (dictory != "") mkdir(dictory.c_str(), S_IRUSR | S_IWUSR | S_IXUSR);
        dic_pos = filename.find_first_of('/', dic_pos+1);
    }
    
    // 拼接文件全路径并保存下载文件
    path += filename;
    FILE *fp = fopen(path.c_str(), "wb+");
    fwrite(responseData.c_str(), 1, buffer->size(), fp);
    fclose(fp);
    
    downNum++;
    
    // 如果是js文件校验md5
    std::size_t foundJsFile = filename.rfind(".js");
    if (foundJsFile != string::npos)
    {
        unsigned char *tmpCode = new unsigned char[16];
        GoddessUtils::MD5File(path.c_str(), tmpCode);
        string md5Value = GoddessUtils::bytesToHexString(tmpCode, 16);
        if (md5Value != version)
        {
            map<string, short>::iterator mod_iter = modified_resource.find(version);
            if (mod_iter == modified_resource.end())
            {
                modified_resource.insert(map<string,short>::value_type(version, 0));
            }
            else if (mod_iter->second > 2)
            {
                CCMessageBox("文件被修改,请退出游戏尝试更新", "提示");
                return;
            }
          
            mod_iter->second++;
                
            // 重新请求文件
            downLoadFile(filename, version);
            return;
        }
    }

    // 记录已经下载的文件
    this->local_resource.insert(map<string, string>::value_type(filename, version));
    
    recordFile();
}

void ResourceManager::recordFile(){
    
    this->mainGame->progress->setPercentage(downNum*1.0/newFileNum*100);
    this->mainGame->progress->setTipText(2);
    
    // 根据需要下载的文件数量和已经下载的文件数量判断是否下载完成
    if (downNum < newFileNum)
        return;
    
    // 把下载的resource_version文件内容写入到本地res_info文件中
    string path = CCFileUtils::sharedFileUtils()->getWritablePath();
    path += LOCAL_FILENAME;
    fstream _file;
    _file.open(path.c_str(),ios::out);
    
    string version;
    map<string ,string> record;
    version = this->newVersion + '\n';
    record = this->net_resource;
     _file.write((char *) version.c_str(), version.length());
    
    map<string, string>::iterator iter;
    for(iter=record.begin(); iter!=record.end(); ++iter)
    {
        string str = iter->first + ':' + iter->second + '\n';
        _file.write((char *) str.c_str(), str.length());
    }
    _file.close();
    
    // 下载完成，启动游戏
    this->mainGame->updateFinish();
}



