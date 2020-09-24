/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_KSCloudKitManagerDelegate.h>
#import <libobjc.A.dylib/_KSTextReplacementSyncProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, _KSCloudKitManager, _KSTextReplacementCoreDataStore, NSString;

@interface _KSTextReplacementCKStore : NSObject <_KSCloudKitManagerDelegate, _KSTextReplacementSyncProtocol> {

	NSObject*<OS_dispatch_queue> _syncQueue;
	NSObject*<OS_dispatch_queue> _dataQueue;
	BOOL _ckMigrationStatusOnCloud;
	_KSCloudKitManager* _cloudKitManager;
	_KSTextReplacementCoreDataStore* _coreDataStore;
	unsigned long long _numPullRequests;

}

@property (nonatomic,retain) _KSTextReplacementCoreDataStore * coreDataStore;              //@synthesize coreDataStore=_coreDataStore - In the implementation block
@property (assign,nonatomic) BOOL ckMigrationStatusOnCloud;                                //@synthesize ckMigrationStatusOnCloud=_ckMigrationStatusOnCloud - In the implementation block
@property (assign,nonatomic) unsigned long long numPullRequests;                           //@synthesize numPullRequests=_numPullRequests - In the implementation block
@property (nonatomic,retain) _KSCloudKitManager * cloudKitManager;                         //@synthesize cloudKitManager=_cloudKitManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isMigrationCompleted;
-(void)pushAllLocalData;
-(id)initWithDirectoryPath:(id)arg1 ;
-(id)userIdentity;
-(void)importSampleShortcutsIfNecessary;
-(id)textReplacementEntries;
-(BOOL)isAccountAvailable;
-(unsigned long long)numPullRequests;
-(void)pushMigrationStatusToCloud:(BOOL)arg1 ;
-(void)queryTextReplacementsWithCallback:(/*^block*/id)arg1 ;
-(void)requestSyncWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)recordSyncStatus;
-(void)removeAllEntries;
-(void)dealloc;
-(void)requestSyncIfPendingLocalChanges;
-(void)removeAllEntriesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)queryTextReplacementsWithPredicate:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)queryDeletedEntries;
-(void)queryMigrationStatusOnCloudWithCallback:(/*^block*/id)arg1 ;
-(void)_updateSyncCount:(unsigned long long)arg1 success:(BOOL)arg2 ;
-(void)accountDidChange:(id)arg1 ;
-(unsigned long long)getSyncCountThresholdHalfLifeHours;
-(BOOL)ckMigrationStatusOnCloud;
-(unsigned long long)decayedSyncCountForTime:(id)arg1 ;
-(id)cloudRecordIDsForLocalEntries:(id)arg1 ;
-(id)localEntriesFromCloudEntries:(id)arg1 ;
-(void)requestSync:(unsigned long long)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(unsigned long long)totalPullRequestsUntilNow;
-(_KSCloudKitManager *)cloudKitManager;
-(id)queryUpdatedLocalEntries;
-(void)queryCloudIfFirstPullOrAccountChanged;
-(void)_requestSync:(unsigned long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(_KSTextReplacementCoreDataStore *)coreDataStore;
-(void)setNumPullRequests:(unsigned long long)arg1 ;
-(void)setCkMigrationStatusOnCloud:(BOOL)arg1 ;
-(void)userDidDeleteRecordZone:(id)arg1 ;
-(void)addEntries:(id)arg1 removeEntries:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setCloudKitManager:(_KSCloudKitManager *)arg1 ;
-(void)setCoreDataStore:(_KSTextReplacementCoreDataStore *)arg1 ;
-(unsigned long long)countLocalEntriesToBeSynced;
-(id)cloudEntriesFromLocalEntries:(id)arg1 ;
-(void)pushLocalChangesWithPriority:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)pullRemoteDataWithPriority:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)getSyncCountThrottleThreshold;
-(unsigned long long)getSyncCount;
@end
