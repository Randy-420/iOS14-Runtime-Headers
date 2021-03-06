/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPImageAnalyzer.h>

@interface VCPImageFaceDetector : VCPImageAnalyzer
+(id)faceDetector;
-(int)processTile:(CVBufferRef)arg1 results:(id)arg2 cancel:(/*^block*/id)arg3 ;
-(int)aggregateTileResults:(id)arg1 tileRect:(CGRect)arg2 imageSize:(CGSize)arg3 landscape:(BOOL)arg4 results:(id)arg5 ;
-(int)faceDetection:(CVBufferRef)arg1 faces:(id)arg2 cancel:(/*^block*/id)arg3 ;
-(BOOL)isDuplicate:(CGRect)arg1 withRect:(CGRect)arg2 ;
-(int)analyzePixelBuffer:(CVBufferRef)arg1 flags:(unsigned long long*)arg2 results:(id*)arg3 cancel:(/*^block*/id)arg4 ;
@end

