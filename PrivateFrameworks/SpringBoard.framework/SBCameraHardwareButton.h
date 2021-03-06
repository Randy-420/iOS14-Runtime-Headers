/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBHIDButtonStateDelegate.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/SBSceneManagerObserver.h>

@protocol BSInvalidatable;
@class NSMutableIndexSet, BSMutableIntegerMap, SBHIDButtonStateArbiter, RBSProcessMonitor, CMPocketStateManager, _SBCameraLaunchCondition, BSTimer, BKSHIDEventDeliveryManager, SBApplicationController, SBLockScreenManager, SBCoverSheetPresentationManager, SBBacklightController, SBProximitySensorManager, SBSceneManager, SBCameraHardwareButtonSettings, SBCameraHardwareButtonDefaults, SBBacklightStudyLogger, SBCameraHardwareButtonStudyLogger, SBLiftToWakeStudyLogger, NSString;

@interface SBCameraHardwareButton : NSObject <SBHIDButtonStateDelegate, PTSettingsKeyObserver, SBSceneManagerObserver> {

	BOOL _disableDeferringToApplications;
	BOOL _shouldUsePocketStateDetection;
	int _lastCameraApplicationPID;
	id<BSInvalidatable> _dispatchingRuleAssertion;
	id<BSInvalidatable> _deferringRuleAssertion;
	NSMutableIndexSet* _allCameraShutterButtonPIDs;
	NSMutableIndexSet* _foregroundCameraShutterButtonPIDs;
	NSMutableIndexSet* _foregroundPendingRemovalCameraShutterButtonPIDs;
	BSMutableIntegerMap* _deferringTokensPerPID;
	SBHIDButtonStateArbiter* _buttonArbiter;
	RBSProcessMonitor* _processMonitor;
	CMPocketStateManager* _pocketStateManager;
	_SBCameraLaunchCondition* _shouldLaunchCameraCondition;
	_SBCameraLaunchCondition* _longPressCondition;
	_SBCameraLaunchCondition* _outOfPocketCondition;
	BSTimer* _longPressCancellationTimer;
	double _longPressCancellationTimeout;
	BKSHIDEventDeliveryManager* _deliveryManager;
	SBApplicationController* _applicationController;
	SBLockScreenManager* _lockScreenManager;
	SBCoverSheetPresentationManager* _coverSheetPresentationManager;
	SBBacklightController* _backlightController;
	SBProximitySensorManager* _proximitySensorManager;
	SBSceneManager* _mainDisplaySceneManager;
	SBCameraHardwareButtonSettings* _settings;
	SBCameraHardwareButtonDefaults* _defaults;
	SBBacklightStudyLogger* _backlightStudyLogger;
	SBCameraHardwareButtonStudyLogger* _studyLogger;
	SBLiftToWakeStudyLogger* _liftToWakeStudyLogger;

}

@property (assign,nonatomic) BOOL disableDeferringToApplications;              //@synthesize disableDeferringToApplications=_disableDeferringToApplications - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_longPressDidCancel;
-(void)_reconfigureProcessMonitorForPredicates:(id)arg1 ;
-(void)performActionsForButtonUp:(id)arg1 ;
-(void)performActionsForButtonDown:(id)arg1 ;
-(void)sceneManager:(id)arg1 didAddExternalForegroundApplicationSceneHandle:(id)arg2 ;
-(void)_updateCameraDeferringRule;
-(void)dealloc;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)_startWaitingForLongPressCancellation;
-(BOOL)disableDeferringToApplications;
-(void)sceneManager:(id)arg1 didRemoveExternalForegroundApplicationSceneHandle:(id)arg2 ;
-(void)_launchToUnlockedCameraAfterWakingScreen:(BOOL)arg1 ;
-(void)_deferCameraPressesToSpringBoard;
-(void)handleButtonEvent:(IOHIDEventRef)arg1 ;
-(id)init;
-(void)_deferCameraPressesToApplication:(id)arg1 ;
-(void)_notifyCoreAnalyticsCameraDidLaunchToLockScreen:(BOOL)arg1 screenWasOff:(BOOL)arg2 ;
-(void)addProcessRequestingCameraButton:(int)arg1 token:(id)arg2 ;
-(void)_process:(id)arg1 stateDidUpdate:(id)arg2 ;
-(void)_launchToCoverSheetCameraAfterWakingScreen:(BOOL)arg1 ;
-(void)_stopWaitingForLongPressCancellation;
-(BOOL)_isCoverSheetCameraVisible;
-(void)setDisableDeferringToApplications:(BOOL)arg1 ;
-(BOOL)_shouldDeferToNonSpringBoardProcess;
-(BOOL)_shouldDeferToCoverSheetCamera;
-(void)_launchCameraIfReady;
-(void)_deferCameraPressesToCameraApplication;
-(void)performActionsForButtonLongPress:(id)arg1 ;
-(void)_updateSettingsForReason:(id)arg1 ;
-(void)_reconfigureProcessMonitor;
-(void)_deferCameraPressesToPID:(int)arg1 ;
-(void)removeProcessRequestingCameraButton:(int)arg1 ;
@end

