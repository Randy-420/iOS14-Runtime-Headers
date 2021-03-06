/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HKCloudSyncControlServerInterface.h>

@class NSString;

@interface HDCloudSyncControlTaskServer : HDStandardTaskServer <HKCloudSyncControlServerInterface>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)validateClient:(id)arg1 error:(id*)arg2 ;
+(id)taskIdentifier;
+(id)requiredEntitlements;
-(void)connectionInvalidated;
-(id)exportedInterface;
-(id)remoteInterface;
-(id)remote_forceCloudSyncWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)remote_forceCloudResetWithCompletion:(/*^block*/id)arg1 ;
-(id)remote_forceCloudSyncDataUploadForProfileWithCompletion:(/*^block*/id)arg1 ;
-(id)remote_fetchCloudDescriptionWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_fetchCloudSyncStatusWithCompletion:(/*^block*/id)arg1 ;
-(id)remote_disableCloudSyncAndDeleteAllCloudDataWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_disableCloudSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_enableCloudSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_accountConfigurationDidChangeWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_requestDataRefreshWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_oldestSampleStartDateInHealthDatabaseWithCompletion:(/*^block*/id)arg1 ;
-(id)remote_fetchCloudSyncProgressWithCompletion:(/*^block*/id)arg1 ;
@end

