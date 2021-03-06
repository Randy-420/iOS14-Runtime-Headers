/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVVisibilityReporting.h>
#import <libobjc.A.dylib/SVVisibilityMonitoring.h>

@protocol SVVisiblePercentageProviding;
@class NFStateMachine, NFStateMachineState, NSMutableArray, NSString;

@interface SVVisibilityMonitor : NSObject <SVVisibilityReporting, SVVisibilityMonitoring> {

	BOOL _appeared;
	double _visiblePercentage;
	id _object;
	unsigned long long _state;
	id<SVVisiblePercentageProviding> _visiblePercentageProvider;
	NFStateMachine* _stateMachine;
	NFStateMachineState* _appearingState;
	NFStateMachineState* _appearedState;
	NFStateMachineState* _disappearingState;
	NFStateMachineState* _disappearedState;
	NSMutableArray* _willAppearBlocks;
	NSMutableArray* _didAppearBlocks;
	NSMutableArray* _visiblePercentageBlocks;
	NSMutableArray* _willDisappearBlocks;
	NSMutableArray* _didDisappearBlocks;
	long long _lockCount;

}

@property (nonatomic,readonly) NFStateMachine * stateMachine;                                           //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,readonly) NFStateMachineState * appearingState;                                    //@synthesize appearingState=_appearingState - In the implementation block
@property (nonatomic,readonly) NFStateMachineState * appearedState;                                     //@synthesize appearedState=_appearedState - In the implementation block
@property (nonatomic,readonly) NFStateMachineState * disappearingState;                                 //@synthesize disappearingState=_disappearingState - In the implementation block
@property (nonatomic,readonly) NFStateMachineState * disappearedState;                                  //@synthesize disappearedState=_disappearedState - In the implementation block
@property (nonatomic,readonly) NSMutableArray * willAppearBlocks;                                       //@synthesize willAppearBlocks=_willAppearBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableArray * didAppearBlocks;                                        //@synthesize didAppearBlocks=_didAppearBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableArray * visiblePercentageBlocks;                                //@synthesize visiblePercentageBlocks=_visiblePercentageBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableArray * willDisappearBlocks;                                    //@synthesize willDisappearBlocks=_willDisappearBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableArray * didDisappearBlocks;                                     //@synthesize didDisappearBlocks=_didDisappearBlocks - In the implementation block
@property (assign,nonatomic) double visiblePercentage;                                                  //@synthesize visiblePercentage=_visiblePercentage - In the implementation block
@property (nonatomic,readonly) BOOL locked; 
@property (assign,nonatomic) long long lockCount;                                                       //@synthesize lockCount=_lockCount - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                                  //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) id<SVVisiblePercentageProviding> visiblePercentageProvider;              //@synthesize visiblePercentageProvider=_visiblePercentageProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL appeared;                                                           //@synthesize appeared=_appeared - In the implementation block
@property (nonatomic,__weak,readonly) id object;                                                        //@synthesize object=_object - In the implementation block
-(void)didAppear;
-(void)lock;
-(BOOL)appeared;
-(NFStateMachine *)stateMachine;
-(void)unlock;
-(void)willAppear;
-(void)didDisappear;
-(void)setState:(unsigned long long)arg1 ;
-(BOOL)locked;
-(void)willDisappear;
-(void)updateVisibility;
-(unsigned long long)state;
-(id)object;
-(id)initWithObject:(id)arg1 visiblePercentageProvider:(id)arg2 ;
-(NSMutableArray *)willAppearBlocks;
-(void)onWillAppear:(/*^block*/id)arg1 ;
-(NSMutableArray *)didAppearBlocks;
-(void)onDidAppear:(/*^block*/id)arg1 ;
-(NSMutableArray *)willDisappearBlocks;
-(void)onWillDisappear:(/*^block*/id)arg1 ;
-(NSMutableArray *)didDisappearBlocks;
-(void)onDidDisappear:(/*^block*/id)arg1 ;
-(NSMutableArray *)visiblePercentageBlocks;
-(void)onVisiblePercentageChange:(/*^block*/id)arg1 ;
-(double)visiblePercentage;
-(void)setVisiblePercentage:(double)arg1 ;
-(long long)lockCount;
-(void)setLockCount:(long long)arg1 ;
-(NFStateMachineState *)appearedState;
-(void)determineVisiblePercentage;
-(id<SVVisiblePercentageProviding>)visiblePercentageProvider;
-(NFStateMachineState *)disappearedState;
-(NFStateMachineState *)appearingState;
-(NFStateMachineState *)disappearingState;
@end

