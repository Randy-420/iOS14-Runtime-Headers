/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject, NPTPerformanceTest;

@interface WFMeasure : NSObject {

	BOOL _isInProgress;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	NPTPerformanceTest* _performanceTest;

}
-(BOOL)start:(/*^block*/id)arg1 ;
-(void)abort;
-(BOOL)isInProgress;
-(id)initWithType:(int)arg1 ;
@end

