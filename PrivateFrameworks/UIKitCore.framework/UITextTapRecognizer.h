/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITapGestureRecognizer.h>

@class NSArray;

@interface UITextTapRecognizer : UITapGestureRecognizer {

	NSArray* _touchesForTap;
	double _touchBasedAllowableMovement;

}

@property (assign,nonatomic) double touchBasedAllowableMovement;              //@synthesize touchBasedAllowableMovement=_touchBasedAllowableMovement - In the implementation block
@property (nonatomic,retain) NSArray * touchesForTap;                         //@synthesize touchesForTap=_touchesForTap - In the implementation block
-(void)setTouchBasedAllowableMovement:(double)arg1 ;
-(double)touchBasedAllowableMovement;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setTouchesForTap:(NSArray *)arg1 ;
-(NSArray *)touchesForTap;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
@end

