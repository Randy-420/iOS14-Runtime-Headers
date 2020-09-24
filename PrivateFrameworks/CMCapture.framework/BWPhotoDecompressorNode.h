/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class BWPhotoDecompressor, NSMutableArray, NSMutableSet;

@interface BWPhotoDecompressorNode : BWNode {

	BOOL _downstreamIsSharingOutputPool;
	BOOL _synchronizedSlaveAttachedMediaDecompressionEnabled;
	BWPhotoDecompressor* _photoDecompressor;
	BWPhotoDecompressor* _synchronizedSlavePhotoDecompressor;
	NSMutableArray* _emitSampleBufferSemaphores;
	NSMutableArray* _emitSynchronizedSlaveSampleBufferSemaphores;
	NSMutableSet* _disabledSynchronizedSlaveSemaphores;
	int _numberOfTimesWaited;
	int _numberOfBuffersEmitted;
	int _numberOfTimesSynchronizedSlaveWaited;
	int _numberOfSynchronizedSlaveBuffersEmitted;

}
+(void)initialize;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(void)_releaseResources;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(id)nodeSubType;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(id)initWithSynchronizedSlaveAttachedMediaDecompressionEnabled:(BOOL)arg1 ;
-(id)nodeType;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(void)setDownstreamIsSharingOutputPool:(BOOL)arg1 ;
-(BOOL)downstreamIsSharingOutputPool;
-(void)dealloc;
-(void)_ensureSemaphoresAreBalanced;
-(void)addEmitSampleBufferSemaphore:(id)arg1 ;
-(void)_setOverCaptureSynchronizedSlaveSemaphoreEnabled:(BOOL)arg1 ;
-(void)addEmitSynchronizedSlaveSampleBufferSemaphore:(id)arg1 ;
@end
