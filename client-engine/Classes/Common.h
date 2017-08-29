//
//  Common.h
//  goddess
//
//  Created by 孙少磊 on 13-6-13.
//
//

#ifndef goddess_Common_h
#define goddess_Common_h

#include "cocos2d.h"

#define PROTOCOL_KEY "96b7a3915e"     //通信秘钥
#define SCRIPT_KEY "3c883f7813a3ee68"     //文件秘钥
#define LOCAL_CLIENT_VERSION "client_version"

#define MACRO_NAME(MACRO) #MACRO
#define MACRO_VALUE(MACRO)  MACRO_NAME(MACRO)

const char* GET_API_URL();
std::string GET_CLIIENT_VERSION();
#endif


