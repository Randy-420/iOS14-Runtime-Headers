/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AFSyncSnapshot : NSObject <NSSecureCoding> {

	NSString* _anchor;
	NSString* _validity;
	long long _count;
	NSString* _key;

}

@property (nonatomic,copy) NSString * anchor;                //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,copy) NSString * validity;              //@synthesize validity=_validity - In the implementation block
@property (assign,nonatomic) long long count;                //@synthesize count=_count - In the implementation block
@property (nonatomic,copy) NSString * key;                   //@synthesize key=_key - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)anchor;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(void)setCount:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setValidity:(NSString *)arg1 ;
-(long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)validity;
-(void)setAnchor:(NSString *)arg1 ;
@end
