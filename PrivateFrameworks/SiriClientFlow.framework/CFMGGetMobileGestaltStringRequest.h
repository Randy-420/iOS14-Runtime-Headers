/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <libobjc.A.dylib/CFLocalAceHandling.h>
#import <libobjc.A.dylib/CFLocalAceHandling.h>

@class NSString;

@interface CFMGGetMobileGestaltStringRequest : SABaseClientBoundCommand <CFLocalAceHandling, CFLocalAceHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * key; 
+(id)aceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(BOOL)isValidKey:(id)arg1 ;
+(id)getMobileGestaltStringRequest;
+(id)getMobileGestaltStringRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)requiresResponse;
-(void)handleWithCompletion:(/*^block*/id)arg1 ;
@end
