/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/SafariSafeBrowsing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariSafeBrowsing/SafariSafeBrowsing-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface SSBLookupResult : NSObject <NSCopying, NSSecureCoding> {

	BOOL _URLContainsUserInfo;
	NSArray* _serviceLookupResults;

}

@property (nonatomic,readonly) NSArray * serviceLookupResults;                               //@synthesize serviceLookupResults=_serviceLookupResults - In the implementation block
@property (nonatomic,readonly) BOOL URLContainsUserInfo;                                     //@synthesize URLContainsUserInfo=_URLContainsUserInfo - In the implementation block
@property (getter=isPhishing,nonatomic,readonly) BOOL phishing; 
@property (getter=isMalware,nonatomic,readonly) BOOL malware; 
@property (getter=isUnwantedSoftware,nonatomic,readonly) BOOL unwantedSoftware; 
@property (getter=isKnownToBeUnsafe,nonatomic,readonly) BOOL knownToBeUnsafe; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isPhishing;
-(BOOL)isMalware;
-(id)_initWithServiceLookUpResults:(id)arg1 URLContainsUserInfo:(BOOL)arg2 ;
-(BOOL)isUnwantedSoftware;
-(BOOL)isKnownToBeUnsafe;
-(id)_initWithServiceLookUpResults:(id)arg1 ;
-(NSArray *)serviceLookupResults;
-(BOOL)URLContainsUserInfo;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
