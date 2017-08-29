//
//  ScrollLabel.h
//  goddess
//
//  Created by 邓 建新 on 13-9-24.
//
//

#ifndef __goddess__ScrollLabel__
#define __goddess__ScrollLabel__

#include "cocos2d.h"
#include "cocos-ext.h"
#include "CCLuaEngine.h"

USING_NS_CC;
using namespace cocos2d;


class ScrollLabel:public CCSprite
{
public:
    ScrollLabel();
    ~ScrollLabel();
    static ScrollLabel* create(CCSprite* view,CCSize dimensions,int direction,float speed,int playTimes,CCSize contentSize);
    static ScrollLabel* create(CCSprite* view,CCSize dimensions,int direction,float speed,int playTimes);
    void registerScriptTapHandler(LUA_FUNCTION handler);
private:
    bool initWithString(CCSprite* view,CCSize dimensions,int direction,float speed,int playTimes);
    bool initWithString(CCSprite* view,CCSize dimensions,int direction,float speed,int playTimes,CCSize contentSize);
    void update(float dt);    
    bool createAction();
private:
    CCTexture2D *viewTexture;
    float offsetX;
    float offsetY;
    CCSize dimensions;
    int direction;
    float speed;
    int playTimes;
    int m_nScriptTapHandler;
    CCSize contentSize;
    
};

#endif /* defined(__goddess__ScrollLabel__) */
