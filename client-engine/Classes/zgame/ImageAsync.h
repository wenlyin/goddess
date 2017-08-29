//
//  ImageAsync.h
//  Goddess
//
//  Created by 邓 建新 on 14-7-14.
//
//

#ifndef __Goddess__ImageAsync__
#define __Goddess__ImageAsync__



#include "cocos2d.h"
#include "cocos-ext.h"
#include "CCLuaEngine.h"

USING_NS_CC;
using namespace cocos2d;

class ImageAsync:public CCLayer{
public:
    ImageAsync();
    ~ImageAsync();
    static ImageAsync* create();
    void registerScriptTapHandler(LUA_FUNCTION handler);
    void addImage(char* url);
private:
    int m_nScriptTapHandler;
    void unregisterScriptTapHandler();
    void loadCallBack(CCObject* obj);
    
};


#endif /* defined(__Goddess__ImageAsync__) */
