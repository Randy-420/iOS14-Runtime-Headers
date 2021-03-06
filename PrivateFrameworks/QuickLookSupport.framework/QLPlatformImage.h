/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuickLookSupport/QuickLookSupport-Structs.h>
@class UIImage;

@interface QLPlatformImage : NSObject {

	CGImageRef _cgImage;
	unsigned _orientation;
	double _scale;
	/*^block*/id _cleanupDataBlock;
	CGSize _size;

}

@property (assign) CGSize size;                              //@synthesize size=_size - In the implementation block
@property (readonly) UIImage * UIImage; 
@property (assign) CGImageRef CGImage; 
@property (nonatomic,copy) id cleanupDataBlock;              //@synthesize cleanupDataBlock=_cleanupDataBlock - In the implementation block
@property (assign) unsigned orientation;                     //@synthesize orientation=_orientation - In the implementation block
@property (assign) double scale;                             //@synthesize scale=_scale - In the implementation block
+(id)imageWithCGImage:(CGImageRef)arg1 scale:(double)arg2 orientation:(unsigned)arg3 ;
+(id)imageWithUIImage:(id)arg1 ;
-(UIImage *)UIImage;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(void)dealloc;
-(void)setSize:(CGSize)arg1 ;
-(unsigned)orientation;
-(CGImageRef)CGImage;
-(void)setOrientation:(unsigned)arg1 ;
-(CGSize)size;
-(void)setCGImage:(CGImageRef)arg1 ;
-(id)cleanupDataBlock;
-(void)setCleanupDataBlock:(id)arg1 ;
@end

