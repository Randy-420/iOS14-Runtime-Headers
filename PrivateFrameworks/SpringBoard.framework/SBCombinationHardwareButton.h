/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBHardwareButtonGestureParametersObserver.h>
#import <libobjc.A.dylib/SBSOSLockGestureObserverDelegate.h>
#import <libobjc.A.dylib/SBSOSClawGestureObserverDelegate.h>
#import <libobjc.A.dylib/SBPressPrecedenceArbiter.h>

@class NSMutableDictionary, SBCombinationHardwareButtonActions, SBClickGestureRecognizer, SBHomeHardwareButton, SBLockHardwareButton, SBVolumeHardwareButton, SBProximitySensorManager, SBBacklightController, SBPressGestureRecognizer, SBSOSClawGestureObserver, SBSOSLockGestureObserver, SBLongPressGestureRecognizer, NSString;

@interface SBCombinationHardwareButton : NSObject <UIGestureRecognizerDelegate, SBHardwareButtonGestureParametersObserver, SBSOSLockGestureObserverDelegate, SBSOSClawGestureObserverDelegate, SBPressPrecedenceArbiter> {

	NSMutableDictionary* _screenshotDisableAssertions;
	SBCombinationHardwareButtonActions* _buttonActions;
	SBClickGestureRecognizer* _screenshotGestureRecognizer;
	SBHomeHardwareButton* _homeHardwareButton;
	SBLockHardwareButton* _lockHardwareButton;
	SBVolumeHardwareButton* _volumeHardwareButton;
	SBProximitySensorManager* _proximitySensorManager;
	SBBacklightController* _backlightController;
	SBPressGestureRecognizer* _sosGestureRecognizer;
	SBSOSClawGestureObserver* _sosClawGestureObserver;
	SBSOSLockGestureObserver* _sosLockGestureObserver;
	SBLongPressGestureRecognizer* _shutdownGestureRecognizer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)sosClawDidBecomeInactive:(id)arg1 ;
-(void)_configureGestureRecognizers;
-(id)initWithScreenshotGestureRecognizer:(id)arg1 shutdownGestureRecognizer:(id)arg2 homeHardwareButton:(id)arg3 lockHardwareButton:(id)arg4 volumeHardwareButton:(id)arg5 proximitySensorManager:(id)arg6 backlightController:(id)arg7 ;
-(void)dealloc;
-(void)screenshotGesture:(id)arg1 ;
-(void)sosLockDidTriggerSOS:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sosLockTriggerDidBecomeActive:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(void)_backlightChanged:(id)arg1 ;
-(void)provider:(id)arg1 didUpdateButtonGestureParameters:(id)arg2 ;
-(void)_sosTriggerMechanismDidChange;
-(void)sosClawDidTriggerSOS:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setScreenshotDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)_configureSOSGestureBehaviors;
-(id)preemptablePressGestureRecognizers;
-(void)shutdownGesture:(id)arg1 ;
-(void)sosClawDidBecomeActive:(id)arg1 ;
-(void)sosLockTriggerDidBecomeInactive:(id)arg1 ;
-(void)sosGesture:(id)arg1 ;
-(void)sosClawAutoCallInteractiveStateChanged:(id)arg1 interacting:(BOOL)arg2 ;
@end

