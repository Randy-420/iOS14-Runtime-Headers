/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIInputViewController.h>
#import <libobjc.A.dylib/SFAutomaticPasswordInputViewDelegate.h>
#import <libobjc.A.dylib/SFAutomaticPasswordInputViewSizing.h>

@class SFAutomaticPasswordInputView, NSString, NSLayoutConstraint;

@interface _SFAutomaticPasswordInputViewController : UIInputViewController <SFAutomaticPasswordInputViewDelegate, SFAutomaticPasswordInputViewSizing> {

	SFAutomaticPasswordInputView* _inputView;
	NSString* _password;
	CGSize _portraitKeyboardSize;
	CGSize _landscapeKeyboardSize;
	NSLayoutConstraint* _heightConstraint;
	long long _currentInterfaceOrientation;
	long long _keyboardType;
	BOOL _logGeneratedPasswordAcceptedImplicitly;
	NSString* _autoFillContextProtocolObjectUUID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)inputViewControllerWithAutoFillContext:(id)arg1 passwordRules:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)initWithPassword:(id)arg1 keyboardType:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(CGSize)_currentKeyboardSize;
-(void)_dismissKeyboard:(id)arg1 ;
-(BOOL)_inputViewControllerShouldDirectlyInsertPassword;
-(void)_updateKeyboardHeight;
-(void)inputViewControllerDidSelectUseStrongPassword:(id)arg1 ;
-(void)_postButtonPressedNotificationForButton:(long long)arg1 ;
-(void)_updateKeyboardMetricsAndInterfaceOrientationIfNeeded;
-(void)dismissKeyboardPreservingFirstResponderIfNecessary;
-(void)inputViewControllerDidSelectUseCustomPassword:(id)arg1 ;
-(CGSize)intrinsicContentSizeForInputView:(id)arg1 ;
@end
