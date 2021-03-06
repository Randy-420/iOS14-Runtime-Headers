/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSKThreadDispatcher.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface TSKLowPriorityThreadDispatcher : TSKThreadDispatcher {

	NSObject*<OS_dispatch_queue> _queue;
	int _suspendCount;

}

@property (getter=isSuspended,readonly) BOOL suspended; 
+(id)_singletonAlloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedLowPriorityDispatcher;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)autorelease;
-(oneway void)release;
-(BOOL)isSuspended;
-(void)suspend;
-(id)init;
-(unsigned long long)retainCount;
-(void)resume;
-(id)retain;
-(id)p_dispatchQueue;
@end

