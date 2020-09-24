/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableArray;

@interface UIKBHandwritingInputSpeedModel : NSObject {

	NSMutableArray* _recordedIntervals;
	NSMutableArray* _recordedSpeeds;
	double _lastStrokeTimeStamp;
	double _lastTouchTimeStamp;
	CGPoint _lastTouchLocation;
	NSMutableArray* _pointsCurrentStroke;
	BOOL _duringStroke;
	BOOL _autoConfirmationEnabled;
	double _minTimeout;
	double _maxTimeout;
	CGRect _handwritingFrame;

}

@property (nonatomic,readonly) BOOL autoConfirmationEnabled;              //@synthesize autoConfirmationEnabled=_autoConfirmationEnabled - In the implementation block
@property (nonatomic,readonly) double minTimeout;                         //@synthesize minTimeout=_minTimeout - In the implementation block
@property (nonatomic,readonly) double maxTimeout;                         //@synthesize maxTimeout=_maxTimeout - In the implementation block
@property (assign,nonatomic) CGRect handwritingFrame;                     //@synthesize handwritingFrame=_handwritingFrame - In the implementation block
-(void)endStroke;
-(void)setHandwritingFrame:(CGRect)arg1 ;
-(void)beginStroke;
-(BOOL)autoConfirmationEnabled;
-(double)timeoutForNextPage;
-(void)updatePreferences;
-(double)minTimeout;
-(void)addPoint:(CGPoint)arg1 timestamp:(double)arg2 ;
-(id)init;
-(double)smoothValueFromArray:(id)arg1 ;
-(CGRect)handwritingFrame;
-(double)speedForCurrentStroke;
-(double)maxTimeout;
-(void)endCharacter;
@end
