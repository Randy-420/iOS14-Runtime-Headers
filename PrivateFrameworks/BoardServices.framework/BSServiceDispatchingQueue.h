/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BSServiceDispatchingQueue <NSObject>
@required
-(id)backingQueueIfExists;
-(void)assertBarrierOnQueue;
-(void)performAsync:(/*^block*/id)arg1 withHandoff:(id)arg2;
-(void)performAsync:(/*^block*/id)arg1;

@end

