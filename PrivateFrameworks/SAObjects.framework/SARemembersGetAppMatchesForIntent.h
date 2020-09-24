/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString, SAIntentGroupProtobufMessage;

@interface SARemembersGetAppMatchesForIntent : SABaseClientBoundCommand <SAAceSerializable>

@property (nonatomic,copy) NSArray * candidateBundleIDs; 
@property (nonatomic,copy) NSString * jsonEncodedIntent; 
@property (nonatomic,retain) SAIntentGroupProtobufMessage * protoEncodedIntent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getAppMatchesForIntent;
+(id)getAppMatchesForIntentWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(NSString *)jsonEncodedIntent;
-(void)setJsonEncodedIntent:(NSString *)arg1 ;
-(NSArray *)candidateBundleIDs;
-(void)setCandidateBundleIDs:(NSArray *)arg1 ;
-(SAIntentGroupProtobufMessage *)protoEncodedIntent;
-(void)setProtoEncodedIntent:(SAIntentGroupProtobufMessage *)arg1 ;
-(BOOL)mutatingCommand;
@end
