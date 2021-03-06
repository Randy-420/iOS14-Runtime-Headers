/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIStackView, NSMutableArray;

@interface WFRowOfIconsView : UIView {

	unsigned long long _maxNumberOfIcons;
	UIStackView* _stackView;
	NSMutableArray* _iconViews;
	double _height;

}

@property (nonatomic,readonly) unsigned long long maxNumberOfIcons;              //@synthesize maxNumberOfIcons=_maxNumberOfIcons - In the implementation block
@property (nonatomic,readonly) UIStackView * stackView;                          //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,readonly) NSMutableArray * iconViews;                       //@synthesize iconViews=_iconViews - In the implementation block
@property (nonatomic,readonly) double height;                                    //@synthesize height=_height - In the implementation block
-(UIStackView *)stackView;
-(void)setIcons:(id)arg1 ;
-(NSMutableArray *)iconViews;
-(unsigned long long)maxNumberOfIcons;
-(CGSize)intrinsicContentSize;
-(double)height;
-(id)initWithMaxNumberOfIcons:(unsigned long long)arg1 height:(double)arg2 ;
-(void)setHomeIcons:(id)arg1 ;
-(void)rebuildSubviewsForItems:(id)arg1 ;
@end

