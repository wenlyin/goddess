//
//  ShaderShow.h
//  goddess
//
//  Created by rekoo on 13-8-20.
//
//

#ifndef __goddess__ShaderShow__
#define __goddess__ShaderShow__


#include "cocos2d.h"
#include "cocos-ext.h"

USING_NS_CC;
USING_NS_CC_EXT;

class ShaderShow : public CCSprite
{
public:
    ShaderShow();
    ~ShaderShow();
    
    bool initWithTexture(CCTexture2D* texture, const CCRect&  rect);
    void draw();
    void initProgram();
    void listenBackToForeground(CCObject *obj);
    
    static ShaderShow* create(const char *pszFileName,  const char * shaderfile);
    
private:
    std::string shaderFile;

};

#endif /* defined(__goddess__ShaderShow__) */




