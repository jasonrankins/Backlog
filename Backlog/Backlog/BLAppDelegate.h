//
//  BLAppDelegate.h
//  Backlog
//
//  Created by Jason Rankins on 3/13/13.
//  Copyright (c) 2013 Dessicant. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <RestKit/RestKit.h>

@interface BLAppDelegate : UIResponder <UIApplicationDelegate, UITabBarControllerDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) UITabBarController *tabBarController;

@end
