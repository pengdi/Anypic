//
//  PAPLogInViewController.h
//  Anypic
//
//  Created by Mattieu Gamache-Asselin on 5/17/12.
//  Copyright (c) 2013 Parse. All rights reserved.
//

#import <FBSDKLoginKit/FBSDKLoginKit.h>

@protocol PAPLogInViewControllerDelegate;

@interface PAPLogInViewController : UIViewController <FBSDKLoginButtonDelegate>

@property (nonatomic, assign) id<PAPLogInViewControllerDelegate> delegate;

@end

@protocol PAPLogInViewControllerDelegate <NSObject>

- (void)logInViewControllerDidLogUserIn:(PAPLogInViewController *)logInViewController;

@end