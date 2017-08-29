//
//  Common.cpp
//  Goddess
//
//  Created by 孙少磊 on 14-1-23.
//
//

#include "Common.h"


const char* GET_API_URL(){
    if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS) {
        if (MACRO_NAME(LOCAL) == MACRO_VALUE(GAME_PLATFORM)) return "http://192.168.1.14/api/";
        if (MACRO_NAME(DEV) == MACRO_VALUE(GAME_PLATFORM)) return "http://192.168.1.14/api/";
        if (MACRO_NAME(TEST) == MACRO_VALUE(GAME_PLATFORM)) return "http://192.168.1.14/api/";
        if (MACRO_NAME(Rekoo) == MACRO_VALUE(GAME_PLATFORM)) return "http://gdns.snailcolor.com/api/";
        if (MACRO_NAME(TB) == MACRO_VALUE(GAME_PLATFORM)) return "http://gdns.snailcolor.com/api/";
        if (MACRO_NAME(PP) == MACRO_VALUE(GAME_PLATFORM)) return "http://gdns.snailcolor.com/api/";
        if (MACRO_NAME(KY) == MACRO_VALUE(GAME_PLATFORM)) return "http://gdns.snailcolor.com/api/";
        if (MACRO_NAME(ND91) == MACRO_VALUE(GAME_PLATFORM)) return "http://gdns.snailcolor.com/api/";
        if (MACRO_NAME(SKY) == MACRO_VALUE(GAME_PLATFORM)) return "http://gdns.snailcolor.com/api/";
        if (MACRO_NAME(XY) == MACRO_VALUE(GAME_PLATFORM)) return "http://gdns.snailcolor.com/api/";
        if (MACRO_NAME(APPLE) == MACRO_VALUE(GAME_PLATFORM)) return "http://210.73.207.95/api/";
    }
    if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID){
        if (MACRO_NAME(DEV) == MACRO_VALUE(GAME_PLATFORM)) return "http://192.168.1.14/api/";
        if (MACRO_NAME(Rekoo) == MACRO_VALUE(GAME_PLATFORM)) return "http://120.132.75.102/api/";
        if (MACRO_NAME(MI) == MACRO_VALUE(GAME_PLATFORM)) return "http://120.132.75.102/api/";
    }
    return "";
}

std::string GET_CLIIENT_VERSION(){
    unsigned long fileSize;
    unsigned char *local_version = cocos2d::CCFileUtils::sharedFileUtils()->getFileData(LOCAL_CLIENT_VERSION, "r", &fileSize);
    std::string data((char*)local_version, 0, fileSize);
    delete[] local_version;
    return data;
}
