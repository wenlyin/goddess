//
//  Resource.h
//  Project
//
//  Created by 孙 少磊 on 13-1-9.
//
//

#ifndef __Project__Resource__
#define __Project__Resource__

#include "cocos2d.h"
#include <iostream>
#include <fstream>
#include <sys/stat.h>

#include "HttpClient.h"
#include "MainGame.h"
#include "ProgressBar.h"

#define LOCAL_FILENAME "res_info"

class ResourceManager : public cocos2d::CCObject{
public:
    ResourceManager(MainGame *mainGame);
    ~ResourceManager();

    void updateResource();
    void requestPath(const char* url, cocos2d::extension::SEL_HttpResponse call_back, const char* tag);
    void getVersionCallBack(cocos2d::CCNode *sender, void *data);
    bool checkLocalVersion();
    void loadResource();
    void loadResourceCallBack(cocos2d::CCNode *sender, void *data);
    void buildResource(std::map<std::string ,std::string>* res_map, std::string data);
    void startDownload();
    void downLoadFile(std::string filename, std::string version);
    void downloadCallBack(cocos2d::CCNode *sender, void *data);
    void recordFile();
    
public:
    MainGame *mainGame;     // 游戏主逻辑实例
    std::map<std::string ,std::string> net_resource;     // 网络文件列表<文件名, 版本号>
    std::map<std::string ,std::string> local_resource;     // 本地文件列表<文件名, 版本号>
    std::map<std::string ,std::string> downLoad_resource;     // 需要下载的文件列表<文件名, 版本号>

    std::string newVersion;     // 新的资源版本号
    std::string localVersion;     // 本地资源版本号
    std::string static_url;
    std::string newClientVersion;     // 最新的客户端版本号
    std::string localClientVersion;
    
    std::map<std::string, short> modified_resource;  //被篡改的文件列表<版本, 重新下载次数>
    int newFileNum;     // 本次需要更新的文件数量
    int downNum;     // 已经下载的文件数量
};
#endif /* defined(__Project__Resource__) */
