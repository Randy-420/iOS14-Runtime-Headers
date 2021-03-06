/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPAttendee : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isCurrentUser;
	unsigned char _status;
	NSString* _name;
	NSString* _emailAddress;
	NSString* _urlString;

}

@property (nonatomic,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * emailAddress;              //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,readonly) NSString * urlString;                 //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,readonly) BOOL isCurrentUser;                   //@synthesize isCurrentUser=_isCurrentUser - In the implementation block
@property (nonatomic,readonly) unsigned char status;                 //@synthesize status=_status - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isCurrentUser;
-(NSString *)urlString;
-(NSString *)emailAddress;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithName:(id)arg1 emailAddress:(id)arg2 urlString:(id)arg3 isCurrentUser:(BOOL)arg4 status:(unsigned char)arg5 ;
-(unsigned char)status;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithEKParticipant:(id)arg1 ;
-(BOOL)isEqualToAttendee:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(id)description;
@end

