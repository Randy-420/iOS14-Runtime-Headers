/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class RBProcess;


@protocol RBDaemonContextProviding <NSObject>
@property (nonatomic,readonly) id<RBAssertionManaging> assertionManager; 
@property (nonatomic,readonly) id<RBEntitlementManaging> entitlementManager; 
@property (nonatomic,readonly) id<RBProcessManaging> processManager; 
@property (nonatomic,readonly) id<RBProcessMonitoring> processMonitor; 
@property (nonatomic,readonly) id<RBStateCaptureManaging> stateCaptureManager; 
@property (nonatomic,readonly) RBProcess * process; 
@required
-(id<RBAssertionManaging>)assertionManager;
-(id<RBStateCaptureManaging>)stateCaptureManager;
-(id<RBProcessManaging>)processManager;
-(RBProcess *)process;
-(id<RBProcessMonitoring>)processMonitor;
-(id<RBEntitlementManaging>)entitlementManager;

@end

