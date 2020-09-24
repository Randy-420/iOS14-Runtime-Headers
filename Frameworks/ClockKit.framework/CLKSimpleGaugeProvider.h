/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:49:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKit/ClockKit-Structs.h>
#import <ClockKit/CLKGaugeProvider.h>

@interface CLKSimpleGaugeProvider : CLKGaugeProvider {

	float _fillFraction;

}

@property (assign,nonatomic) float fillFraction;              //@synthesize fillFraction=_fillFraction - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)gaugeProviderWithStyle:(long long)arg1 gaugeColor:(id)arg2 fillFraction:(float)arg3 ;
+(id)gaugeProviderWithStyle:(long long)arg1 gaugeColors:(id)arg2 gaugeColorLocations:(id)arg3 fillFraction:(float)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)validate;
-(id)startUpdatesWithHandler:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(float)fillFraction;
-(void)setFillFraction:(float)arg1 ;
-(void)stopUpdatesForToken:(id)arg1 ;
-(double)progressFractionForNow:(id)arg1 ;
-(BOOL)needsTimerUpdates;
-(id)JSONObjectRepresentation;
-(id)initWithJSONObjectRepresentation:(id)arg1 ;
@end
