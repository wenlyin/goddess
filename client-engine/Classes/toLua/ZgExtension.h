
#ifndef __LUAzsw_H_
#define __LUAzsw_H_

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
#include "ZgameAnimation.h"
#include "../zgame/TableView.h"
//#include "luaCCBLayer.h"
//#include "luaShadeCCBLayer.h"
#include "TouchLayer.h"
#include "ScrollLabel.h"
#include "ImageAsync.h"
#include "zgame.h"
#include "GraySprite.h"
#include "ShaderShow.h"
#include "ColorOffsetSprite.h"
#include "cocos-ext.h"


//#include "CCEditBox.h"ddaaaaadddwasd

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

using namespace cocos2d;
using namespace CocosDenshion;

TOLUA_API int tolua_ZgExtension_open(lua_State* tolua_S);

#endif // __LUAzsw_H_