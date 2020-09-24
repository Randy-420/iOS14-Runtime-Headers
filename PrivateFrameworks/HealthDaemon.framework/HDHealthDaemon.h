/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class HDBackgroundTaskScheduler, HDPluginManager, HDPrimaryProfile, _HKBehavior;


@protocol HDHealthDaemon <NSObject>
@property (readonly) HDBackgroundTaskScheduler * backgroundTaskScheduler; 
@property (readonly) HDPluginManager * pluginManager; 
@property (nonatomic,readonly) HDPrimaryProfile * primaryProfile; 
@property (nonatomic,retain) id<HDNanoAlertSuppressionService> alertSuppressionService; 
@property (nonatomic,readonly) _HKBehavior * behavior; 
@required
-(HDPrimaryProfile *)primaryProfile;
-(_HKBehavior *)behavior;
-(id)daemonExtensionWithIdentifier:(id)arg1;
-(id<HDNanoAlertSuppressionService>)alertSuppressionService;
-(void)unregisterForLaunchNotification:(const char*)arg1;
-(HDBackgroundTaskScheduler *)backgroundTaskScheduler;
-(void)setAlertSuppressionService:(id)arg1;
-(void)registerDaemonActivatedObserver:(id)arg1 queue:(id)arg2;
-(void)registerDaemonReadyObserver:(id)arg1 queue:(id)arg2;
-(id)daemonExtensionsConformingToProtocol:(id)arg1;
-(void)registerForLaunchNotification:(const char*)arg1;
-(HDPluginManager *)pluginManager;
-(void)registerForDaemonReady:(id)arg1;

@end
