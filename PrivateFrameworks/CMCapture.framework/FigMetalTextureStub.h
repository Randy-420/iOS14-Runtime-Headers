/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/MTLTexture.h>

@class NSString;

@interface FigMetalTextureStub : NSObject <MTLTexture> {

	NSString* _label;
	unsigned long long _offset;
	unsigned long long _width;
	unsigned long long _height;
	unsigned long long _depth;
	unsigned long long _textureType;
	unsigned long long _usage;
	unsigned long long _pixelFormat;

}

@property (copy) NSString * label;                                               //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) unsigned long long offset;                          //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) unsigned long long width;                           //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) unsigned long long height;                          //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) unsigned long long pixelFormat;                     //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (assign,nonatomic) unsigned long long usage;                           //@synthesize usage=_usage - In the implementation block
@property (readonly) id<MTLResource> rootResource; 
@property (readonly) id<MTLTexture> parentTexture; 
@property (readonly) unsigned long long parentRelativeLevel; 
@property (readonly) unsigned long long parentRelativeSlice; 
@property (readonly) id<MTLBuffer> buffer; 
@property (readonly) unsigned long long bufferOffset; 
@property (readonly) unsigned long long bufferBytesPerRow; 
@property (readonly) IOSurfaceRef iosurface; 
@property (readonly) unsigned long long iosurfacePlane; 
@property (readonly) unsigned long long textureType;                             //@synthesize textureType=_textureType - In the implementation block
@property (readonly) unsigned long long depth;                                   //@synthesize depth=_depth - In the implementation block
@property (readonly) unsigned long long mipmapLevelCount; 
@property (readonly) unsigned long long sampleCount; 
@property (readonly) unsigned long long arrayLength; 
@property (getter=isShareable,readonly) BOOL shareable; 
@property (getter=isFramebufferOnly,readonly) BOOL framebufferOnly; 
@property (readonly) unsigned long long firstMipmapInTail; 
@property (readonly) unsigned long long tailSizeInBytes; 
@property (readonly) BOOL isSparse; 
@property (readonly) BOOL allowGPUOptimizedContents; 
@property (nonatomic,readonly) SCD_Struct_Fi104 swizzle; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long cpuCacheMode; 
@property (readonly) unsigned long long storageMode; 
@property (readonly) unsigned long long hazardTrackingMode; 
@property (readonly) unsigned long long resourceOptions; 
@property (readonly) id<MTLHeap> heap; 
@property (readonly) unsigned long long heapOffset; 
@property (readonly) unsigned long long allocatedSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)textureType;
-(void)setPixelFormat:(unsigned long long)arg1 ;
-(unsigned long long)depth;
-(void)setHeight:(unsigned long long)arg1 ;
-(unsigned long long)pixelFormat;
-(id)initWithDescriptor:(id)arg1 ;
-(unsigned long long)width;
-(unsigned long long)height;
-(unsigned long long)usage;
-(void)setOffset:(unsigned long long)arg1 ;
-(unsigned long long)offset;
-(void)setUsage:(unsigned long long)arg1 ;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
@end

