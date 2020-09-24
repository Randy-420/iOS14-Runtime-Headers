/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDDiagnosticObject.h>
#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDPeriodicActivityDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class HDPeriodicActivity, HDProfile, NSObject, NSString;

@interface HDDatabasePruningManager : NSObject <HDDiagnosticObject, HDHealthDaemonReadyObserver, HDPeriodicActivityDelegate> {

	HDPeriodicActivity* _activity;
	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _timerSource;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                             //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timerSource;              //@synthesize timerSource=_timerSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performPeriodicActivity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2 ;
-(void)setProfile:(HDProfile *)arg1 ;
-(void)daemonReady:(id)arg1 ;
-(BOOL)pruneDatabaseWithAccessibilityAssertion:(id)arg1 nowDate:(id)arg2 prunedObjectLimit:(unsigned long long)arg3 prunedObjectTransactionLimit:(unsigned long long)arg4 error:(id*)arg5 ;
-(id)initWithProfile:(id)arg1 ;
-(HDProfile *)profile;
-(void)dealloc;
-(BOOL)pruneDatabaseWithAccessibilityAssertion:(id)arg1 nowDate:(id)arg2 error:(id*)arg3 ;
-(id)diagnosticDescription;
-(id)_minimumFrozenAnchorMapForPruningDate:(id)arg1 error:(id*)arg2 ;
-(id)_lastAttemptDateWithCompleted:(BOOL*)arg1 ;
-(BOOL)_pruneDatabaseWithNowDate:(id)arg1 prunedObjectLimit:(unsigned long long)arg2 prunedObjectTransactionLimit:(unsigned long long)arg3 error:(id*)arg4 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSObject*<OS_dispatch_source>)timerSource;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_setLastAttemptDate:(id)arg1 completed:(BOOL)arg2 ;
-(void)setTimerSource:(NSObject*<OS_dispatch_source>)arg1 ;
@end
