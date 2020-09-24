/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol FCContentContext;
@class NSDictionary, NSArray, FCHeldRecords;

@interface FCWidgetConfigDataOperation : FCOperation {

	id<FCContentContext> _context;
	NSDictionary* _widgetConfiguration;
	/*^block*/id _widgetConfigDataCompletionHandler;
	NSArray* _recordSources;
	NSDictionary* _recordSourcesByRecordType;
	FCHeldRecords* _cachedRecords;
	NSDictionary* _resultDefaultConfigurationDictionary;
	NSDictionary* _resultSingleTagConfigurationDictionary;
	NSArray* _resultArticleIDs;
	NSArray* _resultArticleListIDs;
	NSDictionary* _resultHeldRecordsByType;

}

@property (nonatomic,retain) NSArray * recordSources;                                            //@synthesize recordSources=_recordSources - In the implementation block
@property (nonatomic,retain) NSDictionary * recordSourcesByRecordType;                           //@synthesize recordSourcesByRecordType=_recordSourcesByRecordType - In the implementation block
@property (nonatomic,retain) FCHeldRecords * cachedRecords;                                      //@synthesize cachedRecords=_cachedRecords - In the implementation block
@property (nonatomic,retain) NSDictionary * resultDefaultConfigurationDictionary;                //@synthesize resultDefaultConfigurationDictionary=_resultDefaultConfigurationDictionary - In the implementation block
@property (nonatomic,retain) NSDictionary * resultSingleTagConfigurationDictionary;              //@synthesize resultSingleTagConfigurationDictionary=_resultSingleTagConfigurationDictionary - In the implementation block
@property (nonatomic,retain) NSArray * resultArticleIDs;                                         //@synthesize resultArticleIDs=_resultArticleIDs - In the implementation block
@property (nonatomic,retain) NSArray * resultArticleListIDs;                                     //@synthesize resultArticleListIDs=_resultArticleListIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * resultHeldRecordsByType;                             //@synthesize resultHeldRecordsByType=_resultHeldRecordsByType - In the implementation block
@property (nonatomic,retain) id<FCContentContext> context;                                       //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSDictionary * widgetConfiguration;                                   //@synthesize widgetConfiguration=_widgetConfiguration - In the implementation block
@property (nonatomic,copy) id widgetConfigDataCompletionHandler;                                 //@synthesize widgetConfigDataCompletionHandler=_widgetConfigDataCompletionHandler - In the implementation block
-(FCHeldRecords *)cachedRecords;
-(NSDictionary *)resultHeldRecordsByType;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(BOOL)validateOperation;
-(NSArray *)recordSources;
-(void)prepareOperation;
-(NSDictionary *)widgetConfiguration;
-(void)setWidgetConfiguration:(NSDictionary *)arg1 ;
-(void)setWidgetConfigDataCompletionHandler:(id)arg1 ;
-(void)setCachedRecords:(FCHeldRecords *)arg1 ;
-(id)widgetConfigDataCompletionHandler;
-(void)_collectRecordsFromWidgetConfigDictionary:(id)arg1 ;
-(NSDictionary *)resultDefaultConfigurationDictionary;
-(NSDictionary *)resultSingleTagConfigurationDictionary;
-(NSArray *)resultArticleIDs;
-(NSArray *)resultArticleListIDs;
-(void)setResultDefaultConfigurationDictionary:(NSDictionary *)arg1 ;
-(void)setResultArticleListIDs:(NSArray *)arg1 ;
-(void)setResultSingleTagConfigurationDictionary:(NSDictionary *)arg1 ;
-(void)setResultArticleIDs:(NSArray *)arg1 ;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(void)_finalizeResultFromCachedRecords;
-(NSDictionary *)recordSourcesByRecordType;
-(void)setResultHeldRecordsByType:(NSDictionary *)arg1 ;
-(id<FCContentContext>)context;
-(void)setRecordSourcesByRecordType:(NSDictionary *)arg1 ;
-(id)_recordSourceForRecordType:(id)arg1 ;
-(void)setRecordSources:(NSArray *)arg1 ;
@end
