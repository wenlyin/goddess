//
//  PlatformCommon.h
//  Goddess
//
//  Created by wenly on 15/3/31.
//
//

#ifndef Goddess_PlatformCommon_h
#define Goddess_PlatformCommon_h

#include "cocos2d.h"

USING_NS_CC;

typedef enum {
    NETWORK_TYPE_NONE= 0,
    NETWORK_TYPE_WIFI= 1,
    NETWORK_TYPE_MOBIE= 2,
}NETWORK_TYPE;

class PlatformCommon{
public:
    ~PlatformCommon();
    static PlatformCommon* getInstance(){
        static PlatformCommon _instance;
        return &_instance;
    };
    
    void checkNetWorkTypeAndAlert();

private:
    PlatformCommon();
    
};
#endif
