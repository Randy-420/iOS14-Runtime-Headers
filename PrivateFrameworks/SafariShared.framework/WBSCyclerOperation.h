/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WBSCyclerOperation : NSObject {

	unsigned long long _numberOfRemainingAttempts;
	float _backoffRatio;
	BOOL _finished;
	BOOL _executing;
	/*^block*/id _block;
	double _nextBackoffTimeInterval;

}

@property (nonatomic,copy) id block;                                           //@synthesize block=_block - In the implementation block
@property (getter=isFinished,nonatomic,readonly) BOOL finished;                //@synthesize finished=_finished - In the implementation block
@property (getter=isExecuting,nonatomic,readonly) BOOL executing;              //@synthesize executing=_executing - In the implementation block
@property (nonatomic,readonly) double nextBackoffTimeInterval;                 //@synthesize nextBackoffTimeInterval=_nextBackoffTimeInterval - In the implementation block
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(id)initWithMaximumNumberOfAttempts:(unsigned long long)arg1 backoffRatio:(float)arg2 ;
-(double)nextBackoffTimeInterval;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(id)init;
-(void)executeWithCompletionHandler:(/*^block*/id)arg1 ;
@end

