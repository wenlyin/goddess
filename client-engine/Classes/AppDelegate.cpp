#include "cocos2d.h"
#include "AppDelegate.h"
#include "SimpleAudioEngine.h"
#include "script_support/CCScriptSupport.h"
#include "CCLuaEngine.h"


USING_NS_CC;
using namespace CocosDenshion;

AppDelegate::AppDelegate()
{
    
}

AppDelegate::~AppDelegate()
{
    SimpleAudioEngine::end();
}

bool AppDelegate::applicationDidFinishLaunching()
{
    CCDirector *pDirector = CCDirector::sharedDirector();
    CCEGLView *pEGLView = CCEGLView::sharedOpenGLView();
    
    pDirector->setOpenGLView(pEGLView);
    
    // turn on display FPS
	pDirector->setDisplayStats(false);
    
    // set FPS. the default value is 1.0/60 if you don't call this
    pDirector->setAnimationInterval(1.0 / 60);
    
    // multi-resolution support
    CCSize designSize = CCSizeMake(960, 640);
    CCEGLView::sharedOpenGLView()->setDesignResolutionSize(designSize.width, designSize.height, kResolutionFixedHeight);
    
    CCSize frameSize = pEGLView->getFrameSize();
    CCSize winSize = pDirector->getWinSize();
    
    CCLOG("Screen Size: %f x %f", frameSize.width, frameSize.height);
    CCLOG("Design Size: %f x %f", designSize.width, designSize.height);
    CCLOG("Fixed Design Size: %f x %f", winSize.width, winSize.height);
    
    MainGame::GetInstance()->startGame();
    
    return true;
}

// This function will be called when the app is inactive. When comes a phone call,it's be invoked too
void AppDelegate::applicationDidEnterBackground()
{
    MainGame::GetInstance()->applicationDidEnterBackground();
}

// this function will be called when the app is active again
void AppDelegate::applicationWillEnterForeground()
{
    MainGame::GetInstance()->applicationWillEnterForeground();
}
