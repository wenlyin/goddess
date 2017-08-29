//
//  ShaderShow.cpp
//  goddess
//
//  Created by rekoo on 13-8-20.
//
//

#include "ShaderShow.h"


ShaderShow::ShaderShow()
{
}
ShaderShow::~ShaderShow()
{
}

ShaderShow* ShaderShow::create(const char *pszFileName ,  const char * shaderfile)
{
    ShaderShow* pRet = new ShaderShow();
    pRet->shaderFile = shaderfile;
    
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

void ShaderShow::listenBackToForeground(CCObject *obj)
{
    setShaderProgram(NULL);
    initProgram();
}

bool ShaderShow::initWithTexture(CCTexture2D* texture, const CCRect& rect)
{
    if( CCSprite::initWithTexture(texture, rect) )
    {
        
        CCSize s = getTexture()->getContentSizeInPixels();
        
        this->initProgram();
        
        return true;
    }
    
    return false;
}

//void ShaderShow::setGray(CCSprite * spr, int gray, int alpha){
//    CCGLProgram *p = new CCGLProgram();
//    const GLchar * ptexture ="#ifdef GL_ES \n \
//    precision mediump float; \n \
//    #endif \n\
//    uniform sampler2D u_texture; \n \
//    varying vec2 v_texCoord; \n \
//    varying vec4 v_fragmentColor; \n \
//    void main(void) \n \
//    { \n \
//    gl_FragColor = texture2D(u_texture, v_texCoord); \n \
//    } ";
//    
//    
//    
//    if (gray ==1)
//        p->initWithVertexShaderByteArray(ccPositionTexture_vert, pgray);
//    else
//        p->initWithVertexShaderByteArray(ccPositionTexture_vert, ptexture);
//    
//    
//    p->addAttribute(kCCAttributeNamePosition, kCCVertexAttrib_Position);
//    p->addAttribute(kCCAttributeNameTexCoord, kCCVertexAttrib_TexCoords);
//    
//    p->link();
//    p->updateUniforms();
//    
//    spr->setShaderProgram(p);
//    
//    p->release();
//    
//    
//    GLuint subAlpha = glGetUniformLocation( spr->getShaderProgram()->getProgram(), "z_alpha");
//    spr->getShaderProgram()->setUniformLocationWith1f(subAlpha, (GLfloat)alpha);   //传递一个float
//    
//}

void ShaderShow::initProgram()
{
       GLchar * fragSource = (GLchar*) CCString::createWithContentsOfFile(
       CCFileUtils::sharedFileUtils()->fullPathForFilename(shaderFile.c_str()).c_str())->getCString();
    
    
    CCGLProgram* pProgram = new CCGLProgram();
    pProgram->initWithVertexShaderByteArray(ccPositionTextureColor_vert, fragSource);
    setShaderProgram(pProgram);
    pProgram->release();
    
    CHECK_GL_ERROR_DEBUG();
    
    getShaderProgram()->addAttribute(kCCAttributeNamePosition, kCCVertexAttrib_Position);
    getShaderProgram()->addAttribute(kCCAttributeNameColor, kCCVertexAttrib_Color);
    getShaderProgram()->addAttribute(kCCAttributeNameTexCoord, kCCVertexAttrib_TexCoords);
    
    CHECK_GL_ERROR_DEBUG();
    
    getShaderProgram()->link();
    
    CHECK_GL_ERROR_DEBUG();
    
    getShaderProgram()->updateUniforms();
    
}

void ShaderShow::draw()
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


