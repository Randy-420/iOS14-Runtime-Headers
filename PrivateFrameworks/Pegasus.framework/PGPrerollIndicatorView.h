/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Pegasus/Pegasus-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PGButtonViewDelegate.h>

@class PGControlsViewModel, UILabel, PGButtonView, PGDisplayLink, NSString;

@interface PGPrerollIndicatorView : UIView <PGButtonViewDelegate> {

	PGControlsViewModel* _viewModel;
	UILabel* _contentTypeLabel;
	PGButtonView* _skipPrerollButtonView;
	PGDisplayLink* _displayLink;
	CGSize _labelSize;

}

@property (nonatomic,readonly) PGControlsViewModel * viewModel;                   //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) UILabel * contentTypeLabel;                        //@synthesize contentTypeLabel=_contentTypeLabel - In the implementation block
@property (nonatomic,readonly) PGButtonView * skipPrerollButtonView;              //@synthesize skipPrerollButtonView=_skipPrerollButtonView - In the implementation block
@property (nonatomic,copy) NSString * labelText; 
@property (nonatomic,copy) NSString * timeRemainingText; 
@property (assign,nonatomic) CGSize labelSize;                                    //@synthesize labelSize=_labelSize - In the implementation block
@property (nonatomic,readonly) PGDisplayLink * displayLink;                       //@synthesize displayLink=_displayLink - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)preferredHeight;
-(void)dealloc;
-(void)layoutSubviews;
-(NSString *)labelText;
-(PGControlsViewModel *)viewModel;
-(CGSize)labelSize;
-(void)setLabelText:(NSString *)arg1 ;
-(double)labelWidth;
-(PGDisplayLink *)displayLink;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setLabelSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 viewModel:(id)arg2 ;
-(void)updateValues;
-(void)setTimeRemainingText:(NSString *)arg1 ;
-(UILabel *)contentTypeLabel;
-(void)_layoutContentTypeLabel;
-(NSString *)timeRemainingText;
-(void)_layoutSkipPrerollButton;
-(CGAffineTransform)_subviewTransform;
-(void)buttonViewDidReceiveTouchUpInside:(id)arg1 ;
-(CGRect)buttonView:(id)arg1 imageRectForContentRect:(CGRect)arg2 proposedRect:(CGRect)arg3 ;
-(CGRect)buttonView:(id)arg1 titleRectForContentRect:(CGRect)arg2 proposedRect:(CGRect)arg3 ;
-(UIEdgeInsets)buttonView:(id)arg1 contentEdgeInsetsForProposedInsets:(UIEdgeInsets)arg2 ;
-(PGButtonView *)skipPrerollButtonView;
@end

