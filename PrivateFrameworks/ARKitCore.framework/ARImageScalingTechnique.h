/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARTechnique.h>

@interface ARImageScalingTechnique : ARTechnique {

	OpaqueVTPixelTransferSessionRef _vtPixelTransferSession;
	CVPixelBufferPoolRef _scaledPixelBufferPool;
	BOOL _shouldUseScaleFactor;
	unsigned char _downscaleFactor;
	unsigned _conversionPixelFormatType;
	CGSize _scaledSize;

}

@property (nonatomic,readonly) CGSize scaledSize;                             //@synthesize scaledSize=_scaledSize - In the implementation block
@property (assign,nonatomic) unsigned conversionPixelFormatType;              //@synthesize conversionPixelFormatType=_conversionPixelFormatType - In the implementation block
@property (nonatomic,readonly) unsigned char downscaleFactor;                 //@synthesize downscaleFactor=_downscaleFactor - In the implementation block
-(id)processData:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(CGSize)scaledSize;
-(id)initWithScaledSize:(CGSize)arg1 ;
-(void)setConversionPixelFormatType:(unsigned)arg1 ;
-(unsigned long long)requiredSensorDataTypes;
-(unsigned char)downscaleFactor;
-(id)initWithDownscaleFactor:(unsigned char)arg1 ;
-(unsigned)conversionPixelFormatType;
@end

