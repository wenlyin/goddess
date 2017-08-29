//
//  ProgressBar.h
//  goddess
//
//  Created by 邓 建新 on 13-5-9.
//
//

#ifndef __goddess__ProgressBar__
#define __goddess__ProgressBar__

#include <iostream>
#include <sstream>
#include <fstream>
#include <stdlib.h>
#include "time.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "CCLuaEngine.h"
#include "CCDirector.h"
#include "misc_nodes/CCProgressTimer.h"
#include "GoddessUtils.h"
#include "ZgameAnimation.h"

USING_NS_CC;
USING_NS_CC_EXT;



class ProgressBar: public CCLayer {
public:
    ProgressBar();
    ~ProgressBar();
    //设置进条数据
    void setPercentage(float value);
    void setTipText(int tipType);
private:
    
    CCProgressTimer* progressTime;
    CCLabelTTF* tipLabel;
    CCScene* scene;
    CCLayerColor* bgLayer;
    CCSprite* barBg;
    CCSprite* progressBar;
    CCLabelTTF* percentageTTF;    
    ZgameAnimation *animation;
    float barWidth;
    float offsetx;
    
    
    int getRandom(int min, int max){
        int ra = std::rand();
        return (ra % (max - min)) + min;
    }
};

#endif /* defined(__goddess__ProgressBar__) */
