/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AvatarKit/AvatarKit-Structs.h>
@class ARSession, ARConfiguration, NSMutableArray, AVTFaceTrackingInfo, NSLock, NSURL, ARFrame;

@interface AVTFaceTracker : NSObject {

	ARSession* _arSession;
	ARConfiguration* _arConfiguration;
	NSMutableArray* _delegates;
	AVTFaceTrackingInfo* _trackingInfo;
	SCD_Struct_AV2 _trackingData;
	NSLock* _trackingDataLock;
	unsigned long long _lastTrackingCaptureTimestamp;
	SCD_Struct_AV3 _rawTransform;
	NSURL* _debugRecordingURL;
	BOOL _trackingIsPaused;
	BOOL _isActive;
	BOOL _shouldConstraintHeadPose;
	BOOL _shouldUseAudioData;
	SCD_Struct_AV4 _perfPacket;
	double _lastARFrameTime;
	long long _frame_id;
	double _timeBetweenARFrame;
	double _lastTrackingDate;
	long long _orientation;
	BOOL _lowLight;
	BOOL _isSensorCovered;
	BOOL limitRoll;
	BOOL _faceTrackingPaused;
	BOOL _skipUpdates;
	BOOL _faceIsTracked;
	BOOL _directRetargetingMode;
	ARFrame* _currentARFrame;

}

@property (assign,nonatomic) BOOL shouldConstraintHeadPose;                                    //@synthesize shouldConstraintHeadPose=_shouldConstraintHeadPose - In the implementation block
@property (assign,nonatomic) BOOL shouldUseAudioData; 
@property (assign,nonatomic) long long interfaceOrientation; 
@property (assign,getter=faceTrackingIsPaused,nonatomic) BOOL faceTrackingPaused;              //@synthesize faceTrackingPaused=_faceTrackingPaused - In the implementation block
@property (assign,nonatomic) BOOL skipUpdates;                                                 //@synthesize skipUpdates=_skipUpdates - In the implementation block
@property (readonly) BOOL faceIsTracked;                                                       //@synthesize faceIsTracked=_faceIsTracked - In the implementation block
@property (readonly) BOOL lowLight;                                                            //@synthesize lowLight=_lowLight - In the implementation block
@property (getter=isSensorCovered,readonly) BOOL sensorCovered;                                //@synthesize isSensorCovered=_isSensorCovered - In the implementation block
@property (readonly) double lastTrackingDate;                                                  //@synthesize lastTrackingDate=_lastTrackingDate - In the implementation block
@property (readonly) unsigned long long lastTrackingCaptureTimestamp;                          //@synthesize lastTrackingCaptureTimestamp=_lastTrackingCaptureTimestamp - In the implementation block
@property (readonly) AVTFaceTrackingInfo * faceTrackingInfo;                                   //@synthesize trackingInfo=_trackingInfo - In the implementation block
@property (readonly) long long faceTrackingFrameID; 
@property (readonly) SCD_Struct_AV3 rawTransform; 
@property (readonly) ARSession * arSession; 
@property (readonly) ARFrame * currentARFrame;                                                 //@synthesize currentARFrame=_currentARFrame - In the implementation block
@property (assign,nonatomic) BOOL directRetargetingMode;                                       //@synthesize directRetargetingMode=_directRetargetingMode - In the implementation block
@property (assign,nonatomic) BOOL limitRoll; 
@property (readonly) float fieldOfView; 
@property (readonly)  videoDimensions; 
@property (readonly) float videoAspectRatio; 
@property (nonatomic,readonly) double arFrameTimestamp; 
@property (nonatomic,readonly) double arDelegateTimestamp; 
@property (nonatomic,readonly) double arFrameDeltaTime; 
@property (copy) NSURL * faceTrackingRecordingURL; 
+(BOOL)usesInternalTrackingPipeline;
+(void)setUsesInternalTrackingPipeline:(BOOL)arg1 ;
-(void)stopRecording;
-(long long)interfaceOrientation;
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(BOOL)isSensorCovered;
-(BOOL)lowLight;
-(BOOL)faceTrackingIsPaused;
-(void)setFaceTrackingPaused:(BOOL)arg1 ;
-(void)startRecording;
-(void)run;
-(void)decreaseFrameRate;
-(void)increaseFrameRateToMaximum;
-(void)session:(id)arg1 didFailWithError:(id)arg2 ;
-(void)sessionWasInterrupted:(id)arg1 ;
-(void)sessionInterruptionEnded:(id)arg1 ;
-(void)session:(id)arg1 didOutputAudioSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)session:(id)arg1 didUpdateFrame:(id)arg2 ;
-()videoDimensions;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(BOOL)isActive;
-(id)init;
-(void)setLowLight:(BOOL)arg1 ;
-(float)fieldOfView;
-(void)stop;
-(float)videoAspectRatio;
-(BOOL)faceIsTracked;
-(void)setupARKit;
-(void)_setupARKitForDebugging:(BOOL)arg1 ;
-(void)setupARKitForDebugging;
-(void)setFaceIsTracked:(BOOL)arg1 ;
-(void)enumerateDelegates:(/*^block*/id)arg1 ;
-(BOOL)skipUpdates;
-(BOOL)directRetargetingMode;
-(BOOL)limitRoll;
-(void)setSensorCovered:(BOOL)arg1 ;
-(ARSession *)arSession;
-(BOOL)faceTrackingPaused;
-(NSURL *)faceTrackingRecordingURL;
-(void)setFaceTrackingRecordingURL:(NSURL *)arg1 ;
-(BOOL)shouldUseAudioData;
-(void)setShouldUseAudioData:(BOOL)arg1 ;
-(long long)faceTrackingFrameID;
-(double)arFrameTimestamp;
-(double)arDelegateTimestamp;
-(double)arFrameDeltaTime;
-(void)beginQuery;
-(void)endQuery;
-(void)copyTrackingData:(SCD_Struct_AV2*)arg1 ;
-(SCD_Struct_AV3)rawTransform;
-(AVTFaceTrackingInfo *)faceTrackingInfo;
-(double)lastTrackingDate;
-(unsigned long long)lastTrackingCaptureTimestamp;
-(BOOL)shouldConstraintHeadPose;
-(void)setShouldConstraintHeadPose:(BOOL)arg1 ;
-(void)setLimitRoll:(BOOL)arg1 ;
-(void)setSkipUpdates:(BOOL)arg1 ;
-(ARFrame *)currentARFrame;
-(void)setDirectRetargetingMode:(BOOL)arg1 ;
@end

