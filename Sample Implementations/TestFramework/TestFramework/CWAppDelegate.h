//
//  CWAppDelegate.h
//  TestFramework
//
//  Created by Cory D. Wiles on 2/13/12.
//  Copyright (c) 2012 VW. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CWViewController;

@interface CWAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) CWViewController *viewController;

@end
