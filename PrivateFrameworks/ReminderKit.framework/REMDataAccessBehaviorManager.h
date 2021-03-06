/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class REMXPCDaemonController;

@interface REMDataAccessBehaviorManager : NSObject {

	REMXPCDaemonController* _daemonController;

}

@property (nonatomic,retain) REMXPCDaemonController * daemonController;              //@synthesize daemonController=_daemonController - In the implementation block
-(long long)changeTrackingBehaviors;
-(id)_debugPerformerWithReason:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)fetchStatusReportsWithError:(id*)arg1 ;
-(void)enableBabySitter;
-(void)enableDataAccess;
-(void)unapplyChangeTrackingBehavior:(long long)arg1 ;
-(BOOL)_getBoolForKey:(id)arg1 withDefaultValue:(BOOL)arg2 ;
-(void)_crashDaemonWithMessage:(id)arg1 ;
-(id)init;
-(REMXPCDaemonController *)daemonController;
-(BOOL)isBabySitterEnabled;
-(void)applyChangeTrackingBehavior:(long long)arg1 ;
-(BOOL)isDataAccessEnabled;
-(void)disableBabySitter;
-(void)_setBoolValue:(BOOL)arg1 forBehaviorKey:(id)arg2 ;
-(id)initWithDaemonController:(id)arg1 ;
-(void)setDaemonController:(REMXPCDaemonController *)arg1 ;
-(long long)_getIntegerForKey:(id)arg1 withDefaultValue:(long long)arg2 ;
-(void)disableDataAccess;
-(void)_setIntegerValue:(long long)arg1 forBehaviorKey:(id)arg2 ;
@end

