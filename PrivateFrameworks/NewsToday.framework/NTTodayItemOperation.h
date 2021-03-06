/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol FCNewsAppConfiguration, FCContentContext, FCFeedPersonalizing, FCTodayPrivateData, NTTodayResultOperationInfoProviding;
@class NSDictionary, NTCatchUpOperationForYouFetchInfo, NSArray, NSObject;

@interface NTTodayItemOperation : FCOperation {

	NSDictionary* _catchUpOperationResultsBySectionDescriptor;
	id<FCNewsAppConfiguration> _appConfiguration;
	id<FCContentContext> _contentContext;
	NSDictionary* _slotAllocationByDynamicSlotItemID;
	id<FCFeedPersonalizing> _feedPersonalizer;
	id<FCTodayPrivateData> _todayData;
	id<NTTodayResultOperationInfoProviding> _operationInfo;
	NTCatchUpOperationForYouFetchInfo* _forYouFetchInfo;
	/*^block*/id _todayItemCompletion;
	NSArray* _feedItems;
	NSDictionary* _resultTodayItemsBySectionDescriptor;
	NSDictionary* _resultAssetFileURLsByRemoteURL;
	NSObject* _resultRecordsHoldToken;
	NSObject* _resultAssetsHoldToken;

}

@property (nonatomic,copy) NSArray * feedItems;                                                    //@synthesize feedItems=_feedItems - In the implementation block
@property (nonatomic,retain) NSDictionary * resultTodayItemsBySectionDescriptor;                   //@synthesize resultTodayItemsBySectionDescriptor=_resultTodayItemsBySectionDescriptor - In the implementation block
@property (nonatomic,retain) NSDictionary * resultAssetFileURLsByRemoteURL;                        //@synthesize resultAssetFileURLsByRemoteURL=_resultAssetFileURLsByRemoteURL - In the implementation block
@property (nonatomic,retain) NSObject * resultRecordsHoldToken;                                    //@synthesize resultRecordsHoldToken=_resultRecordsHoldToken - In the implementation block
@property (nonatomic,retain) NSObject * resultAssetsHoldToken;                                     //@synthesize resultAssetsHoldToken=_resultAssetsHoldToken - In the implementation block
@property (nonatomic,copy) NSDictionary * catchUpOperationResultsBySectionDescriptor;              //@synthesize catchUpOperationResultsBySectionDescriptor=_catchUpOperationResultsBySectionDescriptor - In the implementation block
@property (nonatomic,copy) id<FCNewsAppConfiguration> appConfiguration;                            //@synthesize appConfiguration=_appConfiguration - In the implementation block
@property (nonatomic,retain) id<FCContentContext> contentContext;                                  //@synthesize contentContext=_contentContext - In the implementation block
@property (nonatomic,copy) NSDictionary * slotAllocationByDynamicSlotItemID;                       //@synthesize slotAllocationByDynamicSlotItemID=_slotAllocationByDynamicSlotItemID - In the implementation block
@property (nonatomic,retain) id<FCFeedPersonalizing> feedPersonalizer;                             //@synthesize feedPersonalizer=_feedPersonalizer - In the implementation block
@property (nonatomic,retain) id<FCTodayPrivateData> todayData;                                     //@synthesize todayData=_todayData - In the implementation block
@property (nonatomic,copy) id<NTTodayResultOperationInfoProviding> operationInfo;                  //@synthesize operationInfo=_operationInfo - In the implementation block
@property (nonatomic,copy) NTCatchUpOperationForYouFetchInfo * forYouFetchInfo;                    //@synthesize forYouFetchInfo=_forYouFetchInfo - In the implementation block
@property (nonatomic,copy) id todayItemCompletion;                                                 //@synthesize todayItemCompletion=_todayItemCompletion - In the implementation block
-(void)setContentContext:(id<FCContentContext>)arg1 ;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setFeedItems:(NSArray *)arg1 ;
-(void)performOperation;
-(BOOL)validateOperation;
-(id<FCContentContext>)contentContext;
-(void)setFeedPersonalizer:(id<FCFeedPersonalizing>)arg1 ;
-(id)init;
-(id<NTTodayResultOperationInfoProviding>)operationInfo;
-(id<FCNewsAppConfiguration>)appConfiguration;
-(NSArray *)feedItems;
-(id<FCFeedPersonalizing>)feedPersonalizer;
-(NSDictionary *)catchUpOperationResultsBySectionDescriptor;
-(NSDictionary *)slotAllocationByDynamicSlotItemID;
-(id)_extractFeedItemsFromInputs;
-(NTCatchUpOperationForYouFetchInfo *)forYouFetchInfo;
-(id)todayItemCompletion;
-(id<FCTodayPrivateData>)todayData;
-(void)setResultTodayItemsBySectionDescriptor:(NSDictionary *)arg1 ;
-(void)setResultAssetFileURLsByRemoteURL:(NSDictionary *)arg1 ;
-(void)setResultRecordsHoldToken:(NSObject *)arg1 ;
-(void)setResultAssetsHoldToken:(NSObject *)arg1 ;
-(void)_fetchProtoitemsWithCompletion:(/*^block*/id)arg1 ;
-(NSDictionary *)resultTodayItemsBySectionDescriptor;
-(NSDictionary *)resultAssetFileURLsByRemoteURL;
-(NSObject *)resultRecordsHoldToken;
-(NSObject *)resultAssetsHoldToken;
-(void)setCatchUpOperationResultsBySectionDescriptor:(NSDictionary *)arg1 ;
-(void)setAppConfiguration:(id<FCNewsAppConfiguration>)arg1 ;
-(void)setSlotAllocationByDynamicSlotItemID:(NSDictionary *)arg1 ;
-(void)setTodayData:(id<FCTodayPrivateData>)arg1 ;
-(void)setOperationInfo:(id<NTTodayResultOperationInfoProviding>)arg1 ;
-(void)setForYouFetchInfo:(NTCatchUpOperationForYouFetchInfo *)arg1 ;
-(void)setTodayItemCompletion:(id)arg1 ;
@end

