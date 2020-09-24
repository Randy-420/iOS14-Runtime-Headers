/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotosFormats/PhotosFormats-Structs.h>
@class NSString;

@interface _PFCameraMetadataAVMetadataObject : NSObject {

	int _confidence;
	NSString* _type;
	CGRect _bounds;

}

@property (readonly) SCD_Struct_PF3 time; 
@property (readonly) SCD_Struct_PF3 duration; 
@property (readonly) CGRect bounds;                        //@synthesize bounds=_bounds - In the implementation block
@property (readonly) NSString * type;                      //@synthesize type=_type - In the implementation block
@property (readonly) int confidence;                       //@synthesize confidence=_confidence - In the implementation block
+(id)objectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 type:(id)arg2 ;
+(id)humanFaceObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 ;
+(id)humanBodyObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 ;
+(id)catBodyObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 ;
+(id)dogBodyObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 ;
+(id)salientObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 ;
-(SCD_Struct_PF3)time;
-(CGRect)bounds;
-(SCD_Struct_PF3)duration;
-(int)confidence;
-(NSString *)type;
-(id)initWithType:(id)arg1 bounds:(CGRect)arg2 confidence:(int)arg3 ;
@end
