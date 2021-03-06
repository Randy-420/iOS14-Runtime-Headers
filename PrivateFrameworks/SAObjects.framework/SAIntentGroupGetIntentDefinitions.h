/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAIntentGroupGetIntentDefinitions : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * queries; 
+(id)getIntentDefinitions;
+(id)getIntentDefinitionsWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)ins_getIntentDefinitionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_matchesIntentDefinition:(id)arg1 ;
-(NSArray *)queries;
-(id)encodedClassName;
-(id)groupIdentifier;
-(void)setQueries:(NSArray *)arg1 ;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
@end

