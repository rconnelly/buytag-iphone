//
//  BTITabBarController.h
//  BuyTag
//
//  Created by Ryan Connelly on 1/3/13.
//  Copyright (c) 2013 Buytag, inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BTITabBarController : UITabBarController <UITabBarControllerDelegate>

- (void) showViewController:(UIViewController *)viewController;

@end
