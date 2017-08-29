#ifndef __ZGAME_H__
#define __ZGAME_H__

/******************************************************

版权信息
Zgame
Developer  朱世伟 
Com2us Zgame
内部使用,外部非授权不得使用

*******************************************************/

#include <vector>
#include <string>
#include "cocos2d.h"
#include "cocos-ext.h"
#include "ColorOffsetSprite.h"

using namespace std;

USING_NS_CC;
USING_NS_CC_EXT;

//#define ZDEBUG

#define TRUE 1
#define FALSE 0
#define True 1
#define False 0
typedef unsigned char boolean;
typedef unsigned char byte;


//图片的旋转
#define  TRANS_NONE  0
#define  TRANS_ROT90  5
#define  TRANS_ROT180  3
#define  TRANS_ROT270  6
#define  TRANS_MIRROR  2
#define  TRANS_MIRROR_ROT90  7
#define  TRANS_MIRROR_ROT180	1
#define  TRANS_MIRROR_ROT270  4


#if !defined(COCOS2D_DEBUG) || COCOS2D_DEBUG == 0
#define ZLOG(...)       do {} while (0)
#elif COCOS2D_DEBUG == 1
#define ZLOG(format, ...)      cocos2d::CCLog(format, ##__VA_ARGS__)
#endif

#define  ZgameImage cocos2d::CCTexture2D
#define  ZgameLayer  cocos2d::CCLayer



class Zgame 
{
public:
	static Zgame* SharedZgame(void);

	//文件操作
	unsigned char* DataFileOpen(string pFileName);
	//byte操作
	int GetInt(byte * buffer, int offset);
	int GetInt2(byte * buffer, int offset);
	int GetShort(byte * buffer, int offset);
	string ReadUTF(byte * buf );
	//图片操作
	ZgameImage * ZLoadImage(const char* filename);
	void DrawRegion(ZgameImage * img, int cx , int cy ,  int  w, int h,  int rotate,  float sx, float sy , float scalex , float scaley , int opacity , int mirror, CCNode * layer, boolean colorflag,
                    float r,float g,float b,float a, float model,bool color_open);
	//颜色和画框
	int SetColor(int r, int g, int b);
	int DrawRect(int x, int y, int w, int h ,int c);
    int DrawLine(int x1,int y1, int x2,int y2, int c);
// 	void SetCurrentScene(CCScene * sce);
// 	CCScene * GetCurrentScene();
// 	void CleanAnimationLayer(CCNode *layer);
// 	void AddToScene(ZgameLayer *layer);
    void setGrayScreen(bool isGray);
    
     static void setSharder(CCLayer * layer);
     static void test11();

protected:

private:
	//文件操作的私有方法
	unsigned char* getFileDataFromResourcePath(const char* name);
	unsigned char* getFileDataFromWriteablePath(const char* name);
	bool isFileExistsInWritablePath(const char* name);
	bool isFileExistsInResourcePath(const char* name);
	CCScene * currentScene;
	


};

#endif 
