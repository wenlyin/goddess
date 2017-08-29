//
//  ProgressBar.cpp
//  goddess
//
//  Created by 邓 建新 on 13-5-9.
//
//

#include "ProgressBar.h"

ProgressBar::ProgressBar(){
    
//    std::string arr[25];
//    
//    std::string path = CCFileUtils::sharedFileUtils()->fullPathForFilename("loader/loaderTip.ini");
//    std::fstream _file;
//    _file.open(path.c_str(), std::ios::in);
//    
//    
//    int pos = 0;
//    // 读取本地资源列表并解析成map结构，用来和网络map比较
//    while(getline(_file, arr[pos])){
//        pos++;
//    }
//    _file.close();

    
    CCSize size = CCDirector::sharedDirector()->getVisibleSize();
    
    CCNodeLoaderLibrary * ccNodeLoaderLibrary = CCNodeLoaderLibrary::newDefaultCCNodeLoaderLibrary();
    
    cocos2d::extension::CCBReader * ccbReader = new cocos2d::extension::CCBReader(ccNodeLoaderLibrary);
    
    ccbReader->autorelease();
    
    /*读取一个ccbi的文件,生成一个CCNode实例*/
    
    CCNode *cnode = ccbReader->readNodeGraphFromFile("loader/LoaderUI.ccbi", this);
    
    CCLayerColor* bgLayer = CCLayerColor::create(ccc4(255, 0, 0, 0),size.width,size.height);

    bgLayer->addChild(cnode);
    
    float scaleSize = size.width / 960 * 0.9;      //设计大小的百分之90
   
//	 添加进度条背景
	CCSprite* barBg = CCSprite::create("loader/ProgressBackage.png");
    barBg->setPosition(ccp(size.width/2, 70));
    barBg->setScaleX(scaleSize);
    bgLayer->addChild(barBg);
    
    barWidth = barBg->getContentSize().width * scaleSize;
    offsetx = (size.width - barWidth) / 2;

    
//	添加进度条
	progressTime = CCProgressTimer::create(CCSprite::create("loader/ProgressBar.png"));
	progressTime->setType(kCCProgressTimerTypeBar);
	progressTime->setMidpoint(ccp(0,0));
	progressTime->setBarChangeRate(ccp(1,0));
	progressTime->setPosition(ccp(size.width/2, 70));
    progressTime->setScaleX(scaleSize);
    bgLayer->addChild(progressTime);
    
    
//	 添加提示语
//    int time = GoddessUtils::millisecond();
//    std::srand((time*100000000)%100000000);
//    int index = getRandom(1, pos-1);
//	tipLabel = CCLabelTTF::create(arr[index].c_str(), "Arial", 28);
    tipLabel = CCLabelTTF::create("", "Arial", 28);
	tipLabel->setPosition(ccp(size.width/2, 30));
    bgLayer->addChild(tipLabel);
    setTipText(1);
    
//  添加百分比
	percentageTTF = CCLabelTTF::create("0%", "Arial", 28);
	percentageTTF->setPosition(ccp(size.width/2, 70));
    bgLayer->addChild(percentageTTF);
    
//    添加人物动画
    animation = ZgameAnimation::create();
    animation->LoadAnimation("loader.dat", "loader/");
    animation->SetAutoDraw();
    animation->setPosition(offsetx, 100);
    bgLayer->addChild(animation);
    
//	显示
	scene = CCScene::create();
    scene->addChild(bgLayer);
	CCScene* runningScene = CCDirector::sharedDirector()->getRunningScene();
    if (runningScene == NULL){
        CCDirector::sharedDirector()->runWithScene(scene);
    }else{
        CCTransitionFade* transScene = CCTransitionFade::create(0.5, scene, ccc3(0, 0, 0));
        CCDirector::sharedDirector()->replaceScene(transScene);
    }
}



ProgressBar::~ProgressBar(){
    
}

void ProgressBar::setPercentage(float value){
    progressTime->setPercentage(value);
    percentageTTF->setString(CCString::createWithFormat("%d％",int(value))->getCString());
    animation->setPosition(offsetx + barWidth * value * 0.01 , 100);
}


void ProgressBar::setTipText(int tipType){
    switch(tipType){
        case 1:
            tipLabel->setString("正在检查资源...");
            break;
        case 2:
            tipLabel->setString("正在加载资源...");
            break;
        case 3:
            tipLabel->setString("游戏初始化...");
            break;
    }
}
