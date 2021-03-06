/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MTAgentNotificationListener.h>

@protocol NAScheduler, OS_dispatch_queue;
@class NSObject, MTObserverStore, NSString;

@interface MTTimeListener : NSObject <MTAgentNotificationListener> {

	id<NAScheduler> _serializer;
	NSObject*<OS_dispatch_queue> _queue;
	MTObserverStore* _observers;

}

@property (nonatomic,retain) id<NAScheduler> serializer;                      //@synthesize serializer=_serializer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) MTObserverStore * observers;                     //@synthesize observers=_observers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)assertionTimeOutForNotification:(id)arg1 ofType:(long long)arg2 ;
-(void)registerObserver:(id)arg1 ;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(id)initWithCallbackScheduler:(id)arg1 ;
-(MTObserverStore *)observers;
-(id<NAScheduler>)serializer;
-(void)setObservers:(MTObserverStore *)arg1 ;
-(void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)handlesNotification:(id)arg1 ofType:(long long)arg2 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

