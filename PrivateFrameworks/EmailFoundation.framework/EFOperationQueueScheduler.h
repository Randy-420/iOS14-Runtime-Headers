/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EFScheduler.h>

@class NSOperationQueue, NSString;

@interface EFOperationQueueScheduler : NSObject <EFScheduler> {

	NSOperationQueue* _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performBlock:(/*^block*/id)arg1 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 ;
-(id)performWithObject:(id)arg1 ;
-(id)initWithMaxConcurrentOperationCount:(long long)arg1 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 ;
-(void)performSyncBlock:(/*^block*/id)arg1 ;
-(void)performSyncBarrierBlock:(/*^block*/id)arg1 ;
-(void)performVoucherPreservingBlock:(/*^block*/id)arg1 ;
@end

