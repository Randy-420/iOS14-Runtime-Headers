/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FMClient.ServerSessionProtocol
@required
-(void)discoverNearbyDevicesWithCompletion:(/*^block*/id)arg1;
-(void)deviceSearch:(id)arg1 completion:(/*^block*/id)arg2;
-(void)clientConfigurationWithUpdateConfiguration:(id)arg1 completion:(/*^block*/id)arg2;
-(void)playSound:(id)arg1 completion:(/*^block*/id)arg2;
-(void)voiceAssistantSyncWithCompletion:(/*^block*/id)arg1;
-(void)invalidateCacheWithType:(long long)arg1 completion:(/*^block*/id)arg2;

@end
