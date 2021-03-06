/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HKAudioExposureUtilities : NSObject
+(double)_rounded:(double)arg1 ;
+(id)localizedDisplayNameForClassification:(unsigned long long)arg1 isEmbedded:(BOOL)arg2 ;
+(id)_classificationValueWithLEQ:(double)arg1 duration:(double)arg2 days:(long long)arg3 ;
+(id)localizedDisplayNameForClassification:(unsigned long long)arg1 ;
+(unsigned long long)classifyLEQ:(id)arg1 forDuration:(double)arg2 overDays:(long long)arg3 ;
+(id)computeLEQFromAudioExposureValues:(id)arg1 ;
+(double)maximumDurationInSecondsForLEQ:(double)arg1 days:(long long)arg2 ;
@end

