/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/WFActionEventObserver.h>

@protocol WFModuleTitleViewDelegate;
@class WFAction, WFModuleTitleButton, UIButton, NSString;

@interface WFModuleTitleView : UIView <WFActionEventObserver> {

	BOOL _hideSubtitle;
	id<WFModuleTitleViewDelegate> _delegate;
	WFAction* _action;
	unsigned long long _accessoryMode;
	unsigned long long _style;
	WFModuleTitleButton* _titleButton;
	UIButton* _handoffButton;
	UIButton* _installButton;

}

@property (nonatomic,__weak,readonly) WFModuleTitleButton * titleButton;                 //@synthesize titleButton=_titleButton - In the implementation block
@property (assign,nonatomic,__weak) UIButton * handoffButton;                            //@synthesize handoffButton=_handoffButton - In the implementation block
@property (assign,nonatomic,__weak) UIButton * installButton;                            //@synthesize installButton=_installButton - In the implementation block
@property (assign,nonatomic,__weak) id<WFModuleTitleViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) WFAction * action;                                          //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) unsigned long long accessoryMode;                           //@synthesize accessoryMode=_accessoryMode - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                   //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL hideSubtitle;                                          //@synthesize hideSubtitle=_hideSubtitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)viewHeight;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(id)initWithFrame:(CGRect)arg1 ;
-(WFAction *)action;
-(void)dealloc;
-(unsigned long long)style;
-(void)layoutSubviews;
-(void)setDelegate:(id<WFModuleTitleViewDelegate>)arg1 ;
-(id)accessibilityCustomActions;
-(void)setAction:(WFAction *)arg1 ;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(id<WFModuleTitleViewDelegate>)delegate;
-(void)updateFont;
-(unsigned long long)accessibilityTraits;
-(WFModuleTitleButton *)titleButton;
-(void)setStyle:(unsigned long long)arg1 ;
-(UIButton *)installButton;
-(void)setInstallButton:(UIButton *)arg1 ;
-(void)setHideSubtitle:(BOOL)arg1 ;
-(BOOL)hideSubtitle;
-(void)actionNameDidChange:(id)arg1 ;
-(double)imageViewWidth;
-(void)configureWithTitle:(id)arg1 subtitle:(id)arg2 applicationBundleIdentifer:(id)arg3 ;
-(void)setAccessoryMode:(unsigned long long)arg1 ;
-(void)installButtonPressed:(id)arg1 ;
-(void)handoffButtonPressed:(id)arg1 ;
-(BOOL)installAction;
-(BOOL)toggleFavorited;
-(unsigned long long)accessoryMode;
-(UIButton *)handoffButton;
-(void)setHandoffButton:(UIButton *)arg1 ;
@end
