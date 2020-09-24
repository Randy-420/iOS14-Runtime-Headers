/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, HKQuantity, NSNumber, HKCodedQuantity;

@interface HKChartableCodedQuantity : NSObject <NSCopying> {

	NSArray* _codings;
	HKQuantity* _quantity;
	NSNumber* _rangeLow;
	NSNumber* _rangeHigh;
	HKCodedQuantity* _originalCodedQuantity;
	HKCodedQuantity* _originalRangeLowCodedQuantity;
	HKCodedQuantity* _originalRangeHighCodedQuantity;

}

@property (nonatomic,copy) HKCodedQuantity * originalCodedQuantity;                       //@synthesize originalCodedQuantity=_originalCodedQuantity - In the implementation block
@property (nonatomic,copy) HKCodedQuantity * originalRangeLowCodedQuantity;               //@synthesize originalRangeLowCodedQuantity=_originalRangeLowCodedQuantity - In the implementation block
@property (nonatomic,copy) HKCodedQuantity * originalRangeHighCodedQuantity;              //@synthesize originalRangeHighCodedQuantity=_originalRangeHighCodedQuantity - In the implementation block
@property (nonatomic,copy,readonly) NSArray * codings;                                    //@synthesize codings=_codings - In the implementation block
@property (nonatomic,copy,readonly) HKQuantity * quantity;                                //@synthesize quantity=_quantity - In the implementation block
@property (nonatomic,readonly) BOOL hasRange; 
@property (nonatomic,readonly) BOOL isInRange; 
@property (nonatomic,readonly) double doubleValue; 
@property (nonatomic,copy,readonly) NSNumber * rangeLow;                                  //@synthesize rangeLow=_rangeLow - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * rangeHigh;                                 //@synthesize rangeHigh=_rangeHigh - In the implementation block
+(id)chartableCodedQuantityWithCodings:(id)arg1 originalCodedQuantity:(id)arg2 originalRangeLowCodedQuantity:(id)arg3 originalRangeHighCodedQuantity:(id)arg4 error:(id*)arg5 ;
+(id)_valueFromCodedQuantity:(id)arg1 inUnit:(id)arg2 error:(id*)arg3 ;
+(id)converter;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasRange;
-(double)doubleValue;
-(NSNumber *)rangeLow;
-(NSArray *)codings;
-(id)init;
-(id)initWithCodings:(id)arg1 quantity:(id)arg2 rangeLow:(id)arg3 rangeHigh:(id)arg4 ;
-(id)chartableCodedQuantityInUnit:(id)arg1 adoptUnitIfNullUnit:(BOOL)arg2 error:(id*)arg3 ;
-(id)chartableCodedQuantityInUnit:(id)arg1 error:(id*)arg2 ;
-(HKCodedQuantity *)originalCodedQuantity;
-(void)setOriginalCodedQuantity:(HKCodedQuantity *)arg1 ;
-(HKCodedQuantity *)originalRangeLowCodedQuantity;
-(void)setOriginalRangeLowCodedQuantity:(HKCodedQuantity *)arg1 ;
-(HKCodedQuantity *)originalRangeHighCodedQuantity;
-(void)setOriginalRangeHighCodedQuantity:(HKCodedQuantity *)arg1 ;
-(BOOL)isInRange;
-(NSNumber *)rangeHigh;
-(BOOL)isCompatibleWithUnit:(id)arg1 ;
-(HKQuantity *)quantity;
-(double)doubleValueForUnit:(id)arg1 ;
-(id)description;
@end
