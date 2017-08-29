//
//  DrawLayer.h
//  Goddess
//
//  Created by 邓 建新 on 14-6-20.
//
//

#ifndef __Goddess__DrawLayer__
#define __Goddess__DrawLayer__


#include "cocos2d.h"
#include "cocos-ext.h"
#include "CCLuaEngine.h"

USING_NS_CC;
using namespace cocos2d;


class DrawLayer:public CCLayer{
public:
    DrawLayer();
    ~DrawLayer();
    static DrawLayer* create();
    CCTexture2D* getTexture();
    virtual void draw();
    CCPoint point1;
    CCPoint point2;
    CCPoint point3;
    CCPoint point4;
    CCPoint point5;
private:
    
};

#endif /* defined(__Goddess__DrawLayer__) */
