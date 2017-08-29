//
//  ScrollLabel.cpp
//  goddess
//
//  Created by 邓 建新 on 13-9-24.
//
//

/*
 local aa = RichTextFormat.new(20,200,30,{255,174,0})
 aa:SetData("开始超链正常<color=255,255,255>颜色超链</color><color=255,255,0>颜色</color>结束")
 aa:SetFlipY(true)
 local function scrollLabelCall()
 print('playend')
 end
 local scrollLabel = ScrollLabel:create(aa.view,CCSizeMake(300,300),1,1,1,aa:GetContentSize())
 scrollLabel:setPosition(ccp(400,100))
 scrollLabel:registerScriptTapHandler(scrollLabelCall)
 self.view:addChild(scrollLabel)
 */
#include "ScrollLabel.h"

ScrollLabel::ScrollLabel()
{
    viewTexture = NULL;
}

ScrollLabel::~ScrollLabel()
{
    CC_SAFE_RELEASE(viewTexture);
}

ScrollLabel* ScrollLabel::create(CCSprite* view,CCSize dimensions,int direction,float speed,int playTimes)
{
    ScrollLabel *pRet = new ScrollLabel();
    
    if(pRet && pRet->initWithString(view,dimensions,direction,speed,playTimes))
    {
        pRet->autorelease();
        return pRet;
    }else{
        CC_SAFE_DELETE(pRet);
        return NULL;
    }
}

ScrollLabel* ScrollLabel::create(CCSprite* view,CCSize dimensions,int direction,float speed,int playTimes,CCSize contentSize)
{
    ScrollLabel *pRet = new ScrollLabel();
    if(pRet && pRet->initWithString(view,dimensions,direction,speed,playTimes,contentSize))
    {
        pRet->autorelease();
        return pRet;
    }else{
        CC_SAFE_DELETE(pRet);
        return NULL;
    }
}


bool ScrollLabel::initWithString(CCSprite* view,CCSize dimensions,int direction,float speed,int playTimes)
{
    this->dimensions = dimensions;
    this->direction = direction;
    this->speed = speed;
    this->playTimes = playTimes;
    this->setContentSize(dimensions);
    view->setFlipY(-1);
    CCRenderTexture* rt = CCRenderTexture::create(view->getContentSize().width, view->getContentSize().height,kCCTexture2DPixelFormat_RGBA8888);
    rt->retain();
    rt->begin();
    view->visit();
    rt->end();
    viewTexture = rt->getSprite()->getTexture();
    return createAction();
}

bool ScrollLabel::initWithString(CCSprite* view,CCSize dimensions,int direction,float speed,int playTimes,CCSize contentSize)
{
    this->dimensions = dimensions;
    this->direction = direction;
    this->speed = speed;
    this->playTimes = playTimes;
    this->setContentSize(dimensions);
//    view->setAnchorPoint(ccp(0,-1));
//    view->setFlipY(-1);
    CCRenderTexture* rt = CCRenderTexture::create(contentSize.width, contentSize.height);
    rt->retain();
    rt->begin();
    view->visit();
    rt->end();
    viewTexture = rt->getSprite()->getTexture();
    return createAction();
}

bool ScrollLabel::createAction()
{
    switch(this->direction){
        case 1: //向左
            offsetX = -dimensions.width;
            offsetY = 0;
            break;
        case 2: //向右
            offsetX = viewTexture->getContentSize().width;
            offsetY = 0;
            break;
        case 3: //向上
            offsetX = 0;
            offsetY = viewTexture->getContentSize().height;
            break;
        case 4://向下
            offsetX = 0;
            offsetY = viewTexture->getContentSize().height;
            break;
    }
    
    //是不是要滚动
    //if(viewTexture->getContentSize().width > dimensions.width){
        this->scheduleUpdate();
    //}
    //将指定大小的纹理添加到精灵上
    return initWithTexture(viewTexture,CCRectMake(offsetX,offsetY,dimensions.width,dimensions.height));
}



void ScrollLabel::update(float dt)
{
    bool isFinish = false;
    initWithTexture(viewTexture,CCRectMake(offsetX,offsetY,dimensions.width,dimensions.height));
    CCSize contentSize = viewTexture->getContentSize();
    //方向处理
    switch(this->direction){
        case 1: //向左
            offsetX += this->speed;
            if(offsetX >= contentSize.width){
                offsetX = -dimensions.width;
                isFinish = true;
            }
            break;
        case 2: //向右
            offsetX -= this->speed;
            if(offsetX <= 0){
                offsetX = -viewTexture->getContentSize().width;
                isFinish = true;
            }
            break;
        case 3: //向上
            offsetY += this->speed;
            break;
        case 4://向下
            offsetY -= this->speed;
            break;            
    }
    //回调
    if(isFinish){
        CCLuaEngine * m_engine = (CCLuaEngine*)CCScriptEngineManager::sharedManager()->getScriptEngine();
        if(m_engine && kScriptTypeNone != m_eScriptType && m_nScriptTapHandler != 0)
        {
            do
            {
                CC_BREAK_IF(0 == m_nScriptTapHandler);
                m_engine->getLuaStack()->clean();
                m_engine->getLuaStack()->executeFunctionByHandler(m_nScriptTapHandler, 0);
            } while (0);
        }
    }

}

void ScrollLabel::registerScriptTapHandler(LUA_FUNCTION handler)
{
    this->m_nScriptTapHandler = handler;
}

