/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>
#import <UIKitCore/_UIDigitizerGestureRecognizerImpDelegate.h>

@class _UIDigitizerGestureRecognizerImp, NSString;

@interface UIDigitizerLongPressGestureRecognizer : UIGestureRecognizer <_UIDigitizerGestureRecognizerImpDelegate> {

	_UIDigitizerGestureRecognizerImp* _imp;

}

@property (assign,nonatomic) double minimumPressDuration; 
@property (nonatomic,readonly) CGPoint digitizerLocation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAllowedPressTypes:(id)arg1 ;
-(void)setMinimumPressDuration:(double)arg1 ;
-(void)setAllowedTouchTypes:(id)arg1 ;
-(double)minimumPressDuration;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBeganSuccessfully:(id)arg1 ;
-(void)pressesEndedSuccessfully:(id)arg1 ;
-(void)pressesNotHeldLongEnough:(id)arg1 ;
-(void)pressesHeldForMinimum:(id)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)digitizerLocation;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
@end
