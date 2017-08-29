//
//  ColorOffsetSprite.h
//  goddess
//
//  Created by rekoo on 13-7-24.
//
//

#ifndef __goddess__ColorOffsetSprite__
#define __goddess__ColorOffsetSprite__



#include "cocos2d.h"
#include "cocos-ext.h"

USING_NS_CC;
USING_NS_CC_EXT;

class ColorOffsetSprite : public CCSprite
{
public:
    ColorOffsetSprite();
    ~ColorOffsetSprite();
    
    bool initWithTexture(CCTexture2D* texture, const CCRect&  rect);
    void draw();
    void initProgram();
    void listenBackToForeground(CCObject *obj);
    
    static ColorOffsetSprite* create(const char *pszFileName);
    
    static void setColorOffset(CCSprite * spr, float r,float g, float b, float a, int model);
    
private:
    
};



#endif /* defined(__goddess__ColorOffsetSprite__) */
