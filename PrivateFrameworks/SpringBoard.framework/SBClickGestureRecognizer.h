/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBPressGestureRecognizer.h>

@class NSMutableArray, NSMutableSet;

@interface SBClickGestureRecognizer : SBPressGestureRecognizer {

	unsigned long long _numberOfClicksRequired;
	BOOL _allPressesUpRequired;
	double _maximumClickFormationDuration;
	double _maximumClickDownDuration;
	double _maximumBetweenClicksDelay;
	unsigned long long _recognizedClicksCount;
	BOOL _gestureWasRecognized;
	BOOL _allPressBeganReceived;
	NSMutableArray* _shortcutPressTypesSubsets;
	NSMutableSet* _receivedPressBeganTypes;
	NSMutableSet* _receivedPressEndedTypes;

}

@property (assign,nonatomic) unsigned long long numberOfClicksRequired;              //@synthesize numberOfClicksRequired=_numberOfClicksRequired - In the implementation block
@property (assign,nonatomic) BOOL allPressesUpRequired;                              //@synthesize allPressesUpRequired=_allPressesUpRequired - In the implementation block
@property (assign,nonatomic) double maximumClickFormationDuration;                   //@synthesize maximumClickFormationDuration=_maximumClickFormationDuration - In the implementation block
@property (assign,nonatomic) double maximumClickDownDuration;                        //@synthesize maximumClickDownDuration=_maximumClickDownDuration - In the implementation block
@property (assign,nonatomic) double maximumBetweenClicksDelay;                       //@synthesize maximumBetweenClicksDelay=_maximumBetweenClicksDelay - In the implementation block
-(double)maximumClickFormationDuration;
-(void)_notePressReceivedWithType:(long long)arg1 phase:(long long)arg2 ;
-(void)setMaximumClickFormationDuration:(double)arg1 ;
-(double)maximumClickDownDuration;
-(void)reset;
-(void)addShortcutWithPressTypes:(id)arg1 ;
-(void)setNumberOfClicksRequired:(unsigned long long)arg1 ;
-(BOOL)didReceiveRequiredPressBeganCount;
-(id)gestureStateInfoForUnbalancedPressBeganCount:(long long)arg1 previousCount:(long long)arg2 ;
-(BOOL)_areRequiredPressTypesContainedInSet:(id)arg1 ;
-(double)maximumBetweenClicksDelay;
-(void)setAllPressesUpRequired:(BOOL)arg1 ;
-(void)resetShortcutsTracking;
-(void)setMaximumBetweenClicksDelay:(double)arg1 ;
-(BOOL)didReceiveRequiredPressEndedCount;
-(unsigned long long)numberOfClicksRequired;
-(BOOL)allPressesUpRequired;
-(void)setMaximumClickDownDuration:(double)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
@end

