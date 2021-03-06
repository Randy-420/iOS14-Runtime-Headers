/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSError, NSObject;

@interface MSVAsyncOperation : NSOperation {

	BOOL __executing;
	BOOL __finished;
	NSError* _error;
	NSObject*<OS_dispatch_queue> _accessQueue;

}

@property (nonatomic,copy) NSError * error;                                                          //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> accessQueue;                             //@synthesize accessQueue=_accessQueue - In the implementation block
@property (assign,setter=_setExecuting:,getter=_isExecuting,nonatomic) BOOL _executing;              //@synthesize _executing=__executing - In the implementation block
@property (assign,setter=_setFinished:,getter=_isFinished,nonatomic) BOOL _finished;                 //@synthesize _finished=__finished - In the implementation block
-(BOOL)_isFinished;
-(void)finishWithError:(id)arg1 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)finish;
-(void)_setExecuting:(BOOL)arg1 ;
-(void)_setFinished:(BOOL)arg1 ;
-(BOOL)_isExecuting;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)start;
-(id)init;
-(BOOL)isAsynchronous;
-(BOOL)isConcurrent;
-(void)execute;
@end

