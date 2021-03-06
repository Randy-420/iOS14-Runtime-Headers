/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BKSAccelerometerDelegate.h>
#import <libobjc.A.dylib/CAMLevelViewModelChangeObserver.h>

@class CAMLevelViewModel, CAMPreviewAlignmentModel, BKSAccelerometer, CMMotionManager, NSString;

@interface CAMMotionController : NSObject <BKSAccelerometerDelegate, CAMLevelViewModelChangeObserver> {

	BOOL __didNotifyCaptureOrientationWasInvalid;
	long long _dominantPhysicalButton;
	CAMLevelViewModel* _activeLevelViewModel;
	CAMPreviewAlignmentModel* _activePreviewAlignmentModel;
	long long __cachedCaptureOrientation;
	long long __fallbackCaptureOrientation;
	BKSAccelerometer* __accelerometer;
	long long __numberOfDominantPhysicalButtonObservers;
	CMMotionManager* __physicalButtonMotionManager;
	CMMotionManager* __attitudeAlignmentMotionManager;

}

@property (assign,setter=_setCachedCaptureOrientation:,nonatomic) long long _cachedCaptureOrientation;                                            //@synthesize _cachedCaptureOrientation=__cachedCaptureOrientation - In the implementation block
@property (nonatomic,readonly) long long _fallbackCaptureOrientation;                                                                             //@synthesize _fallbackCaptureOrientation=__fallbackCaptureOrientation - In the implementation block
@property (assign,setter=_setDidNotifyCaptureOrientationWasInvalid:,nonatomic) BOOL _didNotifyCaptureOrientationWasInvalid;                       //@synthesize _didNotifyCaptureOrientationWasInvalid=__didNotifyCaptureOrientationWasInvalid - In the implementation block
@property (setter=_setAccelerometer:,nonatomic,retain) BKSAccelerometer * _accelerometer;                                                         //@synthesize _accelerometer=__accelerometer - In the implementation block
@property (assign,setter=_setNumberOfDominantPhysicalButtonObservers:,nonatomic) long long _numberOfDominantPhysicalButtonObservers;              //@synthesize _numberOfDominantPhysicalButtonObservers=__numberOfDominantPhysicalButtonObservers - In the implementation block
@property (nonatomic,readonly) CMMotionManager * _physicalButtonMotionManager;                                                                    //@synthesize _physicalButtonMotionManager=__physicalButtonMotionManager - In the implementation block
@property (assign,setter=_setDominantPhysicalButton:,nonatomic) long long dominantPhysicalButton;                                                 //@synthesize dominantPhysicalButton=_dominantPhysicalButton - In the implementation block
@property (nonatomic,readonly) CMMotionManager * _attitudeAlignmentMotionManager;                                                                 //@synthesize _attitudeAlignmentMotionManager=__attitudeAlignmentMotionManager - In the implementation block
@property (setter=_setActiveLevelViewModel:,nonatomic,retain) CAMLevelViewModel * activeLevelViewModel;                                           //@synthesize activeLevelViewModel=_activeLevelViewModel - In the implementation block
@property (setter=_setActivePreviewAlignmentModel:,nonatomic,retain) CAMPreviewAlignmentModel * activePreviewAlignmentModel;                      //@synthesize activePreviewAlignmentModel=_activePreviewAlignmentModel - In the implementation block
@property (nonatomic,readonly) long long captureOrientation; 
@property (nonatomic,readonly) long long panoramaCaptureOrientation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_handleApplicationDidEnterBackground:(id)arg1 ;
-(void)_handleApplicationWillEnterForeground:(id)arg1 ;
-(void)_setAccelerometer:(id)arg1 ;
-(void)_handleLevelMotionUpdate:(id)arg1 error:(id)arg2 ;
-(id)_debugStringForDeviceOrientation:(long long)arg1 ;
-(void)endUpdatingActiveLevelViewModel;
-(long long)captureOrientation;
-(long long)_numberOfDominantPhysicalButtonObservers;
-(BKSAccelerometer *)_accelerometer;
-(void)dealloc;
-(void)_updateInitialOrientation;
-(void)_setDominantPhysicalButton:(long long)arg1 ;
-(void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6 ;
-(CMMotionManager *)_attitudeAlignmentMotionManager;
-(void)_setActivePreviewAlignmentModel:(id)arg1 ;
-(void)beginGeneratingDominantPhysicalButtonNotifications;
-(void)_setActiveLevelViewModel:(id)arg1 ;
-(id)init;
-(void)_updatePhysicalButtonObservation;
-(void)endGeneratingDominantPhysicalButtonNotifications;
-(void)beginUpdatingPreviewAlignmentModel:(id)arg1 ;
-(CAMPreviewAlignmentModel *)activePreviewAlignmentModel;
-(void)debugValidateCaptureOrientationForMode:(long long)arg1 ;
-(void)beginUpdatingLevelViewModel:(id)arg1 ;
-(void)accelerometer:(id)arg1 didChangeDeviceOrientation:(long long)arg2 ;
-(long long)_cachedCaptureOrientation;
-(void)_setCachedCaptureOrientation:(long long)arg1 ;
-(long long)_fallbackCaptureOrientation;
-(void)endUpdatingPreviewAlignmentModel;
-(CAMLevelViewModel *)activeLevelViewModel;
-(CMMotionManager *)_physicalButtonMotionManager;
-(void)_setDidNotifyCaptureOrientationWasInvalid:(BOOL)arg1 ;
-(long long)panoramaCaptureOrientation;
-(BOOL)_didNotifyCaptureOrientationWasInvalid;
-(void)_setNumberOfDominantPhysicalButtonObservers:(long long)arg1 ;
-(void)_updateAttitudeAlignmentMotionManager;
-(void)observable:(id)arg1 didPublishChange:(unsigned long long)arg2 withContext:(void*)arg3 ;
-(id)_debugStringForInterfaceOrientation:(long long)arg1 ;
-(long long)dominantPhysicalButton;
@end

