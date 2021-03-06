/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface RCWaveformSegment : NSObject <NSSecureCoding> {

	NSData* _averagePowerLevelData;
	BOOL _isRendered;
	SCD_Struct_RC7 _timeRange;

}

@property (nonatomic,readonly) SCD_Struct_RC7 timeRange;                       //@synthesize timeRange=_timeRange - In the implementation block
@property (assign,nonatomic) BOOL isRendered;                                  //@synthesize isRendered=_isRendered - In the implementation block
@property (nonatomic,readonly) const float* averagePowerLevels; 
@property (nonatomic,readonly) long long averagePowerLevelsCount; 
+(void)initialize;
+(id)emptySegmentWithTimeRange:(SCD_Struct_RC7)arg1 ;
+(id)segmentsByMergingSegments:(id)arg1 preferredSegmentDuration:(double)arg2 beforeTime:(double)arg3 andThenUsePreferredSegmentDuration:(double)arg4 ;
+(BOOL)supportsSecureCoding;
+(id)_mergedSegmentByFastMergingWithMergeableSegments:(id)arg1 mergedLevelsDuration:(double)arg2 ;
+(id)_discontinuityRepairedSegmentsByGrowingToFillGapsInSegments:(id)arg1 ;
+(id)_mergedSegmentByResamplingWithMergeableSegments:(id)arg1 mergedLevelsDuration:(double)arg2 ;
+(id)segmentsByReparingDiscontinuitiesInSegments:(id)arg1 ;
+(id)segmentsByMergingSegments:(id)arg1 preferredSegmentDuration:(double)arg2 ;
+(id)_segmentByMergingMergableSegments:(id)arg1 ;
+(id)_segmentsByJoiningSegment:(id)arg1 toSegmentIfNecessaryWithGreaterSegment:(id)arg2 averagePowerLevelJoinLimit:(unsigned long long)arg3 ;
+(id)segmentsByShiftingSegments:(id)arg1 byTimeOffset:(double)arg2 ;
-(SCD_Struct_RC7)timeRange;
-(id)segmentByClippingToTimeRange:(SCD_Struct_RC7)arg1 ;
-(id)simpleDescription;
-(id)segmentsByJoiningIfSmallSegment:(id)arg1 ;
-(long long)averagePowerLevelsCount;
-(const float*)averagePowerLevels;
-(id)initWithTimeRange:(SCD_Struct_RC7)arg1 averagePowerLevelVector:(vector<float, std::__1::allocator<float> >*)arg2 ;
-(id)initWithTimeRange:(SCD_Struct_RC7)arg1 averagePowerLevelData:(id)arg2 ;
-(id)copyWithAdjustedTimeRange:(SCD_Struct_RC7)arg1 ;
-(id)_initWithTimeRange:(SCD_Struct_RC7)arg1 averagePowerLevelData:(id)arg2 ;
-(BOOL)isRendered;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isWaveformDataEqualToDataInSegment:(id)arg1 ;
-(id)_segmentWithValuesInContainedTimeRange:(SCD_Struct_RC7)arg1 ;
-(id)_segmentsByJoiningIfNecessaryGreaterSegment:(id)arg1 averagePowerLevelJoinLimit:(unsigned long long)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithTimeRangeOffsetByTimeOffset:(double)arg1 ;
-(void)setIsRendered:(BOOL)arg1 ;
-(id)segmentsByJoiningIfSmallSegment:(id)arg1 averagePowerLevelJoinLimit:(unsigned long long)arg2 ;
-(id)verboseDescription;
-(id)description;
-(BOOL)hasUniformPowerLevel:(float)arg1 ;
@end

