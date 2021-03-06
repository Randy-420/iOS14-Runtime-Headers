/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log;
#import <CoreBrightness/CoreBrightness-Structs.h>
@class NSObject, CBALSEvent;

@interface CBALSNodeiOS : NSObject {

	NSObject*<OS_os_log> _logHandle;
	int _placement;
	float _superFastIntegrationTime;
	float _fastIntegrationTime;
	float _slowIntegrationTime;
	BOOL _colorSupport;
	int _orientation;
	IOHIDServiceClientRef _alsService;
	CBALSEvent* _currentALSEvent;

}

@property (assign) IOHIDServiceClientRef alsService;                    //@synthesize alsService=_alsService - In the implementation block
@property (nonatomic,retain) CBALSEvent * currentALSEvent;              //@synthesize currentALSEvent=_currentALSEvent - In the implementation block
@property (assign) int orientation;                                     //@synthesize orientation=_orientation - In the implementation block
-(void)dealloc;
-(int)orientation;
-(BOOL)handleALSEvent:(id)arg1 ;
-(void)setOrientation:(int)arg1 ;
-(void)initALSProperties;
-(BOOL)isColorSupported;
-(id)initWithALSServiceClient:(IOHIDServiceClientRef)arg1 ;
-(BOOL)conformsToHIDServiceClient:(IOHIDServiceClientRef)arg1 ;
-(IOHIDServiceClientRef)alsService;
-(void)setAlsService:(IOHIDServiceClientRef)arg1 ;
-(CBALSEvent *)currentALSEvent;
-(void)setCurrentALSEvent:(CBALSEvent *)arg1 ;
@end

