#include "zgame.h"
extern "C" {
#include "xxtea.h"
#include "Common.h"
}

/******************************************************

版权信息
Zgame
Developer  朱世伟 
Com2us Zgame
内部使用,外部非授权不得使用

*******************************************************/

static Zgame *s_Zgame = NULL;

//******************************
//常用类

Zgame* Zgame::SharedZgame(void)
{
	if (!s_Zgame)
	{
		s_Zgame = new Zgame();
	}
	return s_Zgame;
}

//****************
//图片操作

ZgameImage * Zgame::ZLoadImage(const char* filename){
	ZgameImage *img = NULL;
    
    img = CCTextureCache::sharedTextureCache()->textureForKey(filename);
    if(img == NULL){
        ZLOG("Zgame::ZLoadImage %s",filename);
        img = CCTextureCache::sharedTextureCache()->addImage(filename);
    }
    
//    unsigned long tmpSize = 0;
//    unsigned char* tmpBuffer = CCFileUtils::sharedFileUtils()->getFileData(filename, "rb", &tmpSize);
//    
//    if (!tmpBuffer){
//        return NULL;
//    }
//    
//    unsigned int codeBufferSize = 0;
//    unsigned char* codeBuffer = xxtea_decrypt(tmpBuffer, tmpSize, (unsigned char*)SCRIPT_KEY, sizeof(SCRIPT_KEY), &codeBufferSize);
//    delete[] tmpBuffer;
//    
//    if (codeBuffer)
//    {
//        
//    }
    
	return img;
}

/**
 画单个切片
 @img 纹理
 @cx  切片在纹理上的X值
 @cy  切片在纹理上的Y值
 @w   要片宽度
 @h   切片高度
 @rotate 旋转
 @sx  positionX
 @sy  positionY
 @scalex  宽度缩放
 @scaley  高度缩放
 @opacity 透明度
 @mirror  是否镜像
 @layer   父亲
 @colorflag 是不是增加模式
 @r 颜色通道R
 @g 颜色通道G
 @b 颜色通道B
 @a 透明度
 @model 模式［增加模式/颜色替换］
 @color_open 要增加或替换的颜色
 **/
void Zgame::DrawRegion(ZgameImage * img, int cx , int cy ,  int  w, int h,  int rotate,  float sx, float sy , float scalex , float scaley  , int opacity , int mirror, CCNode * layer, boolean colorflag
                       ,float r,float g,float b,float a, float model,bool color_open)
{


    if (img==NULL)
    {
        ZLOG("img == null");
        return;
    }

    if (cx<0 || cy<0 ||cx+w> img->getContentSize().width || cy+h > img->getContentSize().height)
    {
        ZLOG("ERROR~~~~~~ Zgame::DrawRegion cx<0 || cy<0 ||cx+w> img->getContentSize().width || cy+h > img->getContentSize().height");
        return;
    }
	CCSprite * clip = CCSprite::createWithTexture(img,CCRectMake(cx,cy,w,h));

	clip->setScaleX(scalex);    // 缩放X
	clip->setScaleY(scaley);    // 缩放Y

    //ccBlendFunc bf = { GL_ZERO ,GL_ONE_MINUS_SRC_ALPHA };   //黑色的影子
    if (colorflag)
    {
        ccBlendFunc bf = { GL_SRC_ALPHA ,GL_ONE };   //增加模式
        clip->setBlendFunc(bf);
    }

	clip->setRotation(rotate);   // 设置旋转
    clip->setOpacity(opacity);   // 设置透明度
    clip->setFlipX(mirror);      // 水平镜像

	//这里对齐方式不同, 需要做变换 一个是左上角0,0, cocos是左下角0,0
	clip->setPositionX(sx);     
	clip->setPositionY(sy);
    
    //颜色替换
    if (color_open){
//        ColorOffsetSprite::setColorOffset(clip,r,g,b,a,model);
        clip->setColor(ccc3(r, g, b));
    }
    
    

    clip->getTexture()->setAntiAliasTexParameters();

	//-----------------------------
	if(layer){
//        CCMotionStreak *motionStreak = CCMotionStreak::create(2.0f, 1.0f, 50.0f, ccc3(255,255, 255), clip->getTexture());
    
        layer->addChild(clip);
//        layer->addChild(motionStreak);
    }


}

//**********
int Zgame::SetColor(int r, int g, int b){
	ccDrawColor4B(r,g,b,255);
	return	0;
}
int Zgame::DrawRect(int x, int y, int w, int h , int c ) 
{
	SetColor(( 0xff <<16 & c ) >> 16 , (0xff <<8 & c ) >> 8, 0xff & c);

	//ZLOG("x %d,y %d,w %d,h %d",x,y,w,h);
	//这里对齐方式不同, 需要做变换 一个是左上角0,0, cocos是左下角0,0
	ccDrawRect(ccp(x,y),ccp(x+w , y-h));
	return 0;
}

int Zgame::DrawLine(int x1,int y1, int x2,int y2, int c)
{
    
	SetColor(( 0xff <<16 & c ) >> 16 , (0xff <<8 & c ) >> 8, 0xff & c);
	ccDrawLine(ccp(x1,y1),ccp(x2 , y2));
	return 0;

}


//**********************************
//byte 操作
int Zgame::GetInt(byte * buffer, int offset)
{
	return (buffer[offset] & 0xFF) << 24 |
		(buffer[offset + 1] & 0xFF) << 16 |
		(buffer[offset + 2] & 0xFF) << 8  |
		(buffer[offset + 3] & 0xFF);
}

int Zgame::GetInt2(byte * buffer, int offset)
{
	return (buffer[offset] & 0xFF) |
		(buffer[offset + 1] & 0xFF) << 8 |
		(buffer[offset + 2] & 0xFF) << 16|
		(buffer[offset + 3] & 0xFF) << 24;
}

int Zgame::GetShort(byte * buffer, int offset)
{		return 	(buffer[offset ] & 0xFF) << 8  |
(buffer[offset + 1] & 0xFF);
}
string Zgame::ReadUTF(byte * buf /*, char * dest_buff*/){
	int length=0;
	char  cc[1024];           // read utf 最大字节数
	length = GetShort(buf,0);

	memcpy(cc,buf+2,length);
	memset(cc+length,'\0',sizeof(char));
	
// 	memcpy(dest_buff,buf+2,length);
// 	memset(dest_buff+length,'\0',sizeof(char));

	return string(cc);
}

//***************************************
//文件操作
//********************

unsigned char * Zgame::DataFileOpen(string pFileName){
	if (isFileExistsInWritablePath(pFileName.c_str()))
	{
		return getFileDataFromWriteablePath(pFileName.c_str());
	} 
	else //if(isFileExistsInResourcePath(pFileName.c_str()))
	{
		return getFileDataFromResourcePath(pFileName.c_str());
	}
	
}


//从资源目录获取文件
unsigned char* Zgame::getFileDataFromResourcePath(const char* name){
	unsigned long size;
	return CCFileUtils::sharedFileUtils()->getFileData(CCFileUtils::sharedFileUtils()->fullPathForFilename(name).c_str() , "rb", &size);
}

//从可写目录获取文件
unsigned char* Zgame::getFileDataFromWriteablePath(const char* name){
	std::string path = CCFileUtils::sharedFileUtils()->getWritablePath();
	     
	path+=name;
	FILE* fp = fopen(path.c_str(),"rb");
	if (!fp)
	{
		return NULL;
	}
	fseek(fp,0,SEEK_END);
	int len = ftell(fp);  
	fseek(fp,0,SEEK_SET);
	unsigned char* buf = (unsigned char*)malloc(len);
	fread(buf,len,1,fp);
	fclose(fp);
	return buf;
}
//判断文件是否存在于可写文件夹
bool Zgame::isFileExistsInWritablePath(const char* name)
{
	std::string path = CCFileUtils::sharedFileUtils()->getWritablePath();
	path+=name;
	FILE* fp = fopen(path.c_str(),"rb");
	if (!fp)
	{
		return false;
	}
	fclose(fp);
	return true;
}
//判断文件是否存在于资源文件夹
bool Zgame::isFileExistsInResourcePath(const char* name)
{
// 	std::string path = CCFileUtils::sharedFileUtils()->fullPathFromRelativePath(name);
// 	FILE* fp = fopen(path.c_str(),"rb");
	if (!getFileDataFromResourcePath(name))
	{
		return false;
	}
	return true;
}

//*****************************************


void Zgame::setGrayScreen(bool isGray){
//    if (isGray == true){
//        ShaderNode *sn = ShaderNode::shaderNodeWithVertex("","");
//        CCSize s = CCDirector::sharedDirector()->getWinSize();
//        sn->setPosition(ccp(s.width/2,s.height/2));
//        
//        //addChild(sn);
//        
//        
//    }else{
//        
//    }
}





//******************************************


//void Zgame::setSharder(CCLayer * layer){
//    ZLOG("setSharder=====start=============");
//    CCLayer * m_pContainer = CCLayer::create();
//    
//    ShaderNode * sn = ShaderNode::shaderNodeWithVertex("Shaders/example_Monjori.vsh", "Shaders/example_Monjori.fsh");
//    CCSize s = CCDirector::sharedDirector()->getWinSize();
//    sn->setPosition(ccp(s.width/2,s.height/2));
//    //m_pContainer->addChild(sn);
//    
//    CCScene * scene = CCDirector::sharedDirector()->getRunningScene();
//    //scene->addChild(m_pContainer);
//    scene->addChild(sn);
//    
//    ZLOG("setSharder======end============");
//    
//}

void Zgame::setSharder(CCLayer * layer){
//    ZLOG("setSharder=====start=============");
//    SpriteBlur * m_pBlurSprite = SpriteBlur::create("images/skill04.png");
//    
//    CCSprite *sprite = CCSprite::create("images/skill04.png");
//    
//    CCSize s = CCDirector::sharedDirector()->getWinSize();
//    m_pBlurSprite->setPosition(ccp(s.width/3, s.height/2));
//    sprite->setPosition(ccp(2*s.width/3, s.height/2));
//    
//    CCScene * scene = CCDirector::sharedDirector()->getRunningScene();
//    scene->addChild(m_pBlurSprite);
//    scene->addChild(sprite);
//       
//    ZLOG("setSharder======end============");
    
}

void Zgame::test11()
{
    ZLOG("test11");
}