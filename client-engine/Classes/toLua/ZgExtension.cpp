/*
** Lua binding: ZgExtension
** Generated automatically by tolua++-1.0.92 on Mon Jan 19 18:57:36 2015.
*/

/****************************************************************************
 Copyright (c) 2011 cocos2d-x.org

 http://www.cocos2d-x.org

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

extern "C" {
#include "tolua_fix.h"
}

#include <map>
#include <string>
#include "cocos2d.h"
#include "CCLuaEngine.h"
#include "SimpleAudioEngine.h"
#include "cocos-ext.h"

using namespace cocos2d;
using namespace cocos2d::extension;
using namespace CocosDenshion;

/* Exported function */
TOLUA_API int  tolua_ZgExtension_open (lua_State* tolua_S);

#include "ZgExtension.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_ShaderShow (lua_State* tolua_S)
{
 ShaderShow* self = (ShaderShow*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_TouchLayer (lua_State* tolua_S)
{
 TouchLayer* self = (TouchLayer*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_ColorOffsetSprite (lua_State* tolua_S)
{
 ColorOffsetSprite* self = (ColorOffsetSprite*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_GraySprite (lua_State* tolua_S)
{
 GraySprite* self = (GraySprite*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_ScrollLabel (lua_State* tolua_S)
{
 ScrollLabel* self = (ScrollLabel*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_ImageAsync (lua_State* tolua_S)
{
 ImageAsync* self = (ImageAsync*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"ZgameAnimation");
 tolua_usertype(tolua_S,"CCTexture2D");
 tolua_usertype(tolua_S,"CCTouch");
 tolua_usertype(tolua_S,"ShaderShow");
 tolua_usertype(tolua_S,"CCSize");
 tolua_usertype(tolua_S,"CCNode");
 tolua_usertype(tolua_S,"ScrollLabel");
 tolua_usertype(tolua_S,"TouchLayer");
 tolua_usertype(tolua_S,"ImageAsync");
 tolua_usertype(tolua_S,"CCSprite");
 tolua_usertype(tolua_S,"CCEvent");
 tolua_usertype(tolua_S,"CCLayer");
 tolua_usertype(tolua_S,"ColorOffsetSprite");
 tolua_usertype(tolua_S,"CCObject");
 tolua_usertype(tolua_S,"Zgame");
 
 tolua_usertype(tolua_S,"CCRect");
 tolua_usertype(tolua_S,"GraySprite");
 tolua_usertype(tolua_S,"AnimationCollisionArraystruct");
}

/* method: create of class  ZgameAnimation */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ZgameAnimation_create00
static int tolua_ZgExtension_ZgameAnimation_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ZgameAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ZgameAnimation* tolua_ret = (ZgameAnimation*)  ZgameAnimation::create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"ZgameAnimation");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: drawAction of class  ZgameAnimation */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ZgameAnimation_drawAction00
static int tolua_ZgExtension_ZgameAnimation_drawAction00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ZgameAnimation",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ZgameAnimation* self = (ZgameAnimation*)  tolua_tousertype(tolua_S,1,0);
  int pause = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'drawAction'", NULL);
#endif
  {
   self->drawAction(pause);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'drawAction'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: LoadAnimation of class  ZgameAnimation */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ZgameAnimation_LoadAnimation00
static int tolua_ZgExtension_ZgameAnimation_LoadAnimation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ZgameAnimation",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ZgameAnimation* self = (ZgameAnimation*)  tolua_tousertype(tolua_S,1,0);
  string filename = ((string)  tolua_tocppstring(tolua_S,2,0));
  string dir = ((string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'LoadAnimation'", NULL);
#endif
  {
   int tolua_ret = (int)  self->LoadAnimation(filename,dir);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'LoadAnimation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: FreeAnimation of class  ZgameAnimation */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ZgameAnimation_FreeAnimation00
static int tolua_ZgExtension_ZgameAnimation_FreeAnimation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ZgameAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ZgameAnimation* self = (ZgameAnimation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'FreeAnimation'", NULL);
#endif
  {
   self->FreeAnimation();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'FreeAnimation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetNextAction of class  ZgameAnimation */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ZgameAnimation_SetNextAction00
static int tolua_ZgExtension_ZgameAnimation_SetNextAction00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ZgameAnimation",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ZgameAnimation* self = (ZgameAnimation*)  tolua_tousertype(tolua_S,1,0);
  int value = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetNextAction'", NULL);
#endif
  {
   self->SetNextAction(value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetNextAction'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetAction of class  ZgameAnimation */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ZgameAnimation_SetAction00
static int tolua_ZgExtension_ZgameAnimation_SetAction00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ZgameAnimation",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ZgameAnimation* self = (ZgameAnimation*)  tolua_tousertype(tolua_S,1,0);
  int value = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetAction'", NULL);
#endif
  {
   self->SetAction(value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetAction'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetActionIndex of class  ZgameAnimation */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ZgameAnimation_GetActionIndex00
static int tolua_ZgExtension_ZgameAnimation_GetActionIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ZgameAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ZgameAnimation* self = (ZgameAnimation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetActionIndex'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetActionIndex();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetActionIndex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetFrameIndex of class  ZgameAnimation */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ZgameAnimation_SetFrameIndex00
static int tolua_ZgExtension_ZgameAnimation_SetFrameIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ZgameAnimation",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ZgameAnimation* self = (ZgameAnimation*)  tolua_tousertype(tolua_S,1,0);
  int value = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetFrameIndex'", NULL);
#endif
  {
   self->SetFrameIndex(value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetFrameIndex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetFrameTime of class  ZgameAnimation */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ZgameAnimation_SetFrameTime00
static int tolua_ZgExtension_ZgameAnimation_SetFrameTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ZgameAnimation",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ZgameAnimation* self = (ZgameAnimation*)  tolua_tousertype(tolua_S,1,0);
  int value = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetFrameTime'", NULL);
#endif
  {
   self->SetFrameTime(value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetFrameTime'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetFrameIndex of class  ZgameAnimation */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ZgameAnimation_GetFrameIndex00
static int tolua_ZgExtension_ZgameAnimation_GetFrameIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ZgameAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ZgameAnimation* self = (ZgameAnimation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetFrameIndex'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetFrameIndex();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetFrameIndex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetFrameTime of class  ZgameAnimation */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ZgameAnimation_GetFrameTime00
static int tolua_ZgExtension_ZgameAnimation_GetFrameTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ZgameAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ZgameAnimation* self = (ZgameAnimation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetFrameTime'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetFrameTime();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetFrameTime'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetScale of class  ZgameAnimation */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ZgameAnimation_SetScale00
static int tolua_ZgExtension_ZgameAnimation_SetScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ZgameAnimation",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ZgameAnimation* self = (ZgameAnimation*)  tolua_tousertype(tolua_S,1,0);
  float scalex = ((float)  tolua_tonumber(tolua_S,2,0));
  float scaley = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetScale'", NULL);
#endif
  {
   self->SetScale(scalex,scaley);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: IsAnimationEnd of class  ZgameAnimation */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ZgameAnimation_IsAnimationEnd00
static int tolua_ZgExtension_ZgameAnimation_IsAnimationEnd00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ZgameAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ZgameAnimation* self = (ZgameAnimation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'IsAnimationEnd'", NULL);
#endif
  {
   int tolua_ret = (int)  self->IsAnimationEnd();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IsAnimationEnd'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetColor of class  ZgameAnimation */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ZgameAnimation_SetColor00
static int tolua_ZgExtension_ZgameAnimation_SetColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ZgameAnimation",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ZgameAnimation* self = (ZgameAnimation*)  tolua_tousertype(tolua_S,1,0);
  int c = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetColor'", NULL);
#endif
  {
   self->SetColor(c);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetOpacity of class  ZgameAnimation */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ZgameAnimation_SetOpacity00
static int tolua_ZgExtension_ZgameAnimation_SetOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ZgameAnimation",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ZgameAnimation* self = (ZgameAnimation*)  tolua_tousertype(tolua_S,1,0);
  int opacity = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetOpacity'", NULL);
#endif
  {
   self->SetOpacity(opacity);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetFrameColor of class  ZgameAnimation */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ZgameAnimation_SetFrameColor00
static int tolua_ZgExtension_ZgameAnimation_SetFrameColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ZgameAnimation",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ZgameAnimation* self = (ZgameAnimation*)  tolua_tousertype(tolua_S,1,0);
  float r = ((float)  tolua_tonumber(tolua_S,2,0));
  float g = ((float)  tolua_tonumber(tolua_S,3,0));
  float b = ((float)  tolua_tonumber(tolua_S,4,0));
  float a = ((float)  tolua_tonumber(tolua_S,5,0));
  float model = ((float)  tolua_tonumber(tolua_S,6,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetFrameColor'", NULL);
#endif
  {
   self->SetFrameColor(r,g,b,a,model);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetFrameColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CleanFrameColor of class  ZgameAnimation */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ZgameAnimation_CleanFrameColor00
static int tolua_ZgExtension_ZgameAnimation_CleanFrameColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ZgameAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ZgameAnimation* self = (ZgameAnimation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CleanFrameColor'", NULL);
#endif
  {
   self->CleanFrameColor();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CleanFrameColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetFrameOffsetY of class  ZgameAnimation */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ZgameAnimation_GetFrameOffsetY00
static int tolua_ZgExtension_ZgameAnimation_GetFrameOffsetY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ZgameAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ZgameAnimation* self = (ZgameAnimation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetFrameOffsetY'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetFrameOffsetY();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetFrameOffsetY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetFrameOffsetX of class  ZgameAnimation */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ZgameAnimation_GetFrameOffsetX00
static int tolua_ZgExtension_ZgameAnimation_GetFrameOffsetX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ZgameAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ZgameAnimation* self = (ZgameAnimation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetFrameOffsetX'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetFrameOffsetX();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetFrameOffsetX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetCurrentFrameCollisionInfo of class  ZgameAnimation */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ZgameAnimation_GetCurrentFrameCollisionInfo00
static int tolua_ZgExtension_ZgameAnimation_GetCurrentFrameCollisionInfo00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ZgameAnimation",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ZgameAnimation* self = (ZgameAnimation*)  tolua_tousertype(tolua_S,1,0);
  int ActionIndex = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetCurrentFrameCollisionInfo'", NULL);
#endif
  {
   AnimationCollisionArraystruct* tolua_ret = (AnimationCollisionArraystruct*)  self->GetCurrentFrameCollisionInfo(ActionIndex);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"AnimationCollisionArraystruct");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetCurrentFrameCollisionInfo'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AnimationTickManual of class  ZgameAnimation */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ZgameAnimation_AnimationTickManual00
static int tolua_ZgExtension_ZgameAnimation_AnimationTickManual00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ZgameAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ZgameAnimation* self = (ZgameAnimation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AnimationTickManual'", NULL);
#endif
  {
   self->AnimationTickManual();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AnimationTickManual'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetCurrentFrameAttackInfo of class  ZgameAnimation */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ZgameAnimation_GetCurrentFrameAttackInfo00
static int tolua_ZgExtension_ZgameAnimation_GetCurrentFrameAttackInfo00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ZgameAnimation",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ZgameAnimation* self = (ZgameAnimation*)  tolua_tousertype(tolua_S,1,0);
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
  int w = ((int)  tolua_tonumber(tolua_S,4,0));
  int h = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetCurrentFrameAttackInfo'", NULL);
#endif
  {
   self->GetCurrentFrameAttackInfo(&x,&y,&w,&h);
   tolua_pushnumber(tolua_S,(lua_Number)x);
   tolua_pushnumber(tolua_S,(lua_Number)y);
   tolua_pushnumber(tolua_S,(lua_Number)w);
   tolua_pushnumber(tolua_S,(lua_Number)h);
  }
 }
 return 4;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetCurrentFrameAttackInfo'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetCurrentFrameAttackCount of class  ZgameAnimation */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ZgameAnimation_GetCurrentFrameAttackCount00
static int tolua_ZgExtension_ZgameAnimation_GetCurrentFrameAttackCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ZgameAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ZgameAnimation* self = (ZgameAnimation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetCurrentFrameAttackCount'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetCurrentFrameAttackCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetCurrentFrameAttackCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetCurrentFrameDefenceInfo of class  ZgameAnimation */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ZgameAnimation_GetCurrentFrameDefenceInfo00
static int tolua_ZgExtension_ZgameAnimation_GetCurrentFrameDefenceInfo00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ZgameAnimation",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ZgameAnimation* self = (ZgameAnimation*)  tolua_tousertype(tolua_S,1,0);
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
  int w = ((int)  tolua_tonumber(tolua_S,4,0));
  int h = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetCurrentFrameDefenceInfo'", NULL);
#endif
  {
   self->GetCurrentFrameDefenceInfo(&x,&y,&w,&h);
   tolua_pushnumber(tolua_S,(lua_Number)x);
   tolua_pushnumber(tolua_S,(lua_Number)y);
   tolua_pushnumber(tolua_S,(lua_Number)w);
   tolua_pushnumber(tolua_S,(lua_Number)h);
  }
 }
 return 4;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetCurrentFrameDefenceInfo'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetCurrentFrameDefenceCount of class  ZgameAnimation */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ZgameAnimation_GetCurrentFrameDefenceCount00
static int tolua_ZgExtension_ZgameAnimation_GetCurrentFrameDefenceCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ZgameAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ZgameAnimation* self = (ZgameAnimation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetCurrentFrameDefenceCount'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetCurrentFrameDefenceCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetCurrentFrameDefenceCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetCurrentSpecialPoint of class  ZgameAnimation */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ZgameAnimation_GetCurrentSpecialPoint00
static int tolua_ZgExtension_ZgameAnimation_GetCurrentSpecialPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ZgameAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ZgameAnimation* self = (ZgameAnimation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetCurrentSpecialPoint'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetCurrentSpecialPoint();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetCurrentSpecialPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetCurrentSpecialPoint1 of class  ZgameAnimation */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ZgameAnimation_GetCurrentSpecialPoint100
static int tolua_ZgExtension_ZgameAnimation_GetCurrentSpecialPoint100(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ZgameAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ZgameAnimation* self = (ZgameAnimation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetCurrentSpecialPoint1'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetCurrentSpecialPoint1();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetCurrentSpecialPoint1'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetCurrentSpecialPoint2 of class  ZgameAnimation */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ZgameAnimation_GetCurrentSpecialPoint200
static int tolua_ZgExtension_ZgameAnimation_GetCurrentSpecialPoint200(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ZgameAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ZgameAnimation* self = (ZgameAnimation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetCurrentSpecialPoint2'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetCurrentSpecialPoint2();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetCurrentSpecialPoint2'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetCurrentSpecialPointFrame of class  ZgameAnimation */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ZgameAnimation_GetCurrentSpecialPointFrame00
static int tolua_ZgExtension_ZgameAnimation_GetCurrentSpecialPointFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ZgameAnimation",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ZgameAnimation* self = (ZgameAnimation*)  tolua_tousertype(tolua_S,1,0);
  int actionIndex = ((int)  tolua_tonumber(tolua_S,2,0));
  int frameIndex = ((int)  tolua_tonumber(tolua_S,3,0));
  int sp1 = ((int)  tolua_tonumber(tolua_S,4,0));
  int sp2 = ((int)  tolua_tonumber(tolua_S,5,0));
  int sp3 = ((int)  tolua_tonumber(tolua_S,6,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetCurrentSpecialPointFrame'", NULL);
#endif
  {
   self->GetCurrentSpecialPointFrame(actionIndex,frameIndex,&sp1,&sp2,&sp3);
   tolua_pushnumber(tolua_S,(lua_Number)sp1);
   tolua_pushnumber(tolua_S,(lua_Number)sp2);
   tolua_pushnumber(tolua_S,(lua_Number)sp3);
  }
 }
 return 3;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetCurrentSpecialPointFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetX of class  ZgameAnimation */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ZgameAnimation_GetX00
static int tolua_ZgExtension_ZgameAnimation_GetX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ZgameAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ZgameAnimation* self = (ZgameAnimation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetX'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetX();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetY of class  ZgameAnimation */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ZgameAnimation_GetY00
static int tolua_ZgExtension_ZgameAnimation_GetY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ZgameAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ZgameAnimation* self = (ZgameAnimation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetY'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetY();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetX of class  ZgameAnimation */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ZgameAnimation_SetX00
static int tolua_ZgExtension_ZgameAnimation_SetX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ZgameAnimation",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ZgameAnimation* self = (ZgameAnimation*)  tolua_tousertype(tolua_S,1,0);
  int value = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetX'", NULL);
#endif
  {
   self->SetX(value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetY of class  ZgameAnimation */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ZgameAnimation_SetY00
static int tolua_ZgExtension_ZgameAnimation_SetY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ZgameAnimation",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ZgameAnimation* self = (ZgameAnimation*)  tolua_tousertype(tolua_S,1,0);
  int value = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetY'", NULL);
#endif
  {
   self->SetY(value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetMaxAction of class  ZgameAnimation */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ZgameAnimation_GetMaxAction00
static int tolua_ZgExtension_ZgameAnimation_GetMaxAction00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ZgameAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ZgameAnimation* self = (ZgameAnimation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetMaxAction'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetMaxAction();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetMaxAction'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetMaxFrame of class  ZgameAnimation */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ZgameAnimation_GetMaxFrame00
static int tolua_ZgExtension_ZgameAnimation_GetMaxFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ZgameAnimation",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ZgameAnimation* self = (ZgameAnimation*)  tolua_tousertype(tolua_S,1,0);
  int action = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetMaxFrame'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetMaxFrame(action);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetMaxFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetColorAddBlend of class  ZgameAnimation */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ZgameAnimation_SetColorAddBlend00
static int tolua_ZgExtension_ZgameAnimation_SetColorAddBlend00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ZgameAnimation",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ZgameAnimation* self = (ZgameAnimation*)  tolua_tousertype(tolua_S,1,0);
  int flag = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetColorAddBlend'", NULL);
#endif
  {
   self->SetColorAddBlend(flag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetColorAddBlend'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetAutoDraw of class  ZgameAnimation */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ZgameAnimation_SetAutoDraw00
static int tolua_ZgExtension_ZgameAnimation_SetAutoDraw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ZgameAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ZgameAnimation* self = (ZgameAnimation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetAutoDraw'", NULL);
#endif
  {
   self->SetAutoDraw();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetAutoDraw'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetAutoDraw of class  ZgameAnimation */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ZgameAnimation_SetAutoDraw01
static int tolua_ZgExtension_ZgameAnimation_SetAutoDraw01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ZgameAnimation",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  ZgameAnimation* self = (ZgameAnimation*)  tolua_tousertype(tolua_S,1,0);
  int count = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetAutoDraw'", NULL);
#endif
  {
   self->SetAutoDraw(count);
  }
 }
 return 0;
tolua_lerror:
 return tolua_ZgExtension_ZgameAnimation_SetAutoDraw00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSharder of class  Zgame */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_Zgame_setSharder00
static int tolua_ZgExtension_Zgame_setSharder00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Zgame",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLayer* layer = ((CCLayer*)  tolua_tousertype(tolua_S,2,0));
  {
   Zgame::setSharder(layer);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSharder'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: test11 of class  Zgame */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_Zgame_test1100
static int tolua_ZgExtension_Zgame_test1100(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Zgame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Zgame::test11();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'test11'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  GraySprite */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_GraySprite_new00
static int tolua_ZgExtension_GraySprite_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"GraySprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   GraySprite* tolua_ret = (GraySprite*)  Mtolua_new((GraySprite)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"GraySprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  GraySprite */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_GraySprite_new00_local
static int tolua_ZgExtension_GraySprite_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"GraySprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   GraySprite* tolua_ret = (GraySprite*)  Mtolua_new((GraySprite)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"GraySprite");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  GraySprite */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_GraySprite_delete00
static int tolua_ZgExtension_GraySprite_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GraySprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GraySprite* self = (GraySprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithTexture of class  GraySprite */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_GraySprite_initWithTexture00
static int tolua_ZgExtension_GraySprite_initWithTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GraySprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GraySprite* self = (GraySprite*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* texture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
  const CCRect* rect = ((const CCRect*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithTexture'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithTexture(texture,*rect);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: draw of class  GraySprite */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_GraySprite_draw00
static int tolua_ZgExtension_GraySprite_draw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GraySprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GraySprite* self = (GraySprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'draw'", NULL);
#endif
  {
   self->draw();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'draw'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initProgram of class  GraySprite */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_GraySprite_initProgram00
static int tolua_ZgExtension_GraySprite_initProgram00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GraySprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GraySprite* self = (GraySprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initProgram'", NULL);
#endif
  {
   self->initProgram();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initProgram'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: listenBackToForeground of class  GraySprite */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_GraySprite_listenBackToForeground00
static int tolua_ZgExtension_GraySprite_listenBackToForeground00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GraySprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GraySprite* self = (GraySprite*)  tolua_tousertype(tolua_S,1,0);
  CCObject* obj = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'listenBackToForeground'", NULL);
#endif
  {
   self->listenBackToForeground(obj);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'listenBackToForeground'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  GraySprite */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_GraySprite_create00
static int tolua_ZgExtension_GraySprite_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"GraySprite",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* pszFileName = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   GraySprite* tolua_ret = (GraySprite*)  GraySprite::create(pszFileName);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"GraySprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setGray of class  GraySprite */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_GraySprite_setGray00
static int tolua_ZgExtension_GraySprite_setGray00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"GraySprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSprite* spr = ((CCSprite*)  tolua_tousertype(tolua_S,2,0));
  int gray = ((int)  tolua_tonumber(tolua_S,3,0));
  float alpha = ((float)  tolua_tonumber(tolua_S,4,1.0));
  {
   GraySprite::setGray(spr,gray,alpha);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setGray'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  ShaderShow */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ShaderShow_new00
static int tolua_ZgExtension_ShaderShow_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ShaderShow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ShaderShow* tolua_ret = (ShaderShow*)  Mtolua_new((ShaderShow)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"ShaderShow");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  ShaderShow */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ShaderShow_new00_local
static int tolua_ZgExtension_ShaderShow_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ShaderShow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ShaderShow* tolua_ret = (ShaderShow*)  Mtolua_new((ShaderShow)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"ShaderShow");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  ShaderShow */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ShaderShow_delete00
static int tolua_ZgExtension_ShaderShow_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ShaderShow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ShaderShow* self = (ShaderShow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithTexture of class  ShaderShow */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ShaderShow_initWithTexture00
static int tolua_ZgExtension_ShaderShow_initWithTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ShaderShow",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ShaderShow* self = (ShaderShow*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* texture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
  const CCRect* rect = ((const CCRect*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithTexture'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithTexture(texture,*rect);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: draw of class  ShaderShow */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ShaderShow_draw00
static int tolua_ZgExtension_ShaderShow_draw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ShaderShow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ShaderShow* self = (ShaderShow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'draw'", NULL);
#endif
  {
   self->draw();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'draw'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initProgram of class  ShaderShow */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ShaderShow_initProgram00
static int tolua_ZgExtension_ShaderShow_initProgram00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ShaderShow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ShaderShow* self = (ShaderShow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initProgram'", NULL);
#endif
  {
   self->initProgram();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initProgram'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: listenBackToForeground of class  ShaderShow */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ShaderShow_listenBackToForeground00
static int tolua_ZgExtension_ShaderShow_listenBackToForeground00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ShaderShow",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ShaderShow* self = (ShaderShow*)  tolua_tousertype(tolua_S,1,0);
  CCObject* obj = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'listenBackToForeground'", NULL);
#endif
  {
   self->listenBackToForeground(obj);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'listenBackToForeground'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  ShaderShow */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ShaderShow_create00
static int tolua_ZgExtension_ShaderShow_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ShaderShow",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* pszFileName = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* shaderfile = ((const char*)  tolua_tostring(tolua_S,3,0));
  {
   ShaderShow* tolua_ret = (ShaderShow*)  ShaderShow::create(pszFileName,shaderfile);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"ShaderShow");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  ColorOffsetSprite */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ColorOffsetSprite_new00
static int tolua_ZgExtension_ColorOffsetSprite_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ColorOffsetSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ColorOffsetSprite* tolua_ret = (ColorOffsetSprite*)  Mtolua_new((ColorOffsetSprite)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"ColorOffsetSprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  ColorOffsetSprite */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ColorOffsetSprite_new00_local
static int tolua_ZgExtension_ColorOffsetSprite_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ColorOffsetSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ColorOffsetSprite* tolua_ret = (ColorOffsetSprite*)  Mtolua_new((ColorOffsetSprite)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"ColorOffsetSprite");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  ColorOffsetSprite */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ColorOffsetSprite_delete00
static int tolua_ZgExtension_ColorOffsetSprite_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ColorOffsetSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ColorOffsetSprite* self = (ColorOffsetSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithTexture of class  ColorOffsetSprite */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ColorOffsetSprite_initWithTexture00
static int tolua_ZgExtension_ColorOffsetSprite_initWithTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ColorOffsetSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ColorOffsetSprite* self = (ColorOffsetSprite*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* texture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
  const CCRect* rect = ((const CCRect*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithTexture'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithTexture(texture,*rect);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: draw of class  ColorOffsetSprite */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ColorOffsetSprite_draw00
static int tolua_ZgExtension_ColorOffsetSprite_draw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ColorOffsetSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ColorOffsetSprite* self = (ColorOffsetSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'draw'", NULL);
#endif
  {
   self->draw();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'draw'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initProgram of class  ColorOffsetSprite */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ColorOffsetSprite_initProgram00
static int tolua_ZgExtension_ColorOffsetSprite_initProgram00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ColorOffsetSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ColorOffsetSprite* self = (ColorOffsetSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initProgram'", NULL);
#endif
  {
   self->initProgram();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initProgram'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: listenBackToForeground of class  ColorOffsetSprite */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ColorOffsetSprite_listenBackToForeground00
static int tolua_ZgExtension_ColorOffsetSprite_listenBackToForeground00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ColorOffsetSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ColorOffsetSprite* self = (ColorOffsetSprite*)  tolua_tousertype(tolua_S,1,0);
  CCObject* obj = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'listenBackToForeground'", NULL);
#endif
  {
   self->listenBackToForeground(obj);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'listenBackToForeground'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  ColorOffsetSprite */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ColorOffsetSprite_create00
static int tolua_ZgExtension_ColorOffsetSprite_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ColorOffsetSprite",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* pszFileName = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   ColorOffsetSprite* tolua_ret = (ColorOffsetSprite*)  ColorOffsetSprite::create(pszFileName);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"ColorOffsetSprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColorOffset of class  ColorOffsetSprite */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ColorOffsetSprite_setColorOffset00
static int tolua_ZgExtension_ColorOffsetSprite_setColorOffset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ColorOffsetSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSprite* spr = ((CCSprite*)  tolua_tousertype(tolua_S,2,0));
  float r = ((float)  tolua_tonumber(tolua_S,3,0));
  float g = ((float)  tolua_tonumber(tolua_S,4,0));
  float b = ((float)  tolua_tonumber(tolua_S,5,0));
  float a = ((float)  tolua_tonumber(tolua_S,6,0));
  int model = ((int)  tolua_tonumber(tolua_S,7,0));
  {
   ColorOffsetSprite::setColorOffset(spr,r,g,b,a,model);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setColorOffset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  TouchLayer */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_TouchLayer_new00
static int tolua_ZgExtension_TouchLayer_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"TouchLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   TouchLayer* tolua_ret = (TouchLayer*)  Mtolua_new((TouchLayer)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"TouchLayer");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  TouchLayer */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_TouchLayer_new00_local
static int tolua_ZgExtension_TouchLayer_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"TouchLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   TouchLayer* tolua_ret = (TouchLayer*)  Mtolua_new((TouchLayer)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"TouchLayer");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  TouchLayer */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_TouchLayer_delete00
static int tolua_ZgExtension_TouchLayer_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TouchLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TouchLayer* self = (TouchLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  TouchLayer */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_TouchLayer_create00
static int tolua_ZgExtension_TouchLayer_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"TouchLayer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSize size = *((CCSize*)  tolua_tousertype(tolua_S,2,0));
  {
   TouchLayer* tolua_ret = (TouchLayer*)  TouchLayer::create(size);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"TouchLayer");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ccTouchBegan of class  TouchLayer */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_TouchLayer_ccTouchBegan00
static int tolua_ZgExtension_TouchLayer_ccTouchBegan00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TouchLayer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TouchLayer* self = (TouchLayer*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* pEvent = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ccTouchBegan'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->ccTouchBegan(pTouch,pEvent);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccTouchBegan'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ccTouchMoved of class  TouchLayer */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_TouchLayer_ccTouchMoved00
static int tolua_ZgExtension_TouchLayer_ccTouchMoved00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TouchLayer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TouchLayer* self = (TouchLayer*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* pEvent = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ccTouchMoved'", NULL);
#endif
  {
   self->ccTouchMoved(pTouch,pEvent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccTouchMoved'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ccTouchEnded of class  TouchLayer */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_TouchLayer_ccTouchEnded00
static int tolua_ZgExtension_TouchLayer_ccTouchEnded00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TouchLayer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TouchLayer* self = (TouchLayer*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* pEvent = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ccTouchEnded'", NULL);
#endif
  {
   self->ccTouchEnded(pTouch,pEvent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccTouchEnded'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: registerScriptTouchHandler of class  TouchLayer */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_TouchLayer_registerScriptTouchHandler00
static int tolua_ZgExtension_TouchLayer_registerScriptTouchHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TouchLayer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isboolean(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TouchLayer* self = (TouchLayer*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
  bool bIsMultiTouches = ((bool)  tolua_toboolean(tolua_S,3,false));
  int nPriority = ((int)  tolua_tonumber(tolua_S,4,INT_MIN));
  bool bSwallowsTouches = ((bool)  tolua_toboolean(tolua_S,5,false));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'registerScriptTouchHandler'", NULL);
#endif
  {
   self->registerScriptTouchHandler(nHandler,bIsMultiTouches,nPriority,bSwallowsTouches);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'registerScriptTouchHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: unregisterScriptTouchHandler of class  TouchLayer */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_TouchLayer_unregisterScriptTouchHandler00
static int tolua_ZgExtension_TouchLayer_unregisterScriptTouchHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TouchLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TouchLayer* self = (TouchLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'unregisterScriptTouchHandler'", NULL);
#endif
  {
   self->unregisterScriptTouchHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'unregisterScriptTouchHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTouchEnabled of class  TouchLayer */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_TouchLayer_setTouchEnabled00
static int tolua_ZgExtension_TouchLayer_setTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TouchLayer",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TouchLayer* self = (TouchLayer*)  tolua_tousertype(tolua_S,1,0);
  bool value = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTouchEnabled'", NULL);
#endif
  {
   self->setTouchEnabled(value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTouchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  ScrollLabel */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ScrollLabel_new00
static int tolua_ZgExtension_ScrollLabel_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ScrollLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ScrollLabel* tolua_ret = (ScrollLabel*)  Mtolua_new((ScrollLabel)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"ScrollLabel");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  ScrollLabel */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ScrollLabel_new00_local
static int tolua_ZgExtension_ScrollLabel_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ScrollLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ScrollLabel* tolua_ret = (ScrollLabel*)  Mtolua_new((ScrollLabel)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"ScrollLabel");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  ScrollLabel */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ScrollLabel_delete00
static int tolua_ZgExtension_ScrollLabel_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollLabel* self = (ScrollLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  ScrollLabel */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ScrollLabel_create00
static int tolua_ZgExtension_ScrollLabel_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ScrollLabel",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSprite",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"CCSize",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,7,&tolua_err) || !tolua_isusertype(tolua_S,7,"CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSprite* view = ((CCSprite*)  tolua_tousertype(tolua_S,2,0));
  CCSize dimensions = *((CCSize*)  tolua_tousertype(tolua_S,3,0));
  int direction = ((int)  tolua_tonumber(tolua_S,4,0));
  float speed = ((float)  tolua_tonumber(tolua_S,5,0));
  int playTimes = ((int)  tolua_tonumber(tolua_S,6,0));
  CCSize contentSize = *((CCSize*)  tolua_tousertype(tolua_S,7,0));
  {
   ScrollLabel* tolua_ret = (ScrollLabel*)  ScrollLabel::create(view,dimensions,direction,speed,playTimes,contentSize);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"ScrollLabel");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  ScrollLabel */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ScrollLabel_create01
static int tolua_ZgExtension_ScrollLabel_create01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ScrollLabel",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSprite",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"CCSize",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCSprite* view = ((CCSprite*)  tolua_tousertype(tolua_S,2,0));
  CCSize dimensions = *((CCSize*)  tolua_tousertype(tolua_S,3,0));
  int direction = ((int)  tolua_tonumber(tolua_S,4,0));
  float speed = ((float)  tolua_tonumber(tolua_S,5,0));
  int playTimes = ((int)  tolua_tonumber(tolua_S,6,0));
  {
   ScrollLabel* tolua_ret = (ScrollLabel*)  ScrollLabel::create(view,dimensions,direction,speed,playTimes);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"ScrollLabel");
  }
 }
 return 1;
tolua_lerror:
 return tolua_ZgExtension_ScrollLabel_create00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: registerScriptTapHandler of class  ScrollLabel */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ScrollLabel_registerScriptTapHandler00
static int tolua_ZgExtension_ScrollLabel_registerScriptTapHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScrollLabel",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScrollLabel* self = (ScrollLabel*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION handler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'registerScriptTapHandler'", NULL);
#endif
  {
   self->registerScriptTapHandler(handler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'registerScriptTapHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  ImageAsync */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ImageAsync_new00
static int tolua_ZgExtension_ImageAsync_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ImageAsync",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ImageAsync* tolua_ret = (ImageAsync*)  Mtolua_new((ImageAsync)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"ImageAsync");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  ImageAsync */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ImageAsync_new00_local
static int tolua_ZgExtension_ImageAsync_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ImageAsync",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ImageAsync* tolua_ret = (ImageAsync*)  Mtolua_new((ImageAsync)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"ImageAsync");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  ImageAsync */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ImageAsync_delete00
static int tolua_ZgExtension_ImageAsync_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ImageAsync",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ImageAsync* self = (ImageAsync*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  ImageAsync */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ImageAsync_create00
static int tolua_ZgExtension_ImageAsync_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ImageAsync",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ImageAsync* tolua_ret = (ImageAsync*)  ImageAsync::create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"ImageAsync");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: registerScriptTapHandler of class  ImageAsync */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ImageAsync_registerScriptTapHandler00
static int tolua_ZgExtension_ImageAsync_registerScriptTapHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ImageAsync",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ImageAsync* self = (ImageAsync*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION handler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'registerScriptTapHandler'", NULL);
#endif
  {
   self->registerScriptTapHandler(handler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'registerScriptTapHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addImage of class  ImageAsync */
#ifndef TOLUA_DISABLE_tolua_ZgExtension_ImageAsync_addImage00
static int tolua_ZgExtension_ImageAsync_addImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ImageAsync",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ImageAsync* self = (ImageAsync*)  tolua_tousertype(tolua_S,1,0);
  char* url = ((char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addImage'", NULL);
#endif
  {
   self->addImage(url);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_ZgExtension_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_cclass(tolua_S,"ZgameAnimation","ZgameAnimation","CCNode",NULL);
  tolua_beginmodule(tolua_S,"ZgameAnimation");
   tolua_function(tolua_S,"create",tolua_ZgExtension_ZgameAnimation_create00);
   tolua_function(tolua_S,"drawAction",tolua_ZgExtension_ZgameAnimation_drawAction00);
   tolua_function(tolua_S,"LoadAnimation",tolua_ZgExtension_ZgameAnimation_LoadAnimation00);
   tolua_function(tolua_S,"FreeAnimation",tolua_ZgExtension_ZgameAnimation_FreeAnimation00);
   tolua_function(tolua_S,"SetNextAction",tolua_ZgExtension_ZgameAnimation_SetNextAction00);
   tolua_function(tolua_S,"SetAction",tolua_ZgExtension_ZgameAnimation_SetAction00);
   tolua_function(tolua_S,"GetActionIndex",tolua_ZgExtension_ZgameAnimation_GetActionIndex00);
   tolua_function(tolua_S,"SetFrameIndex",tolua_ZgExtension_ZgameAnimation_SetFrameIndex00);
   tolua_function(tolua_S,"SetFrameTime",tolua_ZgExtension_ZgameAnimation_SetFrameTime00);
   tolua_function(tolua_S,"GetFrameIndex",tolua_ZgExtension_ZgameAnimation_GetFrameIndex00);
   tolua_function(tolua_S,"GetFrameTime",tolua_ZgExtension_ZgameAnimation_GetFrameTime00);
   tolua_function(tolua_S,"SetScale",tolua_ZgExtension_ZgameAnimation_SetScale00);
   tolua_function(tolua_S,"IsAnimationEnd",tolua_ZgExtension_ZgameAnimation_IsAnimationEnd00);
   tolua_function(tolua_S,"SetColor",tolua_ZgExtension_ZgameAnimation_SetColor00);
   tolua_function(tolua_S,"SetOpacity",tolua_ZgExtension_ZgameAnimation_SetOpacity00);
   tolua_function(tolua_S,"SetFrameColor",tolua_ZgExtension_ZgameAnimation_SetFrameColor00);
   tolua_function(tolua_S,"CleanFrameColor",tolua_ZgExtension_ZgameAnimation_CleanFrameColor00);
   tolua_function(tolua_S,"GetFrameOffsetY",tolua_ZgExtension_ZgameAnimation_GetFrameOffsetY00);
   tolua_function(tolua_S,"GetFrameOffsetX",tolua_ZgExtension_ZgameAnimation_GetFrameOffsetX00);
   tolua_function(tolua_S,"GetCurrentFrameCollisionInfo",tolua_ZgExtension_ZgameAnimation_GetCurrentFrameCollisionInfo00);
   tolua_function(tolua_S,"AnimationTickManual",tolua_ZgExtension_ZgameAnimation_AnimationTickManual00);
   tolua_function(tolua_S,"GetCurrentFrameAttackInfo",tolua_ZgExtension_ZgameAnimation_GetCurrentFrameAttackInfo00);
   tolua_function(tolua_S,"GetCurrentFrameAttackCount",tolua_ZgExtension_ZgameAnimation_GetCurrentFrameAttackCount00);
   tolua_function(tolua_S,"GetCurrentFrameDefenceInfo",tolua_ZgExtension_ZgameAnimation_GetCurrentFrameDefenceInfo00);
   tolua_function(tolua_S,"GetCurrentFrameDefenceCount",tolua_ZgExtension_ZgameAnimation_GetCurrentFrameDefenceCount00);
   tolua_function(tolua_S,"GetCurrentSpecialPoint",tolua_ZgExtension_ZgameAnimation_GetCurrentSpecialPoint00);
   tolua_function(tolua_S,"GetCurrentSpecialPoint1",tolua_ZgExtension_ZgameAnimation_GetCurrentSpecialPoint100);
   tolua_function(tolua_S,"GetCurrentSpecialPoint2",tolua_ZgExtension_ZgameAnimation_GetCurrentSpecialPoint200);
   tolua_function(tolua_S,"GetCurrentSpecialPointFrame",tolua_ZgExtension_ZgameAnimation_GetCurrentSpecialPointFrame00);
   tolua_function(tolua_S,"GetX",tolua_ZgExtension_ZgameAnimation_GetX00);
   tolua_function(tolua_S,"GetY",tolua_ZgExtension_ZgameAnimation_GetY00);
   tolua_function(tolua_S,"SetX",tolua_ZgExtension_ZgameAnimation_SetX00);
   tolua_function(tolua_S,"SetY",tolua_ZgExtension_ZgameAnimation_SetY00);
   tolua_function(tolua_S,"GetMaxAction",tolua_ZgExtension_ZgameAnimation_GetMaxAction00);
   tolua_function(tolua_S,"GetMaxFrame",tolua_ZgExtension_ZgameAnimation_GetMaxFrame00);
   tolua_function(tolua_S,"SetColorAddBlend",tolua_ZgExtension_ZgameAnimation_SetColorAddBlend00);
   tolua_function(tolua_S,"SetAutoDraw",tolua_ZgExtension_ZgameAnimation_SetAutoDraw00);
   tolua_function(tolua_S,"SetAutoDraw",tolua_ZgExtension_ZgameAnimation_SetAutoDraw01);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"Zgame","Zgame","",NULL);
  tolua_beginmodule(tolua_S,"Zgame");
   tolua_function(tolua_S,"setSharder",tolua_ZgExtension_Zgame_setSharder00);
   tolua_function(tolua_S,"test11",tolua_ZgExtension_Zgame_test1100);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"GraySprite","GraySprite","CCSprite",tolua_collect_GraySprite);
  #else
  tolua_cclass(tolua_S,"GraySprite","GraySprite","CCSprite",NULL);
  #endif
  tolua_beginmodule(tolua_S,"GraySprite");
   tolua_function(tolua_S,"new",tolua_ZgExtension_GraySprite_new00);
   tolua_function(tolua_S,"new_local",tolua_ZgExtension_GraySprite_new00_local);
   tolua_function(tolua_S,".call",tolua_ZgExtension_GraySprite_new00_local);
   tolua_function(tolua_S,"delete",tolua_ZgExtension_GraySprite_delete00);
   tolua_function(tolua_S,"initWithTexture",tolua_ZgExtension_GraySprite_initWithTexture00);
   tolua_function(tolua_S,"draw",tolua_ZgExtension_GraySprite_draw00);
   tolua_function(tolua_S,"initProgram",tolua_ZgExtension_GraySprite_initProgram00);
   tolua_function(tolua_S,"listenBackToForeground",tolua_ZgExtension_GraySprite_listenBackToForeground00);
   tolua_function(tolua_S,"create",tolua_ZgExtension_GraySprite_create00);
   tolua_function(tolua_S,"setGray",tolua_ZgExtension_GraySprite_setGray00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"ShaderShow","ShaderShow","CCSprite",tolua_collect_ShaderShow);
  #else
  tolua_cclass(tolua_S,"ShaderShow","ShaderShow","CCSprite",NULL);
  #endif
  tolua_beginmodule(tolua_S,"ShaderShow");
   tolua_function(tolua_S,"new",tolua_ZgExtension_ShaderShow_new00);
   tolua_function(tolua_S,"new_local",tolua_ZgExtension_ShaderShow_new00_local);
   tolua_function(tolua_S,".call",tolua_ZgExtension_ShaderShow_new00_local);
   tolua_function(tolua_S,"delete",tolua_ZgExtension_ShaderShow_delete00);
   tolua_function(tolua_S,"initWithTexture",tolua_ZgExtension_ShaderShow_initWithTexture00);
   tolua_function(tolua_S,"draw",tolua_ZgExtension_ShaderShow_draw00);
   tolua_function(tolua_S,"initProgram",tolua_ZgExtension_ShaderShow_initProgram00);
   tolua_function(tolua_S,"listenBackToForeground",tolua_ZgExtension_ShaderShow_listenBackToForeground00);
   tolua_function(tolua_S,"create",tolua_ZgExtension_ShaderShow_create00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"ColorOffsetSprite","ColorOffsetSprite","CCSprite",tolua_collect_ColorOffsetSprite);
  #else
  tolua_cclass(tolua_S,"ColorOffsetSprite","ColorOffsetSprite","CCSprite",NULL);
  #endif
  tolua_beginmodule(tolua_S,"ColorOffsetSprite");
   tolua_function(tolua_S,"new",tolua_ZgExtension_ColorOffsetSprite_new00);
   tolua_function(tolua_S,"new_local",tolua_ZgExtension_ColorOffsetSprite_new00_local);
   tolua_function(tolua_S,".call",tolua_ZgExtension_ColorOffsetSprite_new00_local);
   tolua_function(tolua_S,"delete",tolua_ZgExtension_ColorOffsetSprite_delete00);
   tolua_function(tolua_S,"initWithTexture",tolua_ZgExtension_ColorOffsetSprite_initWithTexture00);
   tolua_function(tolua_S,"draw",tolua_ZgExtension_ColorOffsetSprite_draw00);
   tolua_function(tolua_S,"initProgram",tolua_ZgExtension_ColorOffsetSprite_initProgram00);
   tolua_function(tolua_S,"listenBackToForeground",tolua_ZgExtension_ColorOffsetSprite_listenBackToForeground00);
   tolua_function(tolua_S,"create",tolua_ZgExtension_ColorOffsetSprite_create00);
   tolua_function(tolua_S,"setColorOffset",tolua_ZgExtension_ColorOffsetSprite_setColorOffset00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"TouchLayer","TouchLayer","CCLayer",tolua_collect_TouchLayer);
  #else
  tolua_cclass(tolua_S,"TouchLayer","TouchLayer","CCLayer",NULL);
  #endif
  tolua_beginmodule(tolua_S,"TouchLayer");
   tolua_function(tolua_S,"new",tolua_ZgExtension_TouchLayer_new00);
   tolua_function(tolua_S,"new_local",tolua_ZgExtension_TouchLayer_new00_local);
   tolua_function(tolua_S,".call",tolua_ZgExtension_TouchLayer_new00_local);
   tolua_function(tolua_S,"delete",tolua_ZgExtension_TouchLayer_delete00);
   tolua_function(tolua_S,"create",tolua_ZgExtension_TouchLayer_create00);
   tolua_function(tolua_S,"ccTouchBegan",tolua_ZgExtension_TouchLayer_ccTouchBegan00);
   tolua_function(tolua_S,"ccTouchMoved",tolua_ZgExtension_TouchLayer_ccTouchMoved00);
   tolua_function(tolua_S,"ccTouchEnded",tolua_ZgExtension_TouchLayer_ccTouchEnded00);
   tolua_function(tolua_S,"registerScriptTouchHandler",tolua_ZgExtension_TouchLayer_registerScriptTouchHandler00);
   tolua_function(tolua_S,"unregisterScriptTouchHandler",tolua_ZgExtension_TouchLayer_unregisterScriptTouchHandler00);
   tolua_function(tolua_S,"setTouchEnabled",tolua_ZgExtension_TouchLayer_setTouchEnabled00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"ScrollLabel","ScrollLabel","CCSprite",tolua_collect_ScrollLabel);
  #else
  tolua_cclass(tolua_S,"ScrollLabel","ScrollLabel","CCSprite",NULL);
  #endif
  tolua_beginmodule(tolua_S,"ScrollLabel");
   tolua_function(tolua_S,"new",tolua_ZgExtension_ScrollLabel_new00);
   tolua_function(tolua_S,"new_local",tolua_ZgExtension_ScrollLabel_new00_local);
   tolua_function(tolua_S,".call",tolua_ZgExtension_ScrollLabel_new00_local);
   tolua_function(tolua_S,"delete",tolua_ZgExtension_ScrollLabel_delete00);
   tolua_function(tolua_S,"create",tolua_ZgExtension_ScrollLabel_create00);
   tolua_function(tolua_S,"create",tolua_ZgExtension_ScrollLabel_create01);
   tolua_function(tolua_S,"registerScriptTapHandler",tolua_ZgExtension_ScrollLabel_registerScriptTapHandler00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"ImageAsync","ImageAsync","CCLayer",tolua_collect_ImageAsync);
  #else
  tolua_cclass(tolua_S,"ImageAsync","ImageAsync","CCLayer",NULL);
  #endif
  tolua_beginmodule(tolua_S,"ImageAsync");
   tolua_function(tolua_S,"new",tolua_ZgExtension_ImageAsync_new00);
   tolua_function(tolua_S,"new_local",tolua_ZgExtension_ImageAsync_new00_local);
   tolua_function(tolua_S,".call",tolua_ZgExtension_ImageAsync_new00_local);
   tolua_function(tolua_S,"delete",tolua_ZgExtension_ImageAsync_delete00);
   tolua_function(tolua_S,"create",tolua_ZgExtension_ImageAsync_create00);
   tolua_function(tolua_S,"registerScriptTapHandler",tolua_ZgExtension_ImageAsync_registerScriptTapHandler00);
   tolua_function(tolua_S,"addImage",tolua_ZgExtension_ImageAsync_addImage00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_ZgExtension (lua_State* tolua_S) {
 return tolua_ZgExtension_open(tolua_S);
};
#endif

