//
//  CCUtils.h
//  goddess_client
//
//  Created by 孙少磊 on 13-3-19.
//
//

#ifndef __goddess_client__CCUtils__
#define __goddess_client__CCUtils__

#include <sys/time.h>
#include "cocos2d.h"
#include "cocos-ext.h"
#include "DrawLayer.h"
extern "C"{
#include "md5.h"
}

typedef unsigned char byte;

USING_NS_CC;
USING_NS_CC_EXT;

class GoddessUtils{
public:
    static double millisecond();
    static void MDPrint (unsigned char *md5);
    static void MD5File(const char *filename, unsigned char *md5Value);
    static std::string bytesToHexString(const byte* input, size_t length);
    
    static bool isFileExist(char* strFilePath);
    static CCLabelTTF* createStrokeLabel(const ccColor3B& color, float strokeSize);
    static CCRenderTexture* createStroke(CCLabelTTF *label, float size, ccColor3B color);
    static CCTexture2D* createDrawSolidPoly(const CCPoint point1, const CCPoint point2,const CCPoint point3, const CCPoint point4, const CCPoint point5, ccColor4F color);
    static void stopAnimation();
    static void startAnimation();
private:
    GoddessUtils();
    
};

#endif /* defined(__goddess_client__CCUtils__) */
