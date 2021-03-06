/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKChartPoint.h>

@protocol HKGraphSeriesBlockCoordinateInfo;
@class HKHealthChartPoint, NSDate, NSString;

@interface HKBloodPressureChartPoint : NSObject <HKChartPoint> {

	id<HKGraphSeriesBlockCoordinateInfo> _userInfo;
	HKHealthChartPoint* _systolicChartPoint;
	HKHealthChartPoint* _diastolicChartPoint;
	NSDate* _date;

}

@property (nonatomic,retain) id<HKGraphSeriesBlockCoordinateInfo> userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) HKHealthChartPoint * systolicChartPoint;                    //@synthesize systolicChartPoint=_systolicChartPoint - In the implementation block
@property (nonatomic,retain) HKHealthChartPoint * diastolicChartPoint;                   //@synthesize diastolicChartPoint=_diastolicChartPoint - In the implementation block
@property (nonatomic,retain) NSDate * date;                                              //@synthesize date=_date - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDate:(NSDate *)arg1 ;
-(NSDate *)date;
-(void)setDiastolicChartPoint:(HKHealthChartPoint *)arg1 ;
-(void)setSystolicChartPoint:(HKHealthChartPoint *)arg1 ;
-(id)yValue;
-(void)setUserInfo:(id<HKGraphSeriesBlockCoordinateInfo>)arg1 ;
-(id<HKGraphSeriesBlockCoordinateInfo>)userInfo;
-(id)yValueForKey:(id)arg1 ;
-(id)xValueAsGenericType;
-(id)minXValueAsGenericType;
-(id)maxXValueAsGenericType;
-(id)allYValues;
-(id)minYValue;
-(id)maxYValue;
-(NSString *)description;
-(void)setChartPoint:(id)arg1 forType:(id)arg2 ;
-(HKHealthChartPoint *)systolicChartPoint;
-(HKHealthChartPoint *)diastolicChartPoint;
@end

