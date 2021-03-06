/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class DNDScheduleTime;

@interface DNDScheduleTimePeriod : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	DNDScheduleTime* _startTime;
	DNDScheduleTime* _endTime;

}

@property (nonatomic,copy,readonly) DNDScheduleTime * startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,copy,readonly) DNDScheduleTime * endTime;                //@synthesize endTime=_endTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(DNDScheduleTime *)endTime;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(DNDScheduleTime *)startTime;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)_initWithStartTime:(id)arg1 endTime:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)_initWithPeriod:(id)arg1 ;
@end

