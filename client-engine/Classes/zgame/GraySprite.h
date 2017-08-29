//
//  GraySprite.h
//  goddess
//
//  Created by rekoo on 13-7-23.
//
//

#ifndef __goddess__GraySprite__
#define __goddess__GraySprite__

#include "cocos2d.h"
#include "cocos-ext.h"

USING_NS_CC;
USING_NS_CC_EXT;

class GraySprite : public CCSprite
{
public:
    GraySprite();
    ~GraySprite();
    
    bool initWithTexture(CCTexture2D* texture, const CCRect&  rect);
    void draw();
    void initProgram();
    void listenBackToForeground(CCObject *obj);
    
    static GraySprite* create(const char *pszFileName);
    
    static void setGray(CCSprite * spr, int gray, float alpha = 1.0); //gary 1为灰度图，0为原图
    // static void setGrayAlpha(CCSprite * spr, int gray, int alpha);
private:
   };

#endif /* defined(__goddess__GraySprite__) */
