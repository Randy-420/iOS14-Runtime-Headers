/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKit/StoreKit-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIImageView, UILabel, NSString;

@interface SKStarRatingControl : UIControl {

	UIImageView* _backgroundImageView;
	UILabel* _explanationLabel;
	UIImageView* _foregroundImageView;
	CGSize _hitPadding;
	double _starWidth;
	CGPoint _trackingLastPoint;
	CGPoint _trackingStartPoint;
	float _value;

}

@property (nonatomic,copy) NSString * explanationText; 
@property (assign,nonatomic) double starWidth;                      //@synthesize starWidth=_starWidth - In the implementation block
@property (assign,nonatomic) float value; 
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(CGRect)hitRect;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)sizeToFit;
-(void)setExplanationText:(NSString *)arg1 ;
-(void)setValue:(float)arg1 ;
-(NSString *)explanationText;
-(void)layoutSubviews;
-(BOOL)_alwaysHandleScrollerMouseEvent;
-(float)value;
-(CGRect)_foregroundImageClipBounds;
-(id)_newExplanationLabel;
-(void)_updateValueForPoint:(CGPoint)arg1 ;
-(double)starWidth;
-(id)initWithBackgroundImage:(id)arg1 foregroundImage:(id)arg2 ;
-(void)setHitPadding:(CGSize)arg1 ;
-(BOOL)canHandleSwipes;
-(void)setStarWidth:(double)arg1 ;
@end
