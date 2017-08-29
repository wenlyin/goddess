//
//  GoddessLua.h
//  goddess_client
//
//  Created by 孙少磊 on 13-3-6.
//
//

#ifndef goddess_client_GoddessLua_h
#define goddess_client_GoddessLua_h

extern "C" {
#include "tolua++.h"
#include "tolua_fix.h"
}

#include <map>
#include <string>
#include "tolua_fix.h"
#include "cocos2d.h"
#include "CCLuaEngine.h"
#include "SimpleAudioEngine.h"

#include "GoddessSocket.h"
#include "ByteArray.h"
#include "MemoryLock.h"
#include "GoddessUtils.h"
#include "SoundRecord.h"
#include "LuaHttp.h"
#include "CCControl.h"
#include "CCControlButton.h"
#include "PlatformInterface.h"
#include "Notice.h"

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

using namespace cocos2d;
using namespace CocosDenshion;

TOLUA_API int tolua_GoddessLua_open(lua_State* tolua_S);

#endif
