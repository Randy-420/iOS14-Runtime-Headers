/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/GCDeviceHapticCapabilityInfo.h>

@protocol NSObjectNSCopyingNSSecureCoding;
@class GCDeviceHaptics, NSArray, GCController, GCHapticCapabilityGraph, NSString;

@interface GCHapticCapabilities : NSObject <NSSecureCoding, GCDeviceHapticCapabilityInfo> {

	NSArray* _hapticEnginesInfo;
	GCController* _controller;
	BOOL _initialized;
	id<NSObject><NSCopying><NSSecureCoding> _identifier;
	GCHapticCapabilityGraph* _capabilityGraph;
	GCDeviceHaptics* _deviceHaptics;
	NSArray* _hapticEngines;

}

@property (readonly) GCHapticCapabilityGraph * capabilityGraph;                       //@synthesize capabilityGraph=_capabilityGraph - In the implementation block
@property (copy) NSArray * hapticEngines;                                             //@synthesize hapticEngines=_hapticEngines - In the implementation block
@property (nonatomic,readonly) BOOL initialized;                                      //@synthesize initialized=_initialized - In the implementation block
@property (readonly) GCDeviceHaptics * deviceHaptics;                                 //@synthesize deviceHaptics=_deviceHaptics - In the implementation block
@property (readonly) id<NSObject><NSCopying><NSSecureCoding> identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id<NSObject><NSCopying><NSSecureCoding>)identifier;
-(void)setController:(id)arg1 ;
-(BOOL)initialized;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 hapticEnginesInfo:(id)arg2 hapticCapabilityGraph:(id)arg3 ;
-(void)initializeHapticEngines;
-(void)removeHapticEngines;
-(GCDeviceHaptics *)deviceHaptics;
-(NSArray *)hapticEngines;
-(GCHapticCapabilityGraph *)capabilityGraph;
-(void)setHapticEngines:(NSArray *)arg1 ;
@end
