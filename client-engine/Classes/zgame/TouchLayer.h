//
//  TouchLayer.h
//  goddess
//
//  Created by 邓 建新 on 13-9-2.
//
//

#ifndef __goddess__TouchLayer__
#define __goddess__TouchLayer__

#include "cocos2d.h"
#include "cocos-ext.h"
#include "CCLuaEngine.h"
/**
 
 */
USING_NS_CC;
USING_NS_CC_EXT;
class TouchLayer:public CCLayer{
public:
    TouchLayer();
    virtual ~TouchLayer();
    static TouchLayer* create(CCSize size);
    
    virtual bool ccTouchBegan(CCTouch *pTouch, CCEvent *pEvent);
    virtual void ccTouchMoved(CCTouch *pTouch, CCEvent *pEvent);
    virtual void ccTouchEnded(CCTouch *pTouch, CCEvent *pEvent);  
private:
    int  excuteScriptTouchHandler(int nEventType, CCTouch *pTouch);
    bool isTouchInside(CCTouch* touch);
};

#endif /* defined(__goddess__TouchLayer__) */
