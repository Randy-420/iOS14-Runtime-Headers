/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WeatherAnalytics.framework/WeatherAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AADataEventType.h>

@class WADeviceOrientation, WAInterfaceOrientation;

@interface WAOrientationData : NSObject <AADataEventType> {

	WADeviceOrientation* _deviceOrientation;
	WAInterfaceOrientation* _interfaceOrientation;

}

@property (nonatomic,readonly) WADeviceOrientation * deviceOrientation;                    //@synthesize deviceOrientation=_deviceOrientation - In the implementation block
@property (nonatomic,readonly) WAInterfaceOrientation * interfaceOrientation;              //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
+(id)dataName;
-(WAInterfaceOrientation *)interfaceOrientation;
-(WADeviceOrientation *)deviceOrientation;
-(id)toDict;
-(id)initWithDeviceOrientation:(id)arg1 interfaceOrientation:(id)arg2 ;
@end

