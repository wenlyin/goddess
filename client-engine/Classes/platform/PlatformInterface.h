//
//  PlatformInterface.h
//  Goddess
//
//  Created by 孙少磊 on 14-2-18.
//
//

#ifndef __Goddess__PlatformInterface__
#define __Goddess__PlatformInterface__

#include "cocos2d.h"
#include "CCLuaEngine.h"

class PlatformInterface{
public:
    ~PlatformInterface();
    
    static PlatformInterface* getInstance(){
        static PlatformInterface _instance;
        return &_instance;
    }
    void init(int appid, const char* appkey);
    void login();
    void logout();
    void pay(char* orderJson);
    void center();
    
    void registerCallBack(std::string key, cocos2d::LUA_FUNCTION handler){
        this->callbackList[key] = handler;
    }
    void callback(std::string key, std::string value){
        if (this->callbackList[key]){
            int func = this->callbackList[key];
            cocos2d::CCLuaEngine* pEngine = cocos2d::CCLuaEngine::defaultEngine();
            pEngine->getLuaStack()->pushString(value.c_str());
            pEngine->getLuaStack()->executeFunctionByHandler(func, 1);
            
        }
        
    }
    
private:
    PlatformInterface();
    
private:
    std::map<std::string, int> callbackList;
};

#endif /* defined(__Goddess__PlatformInterface__) */
