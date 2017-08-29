//
//  TouchLayer.cpp
//  goddess
//
//  Created by 邓 建新 on 13-9-2.
//
//

#include "TouchLayer.h"
TouchLayer::TouchLayer()
{
    m_bIgnoreAnchorPointForPosition = true;
    setAnchorPoint(ccp(0.5f, 0.5f));
}

TouchLayer::~TouchLayer()
{
    unregisterScriptTouchHandler();
    unregisterScriptKeypadHandler();
    unregisterScriptAccelerateHandler();
}


TouchLayer* TouchLayer::create(CCSize size){
    TouchLayer *pRet = new TouchLayer();    
    if (pRet && pRet->init())
    {
        pRet->autorelease();
        pRet->setContentSize(size);
        return pRet;
    }
    else
    {
        CC_SAFE_DELETE(pRet);
        return NULL;
    }
}

bool TouchLayer::ccTouchBegan(CCTouch *pTouch, CCEvent *pEvent)
{
    if(!isTouchInside(pTouch)){
        return false;
    }
    if (kScriptTypeNone != m_eScriptType)
    {
        return excuteScriptTouchHandler(CCTOUCHBEGAN, pTouch) == 0 ? false : true;
    }
    
    CC_UNUSED_PARAM(pTouch);
    CC_UNUSED_PARAM(pEvent);
    CCAssert(false, "Layer#ccTouchBegan override me");
    return true;
}

void TouchLayer::ccTouchMoved(CCTouch *pTouch, CCEvent *pEvent)
{
    if (kScriptTypeNone != m_eScriptType)
    {
        excuteScriptTouchHandler(CCTOUCHMOVED, pTouch);
        return;
    }
    
    CC_UNUSED_PARAM(pTouch);
    CC_UNUSED_PARAM(pEvent);
}

void TouchLayer::ccTouchEnded(CCTouch *pTouch, CCEvent *pEvent)
{
    if (kScriptTypeNone != m_eScriptType)
    {
        excuteScriptTouchHandler(CCTOUCHENDED, pTouch);
        return;
    }
    
    CC_UNUSED_PARAM(pTouch);
    CC_UNUSED_PARAM(pEvent);
}


bool TouchLayer::isTouchInside(CCTouch* touch)
{
    CCPoint touchLocation = touch->getLocation(); // Get the touch position
    touchLocation = this->getParent()->convertToNodeSpace(touchLocation);
    CCRect bBox=boundingBox();
    return bBox.containsPoint(touchLocation);
}

int TouchLayer::excuteScriptTouchHandler(int nEventType, CCTouch *pTouch)
{
    return CCScriptEngineManager::sharedManager()->getScriptEngine()->executeLayerTouchEvent(this, nEventType, pTouch);
}

