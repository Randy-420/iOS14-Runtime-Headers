/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIInputViewController.h>

@class UIViewController, NSString;

@interface CKKeyboardContentViewController : UIInputViewController {

	UIViewController* _viewController;
	NSString* _identifier;

}

@property (nonatomic,retain) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(NSString *)identifier;
-(void)viewDidLayoutSubviews;
-(UIViewController *)viewController;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)viewDidLoad;
-(void)setViewController:(UIViewController *)arg1 ;
-(void)loadView;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)initWithViewController:(id)arg1 identifier:(id)arg2 ;
@end

