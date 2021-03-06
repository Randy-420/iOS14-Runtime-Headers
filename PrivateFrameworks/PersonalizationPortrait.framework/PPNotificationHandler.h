/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class _PASLock, NSObject, NSString;

@interface PPNotificationHandler : NSObject {

	_PASLock* _lock;
	NSObject*<OS_dispatch_queue> _waiterQueue;
	double _waitSeconds;
	NSString* _name;

}

@property (assign,nonatomic) double waitSeconds;              //@synthesize waitSeconds=_waitSeconds - In the implementation block
@property (nonatomic,retain) NSString * name;                 //@synthesize name=_name - In the implementation block
-(void)waitOnQueueToDrain;
-(void)setName:(NSString *)arg1 ;
-(double)waitSeconds;
-(void)fireWithObjects:(id)arg1 ;
-(void)setWaitSeconds:(double)arg1 ;
-(id)initWithName:(id)arg1 waitSeconds:(double)arg2 ;
-(void)_executeBlocksWithGuardedData:(id)arg1 ;
-(void)_delayedExecutionAfterSeconds:(double)arg1 ;
-(void)addObserverBlock:(/*^block*/id)arg1 forLifetimeOfObject:(id)arg2 ;
-(NSString *)name;
-(id)description;
@end

