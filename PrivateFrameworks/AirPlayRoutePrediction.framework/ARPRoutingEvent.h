/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AirPlayRoutePrediction.framework/AirPlayRoutePrediction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDateInterval, NSDictionary;

@interface ARPRoutingEvent : NSObject {

	NSString* _bundleID;
	NSString* _outputDeviceID;
	NSDateInterval* _interval;
	NSDictionary* _probabilityVector;

}

@property (nonatomic,copy,readonly) NSString * bundleID;                      //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * outputDeviceID;                //@synthesize outputDeviceID=_outputDeviceID - In the implementation block
@property (nonatomic,copy,readonly) NSDateInterval * interval;                //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) NSDictionary * probabilityVector;              //@synthesize probabilityVector=_probabilityVector - In the implementation block
+(id)mostRecentRoutingEventInDateInterval:(id)arg1 knowledgeStore:(id)arg2 eventLimit:(unsigned long long)arg3 longFormVideoFilter:(/*^block*/id)arg4 ;
-(NSDictionary *)probabilityVector;
-(NSDateInterval *)interval;
-(NSString *)outputDeviceID;
-(NSString *)bundleID;
-(id)description;
-(id)initWithBundleID:(id)arg1 outputDeviceID:(id)arg2 interval:(id)arg3 probabilityVector:(id)arg4 ;
@end

