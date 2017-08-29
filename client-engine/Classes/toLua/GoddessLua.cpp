/*
** Lua binding: GoddessLua
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
TOLUA_API int  tolua_GoddessLua_open (lua_State* tolua_S);

#include "GoddessLua.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_CCPoint (lua_State* tolua_S)
{
 CCPoint* self = (CCPoint*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_ByteArray (lua_State* tolua_S)
{
 ByteArray* self = (ByteArray*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CCControl (lua_State* tolua_S)
{
 CCControl* self = (CCControl*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CCScrollView (lua_State* tolua_S)
{
 CCScrollView* self = (CCScrollView*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CCControlButton (lua_State* tolua_S)
{
 CCControlButton* self = (CCControlButton*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_ByteBuffer (lua_State* tolua_S)
{
 ByteBuffer* self = (ByteBuffer*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CCScrollViewDelegate (lua_State* tolua_S)
{
 CCScrollViewDelegate* self = (CCScrollViewDelegate*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_GoddessSocket (lua_State* tolua_S)
{
 GoddessSocket* self = (GoddessSocket*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_ccColor3B (lua_State* tolua_S)
{
 ccColor3B* self = (ccColor3B*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_MemoryLock (lua_State* tolua_S)
{
 MemoryLock* self = (MemoryLock*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_PlatformInterface (lua_State* tolua_S)
{
 PlatformInterface* self = (PlatformInterface*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CCSize (lua_State* tolua_S)
{
 CCSize* self = (CCSize*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_SoundRecord (lua_State* tolua_S)
{
 SoundRecord* self = (SoundRecord*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"GoddessUtils");
 tolua_usertype(tolua_S,"CCPoint");
 tolua_usertype(tolua_S,"CCTexture2D");
 tolua_usertype(tolua_S,"ByteArray");
 tolua_usertype(tolua_S,"PlatformInterface");
 tolua_usertype(tolua_S,"LuaHttp");
 
 tolua_usertype(tolua_S,"MemoryLock");
 tolua_usertype(tolua_S,"CCLayer");
 tolua_usertype(tolua_S,"ccColor4F");
 tolua_usertype(tolua_S,"CCSize");
 tolua_usertype(tolua_S,"CCScrollView");
 tolua_usertype(tolua_S,"CCScrollViewDelegate");
 tolua_usertype(tolua_S,"CCNode");
 tolua_usertype(tolua_S,"SEL_CCControlHandler");
 tolua_usertype(tolua_S,"cocos2d::CCObject");
 tolua_usertype(tolua_S,"CCSpriteFrame");
 tolua_usertype(tolua_S,"CCString");
 tolua_usertype(tolua_S,"CCEvent");
 tolua_usertype(tolua_S,"CCLabelTTF");
 tolua_usertype(tolua_S,"Notice");
 tolua_usertype(tolua_S,"CCControl");
 tolua_usertype(tolua_S,"CCTouch");
 tolua_usertype(tolua_S,"CCControlButton");
 tolua_usertype(tolua_S,"CCScale9Sprite");
 tolua_usertype(tolua_S,"ByteBuffer");
 tolua_usertype(tolua_S,"GoddessSocket");
 tolua_usertype(tolua_S,"ccColor3B");
 tolua_usertype(tolua_S,"CCRenderTexture");
 tolua_usertype(tolua_S,"CCObject");
 tolua_usertype(tolua_S,"CCLayerRGBA");
 tolua_usertype(tolua_S,"SoundRecord");
}

/* method: new of class  GoddessSocket */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_GoddessSocket_new00
static int tolua_GoddessLua_GoddessSocket_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"GoddessSocket",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  char* host = ((char*)  tolua_tostring(tolua_S,2,0));
  int port = ((int)  tolua_tonumber(tolua_S,3,0));
  {
   GoddessSocket* tolua_ret = (GoddessSocket*)  Mtolua_new((GoddessSocket)(host,port));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"GoddessSocket");
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

/* method: new_local of class  GoddessSocket */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_GoddessSocket_new00_local
static int tolua_GoddessLua_GoddessSocket_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"GoddessSocket",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  char* host = ((char*)  tolua_tostring(tolua_S,2,0));
  int port = ((int)  tolua_tonumber(tolua_S,3,0));
  {
   GoddessSocket* tolua_ret = (GoddessSocket*)  Mtolua_new((GoddessSocket)(host,port));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"GoddessSocket");
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

/* method: delete of class  GoddessSocket */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_GoddessSocket_delete00
static int tolua_GoddessLua_GoddessSocket_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GoddessSocket",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GoddessSocket* self = (GoddessSocket*)  tolua_tousertype(tolua_S,1,0);
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

/* method: sockConnect of class  GoddessSocket */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_GoddessSocket_sockConnect00
static int tolua_GoddessLua_GoddessSocket_sockConnect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GoddessSocket",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GoddessSocket* self = (GoddessSocket*)  tolua_tousertype(tolua_S,1,0);
  int timeOut = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'sockConnect'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->sockConnect(timeOut);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sockConnect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: sockConnectNoBlock of class  GoddessSocket */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_GoddessSocket_sockConnectNoBlock00
static int tolua_GoddessLua_GoddessSocket_sockConnectNoBlock00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GoddessSocket",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GoddessSocket* self = (GoddessSocket*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'sockConnectNoBlock'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->sockConnectNoBlock();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sockConnectNoBlock'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: sockClose of class  GoddessSocket */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_GoddessSocket_sockClose00
static int tolua_GoddessLua_GoddessSocket_sockClose00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GoddessSocket",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GoddessSocket* self = (GoddessSocket*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'sockClose'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->sockClose();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sockClose'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSocketState of class  GoddessSocket */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_GoddessSocket_getSocketState00
static int tolua_GoddessLua_GoddessSocket_getSocketState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GoddessSocket",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GoddessSocket* self = (GoddessSocket*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSocketState'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getSocketState();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSocketState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: sockRecv of class  GoddessSocket */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_GoddessSocket_sockRecv00
static int tolua_GoddessLua_GoddessSocket_sockRecv00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GoddessSocket",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GoddessSocket* self = (GoddessSocket*)  tolua_tousertype(tolua_S,1,0);
  char* inbuff = ((char*)  tolua_tostring(tolua_S,2,0));
  int count = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'sockRecv'", NULL);
#endif
  {
   int tolua_ret = (int)  self->sockRecv(inbuff,count);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sockRecv'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: sockSend of class  GoddessSocket */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_GoddessSocket_sockSend00
static int tolua_GoddessLua_GoddessSocket_sockSend00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GoddessSocket",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GoddessSocket* self = (GoddessSocket*)  tolua_tousertype(tolua_S,1,0);
  char* outbuff = ((char*)  tolua_tostring(tolua_S,2,0));
  int count = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'sockSend'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->sockSend(outbuff,count);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sockSend'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getInstance of class  ByteArray */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_ByteArray_getInstance00
static int tolua_GoddessLua_ByteArray_getInstance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ByteArray",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ByteArray* tolua_ret = (ByteArray*)  ByteArray::getInstance();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"ByteArray");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getInstance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  ByteArray */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_ByteArray_delete00
static int tolua_GoddessLua_ByteArray_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ByteArray",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ByteArray* self = (ByteArray*)  tolua_tousertype(tolua_S,1,0);
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

/* method: getDataFrom of class  ByteArray */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_ByteArray_getDataFrom00
static int tolua_GoddessLua_ByteArray_getDataFrom00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ByteArray",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"GoddessSocket",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ByteArray* self = (ByteArray*)  tolua_tousertype(tolua_S,1,0);
  GoddessSocket* goddessSocket = ((GoddessSocket*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDataFrom'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getDataFrom(goddessSocket);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDataFrom'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: flush of class  ByteArray */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_ByteArray_flush00
static int tolua_GoddessLua_ByteArray_flush00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ByteArray",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"GoddessSocket",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ByteArray* self = (ByteArray*)  tolua_tousertype(tolua_S,1,0);
  GoddessSocket* goddessSocket = ((GoddessSocket*)  tolua_tousertype(tolua_S,2,0));
  int step = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'flush'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->flush(goddessSocket,step);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'flush'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRemaindLength of class  ByteArray */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_ByteArray_getRemaindLength00
static int tolua_GoddessLua_ByteArray_getRemaindLength00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ByteArray",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ByteArray* self = (ByteArray*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRemaindLength'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getRemaindLength();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRemaindLength'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: writeByte of class  ByteArray */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_ByteArray_writeByte00
static int tolua_GoddessLua_ByteArray_writeByte00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ByteArray",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ByteArray* self = (ByteArray*)  tolua_tousertype(tolua_S,1,0);
  unsigned int data = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'writeByte'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->writeByte(data);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'writeByte'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: writeShort of class  ByteArray */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_ByteArray_writeShort00
static int tolua_GoddessLua_ByteArray_writeShort00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ByteArray",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ByteArray* self = (ByteArray*)  tolua_tousertype(tolua_S,1,0);
  unsigned int data = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'writeShort'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->writeShort(data);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'writeShort'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: writeInt of class  ByteArray */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_ByteArray_writeInt00
static int tolua_GoddessLua_ByteArray_writeInt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ByteArray",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ByteArray* self = (ByteArray*)  tolua_tousertype(tolua_S,1,0);
  unsigned int data = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'writeInt'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->writeInt(data);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'writeInt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: writeLong of class  ByteArray */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_ByteArray_writeLong00
static int tolua_GoddessLua_ByteArray_writeLong00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ByteArray",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ByteArray* self = (ByteArray*)  tolua_tousertype(tolua_S,1,0);
  unsigned long long data = ((unsigned long long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'writeLong'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->writeLong(data);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'writeLong'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: writeUTF of class  ByteArray */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_ByteArray_writeUTF00
static int tolua_GoddessLua_ByteArray_writeUTF00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ByteArray",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ByteArray* self = (ByteArray*)  tolua_tousertype(tolua_S,1,0);
  char* data = ((char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'writeUTF'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->writeUTF(data);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'writeUTF'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: writeBytes of class  ByteArray */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_ByteArray_writeBytes00
static int tolua_GoddessLua_ByteArray_writeBytes00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ByteArray",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"ByteBuffer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ByteArray* self = (ByteArray*)  tolua_tousertype(tolua_S,1,0);
  ByteBuffer* byteBuffer = ((ByteBuffer*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'writeBytes'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->writeBytes(byteBuffer);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'writeBytes'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: readByte of class  ByteArray */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_ByteArray_readByte00
static int tolua_GoddessLua_ByteArray_readByte00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ByteArray",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ByteArray* self = (ByteArray*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'readByte'", NULL);
#endif
  {
   unsigned char tolua_ret = (unsigned char)  self->readByte();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'readByte'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: readShort of class  ByteArray */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_ByteArray_readShort00
static int tolua_GoddessLua_ByteArray_readShort00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ByteArray",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ByteArray* self = (ByteArray*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'readShort'", NULL);
#endif
  {
   unsigned short tolua_ret = (unsigned short)  self->readShort();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'readShort'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: readInt of class  ByteArray */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_ByteArray_readInt00
static int tolua_GoddessLua_ByteArray_readInt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ByteArray",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ByteArray* self = (ByteArray*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'readInt'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->readInt();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'readInt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: readLong of class  ByteArray */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_ByteArray_readLong00
static int tolua_GoddessLua_ByteArray_readLong00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ByteArray",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ByteArray* self = (ByteArray*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'readLong'", NULL);
#endif
  {
   unsigned long long tolua_ret = (unsigned long long)  self->readLong();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'readLong'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: readUTF of class  ByteArray */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_ByteArray_readUTF00
static int tolua_GoddessLua_ByteArray_readUTF00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ByteArray",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ByteArray* self = (ByteArray*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'readUTF'", NULL);
#endif
  {
   string tolua_ret = (string)  self->readUTF();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'readUTF'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: millisecond of class  GoddessUtils */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_GoddessUtils_millisecond00
static int tolua_GoddessLua_GoddessUtils_millisecond00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"GoddessUtils",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   double tolua_ret = (double)  GoddessUtils::millisecond();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'millisecond'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isFileExist of class  GoddessUtils */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_GoddessUtils_isFileExist00
static int tolua_GoddessLua_GoddessUtils_isFileExist00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"GoddessUtils",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  char* strFilePath = ((char*)  tolua_tostring(tolua_S,2,0));
  {
   bool tolua_ret = (bool)  GoddessUtils::isFileExist(strFilePath);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isFileExist'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createStrokeLabel of class  GoddessUtils */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_GoddessUtils_createStrokeLabel00
static int tolua_GoddessLua_GoddessUtils_createStrokeLabel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"GoddessUtils",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const ccColor3B",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const ccColor3B* color = ((const ccColor3B*)  tolua_tousertype(tolua_S,2,0));
  float strokeSize = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   CCLabelTTF* tolua_ret = (CCLabelTTF*)  GoddessUtils::createStrokeLabel(*color,strokeSize);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCLabelTTF");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createStrokeLabel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createStroke of class  GoddessUtils */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_GoddessUtils_createStroke00
static int tolua_GoddessLua_GoddessUtils_createStroke00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"GoddessUtils",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCLabelTTF",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"ccColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLabelTTF* label = ((CCLabelTTF*)  tolua_tousertype(tolua_S,2,0));
  float size = ((float)  tolua_tonumber(tolua_S,3,0));
  ccColor3B color = *((ccColor3B*)  tolua_tousertype(tolua_S,4,0));
  {
   CCRenderTexture* tolua_ret = (CCRenderTexture*)  GoddessUtils::createStroke(label,size,color);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCRenderTexture");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createStroke'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createDrawSolidPoly of class  GoddessUtils */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_GoddessUtils_createDrawSolidPoly00
static int tolua_GoddessLua_GoddessUtils_createDrawSolidPoly00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"GoddessUtils",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const CCPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const CCPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"const CCPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,6,&tolua_err) || !tolua_isusertype(tolua_S,6,"const CCPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,7,&tolua_err) || !tolua_isusertype(tolua_S,7,"ccColor4F",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCPoint point1 = *((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
  const CCPoint point2 = *((const CCPoint*)  tolua_tousertype(tolua_S,3,0));
  const CCPoint point3 = *((const CCPoint*)  tolua_tousertype(tolua_S,4,0));
  const CCPoint point4 = *((const CCPoint*)  tolua_tousertype(tolua_S,5,0));
  const CCPoint point5 = *((const CCPoint*)  tolua_tousertype(tolua_S,6,0));
  ccColor4F color = *((ccColor4F*)  tolua_tousertype(tolua_S,7,0));
  {
   CCTexture2D* tolua_ret = (CCTexture2D*)  GoddessUtils::createDrawSolidPoly(point1,point2,point3,point4,point5,color);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCTexture2D");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createDrawSolidPoly'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: stopAnimation of class  GoddessUtils */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_GoddessUtils_stopAnimation00
static int tolua_GoddessLua_GoddessUtils_stopAnimation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"GoddessUtils",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   GoddessUtils::stopAnimation();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stopAnimation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: startAnimation of class  GoddessUtils */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_GoddessUtils_startAnimation00
static int tolua_GoddessLua_GoddessUtils_startAnimation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"GoddessUtils",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   GoddessUtils::startAnimation();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'startAnimation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: sendHttpGetData of class  LuaHttp */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_LuaHttp_sendHttpGetData00
static int tolua_GoddessLua_LuaHttp_sendHttpGetData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LuaHttp",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !toluafix_isfunction(tolua_S,4,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* url = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* data = ((const char*)  tolua_tostring(tolua_S,3,0));
  LUA_FUNCTION handler = (  toluafix_ref_function(tolua_S,4,0));
  {
   LuaHttp::sendHttpGetData(url,data,handler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sendHttpGetData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: sendHttpPostData of class  LuaHttp */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_LuaHttp_sendHttpPostData00
static int tolua_GoddessLua_LuaHttp_sendHttpPostData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LuaHttp",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !toluafix_isfunction(tolua_S,4,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* url = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* data = ((const char*)  tolua_tostring(tolua_S,3,0));
  LUA_FUNCTION handler = (  toluafix_ref_function(tolua_S,4,0));
  {
   LuaHttp::sendHttpPostData(url,data,handler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sendHttpPostData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEnabled of class  CCControl */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControl_setEnabled00
static int tolua_GoddessLua_CCControl_setEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControl",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControl* self = (CCControl*)  tolua_tousertype(tolua_S,1,0);
  bool bEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEnabled'", NULL);
#endif
  {
   self->setEnabled(bEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isEnabled of class  CCControl */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControl_isEnabled00
static int tolua_GoddessLua_CCControl_isEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControl",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControl* self = (CCControl*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSelected of class  CCControl */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControl_setSelected00
static int tolua_GoddessLua_CCControl_setSelected00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControl",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControl* self = (CCControl*)  tolua_tousertype(tolua_S,1,0);
  bool bSelected = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSelected'", NULL);
#endif
  {
   self->setSelected(bSelected);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSelected'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isSelected of class  CCControl */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControl_isSelected00
static int tolua_GoddessLua_CCControl_isSelected00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControl",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControl* self = (CCControl*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isSelected'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isSelected();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isSelected'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setHighlighted of class  CCControl */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControl_setHighlighted00
static int tolua_GoddessLua_CCControl_setHighlighted00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControl",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControl* self = (CCControl*)  tolua_tousertype(tolua_S,1,0);
  bool bHighlighted = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setHighlighted'", NULL);
#endif
  {
   self->setHighlighted(bHighlighted);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setHighlighted'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isHighlighted of class  CCControl */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControl_isHighlighted00
static int tolua_GoddessLua_CCControl_isHighlighted00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControl",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControl* self = (CCControl*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isHighlighted'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isHighlighted();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isHighlighted'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hasVisibleParents of class  CCControl */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControl_hasVisibleParents00
static int tolua_GoddessLua_CCControl_hasVisibleParents00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControl",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControl* self = (CCControl*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hasVisibleParents'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->hasVisibleParents();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hasVisibleParents'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: needsLayout of class  CCControl */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControl_needsLayout00
static int tolua_GoddessLua_CCControl_needsLayout00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControl",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControl* self = (CCControl*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'needsLayout'", NULL);
#endif
  {
   self->needsLayout();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'needsLayout'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isOpacityModifyRGB of class  CCControl */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControl_isOpacityModifyRGB00
static int tolua_GoddessLua_CCControl_isOpacityModifyRGB00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControl",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControl* self = (CCControl*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isOpacityModifyRGB'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isOpacityModifyRGB();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isOpacityModifyRGB'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOpacityModifyRGB of class  CCControl */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControl_setOpacityModifyRGB00
static int tolua_GoddessLua_CCControl_setOpacityModifyRGB00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControl",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControl* self = (CCControl*)  tolua_tousertype(tolua_S,1,0);
  bool bOpacityModifyRGB = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOpacityModifyRGB'", NULL);
#endif
  {
   self->setOpacityModifyRGB(bOpacityModifyRGB);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOpacityModifyRGB'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CCControl */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControl_new00
static int tolua_GoddessLua_CCControl_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCControl",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCControl* tolua_ret = (CCControl*)  Mtolua_new((CCControl)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCControl");
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

/* method: new_local of class  CCControl */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControl_new00_local
static int tolua_GoddessLua_CCControl_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCControl",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCControl* tolua_ret = (CCControl*)  Mtolua_new((CCControl)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCControl");
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

/* method: init of class  CCControl */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControl_init00
static int tolua_GoddessLua_CCControl_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControl",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControl* self = (CCControl*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CCControl */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControl_delete00
static int tolua_GoddessLua_CCControl_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControl",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControl* self = (CCControl*)  tolua_tousertype(tolua_S,1,0);
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

/* method: onEnter of class  CCControl */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControl_onEnter00
static int tolua_GoddessLua_CCControl_onEnter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControl",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControl* self = (CCControl*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onEnter'", NULL);
#endif
  {
   self->onEnter();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onEnter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onExit of class  CCControl */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControl_onExit00
static int tolua_GoddessLua_CCControl_onExit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControl",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControl* self = (CCControl*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onExit'", NULL);
#endif
  {
   self->onExit();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onExit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: registerWithTouchDispatcher of class  CCControl */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControl_registerWithTouchDispatcher00
static int tolua_GoddessLua_CCControl_registerWithTouchDispatcher00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControl",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControl* self = (CCControl*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'registerWithTouchDispatcher'", NULL);
#endif
  {
   self->registerWithTouchDispatcher();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'registerWithTouchDispatcher'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: sendActionsForControlEvents of class  CCControl */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControl_sendActionsForControlEvents00
static int tolua_GoddessLua_CCControl_sendActionsForControlEvents00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControl",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControl* self = (CCControl*)  tolua_tousertype(tolua_S,1,0);
  unsigned int controlEvents = (( unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'sendActionsForControlEvents'", NULL);
#endif
  {
   self->sendActionsForControlEvents(controlEvents);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sendActionsForControlEvents'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addTargetWithActionForControlEvents of class  CCControl */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControl_addTargetWithActionForControlEvents00
static int tolua_GoddessLua_CCControl_addTargetWithActionForControlEvents00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControl",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SEL_CCControlHandler",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControl* self = (CCControl*)  tolua_tousertype(tolua_S,1,0);
  CCObject* target = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
  SEL_CCControlHandler action = *((SEL_CCControlHandler*)  tolua_tousertype(tolua_S,3,0));
  unsigned int controlEvents = (( unsigned int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addTargetWithActionForControlEvents'", NULL);
#endif
  {
   self->addTargetWithActionForControlEvents(target,action,controlEvents);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addTargetWithActionForControlEvents'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeTargetWithActionForControlEvents of class  CCControl */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControl_removeTargetWithActionForControlEvents00
static int tolua_GoddessLua_CCControl_removeTargetWithActionForControlEvents00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControl",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SEL_CCControlHandler",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControl* self = (CCControl*)  tolua_tousertype(tolua_S,1,0);
  CCObject* target = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
  SEL_CCControlHandler action = *((SEL_CCControlHandler*)  tolua_tousertype(tolua_S,3,0));
  unsigned int controlEvents = (( unsigned int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeTargetWithActionForControlEvents'", NULL);
#endif
  {
   self->removeTargetWithActionForControlEvents(target,action,controlEvents);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeTargetWithActionForControlEvents'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTouchLocation of class  CCControl */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControl_getTouchLocation00
static int tolua_GoddessLua_CCControl_getTouchLocation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControl",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControl* self = (CCControl*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* touch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTouchLocation'", NULL);
#endif
  {
   CCPoint tolua_ret = (CCPoint)  self->getTouchLocation(touch);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTouchLocation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isTouchInside of class  CCControl */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControl_isTouchInside00
static int tolua_GoddessLua_CCControl_isTouchInside00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControl",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControl* self = (CCControl*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* touch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTouchInside'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isTouchInside(touch);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTouchInside'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControlButton_new00
static int tolua_GoddessLua_CCControlButton_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCControlButton* tolua_ret = (CCControlButton*)  Mtolua_new((CCControlButton)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCControlButton");
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

/* method: new_local of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControlButton_new00_local
static int tolua_GoddessLua_CCControlButton_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCControlButton* tolua_ret = (CCControlButton*)  Mtolua_new((CCControlButton)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCControlButton");
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

/* method: delete of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControlButton_delete00
static int tolua_GoddessLua_CCControlButton_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
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

/* method: needsLayout of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControlButton_needsLayout00
static int tolua_GoddessLua_CCControlButton_needsLayout00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'needsLayout'", NULL);
#endif
  {
   self->needsLayout();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'needsLayout'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEnabled of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControlButton_setEnabled00
static int tolua_GoddessLua_CCControlButton_setEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEnabled'", NULL);
#endif
  {
   self->setEnabled(enabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSelected of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControlButton_setSelected00
static int tolua_GoddessLua_CCControlButton_setSelected00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSelected'", NULL);
#endif
  {
   self->setSelected(enabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSelected'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setHighlighted of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControlButton_setHighlighted00
static int tolua_GoddessLua_CCControlButton_setHighlighted00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setHighlighted'", NULL);
#endif
  {
   self->setHighlighted(enabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setHighlighted'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isPushed of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControlButton_isPushed00
static int tolua_GoddessLua_CCControlButton_isPushed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isPushed'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isPushed();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isPushed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMargins of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControlButton_setMargins00
static int tolua_GoddessLua_CCControlButton_setMargins00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
  int marginH = ((int)  tolua_tonumber(tolua_S,2,0));
  int marginV = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMargins'", NULL);
#endif
  {
   self->setMargins(marginH,marginV);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMargins'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControlButton_init00
static int tolua_GoddessLua_CCControlButton_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithLabelAndBackgroundSprite of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControlButton_initWithLabelAndBackgroundSprite00
static int tolua_GoddessLua_CCControlButton_initWithLabelAndBackgroundSprite00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCScale9Sprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
  CCNode* label = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
  CCScale9Sprite* backgroundSprite = ((CCScale9Sprite*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithLabelAndBackgroundSprite'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithLabelAndBackgroundSprite(label,backgroundSprite);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithLabelAndBackgroundSprite'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControlButton_create00
static int tolua_GoddessLua_CCControlButton_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCScale9Sprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* label = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
  CCScale9Sprite* backgroundSprite = ((CCScale9Sprite*)  tolua_tousertype(tolua_S,3,0));
  {
   CCControlButton* tolua_ret = (CCControlButton*)  CCControlButton::create(label,backgroundSprite);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCControlButton");
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

/* method: initWithTitleAndFontNameAndFontSize of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControlButton_initWithTitleAndFontNameAndFontSize00
static int tolua_GoddessLua_CCControlButton_initWithTitleAndFontNameAndFontSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
  std::string title = ((std::string)  tolua_tocppstring(tolua_S,2,0));
  const char* fontName = ((const char*)  tolua_tostring(tolua_S,3,0));
  float fontSize = ((float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithTitleAndFontNameAndFontSize'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithTitleAndFontNameAndFontSize(title,fontName,fontSize);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithTitleAndFontNameAndFontSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControlButton_create01
static int tolua_GoddessLua_CCControlButton_create01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  std::string title = ((std::string)  tolua_tocppstring(tolua_S,2,0));
  const char* fontName = ((const char*)  tolua_tostring(tolua_S,3,0));
  float fontSize = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   CCControlButton* tolua_ret = (CCControlButton*)  CCControlButton::create(title,fontName,fontSize);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCControlButton");
  }
 }
 return 1;
tolua_lerror:
 return tolua_GoddessLua_CCControlButton_create00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithBackgroundSprite of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControlButton_initWithBackgroundSprite00
static int tolua_GoddessLua_CCControlButton_initWithBackgroundSprite00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCScale9Sprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
  CCScale9Sprite* sprite = ((CCScale9Sprite*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithBackgroundSprite'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithBackgroundSprite(sprite);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithBackgroundSprite'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControlButton_create02
static int tolua_GoddessLua_CCControlButton_create02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCScale9Sprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCScale9Sprite* sprite = ((CCScale9Sprite*)  tolua_tousertype(tolua_S,2,0));
  {
   CCControlButton* tolua_ret = (CCControlButton*)  CCControlButton::create(sprite);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCControlButton");
  }
 }
 return 1;
tolua_lerror:
 return tolua_GoddessLua_CCControlButton_create01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: ccTouchBegan of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControlButton_ccTouchBegan00
static int tolua_GoddessLua_CCControlButton_ccTouchBegan00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
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

/* method: ccTouchMoved of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControlButton_ccTouchMoved00
static int tolua_GoddessLua_CCControlButton_ccTouchMoved00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
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

/* method: ccTouchEnded of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControlButton_ccTouchEnded00
static int tolua_GoddessLua_CCControlButton_ccTouchEnded00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
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

/* method: ccTouchCancelled of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControlButton_ccTouchCancelled00
static int tolua_GoddessLua_CCControlButton_ccTouchCancelled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* pEvent = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ccTouchCancelled'", NULL);
#endif
  {
   self->ccTouchCancelled(pTouch,pEvent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccTouchCancelled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTitleForState of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControlButton_getTitleForState00
static int tolua_GoddessLua_CCControlButton_getTitleForState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
  unsigned int state = (( unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTitleForState'", NULL);
#endif
  {
   CCString* tolua_ret = (CCString*)  self->getTitleForState(state);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCString");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTitleForState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTitleForState of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControlButton_setTitleForState00
static int tolua_GoddessLua_CCControlButton_setTitleForState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCString",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
  CCString* title = ((CCString*)  tolua_tousertype(tolua_S,2,0));
  unsigned int state = (( unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTitleForState'", NULL);
#endif
  {
   self->setTitleForState(title,state);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTitleForState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTitleColorForState of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControlButton_getTitleColorForState00
static int tolua_GoddessLua_CCControlButton_getTitleColorForState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
  unsigned int state = (( unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTitleColorForState'", NULL);
#endif
  {
   const ccColor3B tolua_ret = (const ccColor3B)  self->getTitleColorForState(state);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((ccColor3B)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"const ccColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(const ccColor3B));
     tolua_pushusertype(tolua_S,tolua_obj,"const ccColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTitleColorForState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTitleColorForState of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControlButton_setTitleColorForState00
static int tolua_GoddessLua_CCControlButton_setTitleColorForState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccColor3B",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
  ccColor3B color = *((ccColor3B*)  tolua_tousertype(tolua_S,2,0));
  unsigned int state = (( unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTitleColorForState'", NULL);
#endif
  {
   self->setTitleColorForState(color,state);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTitleColorForState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTitleLabelForState of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControlButton_getTitleLabelForState00
static int tolua_GoddessLua_CCControlButton_getTitleLabelForState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
  unsigned int state = (( unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTitleLabelForState'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getTitleLabelForState(state);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTitleLabelForState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTitleLabelForState of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControlButton_setTitleLabelForState00
static int tolua_GoddessLua_CCControlButton_setTitleLabelForState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
  CCNode* label = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
  unsigned int state = (( unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTitleLabelForState'", NULL);
#endif
  {
   self->setTitleLabelForState(label,state);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTitleLabelForState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTitleTTFForState of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControlButton_setTitleTTFForState00
static int tolua_GoddessLua_CCControlButton_setTitleTTFForState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
  const char* fntFile = ((const char*)  tolua_tostring(tolua_S,2,0));
  unsigned int state = (( unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTitleTTFForState'", NULL);
#endif
  {
   self->setTitleTTFForState(fntFile,state);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTitleTTFForState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTitleTTFForState of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControlButton_getTitleTTFForState00
static int tolua_GoddessLua_CCControlButton_getTitleTTFForState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
  unsigned int state = (( unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTitleTTFForState'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getTitleTTFForState(state);
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTitleTTFForState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTitleTTFSizeForState of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControlButton_setTitleTTFSizeForState00
static int tolua_GoddessLua_CCControlButton_setTitleTTFSizeForState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
  float size = ((float)  tolua_tonumber(tolua_S,2,0));
  unsigned int state = (( unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTitleTTFSizeForState'", NULL);
#endif
  {
   self->setTitleTTFSizeForState(size,state);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTitleTTFSizeForState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTitleTTFSizeForState of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControlButton_getTitleTTFSizeForState00
static int tolua_GoddessLua_CCControlButton_getTitleTTFSizeForState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
  unsigned int state = (( unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTitleTTFSizeForState'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getTitleTTFSizeForState(state);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTitleTTFSizeForState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTitleBMFontForState of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControlButton_setTitleBMFontForState00
static int tolua_GoddessLua_CCControlButton_setTitleBMFontForState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
  const char* fntFile = ((const char*)  tolua_tostring(tolua_S,2,0));
  unsigned int state = (( unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTitleBMFontForState'", NULL);
#endif
  {
   self->setTitleBMFontForState(fntFile,state);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTitleBMFontForState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTitleBMFontForState of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControlButton_getTitleBMFontForState00
static int tolua_GoddessLua_CCControlButton_getTitleBMFontForState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
  unsigned int state = (( unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTitleBMFontForState'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getTitleBMFontForState(state);
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTitleBMFontForState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBackgroundSpriteForState of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControlButton_getBackgroundSpriteForState00
static int tolua_GoddessLua_CCControlButton_getBackgroundSpriteForState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
  unsigned int state = (( unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBackgroundSpriteForState'", NULL);
#endif
  {
   CCScale9Sprite* tolua_ret = (CCScale9Sprite*)  self->getBackgroundSpriteForState(state);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCScale9Sprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBackgroundSpriteForState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackgroundSpriteForState of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControlButton_setBackgroundSpriteForState00
static int tolua_GoddessLua_CCControlButton_setBackgroundSpriteForState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCScale9Sprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
  CCScale9Sprite* sprite = ((CCScale9Sprite*)  tolua_tousertype(tolua_S,2,0));
  unsigned int state = (( unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackgroundSpriteForState'", NULL);
#endif
  {
   self->setBackgroundSpriteForState(sprite,state);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackgroundSpriteForState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackgroundSpriteFrameForState of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControlButton_setBackgroundSpriteFrameForState00
static int tolua_GoddessLua_CCControlButton_setBackgroundSpriteFrameForState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
  CCSpriteFrame* spriteFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
  unsigned int state = (( unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackgroundSpriteFrameForState'", NULL);
#endif
  {
   self->setBackgroundSpriteFrameForState(spriteFrame,state);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackgroundSpriteFrameForState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControlButton_create03
static int tolua_GoddessLua_CCControlButton_create03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  {
   CCControlButton* tolua_ret = (CCControlButton*)  CCControlButton::create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCControlButton");
  }
 }
 return 1;
tolua_lerror:
 return tolua_GoddessLua_CCControlButton_create02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setVisible of class  CCControlButton */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCControlButton_setVisible00
static int tolua_GoddessLua_CCControlButton_setVisible00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCControlButton",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCControlButton* self = (CCControlButton*)  tolua_tousertype(tolua_S,1,0);
  bool visible = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVisible'", NULL);
#endif
  {
   self->setVisible(visible);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setVisible'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  ByteBuffer */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_ByteBuffer_new00
static int tolua_GoddessLua_ByteBuffer_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ByteBuffer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ByteBuffer* tolua_ret = (ByteBuffer*)  Mtolua_new((ByteBuffer)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"ByteBuffer");
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

/* method: new_local of class  ByteBuffer */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_ByteBuffer_new00_local
static int tolua_GoddessLua_ByteBuffer_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ByteBuffer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ByteBuffer* tolua_ret = (ByteBuffer*)  Mtolua_new((ByteBuffer)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"ByteBuffer");
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

/* method: delete of class  ByteBuffer */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_ByteBuffer_delete00
static int tolua_GoddessLua_ByteBuffer_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ByteBuffer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ByteBuffer* self = (ByteBuffer*)  tolua_tousertype(tolua_S,1,0);
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

/* method: writeByte of class  ByteBuffer */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_ByteBuffer_writeByte00
static int tolua_GoddessLua_ByteBuffer_writeByte00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ByteBuffer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ByteBuffer* self = (ByteBuffer*)  tolua_tousertype(tolua_S,1,0);
  unsigned int data = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'writeByte'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->writeByte(data);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'writeByte'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: writeShort of class  ByteBuffer */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_ByteBuffer_writeShort00
static int tolua_GoddessLua_ByteBuffer_writeShort00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ByteBuffer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ByteBuffer* self = (ByteBuffer*)  tolua_tousertype(tolua_S,1,0);
  unsigned int data = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'writeShort'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->writeShort(data);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'writeShort'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: writeInt of class  ByteBuffer */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_ByteBuffer_writeInt00
static int tolua_GoddessLua_ByteBuffer_writeInt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ByteBuffer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ByteBuffer* self = (ByteBuffer*)  tolua_tousertype(tolua_S,1,0);
  unsigned int data = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'writeInt'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->writeInt(data);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'writeInt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: writeLong of class  ByteBuffer */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_ByteBuffer_writeLong00
static int tolua_GoddessLua_ByteBuffer_writeLong00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ByteBuffer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ByteBuffer* self = (ByteBuffer*)  tolua_tousertype(tolua_S,1,0);
  unsigned long long data = ((unsigned long long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'writeLong'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->writeLong(data);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'writeLong'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: writeUTF of class  ByteBuffer */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_ByteBuffer_writeUTF00
static int tolua_GoddessLua_ByteBuffer_writeUTF00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ByteBuffer",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ByteBuffer* self = (ByteBuffer*)  tolua_tousertype(tolua_S,1,0);
  char* data = ((char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'writeUTF'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->writeUTF(data);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'writeUTF'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: writeBytes of class  ByteBuffer */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_ByteBuffer_writeBytes00
static int tolua_GoddessLua_ByteBuffer_writeBytes00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ByteBuffer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"ByteBuffer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ByteBuffer* self = (ByteBuffer*)  tolua_tousertype(tolua_S,1,0);
  ByteBuffer* byteBuffer = ((ByteBuffer*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'writeBytes'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->writeBytes(byteBuffer);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'writeBytes'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: pos of class  ByteBuffer */
#ifndef TOLUA_DISABLE_tolua_get_ByteBuffer_pos
static int tolua_get_ByteBuffer_pos(lua_State* tolua_S)
{
  ByteBuffer* self = (ByteBuffer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'pos'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->pos);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: pos of class  ByteBuffer */
#ifndef TOLUA_DISABLE_tolua_set_ByteBuffer_pos
static int tolua_set_ByteBuffer_pos(lua_State* tolua_S)
{
  ByteBuffer* self = (ByteBuffer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'pos'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->pos = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CCScrollViewDelegate */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollViewDelegate_delete00
static int tolua_GoddessLua_CCScrollViewDelegate_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollViewDelegate",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollViewDelegate* self = (CCScrollViewDelegate*)  tolua_tousertype(tolua_S,1,0);
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

/* method: scrollViewDidScroll of class  CCScrollViewDelegate */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollViewDelegate_scrollViewDidScroll00
static int tolua_GoddessLua_CCScrollViewDelegate_scrollViewDidScroll00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollViewDelegate",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollViewDelegate* self = (CCScrollViewDelegate*)  tolua_tousertype(tolua_S,1,0);
  CCScrollView* view = ((CCScrollView*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'scrollViewDidScroll'", NULL);
#endif
  {
   self->scrollViewDidScroll(view);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'scrollViewDidScroll'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: scrollViewDidZoom of class  CCScrollViewDelegate */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollViewDelegate_scrollViewDidZoom00
static int tolua_GoddessLua_CCScrollViewDelegate_scrollViewDidZoom00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollViewDelegate",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollViewDelegate* self = (CCScrollViewDelegate*)  tolua_tousertype(tolua_S,1,0);
  CCScrollView* view = ((CCScrollView*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'scrollViewDidZoom'", NULL);
#endif
  {
   self->scrollViewDidZoom(view);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'scrollViewDidZoom'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_new00
static int tolua_GoddessLua_CCScrollView_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCScrollView* tolua_ret = (CCScrollView*)  Mtolua_new((CCScrollView)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCScrollView");
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

/* method: new_local of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_new00_local
static int tolua_GoddessLua_CCScrollView_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCScrollView* tolua_ret = (CCScrollView*)  Mtolua_new((CCScrollView)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCScrollView");
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

/* method: delete of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_delete00
static int tolua_GoddessLua_CCScrollView_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
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

/* method: init of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_init00
static int tolua_GoddessLua_CCScrollView_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: registerWithTouchDispatcher of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_registerWithTouchDispatcher00
static int tolua_GoddessLua_CCScrollView_registerWithTouchDispatcher00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'registerWithTouchDispatcher'", NULL);
#endif
  {
   self->registerWithTouchDispatcher();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'registerWithTouchDispatcher'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_create00
static int tolua_GoddessLua_CCScrollView_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCSize",0,&tolua_err)) ||
     !tolua_isusertype(tolua_S,3,"CCNode",1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSize size = *((CCSize*)  tolua_tousertype(tolua_S,2,0));
  CCNode* container = ((CCNode*)  tolua_tousertype(tolua_S,3,NULL));
  {
   CCScrollView* tolua_ret = (CCScrollView*)  CCScrollView::create(size,container);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCScrollView");
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

/* method: create of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_create01
static int tolua_GoddessLua_CCScrollView_create01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  {
   CCScrollView* tolua_ret = (CCScrollView*)  CCScrollView::create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCScrollView");
  }
 }
 return 1;
tolua_lerror:
 return tolua_GoddessLua_CCScrollView_create00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithViewSize of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_initWithViewSize00
static int tolua_GoddessLua_CCScrollView_initWithViewSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCSize",0,&tolua_err)) ||
     !tolua_isusertype(tolua_S,3,"CCNode",1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCSize size = *((CCSize*)  tolua_tousertype(tolua_S,2,0));
  CCNode* container = ((CCNode*)  tolua_tousertype(tolua_S,3,NULL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithViewSize'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithViewSize(size,container);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithViewSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentOffset of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_setContentOffset00
static int tolua_GoddessLua_CCScrollView_setContentOffset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCPoint",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCPoint offset = *((CCPoint*)  tolua_tousertype(tolua_S,2,0));
  bool animated = ((bool)  tolua_toboolean(tolua_S,3,false));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentOffset'", NULL);
#endif
  {
   self->setContentOffset(offset,animated);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentOffset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getContentOffset of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_getContentOffset00
static int tolua_GoddessLua_CCScrollView_getContentOffset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContentOffset'", NULL);
#endif
  {
   CCPoint tolua_ret = (CCPoint)  self->getContentOffset();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContentOffset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentOffsetInDuration of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_setContentOffsetInDuration00
static int tolua_GoddessLua_CCScrollView_setContentOffsetInDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCPoint",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCPoint offset = *((CCPoint*)  tolua_tousertype(tolua_S,2,0));
  float dt = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentOffsetInDuration'", NULL);
#endif
  {
   self->setContentOffsetInDuration(offset,dt);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentOffsetInDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setZoomScale of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_setZoomScale00
static int tolua_GoddessLua_CCScrollView_setZoomScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  float s = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setZoomScale'", NULL);
#endif
  {
   self->setZoomScale(s);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setZoomScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setZoomScale of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_setZoomScale01
static int tolua_GoddessLua_CCScrollView_setZoomScale01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  float s = ((float)  tolua_tonumber(tolua_S,2,0));
  bool animated = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setZoomScale'", NULL);
#endif
  {
   self->setZoomScale(s,animated);
  }
 }
 return 0;
tolua_lerror:
 return tolua_GoddessLua_CCScrollView_setZoomScale00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getZoomScale of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_getZoomScale00
static int tolua_GoddessLua_CCScrollView_getZoomScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getZoomScale'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getZoomScale();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getZoomScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setZoomScaleInDuration of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_setZoomScaleInDuration00
static int tolua_GoddessLua_CCScrollView_setZoomScaleInDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  float s = ((float)  tolua_tonumber(tolua_S,2,0));
  float dt = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setZoomScaleInDuration'", NULL);
#endif
  {
   self->setZoomScaleInDuration(s,dt);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setZoomScaleInDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: minContainerOffset of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_minContainerOffset00
static int tolua_GoddessLua_CCScrollView_minContainerOffset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'minContainerOffset'", NULL);
#endif
  {
   CCPoint tolua_ret = (CCPoint)  self->minContainerOffset();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'minContainerOffset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: maxContainerOffset of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_maxContainerOffset00
static int tolua_GoddessLua_CCScrollView_maxContainerOffset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'maxContainerOffset'", NULL);
#endif
  {
   CCPoint tolua_ret = (CCPoint)  self->maxContainerOffset();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'maxContainerOffset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isNodeVisible of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_isNodeVisible00
static int tolua_GoddessLua_CCScrollView_isNodeVisible00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCNode* node = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isNodeVisible'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isNodeVisible(node);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isNodeVisible'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: pause of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_pause00
static int tolua_GoddessLua_CCScrollView_pause00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCObject* sender = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'pause'", NULL);
#endif
  {
   self->pause(sender);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pause'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: resume of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_resume00
static int tolua_GoddessLua_CCScrollView_resume00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCObject* sender = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resume'", NULL);
#endif
  {
   self->resume(sender);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resume'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isDragging of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_isDragging00
static int tolua_GoddessLua_CCScrollView_isDragging00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isDragging'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isDragging();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isDragging'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isTouchMoved of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_isTouchMoved00
static int tolua_GoddessLua_CCScrollView_isTouchMoved00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTouchMoved'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isTouchMoved();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTouchMoved'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isBounceable of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_isBounceable00
static int tolua_GoddessLua_CCScrollView_isBounceable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isBounceable'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isBounceable();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isBounceable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBounceable of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_setBounceable00
static int tolua_GoddessLua_CCScrollView_setBounceable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  bool bBounceable = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBounceable'", NULL);
#endif
  {
   self->setBounceable(bBounceable);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBounceable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getViewSize of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_getViewSize00
static int tolua_GoddessLua_CCScrollView_getViewSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getViewSize'", NULL);
#endif
  {
   CCSize tolua_ret = (CCSize)  self->getViewSize();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCSize)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCSize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCSize));
     tolua_pushusertype(tolua_S,tolua_obj,"CCSize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getViewSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setViewSize of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_setViewSize00
static int tolua_GoddessLua_CCScrollView_setViewSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCSize size = *((CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setViewSize'", NULL);
#endif
  {
   self->setViewSize(size);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setViewSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getContainer of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_getContainer00
static int tolua_GoddessLua_CCScrollView_getContainer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContainer'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getContainer();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContainer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContainer of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_setContainer00
static int tolua_GoddessLua_CCScrollView_setContainer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCNode* pContainer = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContainer'", NULL);
#endif
  {
   self->setContainer(pContainer);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContainer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDirection of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_getDirection00
static int tolua_GoddessLua_CCScrollView_getDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDirection'", NULL);
#endif
  {
   CCScrollViewDirection tolua_ret = (CCScrollViewDirection)  self->getDirection();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDirection of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_setDirection00
static int tolua_GoddessLua_CCScrollView_setDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCScrollViewDirection eDirection = ((CCScrollViewDirection) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDirection'", NULL);
#endif
  {
   self->setDirection(eDirection);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDelegate of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_getDelegate00
static int tolua_GoddessLua_CCScrollView_getDelegate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDelegate'", NULL);
#endif
  {
   CCScrollViewDelegate* tolua_ret = (CCScrollViewDelegate*)  self->getDelegate();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCScrollViewDelegate");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDelegate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDelegate of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_setDelegate00
static int tolua_GoddessLua_CCScrollView_setDelegate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCScrollViewDelegate",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCScrollViewDelegate* pDelegate = ((CCScrollViewDelegate*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDelegate'", NULL);
#endif
  {
   self->setDelegate(pDelegate);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDelegate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ccTouchBegan of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_ccTouchBegan00
static int tolua_GoddessLua_CCScrollView_ccTouchBegan00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
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

/* method: ccTouchMoved of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_ccTouchMoved00
static int tolua_GoddessLua_CCScrollView_ccTouchMoved00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
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

/* method: ccTouchEnded of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_ccTouchEnded00
static int tolua_GoddessLua_CCScrollView_ccTouchEnded00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
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

/* method: ccTouchCancelled of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_ccTouchCancelled00
static int tolua_GoddessLua_CCScrollView_ccTouchCancelled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* pEvent = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ccTouchCancelled'", NULL);
#endif
  {
   self->ccTouchCancelled(pTouch,pEvent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccTouchCancelled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentSize of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_setContentSize00
static int tolua_GoddessLua_CCScrollView_setContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* size = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentSize'", NULL);
#endif
  {
   self->setContentSize(*size);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: updateInset of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_updateInset00
static int tolua_GoddessLua_CCScrollView_updateInset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'updateInset'", NULL);
#endif
  {
   self->updateInset();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'updateInset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isClippingToBounds of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_isClippingToBounds00
static int tolua_GoddessLua_CCScrollView_isClippingToBounds00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isClippingToBounds'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isClippingToBounds();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isClippingToBounds'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setClippingToBounds of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_setClippingToBounds00
static int tolua_GoddessLua_CCScrollView_setClippingToBounds00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  bool bClippingToBounds = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setClippingToBounds'", NULL);
#endif
  {
   self->setClippingToBounds(bClippingToBounds);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setClippingToBounds'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: visit of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_visit00
static int tolua_GoddessLua_CCScrollView_visit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'visit'", NULL);
#endif
  {
   self->visit();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'visit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addChild of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_addChild00
static int tolua_GoddessLua_CCScrollView_addChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCNode* child = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
  int zOrder = ((int)  tolua_tonumber(tolua_S,3,0));
  int tag = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addChild'", NULL);
#endif
  {
   self->addChild(child,zOrder,tag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addChild of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_addChild01
static int tolua_GoddessLua_CCScrollView_addChild01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCNode* child = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
  int zOrder = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addChild'", NULL);
#endif
  {
   self->addChild(child,zOrder);
  }
 }
 return 0;
tolua_lerror:
 return tolua_GoddessLua_CCScrollView_addChild00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: addChild of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_addChild02
static int tolua_GoddessLua_CCScrollView_addChild02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCNode* child = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addChild'", NULL);
#endif
  {
   self->addChild(child);
  }
 }
 return 0;
tolua_lerror:
 return tolua_GoddessLua_CCScrollView_addChild01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTouchEnabled of class  CCScrollView */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_CCScrollView_setTouchEnabled00
static int tolua_GoddessLua_CCScrollView_setTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCScrollView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCScrollView* self = (CCScrollView*)  tolua_tousertype(tolua_S,1,0);
  bool e = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTouchEnabled'", NULL);
#endif
  {
   self->setTouchEnabled(e);
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

/* method: delete of class  MemoryLock */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_MemoryLock_delete00
static int tolua_GoddessLua_MemoryLock_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MemoryLock",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MemoryLock* self = (MemoryLock*)  tolua_tousertype(tolua_S,1,0);
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

/* method: getInstance of class  MemoryLock */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_MemoryLock_getInstance00
static int tolua_GoddessLua_MemoryLock_getInstance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"MemoryLock",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   MemoryLock* tolua_ret = (MemoryLock*)  MemoryLock::getInstance();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"MemoryLock");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getInstance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: record of class  MemoryLock */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_MemoryLock_record00
static int tolua_GoddessLua_MemoryLock_record00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MemoryLock",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MemoryLock* self = (MemoryLock*)  tolua_tousertype(tolua_S,1,0);
  int key = ((int)  tolua_tonumber(tolua_S,2,0));
  char* str = ((char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'record'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->record(key,str);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'record'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: check of class  MemoryLock */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_MemoryLock_check00
static int tolua_GoddessLua_MemoryLock_check00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MemoryLock",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MemoryLock* self = (MemoryLock*)  tolua_tousertype(tolua_S,1,0);
  int key = ((int)  tolua_tonumber(tolua_S,2,0));
  char* str = ((char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'check'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->check(key,str);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'check'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  SoundRecord */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_SoundRecord_new00
static int tolua_GoddessLua_SoundRecord_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SoundRecord",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   SoundRecord* tolua_ret = (SoundRecord*)  Mtolua_new((SoundRecord)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SoundRecord");
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

/* method: new_local of class  SoundRecord */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_SoundRecord_new00_local
static int tolua_GoddessLua_SoundRecord_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SoundRecord",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   SoundRecord* tolua_ret = (SoundRecord*)  Mtolua_new((SoundRecord)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SoundRecord");
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

/* method: delete of class  SoundRecord */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_SoundRecord_delete00
static int tolua_GoddessLua_SoundRecord_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SoundRecord",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SoundRecord* self = (SoundRecord*)  tolua_tousertype(tolua_S,1,0);
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

/* method: AudioRecord of class  SoundRecord */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_SoundRecord_AudioRecord00
static int tolua_GoddessLua_SoundRecord_AudioRecord00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SoundRecord",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SoundRecord* self = (SoundRecord*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AudioRecord'", NULL);
#endif
  {
   self->AudioRecord();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AudioRecord'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AudioPlay of class  SoundRecord */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_SoundRecord_AudioPlay00
static int tolua_GoddessLua_SoundRecord_AudioPlay00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SoundRecord",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SoundRecord* self = (SoundRecord*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AudioPlay'", NULL);
#endif
  {
   self->AudioPlay();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AudioPlay'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  PlatformInterface */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_PlatformInterface_delete00
static int tolua_GoddessLua_PlatformInterface_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PlatformInterface",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PlatformInterface* self = (PlatformInterface*)  tolua_tousertype(tolua_S,1,0);
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

/* method: getInstance of class  PlatformInterface */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_PlatformInterface_getInstance00
static int tolua_GoddessLua_PlatformInterface_getInstance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"PlatformInterface",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   PlatformInterface* tolua_ret = (PlatformInterface*)  PlatformInterface::getInstance();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"PlatformInterface");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getInstance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  PlatformInterface */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_PlatformInterface_init00
static int tolua_GoddessLua_PlatformInterface_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PlatformInterface",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PlatformInterface* self = (PlatformInterface*)  tolua_tousertype(tolua_S,1,0);
  int appid = ((int)  tolua_tonumber(tolua_S,2,0));
  const char* appkey = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   self->init(appid,appkey);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: login of class  PlatformInterface */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_PlatformInterface_login00
static int tolua_GoddessLua_PlatformInterface_login00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PlatformInterface",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PlatformInterface* self = (PlatformInterface*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'login'", NULL);
#endif
  {
   self->login();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'login'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: logout of class  PlatformInterface */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_PlatformInterface_logout00
static int tolua_GoddessLua_PlatformInterface_logout00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PlatformInterface",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PlatformInterface* self = (PlatformInterface*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'logout'", NULL);
#endif
  {
   self->logout();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'logout'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: center of class  PlatformInterface */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_PlatformInterface_center00
static int tolua_GoddessLua_PlatformInterface_center00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PlatformInterface",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PlatformInterface* self = (PlatformInterface*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'center'", NULL);
#endif
  {
   self->center();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'center'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: pay of class  PlatformInterface */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_PlatformInterface_pay00
static int tolua_GoddessLua_PlatformInterface_pay00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PlatformInterface",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PlatformInterface* self = (PlatformInterface*)  tolua_tousertype(tolua_S,1,0);
  char* orderJson = ((char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'pay'", NULL);
#endif
  {
   self->pay(orderJson);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pay'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: registerCallBack of class  PlatformInterface */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_PlatformInterface_registerCallBack00
static int tolua_GoddessLua_PlatformInterface_registerCallBack00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PlatformInterface",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !toluafix_isfunction(tolua_S,3,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PlatformInterface* self = (PlatformInterface*)  tolua_tousertype(tolua_S,1,0);
  const char* key = ((const char*)  tolua_tostring(tolua_S,2,0));
  LUA_FUNCTION handler = (  toluafix_ref_function(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'registerCallBack'", NULL);
#endif
  {
   self->registerCallBack(key,handler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'registerCallBack'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: registerLocalNotice of class  Notice */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_Notice_registerLocalNotice00
static int tolua_GoddessLua_Notice_registerLocalNotice00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Notice",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isstring(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int iconNum = ((int)  tolua_tonumber(tolua_S,2,0));
  long timesp = ((long)  tolua_tonumber(tolua_S,3,0));
  int repeat = ((int)  tolua_tonumber(tolua_S,4,0));
  const char* str = ((const char*)  tolua_tostring(tolua_S,5,0));
  {
   Notice::registerLocalNotice(iconNum,timesp,repeat,str);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'registerLocalNotice'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clearAllNotices of class  Notice */
#ifndef TOLUA_DISABLE_tolua_GoddessLua_Notice_clearAllNotices00
static int tolua_GoddessLua_Notice_clearAllNotices00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Notice",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Notice::clearAllNotices();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clearAllNotices'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_GoddessLua_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"GoddessSocket","GoddessSocket","",tolua_collect_GoddessSocket);
  #else
  tolua_cclass(tolua_S,"GoddessSocket","GoddessSocket","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"GoddessSocket");
   tolua_function(tolua_S,"new",tolua_GoddessLua_GoddessSocket_new00);
   tolua_function(tolua_S,"new_local",tolua_GoddessLua_GoddessSocket_new00_local);
   tolua_function(tolua_S,".call",tolua_GoddessLua_GoddessSocket_new00_local);
   tolua_function(tolua_S,"delete",tolua_GoddessLua_GoddessSocket_delete00);
   tolua_function(tolua_S,"sockConnect",tolua_GoddessLua_GoddessSocket_sockConnect00);
   tolua_function(tolua_S,"sockConnectNoBlock",tolua_GoddessLua_GoddessSocket_sockConnectNoBlock00);
   tolua_function(tolua_S,"sockClose",tolua_GoddessLua_GoddessSocket_sockClose00);
   tolua_function(tolua_S,"getSocketState",tolua_GoddessLua_GoddessSocket_getSocketState00);
   tolua_function(tolua_S,"sockRecv",tolua_GoddessLua_GoddessSocket_sockRecv00);
   tolua_function(tolua_S,"sockSend",tolua_GoddessLua_GoddessSocket_sockSend00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"ByteArray","ByteArray","",tolua_collect_ByteArray);
  #else
  tolua_cclass(tolua_S,"ByteArray","ByteArray","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"ByteArray");
   tolua_function(tolua_S,"getInstance",tolua_GoddessLua_ByteArray_getInstance00);
   tolua_function(tolua_S,"delete",tolua_GoddessLua_ByteArray_delete00);
   tolua_function(tolua_S,"getDataFrom",tolua_GoddessLua_ByteArray_getDataFrom00);
   tolua_function(tolua_S,"flush",tolua_GoddessLua_ByteArray_flush00);
   tolua_function(tolua_S,"getRemaindLength",tolua_GoddessLua_ByteArray_getRemaindLength00);
   tolua_function(tolua_S,"writeByte",tolua_GoddessLua_ByteArray_writeByte00);
   tolua_function(tolua_S,"writeShort",tolua_GoddessLua_ByteArray_writeShort00);
   tolua_function(tolua_S,"writeInt",tolua_GoddessLua_ByteArray_writeInt00);
   tolua_function(tolua_S,"writeLong",tolua_GoddessLua_ByteArray_writeLong00);
   tolua_function(tolua_S,"writeUTF",tolua_GoddessLua_ByteArray_writeUTF00);
   tolua_function(tolua_S,"writeBytes",tolua_GoddessLua_ByteArray_writeBytes00);
   tolua_function(tolua_S,"readByte",tolua_GoddessLua_ByteArray_readByte00);
   tolua_function(tolua_S,"readShort",tolua_GoddessLua_ByteArray_readShort00);
   tolua_function(tolua_S,"readInt",tolua_GoddessLua_ByteArray_readInt00);
   tolua_function(tolua_S,"readLong",tolua_GoddessLua_ByteArray_readLong00);
   tolua_function(tolua_S,"readUTF",tolua_GoddessLua_ByteArray_readUTF00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"GoddessUtils","GoddessUtils","",NULL);
  tolua_beginmodule(tolua_S,"GoddessUtils");
   tolua_function(tolua_S,"millisecond",tolua_GoddessLua_GoddessUtils_millisecond00);
   tolua_function(tolua_S,"isFileExist",tolua_GoddessLua_GoddessUtils_isFileExist00);
   tolua_function(tolua_S,"createStrokeLabel",tolua_GoddessLua_GoddessUtils_createStrokeLabel00);
   tolua_function(tolua_S,"createStroke",tolua_GoddessLua_GoddessUtils_createStroke00);
   tolua_function(tolua_S,"createDrawSolidPoly",tolua_GoddessLua_GoddessUtils_createDrawSolidPoly00);
   tolua_function(tolua_S,"stopAnimation",tolua_GoddessLua_GoddessUtils_stopAnimation00);
   tolua_function(tolua_S,"startAnimation",tolua_GoddessLua_GoddessUtils_startAnimation00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"LuaHttp","LuaHttp","cocos2d::CCObject",NULL);
  tolua_beginmodule(tolua_S,"LuaHttp");
   tolua_function(tolua_S,"sendHttpGetData",tolua_GoddessLua_LuaHttp_sendHttpGetData00);
   tolua_function(tolua_S,"sendHttpPostData",tolua_GoddessLua_LuaHttp_sendHttpPostData00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"CCControlEventTouchDown",CCControlEventTouchDown);
  tolua_constant(tolua_S,"CCControlEventTouchDragInside",CCControlEventTouchDragInside);
  tolua_constant(tolua_S,"CCControlEventTouchDragOutside",CCControlEventTouchDragOutside);
  tolua_constant(tolua_S,"CCControlEventTouchDragEnter",CCControlEventTouchDragEnter);
  tolua_constant(tolua_S,"CCControlEventTouchDragExit",CCControlEventTouchDragExit);
  tolua_constant(tolua_S,"CCControlEventTouchUpInside",CCControlEventTouchUpInside);
  tolua_constant(tolua_S,"CCControlEventTouchUpOutside",CCControlEventTouchUpOutside);
  tolua_constant(tolua_S,"CCControlEventTouchCancel",CCControlEventTouchCancel);
  tolua_constant(tolua_S,"CCControlEventValueChanged",CCControlEventValueChanged);
  tolua_constant(tolua_S,"CCControlStateNormal",CCControlStateNormal);
  tolua_constant(tolua_S,"CCControlStateHighlighted",CCControlStateHighlighted);
  tolua_constant(tolua_S,"CCControlStateDisabled",CCControlStateDisabled);
  tolua_constant(tolua_S,"CCControlStateSelected",CCControlStateSelected);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CCControl","CCControl","CCLayerRGBA",tolua_collect_CCControl);
  #else
  tolua_cclass(tolua_S,"CCControl","CCControl","CCLayerRGBA",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CCControl");
   tolua_function(tolua_S,"setEnabled",tolua_GoddessLua_CCControl_setEnabled00);
   tolua_function(tolua_S,"isEnabled",tolua_GoddessLua_CCControl_isEnabled00);
   tolua_function(tolua_S,"setSelected",tolua_GoddessLua_CCControl_setSelected00);
   tolua_function(tolua_S,"isSelected",tolua_GoddessLua_CCControl_isSelected00);
   tolua_function(tolua_S,"setHighlighted",tolua_GoddessLua_CCControl_setHighlighted00);
   tolua_function(tolua_S,"isHighlighted",tolua_GoddessLua_CCControl_isHighlighted00);
   tolua_function(tolua_S,"hasVisibleParents",tolua_GoddessLua_CCControl_hasVisibleParents00);
   tolua_function(tolua_S,"needsLayout",tolua_GoddessLua_CCControl_needsLayout00);
   tolua_function(tolua_S,"isOpacityModifyRGB",tolua_GoddessLua_CCControl_isOpacityModifyRGB00);
   tolua_function(tolua_S,"setOpacityModifyRGB",tolua_GoddessLua_CCControl_setOpacityModifyRGB00);
   tolua_function(tolua_S,"new",tolua_GoddessLua_CCControl_new00);
   tolua_function(tolua_S,"new_local",tolua_GoddessLua_CCControl_new00_local);
   tolua_function(tolua_S,".call",tolua_GoddessLua_CCControl_new00_local);
   tolua_function(tolua_S,"init",tolua_GoddessLua_CCControl_init00);
   tolua_function(tolua_S,"delete",tolua_GoddessLua_CCControl_delete00);
   tolua_function(tolua_S,"onEnter",tolua_GoddessLua_CCControl_onEnter00);
   tolua_function(tolua_S,"onExit",tolua_GoddessLua_CCControl_onExit00);
   tolua_function(tolua_S,"registerWithTouchDispatcher",tolua_GoddessLua_CCControl_registerWithTouchDispatcher00);
   tolua_function(tolua_S,"sendActionsForControlEvents",tolua_GoddessLua_CCControl_sendActionsForControlEvents00);
   tolua_function(tolua_S,"addTargetWithActionForControlEvents",tolua_GoddessLua_CCControl_addTargetWithActionForControlEvents00);
   tolua_function(tolua_S,"removeTargetWithActionForControlEvents",tolua_GoddessLua_CCControl_removeTargetWithActionForControlEvents00);
   tolua_function(tolua_S,"getTouchLocation",tolua_GoddessLua_CCControl_getTouchLocation00);
   tolua_function(tolua_S,"isTouchInside",tolua_GoddessLua_CCControl_isTouchInside00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CCControlButton","CCControlButton","CCControl",tolua_collect_CCControlButton);
  #else
  tolua_cclass(tolua_S,"CCControlButton","CCControlButton","CCControl",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CCControlButton");
   tolua_function(tolua_S,"new",tolua_GoddessLua_CCControlButton_new00);
   tolua_function(tolua_S,"new_local",tolua_GoddessLua_CCControlButton_new00_local);
   tolua_function(tolua_S,".call",tolua_GoddessLua_CCControlButton_new00_local);
   tolua_function(tolua_S,"delete",tolua_GoddessLua_CCControlButton_delete00);
   tolua_function(tolua_S,"needsLayout",tolua_GoddessLua_CCControlButton_needsLayout00);
   tolua_function(tolua_S,"setEnabled",tolua_GoddessLua_CCControlButton_setEnabled00);
   tolua_function(tolua_S,"setSelected",tolua_GoddessLua_CCControlButton_setSelected00);
   tolua_function(tolua_S,"setHighlighted",tolua_GoddessLua_CCControlButton_setHighlighted00);
   tolua_function(tolua_S,"isPushed",tolua_GoddessLua_CCControlButton_isPushed00);
   tolua_function(tolua_S,"setMargins",tolua_GoddessLua_CCControlButton_setMargins00);
   tolua_function(tolua_S,"init",tolua_GoddessLua_CCControlButton_init00);
   tolua_function(tolua_S,"initWithLabelAndBackgroundSprite",tolua_GoddessLua_CCControlButton_initWithLabelAndBackgroundSprite00);
   tolua_function(tolua_S,"create",tolua_GoddessLua_CCControlButton_create00);
   tolua_function(tolua_S,"initWithTitleAndFontNameAndFontSize",tolua_GoddessLua_CCControlButton_initWithTitleAndFontNameAndFontSize00);
   tolua_function(tolua_S,"create",tolua_GoddessLua_CCControlButton_create01);
   tolua_function(tolua_S,"initWithBackgroundSprite",tolua_GoddessLua_CCControlButton_initWithBackgroundSprite00);
   tolua_function(tolua_S,"create",tolua_GoddessLua_CCControlButton_create02);
   tolua_function(tolua_S,"ccTouchBegan",tolua_GoddessLua_CCControlButton_ccTouchBegan00);
   tolua_function(tolua_S,"ccTouchMoved",tolua_GoddessLua_CCControlButton_ccTouchMoved00);
   tolua_function(tolua_S,"ccTouchEnded",tolua_GoddessLua_CCControlButton_ccTouchEnded00);
   tolua_function(tolua_S,"ccTouchCancelled",tolua_GoddessLua_CCControlButton_ccTouchCancelled00);
   tolua_function(tolua_S,"getTitleForState",tolua_GoddessLua_CCControlButton_getTitleForState00);
   tolua_function(tolua_S,"setTitleForState",tolua_GoddessLua_CCControlButton_setTitleForState00);
   tolua_function(tolua_S,"getTitleColorForState",tolua_GoddessLua_CCControlButton_getTitleColorForState00);
   tolua_function(tolua_S,"setTitleColorForState",tolua_GoddessLua_CCControlButton_setTitleColorForState00);
   tolua_function(tolua_S,"getTitleLabelForState",tolua_GoddessLua_CCControlButton_getTitleLabelForState00);
   tolua_function(tolua_S,"setTitleLabelForState",tolua_GoddessLua_CCControlButton_setTitleLabelForState00);
   tolua_function(tolua_S,"setTitleTTFForState",tolua_GoddessLua_CCControlButton_setTitleTTFForState00);
   tolua_function(tolua_S,"getTitleTTFForState",tolua_GoddessLua_CCControlButton_getTitleTTFForState00);
   tolua_function(tolua_S,"setTitleTTFSizeForState",tolua_GoddessLua_CCControlButton_setTitleTTFSizeForState00);
   tolua_function(tolua_S,"getTitleTTFSizeForState",tolua_GoddessLua_CCControlButton_getTitleTTFSizeForState00);
   tolua_function(tolua_S,"setTitleBMFontForState",tolua_GoddessLua_CCControlButton_setTitleBMFontForState00);
   tolua_function(tolua_S,"getTitleBMFontForState",tolua_GoddessLua_CCControlButton_getTitleBMFontForState00);
   tolua_function(tolua_S,"getBackgroundSpriteForState",tolua_GoddessLua_CCControlButton_getBackgroundSpriteForState00);
   tolua_function(tolua_S,"setBackgroundSpriteForState",tolua_GoddessLua_CCControlButton_setBackgroundSpriteForState00);
   tolua_function(tolua_S,"setBackgroundSpriteFrameForState",tolua_GoddessLua_CCControlButton_setBackgroundSpriteFrameForState00);
   tolua_function(tolua_S,"create",tolua_GoddessLua_CCControlButton_create03);
   tolua_function(tolua_S,"setVisible",tolua_GoddessLua_CCControlButton_setVisible00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"ByteBuffer","ByteBuffer","",tolua_collect_ByteBuffer);
  #else
  tolua_cclass(tolua_S,"ByteBuffer","ByteBuffer","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"ByteBuffer");
   tolua_function(tolua_S,"new",tolua_GoddessLua_ByteBuffer_new00);
   tolua_function(tolua_S,"new_local",tolua_GoddessLua_ByteBuffer_new00_local);
   tolua_function(tolua_S,".call",tolua_GoddessLua_ByteBuffer_new00_local);
   tolua_function(tolua_S,"delete",tolua_GoddessLua_ByteBuffer_delete00);
   tolua_function(tolua_S,"writeByte",tolua_GoddessLua_ByteBuffer_writeByte00);
   tolua_function(tolua_S,"writeShort",tolua_GoddessLua_ByteBuffer_writeShort00);
   tolua_function(tolua_S,"writeInt",tolua_GoddessLua_ByteBuffer_writeInt00);
   tolua_function(tolua_S,"writeLong",tolua_GoddessLua_ByteBuffer_writeLong00);
   tolua_function(tolua_S,"writeUTF",tolua_GoddessLua_ByteBuffer_writeUTF00);
   tolua_function(tolua_S,"writeBytes",tolua_GoddessLua_ByteBuffer_writeBytes00);
   tolua_variable(tolua_S,"pos",tolua_get_ByteBuffer_pos,tolua_set_ByteBuffer_pos);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"kCCScrollViewDirectionNone",kCCScrollViewDirectionNone);
  tolua_constant(tolua_S,"kCCScrollViewDirectionHorizontal",kCCScrollViewDirectionHorizontal);
  tolua_constant(tolua_S,"kCCScrollViewDirectionVertical",kCCScrollViewDirectionVertical);
  tolua_constant(tolua_S,"kCCScrollViewDirectionBoth",kCCScrollViewDirectionBoth);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CCScrollViewDelegate","CCScrollViewDelegate","",tolua_collect_CCScrollViewDelegate);
  #else
  tolua_cclass(tolua_S,"CCScrollViewDelegate","CCScrollViewDelegate","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CCScrollViewDelegate");
   tolua_function(tolua_S,"delete",tolua_GoddessLua_CCScrollViewDelegate_delete00);
   tolua_function(tolua_S,"scrollViewDidScroll",tolua_GoddessLua_CCScrollViewDelegate_scrollViewDidScroll00);
   tolua_function(tolua_S,"scrollViewDidZoom",tolua_GoddessLua_CCScrollViewDelegate_scrollViewDidZoom00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CCScrollView","CCScrollView","CCLayer",tolua_collect_CCScrollView);
  #else
  tolua_cclass(tolua_S,"CCScrollView","CCScrollView","CCLayer",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CCScrollView");
   tolua_function(tolua_S,"new",tolua_GoddessLua_CCScrollView_new00);
   tolua_function(tolua_S,"new_local",tolua_GoddessLua_CCScrollView_new00_local);
   tolua_function(tolua_S,".call",tolua_GoddessLua_CCScrollView_new00_local);
   tolua_function(tolua_S,"delete",tolua_GoddessLua_CCScrollView_delete00);
   tolua_function(tolua_S,"init",tolua_GoddessLua_CCScrollView_init00);
   tolua_function(tolua_S,"registerWithTouchDispatcher",tolua_GoddessLua_CCScrollView_registerWithTouchDispatcher00);
   tolua_function(tolua_S,"create",tolua_GoddessLua_CCScrollView_create00);
   tolua_function(tolua_S,"create",tolua_GoddessLua_CCScrollView_create01);
   tolua_function(tolua_S,"initWithViewSize",tolua_GoddessLua_CCScrollView_initWithViewSize00);
   tolua_function(tolua_S,"setContentOffset",tolua_GoddessLua_CCScrollView_setContentOffset00);
   tolua_function(tolua_S,"getContentOffset",tolua_GoddessLua_CCScrollView_getContentOffset00);
   tolua_function(tolua_S,"setContentOffsetInDuration",tolua_GoddessLua_CCScrollView_setContentOffsetInDuration00);
   tolua_function(tolua_S,"setZoomScale",tolua_GoddessLua_CCScrollView_setZoomScale00);
   tolua_function(tolua_S,"setZoomScale",tolua_GoddessLua_CCScrollView_setZoomScale01);
   tolua_function(tolua_S,"getZoomScale",tolua_GoddessLua_CCScrollView_getZoomScale00);
   tolua_function(tolua_S,"setZoomScaleInDuration",tolua_GoddessLua_CCScrollView_setZoomScaleInDuration00);
   tolua_function(tolua_S,"minContainerOffset",tolua_GoddessLua_CCScrollView_minContainerOffset00);
   tolua_function(tolua_S,"maxContainerOffset",tolua_GoddessLua_CCScrollView_maxContainerOffset00);
   tolua_function(tolua_S,"isNodeVisible",tolua_GoddessLua_CCScrollView_isNodeVisible00);
   tolua_function(tolua_S,"pause",tolua_GoddessLua_CCScrollView_pause00);
   tolua_function(tolua_S,"resume",tolua_GoddessLua_CCScrollView_resume00);
   tolua_function(tolua_S,"isDragging",tolua_GoddessLua_CCScrollView_isDragging00);
   tolua_function(tolua_S,"isTouchMoved",tolua_GoddessLua_CCScrollView_isTouchMoved00);
   tolua_function(tolua_S,"isBounceable",tolua_GoddessLua_CCScrollView_isBounceable00);
   tolua_function(tolua_S,"setBounceable",tolua_GoddessLua_CCScrollView_setBounceable00);
   tolua_function(tolua_S,"getViewSize",tolua_GoddessLua_CCScrollView_getViewSize00);
   tolua_function(tolua_S,"setViewSize",tolua_GoddessLua_CCScrollView_setViewSize00);
   tolua_function(tolua_S,"getContainer",tolua_GoddessLua_CCScrollView_getContainer00);
   tolua_function(tolua_S,"setContainer",tolua_GoddessLua_CCScrollView_setContainer00);
   tolua_function(tolua_S,"getDirection",tolua_GoddessLua_CCScrollView_getDirection00);
   tolua_function(tolua_S,"setDirection",tolua_GoddessLua_CCScrollView_setDirection00);
   tolua_function(tolua_S,"getDelegate",tolua_GoddessLua_CCScrollView_getDelegate00);
   tolua_function(tolua_S,"setDelegate",tolua_GoddessLua_CCScrollView_setDelegate00);
   tolua_function(tolua_S,"ccTouchBegan",tolua_GoddessLua_CCScrollView_ccTouchBegan00);
   tolua_function(tolua_S,"ccTouchMoved",tolua_GoddessLua_CCScrollView_ccTouchMoved00);
   tolua_function(tolua_S,"ccTouchEnded",tolua_GoddessLua_CCScrollView_ccTouchEnded00);
   tolua_function(tolua_S,"ccTouchCancelled",tolua_GoddessLua_CCScrollView_ccTouchCancelled00);
   tolua_function(tolua_S,"setContentSize",tolua_GoddessLua_CCScrollView_setContentSize00);
   tolua_function(tolua_S,"updateInset",tolua_GoddessLua_CCScrollView_updateInset00);
   tolua_function(tolua_S,"isClippingToBounds",tolua_GoddessLua_CCScrollView_isClippingToBounds00);
   tolua_function(tolua_S,"setClippingToBounds",tolua_GoddessLua_CCScrollView_setClippingToBounds00);
   tolua_function(tolua_S,"visit",tolua_GoddessLua_CCScrollView_visit00);
   tolua_function(tolua_S,"addChild",tolua_GoddessLua_CCScrollView_addChild00);
   tolua_function(tolua_S,"addChild",tolua_GoddessLua_CCScrollView_addChild01);
   tolua_function(tolua_S,"addChild",tolua_GoddessLua_CCScrollView_addChild02);
   tolua_function(tolua_S,"setTouchEnabled",tolua_GoddessLua_CCScrollView_setTouchEnabled00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"MemoryLock","MemoryLock","",tolua_collect_MemoryLock);
  #else
  tolua_cclass(tolua_S,"MemoryLock","MemoryLock","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"MemoryLock");
   tolua_function(tolua_S,"delete",tolua_GoddessLua_MemoryLock_delete00);
   tolua_function(tolua_S,"getInstance",tolua_GoddessLua_MemoryLock_getInstance00);
   tolua_function(tolua_S,"record",tolua_GoddessLua_MemoryLock_record00);
   tolua_function(tolua_S,"check",tolua_GoddessLua_MemoryLock_check00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"SoundRecord","SoundRecord","",tolua_collect_SoundRecord);
  #else
  tolua_cclass(tolua_S,"SoundRecord","SoundRecord","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"SoundRecord");
   tolua_function(tolua_S,"new",tolua_GoddessLua_SoundRecord_new00);
   tolua_function(tolua_S,"new_local",tolua_GoddessLua_SoundRecord_new00_local);
   tolua_function(tolua_S,".call",tolua_GoddessLua_SoundRecord_new00_local);
   tolua_function(tolua_S,"delete",tolua_GoddessLua_SoundRecord_delete00);
   tolua_function(tolua_S,"AudioRecord",tolua_GoddessLua_SoundRecord_AudioRecord00);
   tolua_function(tolua_S,"AudioPlay",tolua_GoddessLua_SoundRecord_AudioPlay00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"PlatformInterface","PlatformInterface","",tolua_collect_PlatformInterface);
  #else
  tolua_cclass(tolua_S,"PlatformInterface","PlatformInterface","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"PlatformInterface");
   tolua_function(tolua_S,"delete",tolua_GoddessLua_PlatformInterface_delete00);
   tolua_function(tolua_S,"getInstance",tolua_GoddessLua_PlatformInterface_getInstance00);
   tolua_function(tolua_S,"init",tolua_GoddessLua_PlatformInterface_init00);
   tolua_function(tolua_S,"login",tolua_GoddessLua_PlatformInterface_login00);
   tolua_function(tolua_S,"logout",tolua_GoddessLua_PlatformInterface_logout00);
   tolua_function(tolua_S,"center",tolua_GoddessLua_PlatformInterface_center00);
   tolua_function(tolua_S,"pay",tolua_GoddessLua_PlatformInterface_pay00);
   tolua_function(tolua_S,"registerCallBack",tolua_GoddessLua_PlatformInterface_registerCallBack00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"Notice","Notice","",NULL);
  tolua_beginmodule(tolua_S,"Notice");
   tolua_function(tolua_S,"registerLocalNotice",tolua_GoddessLua_Notice_registerLocalNotice00);
   tolua_function(tolua_S,"clearAllNotices",tolua_GoddessLua_Notice_clearAllNotices00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_GoddessLua (lua_State* tolua_S) {
 return tolua_GoddessLua_open(tolua_S);
};
#endif

