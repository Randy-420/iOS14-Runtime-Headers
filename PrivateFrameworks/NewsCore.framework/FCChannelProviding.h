/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSString;


@protocol FCChannelProviding <FCTagProviding>
@property (nonatomic,copy,readonly) NSArray * sectionIDs; 
@property (nonatomic,copy,readonly) NSString * defaultSectionID; 
@property (nonatomic,readonly) BOOL supportsNotifications; 
@property (nonatomic,readonly) BOOL isWhitelisted; 
@property (nonatomic,copy,readonly) NSArray * currentIssueIDs; 
@property (nonatomic,copy,readonly) NSString * backIssuesListID; 
@property (nonatomic,readonly) NSString * supergroupKnobsJson; 
@property (nonatomic,readonly) NSString * supergroupConfigJson; 
@required
-(NSArray *)sectionIDs;
-(BOOL)supportsNotifications;
-(NSString *)supergroupConfigJson;
-(BOOL)isWhitelisted;
-(NSString *)supergroupKnobsJson;
-(id)paidFeedIDForSection:(id)arg1 bin:(long long)arg2;
-(NSString *)backIssuesListID;
-(NSString *)defaultSectionID;
-(NSArray *)currentIssueIDs;
-(id)freeFeedIDForSection:(id)arg1 bin:(long long)arg2;

@end

