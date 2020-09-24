/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSInvocation.h>

@class MFActivityMonitor, NSString;

@interface MFMonitoredInvocation : NSInvocation {

	MFActivityMonitor* _monitor;
	BOOL _shouldLogInvocation;
	NSString* _powerAssertionId;

}

@property (nonatomic,readonly) MFActivityMonitor * monitor;              //@synthesize monitor=_monitor - In the implementation block
@property (nonatomic,copy) NSString * powerAssertionId;                  //@synthesize powerAssertionId=_powerAssertionId - In the implementation block
+(id)invocationWithMethodSignature:(id)arg1 ;
+(id)invocationWithSelector:(SEL)arg1 target:(id)arg2 taskName:(id)arg3 priority:(int)arg4 canBeCancelled:(BOOL)arg5 ;
+(id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4 taskName:(id)arg5 priority:(int)arg6 canBeCancelled:(BOOL)arg7 ;
+(id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object:(id)arg3 taskName:(id)arg4 priority:(int)arg5 canBeCancelled:(BOOL)arg6 ;
-(MFActivityMonitor *)monitor;
-(void)invoke;
-(void)dealloc;
-(void)setPowerAssertionId:(NSString *)arg1 ;
-(NSString *)powerAssertionId;
-(void)setShouldLogInvocation:(BOOL)arg1 ;
-(id)description;
-(BOOL)mf_shouldLogInvocation;
@end
