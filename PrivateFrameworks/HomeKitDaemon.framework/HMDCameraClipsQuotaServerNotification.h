/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString, NSDictionary;

@interface HMDCameraClipsQuotaServerNotification : HMFObject {

	NSString* _containerIdentifier;
	long long _reason;
	NSString* _requestID;
	NSString* _userDSID;

}

@property (copy,readonly) NSString * containerIdentifier;                       //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (readonly) long long reason;                                          //@synthesize reason=_reason - In the implementation block
@property (copy,readonly) NSString * requestID;                                 //@synthesize requestID=_requestID - In the implementation block
@property (copy,readonly) NSString * userDSID;                                  //@synthesize userDSID=_userDSID - In the implementation block
@property (copy,readonly) NSDictionary * dictionaryRepresentation; 
-(NSString *)requestID;
-(NSString *)containerIdentifier;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)userDSID;
-(long long)reason;
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithContainerIdentifier:(id)arg1 reason:(long long)arg2 requestID:(id)arg3 userDSID:(id)arg4 ;
@end

