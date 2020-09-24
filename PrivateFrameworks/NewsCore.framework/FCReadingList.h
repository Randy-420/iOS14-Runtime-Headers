/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCPrivateDataController.h>
#import <libobjc.A.dylib/FCOperationThrottlerDelegate.h>
#import <libobjc.A.dylib/FCOfflineArticleContributing.h>

@protocol FCOperationThrottler;
@class FCObservable, NSMutableDictionary, FCCloudContext, FCMTWriterLock, NSString;

@interface FCReadingList : FCPrivateDataController <FCOperationThrottlerDelegate, FCOfflineArticleContributing> {

	FCObservable* _articleIDsToDownload;
	long long _articleDownloadOptions;
	NSMutableDictionary* _entriesByArticleID;
	FCCloudContext* _cloudContext;
	id<FCOperationThrottler> _articleIDsAvailableForOfflineReadingUpdateThrottler;
	FCMTWriterLock* _itemsLock;

}

@property (nonatomic,retain) NSMutableDictionary * entriesByArticleID;                                                  //@synthesize entriesByArticleID=_entriesByArticleID - In the implementation block
@property (nonatomic,retain) FCCloudContext * cloudContext;                                                             //@synthesize cloudContext=_cloudContext - In the implementation block
@property (nonatomic,retain) id<FCOperationThrottler> articleIDsAvailableForOfflineReadingUpdateThrottler;              //@synthesize articleIDsAvailableForOfflineReadingUpdateThrottler=_articleIDsAvailableForOfflineReadingUpdateThrottler - In the implementation block
@property (nonatomic,retain) FCMTWriterLock * itemsLock;                                                                //@synthesize itemsLock=_itemsLock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) FCObservable * articleIDsToDownload;                                                     //@synthesize articleIDsToDownload=_articleIDsToDownload - In the implementation block
@property (nonatomic,readonly) long long articleDownloadOptions;                                                        //@synthesize articleDownloadOptions=_articleDownloadOptions - In the implementation block
+(id)backingRecordZoneIDs;
+(BOOL)requiresBatchedSync;
+(id)backingRecordIDs;
+(id)commandStoreFileName;
+(id)commandsToMergeLocalDataToCloud:(id)arg1 ;
+(id)desiredKeys;
+(long long)commandQueueUrgency;
+(id)localStoreFilename;
+(unsigned long long)localStoreVersion;
+(BOOL)requiresHighPriorityFirstSync;
+(BOOL)requiresPushNotificationSupport;
-(void)expressInterestInOfflineArticlesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_allSortedEntriesInReadingList;
-(long long)articleDownloadOptions;
-(void)addObserver:(id)arg1 ;
-(id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg1 ;
-(id)_allEntriesInReadingList;
-(void)prepareToContributeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)allNonConsumedArticleIDs;
-(FCCloudContext *)cloudContext;
-(NSMutableDictionary *)entriesByArticleID;
-(void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2 ;
-(void)setEntriesByArticleID:(NSMutableDictionary *)arg1 ;
-(void)loadLocalCachesFromStore;
-(BOOL)shouldHideHeadline:(id)arg1 ;
-(void)addArticleToReadingList:(id)arg1 eventInitiationLevel:(long long)arg2 origin:(unsigned long long)arg3 ;
-(id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3 ;
-(id)allSortedArticleIDsInReadingList;
-(FCMTWriterLock *)itemsLock;
-(BOOL)canHelpRestoreZoneName:(id)arg1 ;
-(void)_addedArticleIDs:(id)arg1 removedArticleIDs:(id)arg2 eventInitiationLevel:(long long)arg3 ;
-(void)_fetchArticleIDsAvailableForOfflineReadingWithCompletion:(/*^block*/id)arg1 ;
-(void)removeArticleFromReadingList:(id)arg1 ;
-(id)recordsForRestoringZoneName:(id)arg1 ;
-(id<FCOperationThrottler>)articleIDsAvailableForOfflineReadingUpdateThrottler;
-(void)setArticleIDsAvailableForOfflineReadingUpdateThrottler:(id<FCOperationThrottler>)arg1 ;
-(void)setItemsLock:(FCMTWriterLock *)arg1 ;
-(void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(/*^block*/id)arg2 ;
-(unsigned long long)countOfAllArticlesSavedOutsideOfNewsSince:(id)arg1 ;
-(unsigned long long)_maxCountOfArticlesAvailableOfflineWithConfiguration:(id)arg1 ;
-(id)allNonConsumedArticleIDsIntersectingSet:(id)arg1 ;
-(FCObservable *)articleIDsToDownload;
-(id)dateArticleWasAdded:(id)arg1 ;
-(void)setCloudContext:(FCCloudContext *)arg1 ;
-(void)addArticleToReadingList:(id)arg1 ;
-(BOOL)isArticleOnReadingList:(id)arg1 ;
-(id)_readingListEntryForArticleID:(id)arg1 ;
@end
