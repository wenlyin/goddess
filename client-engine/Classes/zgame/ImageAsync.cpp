//
//  ImageAsync.cpp
//  Goddess
//
//  Created by 邓 建新 on 14-7-14.
//
//

#include "ImageAsync.h"

ImageAsync::ImageAsync()
{
    m_nScriptTapHandler = 0;
}

ImageAsync::~ImageAsync()
{
    unregisterScriptTapHandler();
}

ImageAsync* ImageAsync::create(){
    ImageAsync *pRet = new ImageAsync();
    if (pRet && pRet->init())
    {
        pRet->autorelease();
        return pRet;
    }
    else
    {
        CC_SAFE_DELETE(pRet);
        return NULL;
    }
};

void ImageAsync::registerScriptTapHandler(LUA_FUNCTION handler){
    this->m_nScriptTapHandler = handler;
}

void ImageAsync::unregisterScriptTapHandler()
{
    if (m_nScriptTapHandler)
    {
        CCScriptEngineManager::sharedManager()->getScriptEngine()->removeScriptHandler(m_nScriptTapHandler);
        m_nScriptTapHandler = 0;
    }
    
}

void ImageAsync::addImage(char* url){
    CCTextureCache::sharedTextureCache()->addImageAsync(url, this, callfuncO_selector(ImageAsync::loadCallBack));
}

void ImageAsync::loadCallBack(CCObject* obj){
    if(m_nScriptTapHandler == 0){ return; }
    CCLuaEngine * m_engine = (CCLuaEngine*)CCScriptEngineManager::sharedManager()->getScriptEngine();
    m_engine->getLuaStack()->clean();
    m_engine->getLuaStack()->executeFunctionByHandler(m_nScriptTapHandler, 0);
}