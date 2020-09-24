/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SleepDaemon/HDSPSleepScheduleStateCoordinatorStateMachineState.h>

@interface HDSPSleepScheduleStateCoordinatorDelayedWakeUpState : HDSPSleepScheduleStateCoordinatorStateMachineState
-(void)bedtimeReached;
-(unsigned long long)scheduleState;
-(void)windDownReached;
-(id)stateName;
-(void)didExitWithNextState:(id)arg1 context:(id)arg2 ;
-(void)wakeUpConfirmed;
-(id)determineExpirationDateForCurrentDate:(id)arg1 ;
-(void)updateStateWithCheckExpiration:(BOOL)arg1 ;
@end
