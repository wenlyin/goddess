//
//  DrawLayer.cpp
//  Goddess
//
//  Created by 邓 建新 on 14-6-20.
//
//

#include "DrawLayer.h"

DrawLayer::DrawLayer()
{
}

DrawLayer::~DrawLayer()
{
   
}

DrawLayer* DrawLayer::create(){
    DrawLayer *pRet = new DrawLayer();
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


void DrawLayer::draw(){
    if(&this->point1 == NULL){return;}    
    glLineWidth(1);
    CCPoint filledVertices[] = { point1, point2, point3, point4, point5 };
    ccDrawSolidPoly(filledVertices, 5, ccc4f(255,255,255, 1 ) );
    CHECK_GL_ERROR_DEBUG();
}

CCTexture2D* DrawLayer::getTexture(){
    CCRenderTexture* rt = CCRenderTexture::create(198, 198);
    rt->retain();
    rt->begin();
    this->visit();
    rt->end();
    return rt->getSprite()->getTexture();
}



