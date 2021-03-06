/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class AVCaptureSession, AVCaptureDevice, AVCaptureDeviceInput;

@interface RPPipViewController : UIViewController {

	long long _cameraPosition;
	AVCaptureSession* _pipSession;
	AVCaptureDevice* _videoDevice;
	AVCaptureDeviceInput* _videoInput;
	long long _initialOrientation;
	long long _previousOrientation;
	double _previousOrientationWidth;
	double _previousOrientationHeight;

}

@property (nonatomic,retain) AVCaptureSession * pipSession;                  //@synthesize pipSession=_pipSession - In the implementation block
@property (nonatomic,retain) AVCaptureDevice * videoDevice;                  //@synthesize videoDevice=_videoDevice - In the implementation block
@property (nonatomic,retain) AVCaptureDeviceInput * videoInput;              //@synthesize videoInput=_videoInput - In the implementation block
@property (assign,nonatomic) long long initialOrientation;                   //@synthesize initialOrientation=_initialOrientation - In the implementation block
@property (assign,nonatomic) long long previousOrientation;                  //@synthesize previousOrientation=_previousOrientation - In the implementation block
@property (assign,nonatomic) double previousOrientationWidth;                //@synthesize previousOrientationWidth=_previousOrientationWidth - In the implementation block
@property (assign,nonatomic) double previousOrientationHeight;               //@synthesize previousOrientationHeight=_previousOrientationHeight - In the implementation block
@property (assign,nonatomic) long long cameraPosition;                       //@synthesize cameraPosition=_cameraPosition - In the implementation block
-(long long)cameraPosition;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)loadView;
-(AVCaptureDeviceInput *)videoInput;
-(void)setPreviousOrientation:(long long)arg1 ;
-(long long)previousOrientation;
-(AVCaptureDevice *)videoDevice;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)initialOrientation;
-(void)setInitialOrientation:(long long)arg1 ;
-(void)setVideoInput:(AVCaptureDeviceInput *)arg1 ;
-(void)setCameraPosition:(long long)arg1 ;
-(void)startPipSession;
-(void)stopPipSession;
-(id)initWithOrientation:(long long)arg1 position:(long long)arg2 ;
-(id)cameraWithPosition:(long long)arg1 ;
-(void)setPipSession:(AVCaptureSession *)arg1 ;
-(AVCaptureSession *)pipSession;
-(void)setVideoDevice:(AVCaptureDevice *)arg1 ;
-(id)_pipView;
-(void)setPreviousOrientationWidth:(double)arg1 ;
-(void)setPreviousOrientationHeight:(double)arg1 ;
-(void)_updateViewGeometry;
-(void)setUpPipSession;
-(long long)_captureVideoOrientationForUIDeviceOrientation:(long long)arg1 ;
-(void)_deviceOrientationDidChange;
-(double)previousOrientationWidth;
-(double)previousOrientationHeight;
@end

