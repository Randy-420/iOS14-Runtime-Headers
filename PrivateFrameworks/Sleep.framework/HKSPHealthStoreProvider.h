/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKHealthStore, HKSleepHealthStore;

@interface HKSPHealthStoreProvider : NSObject {

	HKHealthStore* _healthStore;
	HKSleepHealthStore* _sleepHealthStore;

}

@property (nonatomic,readonly) HKSleepHealthStore * sleepHealthStore;              //@synthesize sleepHealthStore=_sleepHealthStore - In the implementation block
@property (nonatomic,readonly) HKHealthStore * healthStore;                        //@synthesize healthStore=_healthStore - In the implementation block
+(id)_initializedLocalDeviceHealthStore;
-(id)initWithLocalDeviceHealthStore;
-(id)initWithSleepHealthStore:(id)arg1 healthStore:(id)arg2 ;
-(HKSleepHealthStore *)sleepHealthStore;
-(HKHealthStore *)healthStore;
@end

