/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIMotionEffect.h>

@class UIMotionEffectGroup, UIInterpolatingMotionEffect, _UITiltMotionEffect;

@interface _UIParallaxMotionEffect : UIMotionEffect {

	UIMotionEffectGroup* _group;
	UIOffset _slideMagnitude;
	UIInterpolatingMotionEffect* _horizontalSlideEffect;
	UIInterpolatingMotionEffect* _verticalSlideEffect;
	_UITiltMotionEffect* _tiltEffect;

}

@property (assign,nonatomic) UIOffset slideMagnitude;                                    //@synthesize slideMagnitude=_slideMagnitude - In the implementation block
@property (assign,nonatomic) double horizontalSlideAccelerationBoostFactor; 
@property (assign,nonatomic) double verticalSlideAccelerationBoostFactor; 
@property (assign,nonatomic) double maximumHorizontalTiltAngle; 
@property (assign,nonatomic) double maximumVerticalTiltAngle; 
@property (assign,nonatomic) double rotatingSphereRadius; 
-(void)_activateTiltEffectIfNecessary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIOffset)slideMagnitude;
-(double)horizontalSlideAccelerationBoostFactor;
-(double)maximumVerticalTiltAngle;
-(void)_updateGroupMotionEffect;
-(id)_keyPathsAndRelativeValuesForPose:(id)arg1 ;
-(id)init;
-(double)verticalSlideAccelerationBoostFactor;
-(void)setMaximumVerticalTiltAngle:(double)arg1 ;
-(void)setVerticalSlideAccelerationBoostFactor:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)keyPathsAndRelativeValuesForViewerOffset:(UIOffset)arg1 ;
-(double)rotatingSphereRadius;
-(double)maximumHorizontalTiltAngle;
-(void)setMaximumHorizontalTiltAngle:(double)arg1 ;
-(void)setRotatingSphereRadius:(double)arg1 ;
-(void)setSlideMagnitude:(UIOffset)arg1 ;
-(id)description;
-(void)setHorizontalSlideAccelerationBoostFactor:(double)arg1 ;
-(void)_updateSlideEffectsWithCurrentSlideMagnitude;
@end

