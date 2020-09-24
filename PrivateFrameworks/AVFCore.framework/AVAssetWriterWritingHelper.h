/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetWriterHelper.h>
#import <AVFCore/AVAssetWriterFigAssetWriterNotificationHandlerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, AVAssetWriterFigAssetWriterNotificationHandler, NSString;

@interface AVAssetWriterWritingHelper : AVAssetWriterHelper <AVAssetWriterFigAssetWriterNotificationHandlerDelegate> {

	OpaqueFigAssetWriterRef _figAssetWriter;
	NSObject*<OS_dispatch_queue> _figAssetWriterAccessQueue;
	BOOL _startSessionCalled;
	AVAssetWriterFigAssetWriterNotificationHandler* _notificationHandler;
	void* _callbackContextToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)finalStepWorkaroundOperationWithFigAssetWriter:(OpaqueFigAssetWriterRef)arg1 ;
+(id)finishWritingDelegateOperationWithAssetWriter:(id)arg1 andFigAssetWriter:(OpaqueFigAssetWriterRef)arg2 andDelegate:(id)arg3 ;
+(id)prepareInputsOperationsWithInputs:(id)arg1 ;
-(void)flush;
-(id)initWithConfigurationState:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(BOOL)checkAVAssetWriterInputConfigurationToOutputSegmentDataForOutputFileTypeProfile:(id)arg1 preferredOutputSegmentInterval:(SCD_Struct_AV6)arg2 returningDebugDescription:(id*)arg3 ;
-(void)finishWriting;
-(long long)status;
-(void)flushSegment;
-(void)finishWritingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)cancelWriting;
-(id)initWithConfigurationState:(id)arg1 ;
-(void)didReceiveFigAssetWriterNotificationWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)endSessionAtSourceTime:(SCD_Struct_AV6)arg1 ;
-(id)figTrackReferences;
-(id)_transitionToFinishWritingHelperWithFinishWritingOperations:(id)arg1 ;
-(id)_makeFinishWritingOperationsWithCustomFigAssetWriterFinishOperation:(id)arg1 ;
-(BOOL)checkConfigurationToOutputSegmentDataReturningDebugDescription:(id*)arg1 ;
-(void)startSessionAtSourceTime:(SCD_Struct_AV6)arg1 ;
-(OpaqueFigAssetWriterRef)_retainedFigAssetWriter;
@end
