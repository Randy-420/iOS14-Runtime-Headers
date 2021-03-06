/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATOperation.h>

@class CATOperationQueue, CATRemoteTaskOperation, NSArray;

@interface DMFBatchRequestOperation : CATOperation {

	CATOperationQueue* _queue;
	CATRemoteTaskOperation* _activityTransactionOperation;
	NSArray* _subOperations;

}

@property (nonatomic,retain) CATOperationQueue * queue;                                          //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) CATRemoteTaskOperation * activityTransactionOperation;              //@synthesize activityTransactionOperation=_activityTransactionOperation - In the implementation block
@property (nonatomic,copy) NSArray * subOperations;                                              //@synthesize subOperations=_subOperations - In the implementation block
-(CATRemoteTaskOperation *)activityTransactionOperation;
-(NSArray *)subOperations;
-(void)activityTransactionOperationDidStart:(id)arg1 ;
-(void)activityTransactionOperationDidFinish:(id)arg1 ;
-(void)setActivityTransactionOperation:(CATRemoteTaskOperation *)arg1 ;
-(id)initWithActivityTransactionOperation:(id)arg1 subOperations:(id)arg2 ;
-(void)setSubOperations:(NSArray *)arg1 ;
-(BOOL)isAsynchronous;
-(CATOperationQueue *)queue;
-(void)setName:(id)arg1 ;
-(void)setQueue:(CATOperationQueue *)arg1 ;
-(void)main;
@end

