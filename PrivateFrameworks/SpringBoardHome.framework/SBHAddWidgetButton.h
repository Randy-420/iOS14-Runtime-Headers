/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIButton.h>

@class MTStylingProvidingSolidColorView, UIView;

@interface SBHAddWidgetButton : UIButton {

	MTStylingProvidingSolidColorView* _backgroundView;
	UIView* _highlightView;

}

@property (nonatomic,retain) MTStylingProvidingSolidColorView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIView * highlightView;                                         //@synthesize highlightView=_highlightView - In the implementation block
-(void)setHighlightView:(UIView *)arg1 ;
-(void)setBackgroundView:(MTStylingProvidingSolidColorView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(MTStylingProvidingSolidColorView *)backgroundView;
-(void)mt_removeAllVisualStyling;
-(void)mt_applyVisualStyling:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIView *)highlightView;
@end
