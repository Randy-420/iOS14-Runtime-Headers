/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class SAUIDecoratedText, NSString;

@interface SASTCompetingTeamPlayDetailHeaderItem : AceObject <SASTTemplateItem>

@property (nonatomic,retain) SAUIDecoratedText * firstTeam; 
@property (nonatomic,retain) SAUIDecoratedText * secondTeam; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)competingTeamPlayDetailHeaderItem;
+(id)competingTeamPlayDetailHeaderItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(SAUIDecoratedText *)firstTeam;
-(void)setFirstTeam:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)secondTeam;
-(void)setSecondTeam:(SAUIDecoratedText *)arg1 ;
@end

