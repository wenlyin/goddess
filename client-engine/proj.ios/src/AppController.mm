#import <UIKit/UIKit.h>
#import "AppController.h"
#import "cocos2d.h"
#import "EAGLView.h"
#import "AppDelegate.h"
#include "Notice.h"
#import "RootViewController.h"

#define HTTPFAIL 3

@implementation AppController

#pragma mark -
#pragma mark Application lifecycle

// cocos2d application instance
static AppDelegate s_sharedApplication;

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    
     [NSThread sleepForTimeInterval:3.0];
    
    // Override point for customization after application launch.
    // Register with apple that this app will use push notification
    if ([[UIDevice currentDevice].systemVersion floatValue] >= 8.0) {

        [[UIApplication sharedApplication] registerUserNotificationSettings:[UIUserNotificationSettings settingsForTypes:(UIUserNotificationTypeSound | UIUserNotificationTypeAlert | UIUserNotificationTypeBadge) categories:nil]];
        [[UIApplication sharedApplication] registerForRemoteNotifications];
    } else {
        [[UIApplication sharedApplication] registerForRemoteNotificationTypes:
        
        (UIUserNotificationTypeBadge | UIUserNotificationTypeSound | UIUserNotificationTypeAlert)];
    }
    [[UIApplication sharedApplication] setApplicationIconBadgeNumber:0];

    // Add the view controller's view to the window and display.
    window = [[UIWindow alloc] initWithFrame: [[UIScreen mainScreen] bounds]];
    EAGLView *__glView = [EAGLView viewWithFrame: [window bounds]
                                     pixelFormat: kEAGLColorFormatRGBA8
                                     depthFormat: GL_DEPTH_COMPONENT16
                              preserveBackbuffer: NO
                                      sharegroup: nil
                                   multiSampling: NO
                                 numberOfSamples: 0 ];

    [__glView setMultipleTouchEnabled:YES];
    // Use RootViewController manage EAGLView
    viewController = [[RootViewController alloc] initWithNibName:nil bundle:nil];
    viewController.wantsFullScreenLayout = YES;
    viewController.view = __glView;

    //[window addSubview: viewController.view];
    // Set RootViewController to window
    if ( [[UIDevice currentDevice].systemVersion floatValue] < 6.0)
    {
        // warning: addSubView doesn't work on iOS6
        [window addSubview: viewController.view];
    }
    else
    {
        // use this mehod on ios6
        [window setRootViewController:viewController];
    }
    
    [window makeKeyAndVisible];

    [[UIApplication sharedApplication] setStatusBarHidden: YES];
    [[UIApplication sharedApplication] setIdleTimerDisabled:YES];       // 不进入锁屏状态
    
    cocos2d::CCApplication::sharedApplication()->run();
    return YES;
}

- (void)applicationWillResignActive:(UIApplication *)application {
    NSLog(@"application will resign active");
}

- (void)applicationDidBecomeActive:(UIApplication *)application {
    [[UIApplication sharedApplication] setApplicationIconBadgeNumber:0];
    NSLog(@"application will become active");
}

- (void)applicationDidEnterBackground:(UIApplication *)application {
    NSLog(@"application will enter background");
    cocos2d::CCApplication::sharedApplication()->applicationDidEnterBackground();
}

- (void)applicationWillEnterForeground:(UIApplication *)application {
    NSLog(@"application will enter foreground");
    cocos2d::CCApplication::sharedApplication()->applicationWillEnterForeground();
}

- (void)applicationWillTerminate:(UIApplication *)application {
    CCLuaEngine* pEngine = CCLuaEngine::defaultEngine();
    pEngine->executeGlobalFunction("applicationWillTerminate");
}

#pragma mark -
#pragma mark Memory management

- (void)applicationDidReceiveMemoryWarning:(UIApplication *)application {
//     cocos2d::CCDirector::sharedDirector()->purgeCachedData();
}


- (void)dealloc {
    [super dealloc];
}


#ifdef __IPHONE_8_0
- (void)application:(UIApplication *)application didRegisterUserNotificationSettings:(UIUserNotificationSettings *)notificationSettings
{
    [application registerForRemoteNotifications];
}
#endif

 
@end

