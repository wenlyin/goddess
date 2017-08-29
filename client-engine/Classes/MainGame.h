//
//  MainGame.h
//  Project
//
//  Created by 孙 少磊 on 13-1-8.
//
//

#ifndef __Project__MainGame__
#define __Project__MainGame__

#include <fstream>
#include "gameLoader/ProgressBar.h"


class MainGame:public CCObject{
private:
    MainGame();
    ~MainGame();
    
public:
    static MainGame* GetInstance();
    void startGame();
    void playGameVideo();
    void startScene();
    void doFinishPlayVideo();
    void applicationWillEnterForeground();
    void applicationDidEnterBackground();
    
    void updateFinish();
    void clientExpired();
    void loaderLoginResource(float dt);
    
public:
    ProgressBar *progress;
    void *resourceManager;

private:
    FILE *log;
};
#endif /* defined(__Project__MainGame__) */
