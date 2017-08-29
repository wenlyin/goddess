
//
//  CCUtils.cpp
//  goddess_client
//
//  Created by 孙少磊 on 13-3-19.
//
//

#include "GoddessUtils.h"

const char HEX[16] = {
    '0', '1', '2', '3',
    '4', '5', '6', '7',
    '8', '9', 'a', 'b',
    'c', 'd', 'e', 'f'
};

double GoddessUtils::millisecond(){
    struct timeval tm;
    double ms;
    gettimeofday(&tm, NULL);
    ms = tm.tv_sec + tm.tv_usec / 1000000.0;
    return ms ;
}

void GoddessUtils::MDPrint (unsigned char *md5)
{
    int i;
    
    for (i = 0; i < 16; i++)
        printf ("%02x \n", md5[i]);
    printf("\n");
}

void GoddessUtils::MD5File(const char *filename, unsigned char *md5Value)
{
    FILE *inFile = fopen (filename, "rb");

    int bytes;
    unsigned char data[1024];
    
    if (inFile == NULL) {
        printf ("%s can't be opened.\n", filename);
        return;
    }
    
    MD5_CTX mdContext;
    Goddess_MD5_Init(&mdContext);
    while ((bytes = fread (data, 1, 1024, inFile)) != 0)
        Goddess_MD5_Update(&mdContext, data, bytes);
    Goddess_MD5_Final(md5Value, &mdContext);
    fclose (inFile);
}

/* Convert byte array to hex string. */
std::string GoddessUtils::bytesToHexString(const byte* input, size_t length) {

    std::string str;
    str.reserve(length << 1);
    for (size_t i = 0; i < length; ++i) {
        int t = input[i];
        int a = t / 16;
        int b = t % 16;
        str.append(1, HEX[a]);
        str.append(1, HEX[b]);
    }
    return str;
}

// 怎一声叹息了得
// Lua要调用，无耐没公开isFileExist方法
bool GoddessUtils::isFileExist(char* strFilePath){
    return CCFileUtils::sharedFileUtils()->isFileExist(CCFileUtils::sharedFileUtils()->fullPathForFilename(strFilePath));
}

/**
 *创建一个可描边的label
 **/
CCLabelTTF* GoddessUtils::createStrokeLabel(const ccColor3B& color, float strokeSize){
    CCLabelTTF* label = CCLabelTTF::create();
    label->enableStroke(color, strokeSize);
    //label->disableStroke(true);
    return label;
}

CCRenderTexture* GoddessUtils::createStroke(CCLabelTTF *label, float size, ccColor3B color)
{
    float x=label->getTexture()->getContentSize().width+size*2;
    float y=label->getTexture()->getContentSize().height+size*2;
    CCRenderTexture *rt=CCRenderTexture::create(x, y);
    CCPoint originalPos=label->getPosition();
    ccColor3B originalColor=label->getColor();
    label->setColor(color);
    ccBlendFunc originalBlend=label->getBlendFunc();
    label->setBlendFunc((ccBlendFunc){GL_SRC_ALPHA,GL_ONE});
    CCPoint center=ccp(x/2+size, y/2+size);
    rt->begin();
    for (int i=0; i<360; i+=15) {
        float _x=center.x+sin(CC_DEGREES_TO_RADIANS(i))*size;
        float _y=center.y+cos(CC_DEGREES_TO_RADIANS(i))*size;
        
        label->setPosition(ccp(_x, _y));
        label->visit();
        
    }
    rt->end();
    label->setPosition(originalPos);
    label->setColor(originalColor);
    label->setBlendFunc(originalBlend);
    float rtX=originalPos.x-size;
    float rtY=originalPos.y-size;
    
    rt->setPosition(ccp(rtX, rtY));
    
    return rt;
}

CCTexture2D* GoddessUtils::createDrawSolidPoly(const CCPoint point1, const CCPoint point2, const CCPoint point3, const CCPoint point4, const CCPoint point5, ccColor4F color)
{
    DrawLayer* layer = DrawLayer::create();
    layer->point1 = point1;
    layer->point2 = point2;
    layer->point3 = point3;
    layer->point4 = point4;
    layer->point5 = point5;    
    CCTexture2D* pTexture = layer->getTexture();
    delete layer;
    return pTexture;
}

// cocos2dx没有暴露这俩接口给lua用，无奈，自己暴露
void GoddessUtils::stopAnimation(){
    printf("stop Animation\n");
    CCDirector::sharedDirector()->stopAnimation();
}

void GoddessUtils::startAnimation(){
    printf("start Animation\n");
    CCDirector::sharedDirector()->startAnimation();
}
