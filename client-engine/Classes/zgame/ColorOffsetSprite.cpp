//
//  ColorOffsetSprite.cpp
//  goddess
//
//  Created by rekoo on 13-7-24.
//
//

#include "ColorOffsetSprite.h"


// 变色的shader，
// 用法：setColorOffset（CCSprite * sp , float r, float g, float b, float a  , int model）
//r, g, b ,a 范围0.0-1.0 , 如果是-1.0 ， 那么就说明采用原值（图片该点rgba分量值）
// model 1.0 为 颜色增加， 0.0 为颜色替换




ColorOffsetSprite::ColorOffsetSprite()
{
}
ColorOffsetSprite::~ColorOffsetSprite()
{
}

ColorOffsetSprite* ColorOffsetSprite::create(const char *pszFileName)
{
    ColorOffsetSprite* pRet = new ColorOffsetSprite();
    if (pRet && pRet->initWithFile(pszFileName))
    {
        pRet->autorelease();
    }
    else
    {
        CC_SAFE_DELETE(pRet);
    }
    
    return pRet;
}

void ColorOffsetSprite::listenBackToForeground(CCObject *obj)
{
    setShaderProgram(NULL);
    initProgram();
}

bool ColorOffsetSprite::initWithTexture(CCTexture2D* texture, const CCRect& rect)
{
    if( CCSprite::initWithTexture(texture, rect) )
    {
        
        CCSize s = getTexture()->getContentSizeInPixels();
        
       // this->initProgram();
        
        return true;
    }
    
    return false;
}

//函数使用说明：
//r, g, b ,a 范围0.0-1.0 , 如果是-1.0 ， 那么就说明采用原值（图片该点rgba分量值）
// model 1.0 为 颜色增加， 0.0 为颜色替换

void ColorOffsetSprite::setColorOffset(CCSprite * spr, float r,float g, float b, float a, int model){
    CCGLProgram *p = new CCGLProgram();
//    //原图
//   const GLchar * ptexture =   "#ifdef GL_ES \n \
//    precision mediump float; \n \
//    #endif \n\
//    uniform sampler2D u_texture; \n \
//    varying vec2 v_texCoord; \n \
//    varying vec4 v_fragmentColor; \n \
//    void main(void) \n \
//    { \n \
//        gl_FragColor = texture2D(u_texture, v_texCoord); \n \
//    } ";

    
    //变色的shader
    const GLchar * pColor =    "#ifdef GL_ES \n \
    precision mediump float; \n \
    #endif \n\
    uniform sampler2D u_texture; \n \
    varying vec2 v_texCoord; \n \
    varying vec4 v_fragmentColor; \n \
    uniform vec4 z_color; \n\
    uniform float z_model; \n\
    \n\
    void main(void) \n \
    { \n \
    float r = texture2D(u_texture, v_texCoord).r; \n \
    float g = texture2D(u_texture, v_texCoord).g; \n \
    float b = texture2D(u_texture, v_texCoord).b; \n \
    float a = texture2D(u_texture, v_texCoord).a; \n \
    if(a != 0.0)    //have color   \n\
    {                               \n\
        float rr = z_color.x;      \n\
        float gg = z_color.y;     \n\
        float bb = z_color.z;      \n\
        float aa = z_color.w ;       \n\
                                       \n\
        if (z_model == 0.0){ // replace   \n\
            if (rr == -1.0)       \n\
                rr = r;       \n\
            if (gg == -1.0)       \n\
                gg = g;       \n\
            if (bb == -1.0)       \n\
                bb = b;       \n\
            if (aa == -1.0)       \n\
                aa = a;       \n\
                            \n\
            gl_FragColor = vec4(rr, gg, bb, aa); \n \
        }else {   //color add  \n\
            if (rr == -1.0)       \n\
                rr = 0.0;       \n\
            if (gg == -1.0)       \n\
                gg = 0.0;       \n\
            if (bb == -1.0)       \n\
                bb = 0.0;       \n\
            if (aa == -1.0)       \n\
                aa = 0.0;       \n\
                                \n\
            gl_FragColor = vec4(r+rr, g+gg, b+bb, a+aa); \n \
        }\n\
           \n\
    } \n\
    else \n \
        gl_FragColor = texture2D(u_texture, v_texCoord); \n \
        \n\
    } ";
   
//    if (r == -1 && g == -1 &&b == -1 &&a == -1 )
//        p->initWithVertexShaderByteArray(ccPositionTexture_vert, ptexture);//都是-1， 采用原图
//    else
        p->initWithVertexShaderByteArray(ccPositionTexture_vert, pColor);
    
    
    p->addAttribute(kCCAttributeNamePosition, kCCVertexAttrib_Position);
    p->addAttribute(kCCAttributeNameTexCoord, kCCVertexAttrib_TexCoords);
    
    p->link();
    p->updateUniforms();
    
    spr->setShaderProgram(p);
    p->release();
    
    GLuint subColor = glGetUniformLocation( spr->getShaderProgram()->getProgram(), "z_color");
    GLuint subModel = glGetUniformLocation( spr->getShaderProgram()->getProgram(), "z_model");
    
    GLfloat  sub_[4];
    sub_[0] = r;
    sub_[1] = g;
    sub_[2] = b;
    sub_[3] = a;

  //  CCLOG("r %f g %f b %f a %f" ,r,g,b,a);
    
    spr->getShaderProgram()->setUniformLocationWith4fv(subColor, sub_, 1);  //传递vec4
    spr->getShaderProgram()->setUniformLocationWith1f(subModel, (GLfloat)model);   //传递一个float
    
}

void ColorOffsetSprite::initProgram()
{
       
//    CCGLProgram* pProgram = new CCGLProgram();
//    pProgram->initWithVertexShaderByteArray(ccPositionTextureColor_vert, pColor);
//    setShaderProgram(pProgram);
//    pProgram->release();
//    
//    CHECK_GL_ERROR_DEBUG();
//    
//    getShaderProgram()->addAttribute(kCCAttributeNamePosition, kCCVertexAttrib_Position);
//    getShaderProgram()->addAttribute(kCCAttributeNameColor, kCCVertexAttrib_Color);
//    getShaderProgram()->addAttribute(kCCAttributeNameTexCoord, kCCVertexAttrib_TexCoords);
//    
//    CHECK_GL_ERROR_DEBUG();
//    
//    getShaderProgram()->link();
//    
//    CHECK_GL_ERROR_DEBUG();
//    
//    getShaderProgram()->updateUniforms();
    
}

void ColorOffsetSprite::draw()
{
    ccGLEnableVertexAttribs(kCCVertexAttribFlag_PosColorTex );
    ccBlendFunc blend = getBlendFunc();
    ccGLBlendFunc(blend.src, blend.dst);
    
    getShaderProgram()->use();
    getShaderProgram()->setUniformsForBuiltins();
    
    
    ccGLBindTexture2D( getTexture()->getName());
    
    //
    // Attributes
    //
#define kQuadSize sizeof(m_sQuad.bl)
    long offset = (long)&m_sQuad;
    
    // vertex
    int diff = offsetof( ccV3F_C4B_T2F, vertices);
    glVertexAttribPointer(kCCVertexAttrib_Position, 3, GL_FLOAT, GL_FALSE, kQuadSize, (void*) (offset + diff));
    
    // texCoods
    diff = offsetof( ccV3F_C4B_T2F, texCoords);
    glVertexAttribPointer(kCCVertexAttrib_TexCoords, 2, GL_FLOAT, GL_FALSE, kQuadSize, (void*)(offset + diff));
    
    // color
    diff = offsetof( ccV3F_C4B_T2F, colors);
    glVertexAttribPointer(kCCVertexAttrib_Color, 4, GL_UNSIGNED_BYTE, GL_TRUE, kQuadSize, (void*)(offset + diff));
    
    
    glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);
    
    CC_INCREMENT_GL_DRAWS(1);
}


