//
//  LuaHttp.h
//  goddess_client
//
//  Created by rekoo on 13-3-11.
//
//

#ifndef __LuaHttp_H__
#define __LuaHttp_H__
#include <iostream>
#include "cocos2d.h"
#include "CCLuaEngine.h"
#include "HttpClient.h"
using namespace cocos2d;
using namespace extension;

class LuaHttp : public cocos2d::CCObject{
public:
	static void sendHttpGetData(const char* url,const char* data,LUA_FUNCTION handler);
	static void sendHttpPostData(const char* url,const char* data,LUA_FUNCTION handler);
private:
    virtual void onHttpRequestCompleted(cocos2d::CCNode *sender, void *data);
	virtual void executeFunction(int responseCode, const char* resp);
	LUA_FUNCTION m_nHandler;
};


#endif
