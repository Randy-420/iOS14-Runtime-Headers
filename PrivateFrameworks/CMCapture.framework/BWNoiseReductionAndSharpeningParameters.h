/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface BWNoiseReductionAndSharpeningParameters : NSObject {

	NSString* _portType;
	NSDictionary* _noiseReductionAndSharpeningConfiguration;

}
-(id)noiseReductionAndSharpeningConfigurationForType:(int)arg1 gain:(float)arg2 ;
-(void)dealloc;
-(id)_noiseReductionAndSharpeningParametersForType:(int)arg1 ;
-(id)initWithPortType:(id)arg1 sensorIDDictionary:(id)arg2 ;
-(id)portType;
-(id)description;
@end

