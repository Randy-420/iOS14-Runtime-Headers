/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsAnalyticsUpload.framework/NewsAnalyticsUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NDAnalyticsEnvelopeStoreObserver.h>
#import <libobjc.A.dylib/NDAnalyticsUploadSchedulerDelegate.h>
#import <libobjc.A.dylib/NDAnalyticsService.h>

@class NDAnalyticsEnvelopeStore, NDAnalyticsPayloadAssembler, NDAnalyticsPayloadUploader, NDAnalyticsUploadScheduler, FCKeyValueStore, NFMutexLock, NSString;

@interface NDAnalyticsEnvelopeManager : NSObject <NDAnalyticsEnvelopeStoreObserver, NDAnalyticsUploadSchedulerDelegate, NDAnalyticsService> {

	NDAnalyticsEnvelopeStore* _envelopeStore;
	NDAnalyticsPayloadAssembler* _payloadAssembler;
	NDAnalyticsPayloadUploader* _payloadUploader;
	NDAnalyticsUploadScheduler* _uploadScheduler;
	FCKeyValueStore* _lastUploadDatesByContentType;
	NFMutexLock* _keyValueStoreLock;

}

@property (nonatomic,retain) NDAnalyticsEnvelopeStore * envelopeStore;                    //@synthesize envelopeStore=_envelopeStore - In the implementation block
@property (nonatomic,retain) NDAnalyticsPayloadAssembler * payloadAssembler;              //@synthesize payloadAssembler=_payloadAssembler - In the implementation block
@property (nonatomic,retain) NDAnalyticsPayloadUploader * payloadUploader;                //@synthesize payloadUploader=_payloadUploader - In the implementation block
@property (nonatomic,retain) NDAnalyticsUploadScheduler * uploadScheduler;                //@synthesize uploadScheduler=_uploadScheduler - In the implementation block
@property (nonatomic,retain) FCKeyValueStore * lastUploadDatesByContentType;              //@synthesize lastUploadDatesByContentType=_lastUploadDatesByContentType - In the implementation block
@property (nonatomic,retain) NFMutexLock * keyValueStoreLock;                             //@synthesize keyValueStoreLock=_keyValueStoreLock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_handleOutcomeOfUploadAttemptWithPayload:(id)arg1 success:(BOOL)arg2 error:(id)arg3 willRetry:(BOOL)arg4 hitEndpoint:(BOOL)arg5 ;
-(NDAnalyticsPayloadUploader *)payloadUploader;
-(void)handleLaunchEventForBackgroundSessionWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)submitEnvelopes:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setLastUploadDatesByContentType:(FCKeyValueStore *)arg1 ;
-(void)setPayloadUploader:(NDAnalyticsPayloadUploader *)arg1 ;
-(void)_scheduleUploadIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)setEnvelopeStore:(NDAnalyticsEnvelopeStore *)arg1 ;
-(NDAnalyticsEnvelopeStore *)envelopeStore;
-(NFMutexLock *)keyValueStoreLock;
-(NDAnalyticsUploadScheduler *)uploadScheduler;
-(FCKeyValueStore *)lastUploadDatesByContentType;
-(id)init;
-(void)setUploadScheduler:(NDAnalyticsUploadScheduler *)arg1 ;
-(void)submitEnvelopes:(id)arg1 withSubmissionCompletion:(/*^block*/id)arg2 foregroundUploadCompletion:(/*^block*/id)arg3 ;
-(id)_handleDroppedEnvelopesForLocalReasons:(id)arg1 ;
-(NDAnalyticsPayloadAssembler *)payloadAssembler;
-(id)_lastUploadDatesByContentType;
-(void)setKeyValueStoreLock:(NFMutexLock *)arg1 ;
-(void)envelopeStore:(id)arg1 didFlushEnvelopesForEntries:(id)arg2 ;
-(void)setPayloadAssembler:(NDAnalyticsPayloadAssembler *)arg1 ;
-(id)initWithAppConfigurationManager:(id)arg1 storeDirectoryFileURL:(id)arg2 URLSessionQueue:(id)arg3 ;
-(void)uploadScheduler:(id)arg1 performUploadWithCompletion:(/*^block*/id)arg2 ;
-(void)uploadSchedulerDidDropScheduledBackgroundUpload:(id)arg1 ;
@end

