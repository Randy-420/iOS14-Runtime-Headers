/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ATXLaunchAndLocationHarvester : NSObject
+(BOOL)_passedGeneralFiltersGivenLocation:(id)arg1 date:(id)arg2 ;
+(id)_awdMetricsObjectWithLocation:(id)arg1 date:(id)arg2 bundleId:(id)arg3 urlHash:(id)arg4 isClip:(BOOL)arg5 launchReason:(int)arg6 isNegativeSession:(BOOL)arg7 ;
+(BOOL)_passedAppOrClipSpecificFiltersGivenBundleId:(id)arg1 date:(id)arg2 isClip:(BOOL)arg3 counterKey:(id)arg4 samplingRate:(double)arg5 maxSamples:(unsigned long long)arg6 ;
+(void)_postAwdMetrics:(id)arg1 ;
+(void)logAppOrClipLaunch:(id)arg1 isNegativeSession:(BOOL)arg2 ;
@end

