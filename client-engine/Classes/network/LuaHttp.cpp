//
//  LuaHttp.cpp
//  goddess_client
//
//  Created by rekoo on 13-3-11.
//
//

#include "LuaHttp.h"
USING_NS_CC;

void LuaHttp::sendHttpGetData(const char* url,const char* data,LUA_FUNCTION handler)
{
	LuaHttp *myHttpClient=new LuaHttp();
	CCHttpRequest* request = new CCHttpRequest();
	request->setUrl(url);
	myHttpClient->m_nHandler=handler;
	request->setRequestType(CCHttpRequest::kHttpGet);
    
	//request->setRequestData(data,strlen(data));
    request->setTag("GET");
	request->setResponseCallback(myHttpClient, httpresponse_selector(LuaHttp::onHttpRequestCompleted));
	CCHttpClient::getInstance()->send(request);
	request->release();
    
}

void LuaHttp::sendHttpPostData(const char* url,const char* data,LUA_FUNCTION handler)
{
	LuaHttp *myHttpClient=new LuaHttp();
	CCHttpRequest* request = new CCHttpRequest();
	request->setUrl(url);
	myHttpClient->m_nHandler=handler;
	request->setRequestType(CCHttpRequest::kHttpPost);
	request->setRequestData(data,strlen(data));
    request->setTag("POST");
	request->setResponseCallback(myHttpClient, httpresponse_selector(LuaHttp::onHttpRequestCompleted));
	CCHttpClient::getInstance()->send(request);
	request->release();
}


void LuaHttp::executeFunction(int responseCode, const char* data)
{
	//CCScriptEngineProtocol *engine = CCScriptEngineManager::sharedManager()->getScriptEngine();
	CCLuaEngine *engine = CCLuaEngine::defaultEngine();
	lua_State* m_state=engine->getLuaStack()->getLuaState();
	lua_pushinteger(m_state, responseCode);
	lua_pushstring(m_state,data);
	engine->getLuaStack()->executeFunctionByHandler(this->m_nHandler, 2);


}

void LuaHttp::onHttpRequestCompleted(CCNode *sender, void *resp) {
    
	CCHttpResponse *response = (CCHttpResponse*)resp;
    
	if (!response)
	{
		return;
	}
    
	int statusCode = response->getResponseCode();
	std::vector<char> *buffer = response->getResponseData();
    int charLen = buffer->size() + 2;
	char data[charLen];
	for (unsigned int i = 0; i < buffer->size(); i++)
	{
		data[i]=(*buffer)[i];
	}
	data[buffer->size()]='\0';
    
	this->executeFunction(statusCode, data);
    delete this;
}

