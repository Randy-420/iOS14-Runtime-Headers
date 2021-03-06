/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate;


@protocol FCMutableIssueReadingHistoryItem <FCIssueReadingHistoryItem>
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * issueID; 
@property (nonatomic,copy) NSDate * lastVisitedDate; 
@property (nonatomic,copy) NSDate * lastBadgedDate; 
@property (nonatomic,copy) NSDate * lastEngagedDate; 
@property (nonatomic,copy) NSDate * lastSeenDate; 
@property (nonatomic,copy) NSDate * lastRemovedFromMyMagazinesDate; 
@property (nonatomic,copy) NSString * lastVisitedArticleID; 
@property (nonatomic,copy) NSString * lastVisitedPageID; 
@required
-(NSString *)identifier;
-(NSString *)issueID;
-(void)setIdentifier:(id)arg1;
-(void)setLastSeenDate:(id)arg1;
-(NSDate *)lastSeenDate;
-(void)setLastVisitedDate:(id)arg1;
-(NSDate *)lastBadgedDate;
-(void)setLastVisitedArticleID:(id)arg1;
-(void)setLastVisitedPageID:(id)arg1;
-(void)setLastBadgedDate:(id)arg1;
-(void)setLastEngagedDate:(id)arg1;
-(NSDate *)lastEngagedDate;
-(void)setLastRemovedFromMyMagazinesDate:(id)arg1;
-(NSString *)lastVisitedArticleID;
-(NSString *)lastVisitedPageID;
-(NSDate *)lastRemovedFromMyMagazinesDate;
-(void)setIssueID:(id)arg1;
-(NSDate *)lastVisitedDate;

@end

