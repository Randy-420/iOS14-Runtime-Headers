/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol SKRemoteDismissingViewController;
@class UIViewController, NSString;

@interface SKRemoteDismissingTransition : NSObject <UIViewControllerAnimatedTransitioning> {

	UIViewController*<SKRemoteDismissingViewController> _viewController;

}

@property (assign,nonatomic,__weak) UIViewController*<SKRemoteDismissingViewController> viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIViewController*<SKRemoteDismissingViewController>)viewController;
-(id)initWithViewController:(id)arg1 ;
-(void)setViewController:(UIViewController*<SKRemoteDismissingViewController>)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)dismissRemoteViewController:(id)arg1 ;
@end
