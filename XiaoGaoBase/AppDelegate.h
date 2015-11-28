//
//  AppDelegate.h
//  XiaoGaoBase
//
//  Created by ios－54 on 15/11/28.
//  Copyright © 2015年 XiaoGao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property(nonatomic,getter=isOnLine) BOOL onLine; //网络状态

@end

