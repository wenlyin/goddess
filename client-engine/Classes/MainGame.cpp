//
//  MainGame.cpp
//  Project
//
//  Created by 孙 少磊 on 13-1-8.
//
//
extern "C"{
#include "LuaDebug.h"
}
#include <iostream>
#include "Common.h"
#include "cocos2d.h"
#include "AppDelegate.h"
#include "SimpleAudioEngine.h"
#include "script_support/CCScriptSupport.h"
#include "Lua_extensions_CCB.h"
#include "CCLuaEngine.h"
#include "MainGame.h"
#include "GoddessLuaLoader.h"
#include "gameLoader/ResourceManager.h"
#include "toLua/GoddessLua.h"
#include "toLua/ZgExtension.h"
#include "gameLoader/ProgressBar.h"
#include "VideoView.h"

USING_NS_CC;
using namespace CocosDenshion;

static MainGame* m_pInstance;

MainGame::MainGame()
{
    this->resourceManager = NULL;
    this->progress = NULL;
    this->log = NULL;
    
    std::string writeDirPath = CCFileUtils::sharedFileUtils()->getWritablePath();
    log = freopen((writeDirPath+"debug.log").c_str(), "a" ,stdout);
    setbuf(log, 0);
    
    // 初始化lua引擎
    CCLuaEngine* pEngine = CCLuaEngine::defaultEngine();
    CCScriptEngineManager::sharedManager()->setScriptEngine(pEngine);
    
    CCLuaStack *pStack = pEngine->getLuaStack();
    lua_State *tolua_s = pStack->getLuaState();
    
    pStack->addLuaLoader(goddess_lua_loader);
    
    tolua_ZgExtension_open(tolua_s);
    tolua_GoddessLua_open(tolua_s);
    tolua_extensions_ccb_open(tolua_s);
    
    start_lua_debug(tolua_s);     // lua debug
    
    // 一定确保可写路径在首位
    std::vector<std::string> searchPaths = CCFileUtils::sharedFileUtils()->getSearchPaths();
    std::vector<std::string>::iterator iter = searchPaths.begin();
    searchPaths.insert(iter, writeDirPath);
    searchPaths.push_back(writeDirPath + "res");
    searchPaths.push_back(writeDirPath + "res/scripts");
    searchPaths.push_back(writeDirPath + "res/scripts/Libs");
    searchPaths.push_back(writeDirPath + "res/assets");
    searchPaths.push_back("res");
    searchPaths.push_back("res/scripts");
    searchPaths.push_back("res/scripts/Libs");
    searchPaths.push_back("res/assets");
    CCFileUtils::sharedFileUtils()->setSearchPaths(searchPaths);
}

MainGame::~MainGame()
{
    fclose(log);
}

MainGame* MainGame::GetInstance(){
    if(m_pInstance == NULL)
        m_pInstance = new MainGame();
    return (MainGame*) m_pInstance;
}

void MainGame::startGame()
{
    self:playGameVideo();
}

void MainGame::playGameVideo()
{
    VideoView::playVideo("loader/video.mp4");
//    this->doFinishPlayVideo();
}

void MainGame::doFinishPlayVideo()
{
    this->progress = new ProgressBar();
    this->resourceManager = new ResourceManager(this);
    
    if (MACRO_NAME(LOCAL) == MACRO_VALUE(GAME_PLATFORM)){
        this->startScene();
    }else{
        ((ResourceManager*)this->resourceManager)->updateResource();
    }
}

void MainGame::loaderLoginResource(float dt){
    CCDirector::sharedDirector()->getScheduler()->unscheduleSelector(schedule_selector(MainGame::loaderLoginResource), this);
    this->startScene();

    this->progress->removeFromParent();
    delete this->progress;     //删除Loader
}

void MainGame::updateFinish(){
    this->progress->setTipText(3);        //正在初始化
    this->progress->setPercentage(100);
    CCDirector::sharedDirector()->getScheduler()->scheduleSelector(schedule_selector(MainGame::loaderLoginResource), this, 0.1, false);
}

void MainGame::clientExpired(){
    CCMessageBox("版本号过期", "版本号过期");
}

void MainGame::startScene()
{
    CCLuaEngine* pEngine = CCLuaEngine::defaultEngine();
    
    const char* env_format = "RUNTIME_ENV = { \n\
        [\"CLIENT_VERSION\"] = \"%s\",\n \
        [\"LOCAL_RESOURCE_VERSION\"] = \"%s\",\n \
        [\"NEW_RESOURCE_VERSION\"] = \"%s\",\n \
        [\"API_URL\"] = \"%s\",\n \
        [\"GAME_PLATFORM\"] = \"%s\",\n \
        }\n \
    ";
    char env[1024];

    const char* client_version = GET_CLIIENT_VERSION().c_str();
    const char* local_resource_version = ((ResourceManager*)this->resourceManager)->localVersion.c_str();
    const char* new_resource_version = ((ResourceManager*)this->resourceManager)->newVersion.c_str();
    const char* api_url = GET_API_URL();
    const char* game_platform = MACRO_VALUE(GAME_PLATFORM);

    
    std::sprintf(env, env_format, client_version, local_resource_version, new_resource_version, api_url, game_platform);
    pEngine->executeString(env);
    
    if (this->resourceManager) delete ((ResourceManager*)this->resourceManager);
    
    pEngine->executeString("require \"Main\"");
}

void MainGame::applicationDidEnterBackground()
{
    CCLuaEngine* pEngine = CCLuaEngine::defaultEngine();
    pEngine->executeGlobalFunction("applicationDidEnterBackground");
    
//    SimpleAudioEngine::sharedEngine()->pauseBackgroundMusic();
}

void MainGame::applicationWillEnterForeground()
{
//    SimpleAudioEngine::sharedEngine()->resumeBackgroundMusic();
    CCLuaEngine* pEngine = CCLuaEngine::defaultEngine();
    pEngine->executeGlobalFunction("applicationWillEnterForeground");
}

