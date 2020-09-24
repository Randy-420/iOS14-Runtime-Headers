/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMSetting.h>

@class NSNumber;

@interface HMNumberSetting : HMSetting {

	NSNumber* _minimumValue;
	NSNumber* _maximumValue;
	NSNumber* _stepValue;

}

@property (readonly) NSNumber * minimumValue;              //@synthesize minimumValue=_minimumValue - In the implementation block
@property (readonly) NSNumber * maximumValue;              //@synthesize maximumValue=_maximumValue - In the implementation block
@property (readonly) NSNumber * stepValue;                 //@synthesize stepValue=_stepValue - In the implementation block
-(NSNumber *)minimumValue;
-(NSNumber *)stepValue;
-(NSNumber *)maximumValue;
-(id)valueForUpdate:(id)arg1 ;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(id)internalValue;
@end
