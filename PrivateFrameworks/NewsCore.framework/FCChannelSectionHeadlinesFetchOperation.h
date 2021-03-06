/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol FCChannelProviding;
@class FCCloudContext, NSString, NSArray, FCEdgeCacheHint;

@interface FCChannelSectionHeadlinesFetchOperation : FCOperation {

	/*^block*/id _fetchCompletionHandler;
	FCCloudContext* _cloudContext;
	NSString* _channelID;
	unsigned long long _maxHeadlinesCount;
	unsigned long long _maxHeadlinesPerFeed;
	double _fetchWindow;
	double _sectionsCacheTimeToLive;
	id<FCChannelProviding> _channel;
	NSArray* _sectionHeadlinesGroups;
	FCEdgeCacheHint* _edgeCacheHint;

}

@property (nonatomic,readonly) FCCloudContext * cloudContext;                       //@synthesize cloudContext=_cloudContext - In the implementation block
@property (nonatomic,readonly) NSString * channelID;                                //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,readonly) unsigned long long maxHeadlinesCount;                //@synthesize maxHeadlinesCount=_maxHeadlinesCount - In the implementation block
@property (nonatomic,readonly) unsigned long long maxHeadlinesPerFeed;              //@synthesize maxHeadlinesPerFeed=_maxHeadlinesPerFeed - In the implementation block
@property (nonatomic,readonly) double fetchWindow;                                  //@synthesize fetchWindow=_fetchWindow - In the implementation block
@property (nonatomic,readonly) double sectionsCacheTimeToLive;                      //@synthesize sectionsCacheTimeToLive=_sectionsCacheTimeToLive - In the implementation block
@property (nonatomic,readonly) id<FCChannelProviding> channel;                      //@synthesize channel=_channel - In the implementation block
@property (nonatomic,copy) NSArray * sectionHeadlinesGroups;                        //@synthesize sectionHeadlinesGroups=_sectionHeadlinesGroups - In the implementation block
@property (nonatomic,readonly) FCEdgeCacheHint * edgeCacheHint;                     //@synthesize edgeCacheHint=_edgeCacheHint - In the implementation block
@property (copy) id fetchCompletionHandler;                                         //@synthesize fetchCompletionHandler=_fetchCompletionHandler - In the implementation block
-(NSString *)channelID;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(BOOL)validateOperation;
-(FCCloudContext *)cloudContext;
-(NSArray *)sectionHeadlinesGroups;
-(void)setFetchCompletionHandler:(id)arg1 ;
-(void)setSectionHeadlinesGroups:(NSArray *)arg1 ;
-(id)_configurationPromise;
-(id)_channelAndSectionTagsPromiseWithChannelID:(id)arg1 ;
-(id)_channelPromiseWithTagsByID:(id)arg1 parentChannelID:(id)arg2 ;
-(double)sectionsCacheTimeToLive;
-(double)fetchWindow;
-(id)_sectionsPromiseWithTagsByID:(id)arg1 sectionIDs:(id)arg2 ;
-(id)_feedItemsPromiseWithChannel:(id)arg1 sectionsByID:(id)arg2 configuration:(id)arg3 ;
-(id)_createFeedRequestWithFeedID:(id)arg1 feedRange:(id)arg2 ;
-(id)_headlinesPromiseWithFeedItems:(id)arg1 sectionsByID:(id)arg2 configuration:(id)arg3 ;
-(id)_feedItemsTransformationWithConfiguration:(id)arg1 ;
-(unsigned long long)maxHeadlinesPerFeed;
-(id)_headlinesAssembledBySectionFromFeedItemMap:(id)arg1 sectionIDsByFeedID:(id)arg2 sectionsByID:(id)arg3 ;
-(id)initWithCloudContext:(id)arg1 channelID:(id)arg2 maxHeadlinesCount:(unsigned long long)arg3 maxHeadlinesPerFeed:(unsigned long long)arg4 fetchWindow:(double)arg5 sectionsCacheTimeToLive:(double)arg6 edgeCacheHint:(id)arg7 ;
-(id)init;
-(id<FCChannelProviding>)channel;
-(FCEdgeCacheHint *)edgeCacheHint;
-(id)fetchCompletionHandler;
-(unsigned long long)maxHeadlinesCount;
@end

