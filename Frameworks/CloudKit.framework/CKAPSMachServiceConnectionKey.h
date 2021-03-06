/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKAPSMachServiceConnectionKey : NSObject <NSCopying> {

	NSString* _environmentName;
	NSString* _namedDelegatePort;

}

@property (nonatomic,copy,readonly) NSString * environmentName;                //@synthesize environmentName=_environmentName - In the implementation block
@property (nonatomic,copy,readonly) NSString * namedDelegatePort;              //@synthesize namedDelegatePort=_namedDelegatePort - In the implementation block
-(id)initWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)namedDelegatePort;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)environmentName;
-(unsigned long long)hash;
@end

