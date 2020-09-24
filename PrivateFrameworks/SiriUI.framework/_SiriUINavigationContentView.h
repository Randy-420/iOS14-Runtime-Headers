/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface _SiriUINavigationContentView : UIView {

	BOOL _contentLayoutEnabled;
	UIView* _contentView;

}

@property (nonatomic,retain) UIView * contentView;                                                 //@synthesize contentView=_contentView - In the implementation block
@property (assign,getter=isContentLayoutEnabled,nonatomic) BOOL contentLayoutEnabled;              //@synthesize contentLayoutEnabled=_contentLayoutEnabled - In the implementation block
-(UIView *)contentView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setContentView:(UIView *)arg1 ;
-(BOOL)isContentLayoutEnabled;
-(void)setContentLayoutEnabled:(BOOL)arg1 ;
@end
