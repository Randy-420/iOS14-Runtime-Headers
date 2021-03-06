/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:17 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UISheetPresentationController.h>
#import <UIKitCore/_UIStatusBarAnimationProviding.h>

@class UIStatusBarStyleAnimationParameters, UIStatusBarHideAnimationParameters, UIWindow, NSString;

@interface _UIRootPresentationController : _UISheetPresentationController <_UIStatusBarAnimationProviding> {

	UIWindow* _presentingWindow;

}

@property (nonatomic,__weak,readonly) UIWindow * presentingWindow;                                                                                                               //@synthesize presentingWindow=_presentingWindow - In the implementation block
@property (nonatomic,readonly) long long preferredStatusBarStyle; 
@property (nonatomic,readonly) int _preferredStatusBarVisibility; 
@property (getter=_preferredStatusBarStyleAnimationParameters,nonatomic,readonly) UIStatusBarStyleAnimationParameters * preferredStatusBarStyleAnimationParameters; 
@property (getter=_preferredStatusBarHideAnimationParameters,nonatomic,readonly) UIStatusBarHideAnimationParameters * preferredStatusBarHideAnimationParameters; 
@property (nonatomic,readonly) long long preferredStatusBarUpdateAnimation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_allowsDeferredTransitions;
-(BOOL)_isRootPresentation;
-(long long)preferredStatusBarStyle;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(long long)preferredStatusBarUpdateAnimation;
-(int)_preferredStatusBarVisibility;
-(id)_preferredStatusBarHideAnimationParameters;
-(id)initWithPresentedViewController:(id)arg1 presentingWindow:(id)arg2 ;
-(id)_parentTraitEnvironment;
-(UIWindow *)presentingWindow;
-(id)_preferredStatusBarStyleAnimationParameters;
-(id)_fullscreenPresentationSuperview;
-(BOOL)_mayChildGrabPresentedViewControllerView;
@end

