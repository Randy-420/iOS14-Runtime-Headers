/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Email/Email-Structs.h>
#import <Email/EMObjectID.h>
#import <libobjc.A.dylib/EFPubliclyDescribable.h>

@class NSURL, NSString;

@interface EMMailboxObjectID : EMObjectID <EFPubliclyDescribable> {

	NSURL* _url;

}

@property (nonatomic,readonly) NSURL * url;                                       //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithURL:(id)arg1 ;
-(NSString *)ef_publicDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)debugDescription;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSURL *)url;
-(NSString *)description;
@end

