/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:17 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TipsDaemon/TPSAnalyticsProcessor.h>

@class NSDate;

@interface TPSAnalyticsUsageEventsProcessor : TPSAnalyticsProcessor {

	NSDate* _currentDate;

}
+(id)_preHintRangeOutOfBoundsForIdentifier:(id)arg1 ;
+(id)_preHintUsageKeyForIdentifier:(id)arg1 ;
+(id)_usageEventsProcessedKeyForIdentifier:(id)arg1 ;
+(BOOL)_tipStatusValidForLiftProcessing:(id)arg1 contextualInfo:(id)arg2 firstShownDate:(id)arg3 ;
+(id)_firstShownDateForTipStatus:(id)arg1 ;
-(void)_saveHistoricalUsage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCurrentDate:(id)arg1 ;
-(id)init;
-(void)_countsForPredicate:(id)arg1 streamName:(id)arg2 interval:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)processAnalytics:(/*^block*/id)arg1 ;
-(void)_savePreHintRangeOutOfBounds:(BOOL)arg1 forIdentifier:(id)arg2 ;
-(void)_calculateLift:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resetAnalytics;
@end
