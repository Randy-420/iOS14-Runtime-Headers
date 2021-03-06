/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKInteractiveChartViewController.h>
#import <libobjc.A.dylib/HKInteractiveChartViewObserver.h>

@class HKDisplayType, HKValueRange, HKUIMetricColors, UIColor, NSMutableDictionary, _HKInteractiveChartOverlayWaitForCacheData, NSString;

@interface HKInteractiveChartOverlayViewController : HKInteractiveChartViewController <HKInteractiveChartViewObserver> {

	HKDisplayType* _primaryDisplayType;
	long long _displayMode;
	HKValueRange* _initialVisibleDateRange;
	HKUIMetricColors* _annotationDataSourceMetricColors;
	HKDisplayType* _overlayDisplayType;
	UIColor* _currentOverlayColor;
	NSMutableDictionary* _overlayChartCaches;
	NSMutableDictionary* _customNamedCaches;
	_HKInteractiveChartOverlayWaitForCacheData* _waitForCacheData;

}

@property (nonatomic,retain) HKDisplayType * overlayDisplayType;                                         //@synthesize overlayDisplayType=_overlayDisplayType - In the implementation block
@property (nonatomic,retain) UIColor * currentOverlayColor;                                              //@synthesize currentOverlayColor=_currentOverlayColor - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * overlayChartCaches;                                   //@synthesize overlayChartCaches=_overlayChartCaches - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * customNamedCaches;                                    //@synthesize customNamedCaches=_customNamedCaches - In the implementation block
@property (nonatomic,retain) _HKInteractiveChartOverlayWaitForCacheData * waitForCacheData;              //@synthesize waitForCacheData=_waitForCacheData - In the implementation block
@property (nonatomic,readonly) HKDisplayType * primaryDisplayType;                                       //@synthesize primaryDisplayType=_primaryDisplayType - In the implementation block
@property (assign,nonatomic) long long displayMode;                                                      //@synthesize displayMode=_displayMode - In the implementation block
@property (nonatomic,retain) HKValueRange * initialVisibleDateRange;                                     //@synthesize initialVisibleDateRange=_initialVisibleDateRange - In the implementation block
@property (nonatomic,retain) HKUIMetricColors * annotationDataSourceMetricColors;                        //@synthesize annotationDataSourceMetricColors=_annotationDataSourceMetricColors - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)displayMode;
-(void)setDisplayMode:(long long)arg1 ;
-(HKDisplayType *)primaryDisplayType;
-(id)initWithHealthStore:(id)arg1 primaryDisplayType:(id)arg2 unitPreferenceController:(id)arg3 dateCache:(id)arg4 chartDataCacheController:(id)arg5 selectedTimeScopeController:(id)arg6 sampleTypeDateRangeController:(id)arg7 initialXValue:(id)arg8 options:(unsigned long long)arg9 ;
-(HKValueRange *)initialVisibleDateRange;
-(void)setInitialVisibleDateRange:(HKValueRange *)arg1 ;
-(void)clearOverlayDisplayType;
-(void)installOverlayDisplayType:(id)arg1 ;
-(void)configureDisplayTypes:(id)arg1 timeScope:(long long)arg2 stackOffset:(long long)arg3 ;
-(id)displayTypeForQuantityDistributionStyle:(long long)arg1 timeScope:(long long)arg2 overlayColor:(id)arg3 options:(long long)arg4 alternateFormatter:(id)arg5 namedPredicate:(id)arg6 ;
-(void)cachedDataForQuantityDistributionStyle:(long long)arg1 timeScope:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4 namedPredicate:(id)arg5 completion:(/*^block*/id)arg6 ;
-(id)displayTypeForQuantityIdentifier:(id)arg1 timeScope:(long long)arg2 displayTypeController:(id)arg3 overlayColor:(id)arg4 cacheDataSource:(id)arg5 alternateLineSeries:(id)arg6 alternateFormatter:(id)arg7 seriesOptions:(long long)arg8 ;
-(void)cachedDataForQuantityIdentifier:(id)arg1 timeScope:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4 cacheDataSource:(id)arg5 completion:(/*^block*/id)arg6 ;
-(HKDisplayType *)overlayDisplayType;
-(void)setOverlayDisplayType:(HKDisplayType *)arg1 ;
-(id)seriesSelectionLineColorForGraphView:(id)arg1 ;
-(void)_commonInitializationWithDisplayType:(id)arg1 ;
-(NSMutableDictionary *)overlayChartCaches;
-(NSMutableDictionary *)customNamedCaches;
-(void)unitPreferencesWillUpdate:(id)arg1 ;
-(id)_dataSourceForDistributionStyle:(long long)arg1 timeScope:(long long)arg2 namedPredicate:(id)arg3 ;
-(void)_modifyFormatter:(id)arg1 forTitleOptions:(long long)arg2 ;
-(id)_dataSourceForQuantityType:(id)arg1 timeScope:(long long)arg2 customDataSource:(id)arg3 ;
-(void)_deliverOrWaitForDataSource:(id)arg1 graphSeriesContext:(id)arg2 priorityDelegate:(id)arg3 timeScope:(long long)arg4 startDate:(id)arg5 endDate:(id)arg6 completion:(/*^block*/id)arg7 ;
-(BOOL)_deliverCachedDataFromSource:(id)arg1 graphSeriesContext:(id)arg2 timeScope:(long long)arg3 startDate:(id)arg4 endDate:(id)arg5 completion:(/*^block*/id)arg6 ;
-(_HKInteractiveChartOverlayWaitForCacheData *)waitForCacheData;
-(double)minimumHeightForChart;
-(HKUIMetricColors *)annotationDataSourceMetricColors;
-(BOOL)_displayTypeRequiresAverageAndDuration:(id)arg1 ;
-(id)_overlayChartCacheForDistributionStyle:(long long)arg1 timeScope:(long long)arg2 namedPredicate:(id)arg3 ;
-(id)_overlayChartCacheForDataSource:(id)arg1 timeScope:(long long)arg2 templateDisplayType:(id)arg3 ;
-(id)initWithFixedRange:(id)arg1 healthStore:(id)arg2 primaryDisplayType:(id)arg3 unitPreferenceController:(id)arg4 dateCache:(id)arg5 chartDataCacheController:(id)arg6 selectedTimeScopeController:(id)arg7 sampleTypeDateRangeController:(id)arg8 initialXValue:(id)arg9 options:(unsigned long long)arg10 ;
-(void)cachedDataForCustomGraphSeries:(id)arg1 timeScope:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)makeAnnotationDataSource;
-(id)visibleRangeForTimeScope:(long long)arg1 proposedRange:(id)arg2 ;
-(id)lollipopAnnotationColor;
-(id)lollipopExtensionColor;
-(void)setAnnotationDataSourceMetricColors:(HKUIMetricColors *)arg1 ;
-(UIColor *)currentOverlayColor;
-(void)setCurrentOverlayColor:(UIColor *)arg1 ;
-(void)setOverlayChartCaches:(NSMutableDictionary *)arg1 ;
-(void)setCustomNamedCaches:(NSMutableDictionary *)arg1 ;
-(void)setWaitForCacheData:(_HKInteractiveChartOverlayWaitForCacheData *)arg1 ;
@end

