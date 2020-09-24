/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:20 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetAppsUtilities/NetAppsUtilities-Structs.h>
#import <libobjc.A.dylib/NAPromise.h>

@class NSMutableArray, NSError, NSString;

@interface NAFuture : NSObject <NAPromise> {

	os_unfair_lock_s _lock;
	BOOL _finished;
	NSMutableArray* _completionBlocks;
	id _resultValue;
	NSError* _resultError;
	NSString* _descriptor;

}

@property (nonatomic,readonly) id hksp_boolErrorCompletionHandlerAdapter; 
@property (getter=isFinished,readonly) BOOL finished; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
@property (nonatomic,copy) NSString * descriptor;                                      //@synthesize descriptor=_descriptor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)hksp_expiringFutureWithTimeout:(double)arg1 ;
+(id)lazyFutureWithBlock:(/*^block*/id)arg1 ;
+(id)futureWithBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
+(id)futureWithBlock:(/*^block*/id)arg1 ;
+(id)chainFutures:(id)arg1 ;
+(id)futureWithErrorOnlyHandlerAdapterBlock:(/*^block*/id)arg1 ;
+(id)futureWithError:(id)arg1 ;
+(id)futureWithResult:(id)arg1 ;
+(id)_descriptorForChainOperation:(id)arg1 onFuture:(id)arg2 withBlock:(id)arg3 ;
+(id)lazyFutureWithBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
+(id)combineAllFutures:(id)arg1 scheduler:(id)arg2 ;
+(id)combineAllFutures:(id)arg1 ignoringErrors:(BOOL)arg2 scheduler:(id)arg3 ;
+(id)_chainFuturesWithFutureStack:(id)arg1 ;
+(id)futureWithCompletionHandlerAdapterBlock:(/*^block*/id)arg1 ;
+(id)futureWithNoResult;
+(id)combineAllFutures:(id)arg1 ;
+(void)_setShouldEnforceThreadSafety:(BOOL)arg1 ;
-(id)blockAndWaitForCompletionWithError:(id*)arg1 ;
-(void)mtFinishWithFuture:(id)arg1 ;
-(id)mtSynchronousResult:(id*)arg1 ;
-(id)hksp_boolErrorCompletionHandlerAdapter;
-(id)addFailureBlock:(/*^block*/id)arg1 ;
-(void)setDescriptor:(NSString *)arg1 ;
-(BOOL)finishWithResult:(id)arg1 error:(id)arg2 ;
-(BOOL)cancel;
-(BOOL)finishWithError:(id)arg1 ;
-(id)addSuccessBlock:(/*^block*/id)arg1 ;
-(void)didCancel;
-(BOOL)finishWithResult:(id)arg1 ;
-(BOOL)isFinished;
-(/*^block*/id)completionHandlerAdapter;
-(id)recover:(/*^block*/id)arg1 ;
-(/*^block*/id)errorOnlyCompletionHandlerAdapter;
-(id)addCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)finishWithNoResult;
-(BOOL)_queue_isCancelled;
-(NSString *)descriptor;
-(id)reschedule:(id)arg1 ;
-(id)recoverIgnoringError;
-(id)init;
-(BOOL)isCancelled;
-(void)willAddCompletionBlock;
-(id)flatMap:(/*^block*/id)arg1 ;
-(id)initWithResult:(id)arg1 error:(id)arg2 ;
-(NSString *)description;
@end
