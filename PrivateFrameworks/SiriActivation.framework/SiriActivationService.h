/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SASRequestOptionsBuilderDataSource.h>
#import <libobjc.A.dylib/SASHeaterDelegate.h>
#import <libobjc.A.dylib/SASMyriadControllerDelegate.h>
#import <libobjc.A.dylib/SASLockStateMonitorDelegate.h>
#import <libobjc.A.dylib/SASBulletinManagerDelegate.h>
#import <libobjc.A.dylib/SASStateChangeListener.h>
#import <libobjc.A.dylib/SASPresentationManagerDelegate.h>
#import <libobjc.A.dylib/SBUIActiveOrientationObserver.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, NSTimer, SASMyriadController, SASSystemState, AFPreferences, SASLockStateMonitor, NSMutableDictionary, SASHeater, AFSiriTether, SASBulletinManager, SASRemoteRequestManager, SASTestingInputController, SASPresentationManager;

@interface SiriActivationService : NSObject <SASRequestOptionsBuilderDataSource, SASHeaterDelegate, SASMyriadControllerDelegate, SASLockStateMonitorDelegate, SASBulletinManagerDelegate, SASStateChangeListener, SASPresentationManagerDelegate, SBUIActiveOrientationObserver> {

	/*^block*/id _buttonTrigger;
	NSString* _preheatedPresentation;
	int _voiceTriggerNotifyToken;
	NSObject*<OS_dispatch_queue> _voiceTriggerDispatchQueue;
	NSTimer* _B188ActivationTimer;
	SASMyriadController* _myriadController;
	BOOL _xcTestingActive;
	BOOL _siriTetherIsAttached;
	BOOL _voiceTriggerNotifyTokenIsValid;
	BOOL _buttonDownHasOccurredSinceActivation;
	BOOL _canActivateFromDirectActionSource;
	BOOL _pocketStateFetchingInProgressForHeadsetActivation;
	SASSystemState* _systemState;
	AFPreferences* _afPreferences;
	SASLockStateMonitor* _lockStateMonitor;
	NSMutableDictionary* _sources;
	SASHeater* _heater;
	AFSiriTether* _siriTether;
	double _activationTimestamp;
	SASBulletinManager* _bulletinManager;
	SASRemoteRequestManager* _remoteRequestManager;
	SASTestingInputController* _testingInputController;
	NSMutableDictionary* _avExternalButtonEvents;
	SASPresentationManager* _presentationManager;

}

@property (nonatomic,retain) SASSystemState * systemState;                                                                                                                                                                //@synthesize systemState=_systemState - In the implementation block
@property (nonatomic,retain) AFPreferences * afPreferences;                                                                                                                                                               //@synthesize afPreferences=_afPreferences - In the implementation block
@property (nonatomic,retain) SASLockStateMonitor * lockStateMonitor;                                                                                                                                                      //@synthesize lockStateMonitor=_lockStateMonitor - In the implementation block
@property (assign,nonatomic) BOOL xcTestingActive;                                                                                                                                                                        //@synthesize xcTestingActive=_xcTestingActive - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sources;                                                                                                                                                               //@synthesize sources=_sources - In the implementation block
@property (nonatomic,retain) SASHeater * heater;                                                                                                                                                                          //@synthesize heater=_heater - In the implementation block
@property (nonatomic,retain) AFSiriTether * siriTether;                                                                                                                                                                   //@synthesize siriTether=_siriTether - In the implementation block
@property (assign,nonatomic) BOOL siriTetherIsAttached;                                                                                                                                                                   //@synthesize siriTetherIsAttached=_siriTetherIsAttached - In the implementation block
@property (assign,nonatomic) double activationTimestamp;                                                                                                                                                                  //@synthesize activationTimestamp=_activationTimestamp - In the implementation block
@property (assign,nonatomic) BOOL voiceTriggerNotifyTokenIsValid;                                                                                                                                                         //@synthesize voiceTriggerNotifyTokenIsValid=_voiceTriggerNotifyTokenIsValid - In the implementation block
@property (nonatomic,retain) SASBulletinManager * bulletinManager;                                                                                                                                                        //@synthesize bulletinManager=_bulletinManager - In the implementation block
@property (nonatomic,retain) SASRemoteRequestManager * remoteRequestManager;                                                                                                                                              //@synthesize remoteRequestManager=_remoteRequestManager - In the implementation block
@property (nonatomic,retain) SASTestingInputController * testingInputController;                                                                                                                                          //@synthesize testingInputController=_testingInputController - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * avExternalButtonEvents;                                                                                                                                                //@synthesize avExternalButtonEvents=_avExternalButtonEvents - In the implementation block
@property (assign,nonatomic) BOOL buttonDownHasOccurredSinceActivation;                                                                                                                                                   //@synthesize buttonDownHasOccurredSinceActivation=_buttonDownHasOccurredSinceActivation - In the implementation block
@property (assign,nonatomic) BOOL canActivateFromDirectActionSource;                                                                                                                                                      //@synthesize canActivateFromDirectActionSource=_canActivateFromDirectActionSource - In the implementation block
@property (assign,setter=_setPocketStateFetchingInProgressForHeadsetActivation:,getter=_pocketStateFetchingInProgressForHeadsetActivation,nonatomic) BOOL pocketStateFetchingInProgressForHeadsetActivation;              //@synthesize pocketStateFetchingInProgressForHeadsetActivation=_pocketStateFetchingInProgressForHeadsetActivation - In the implementation block
@property (nonatomic,retain) SASPresentationManager * presentationManager;                                                                                                                                                //@synthesize presentationManager=_presentationManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(id)service;
-(void)_dismissSiri:(id)arg1 ;
-(void)buttonDownFromButtonIdentifier:(long long)arg1 timestamp:(double)arg2 ;
-(SASLockStateMonitor *)lockStateMonitor;
-(void)setLockStateMonitor:(SASLockStateMonitor *)arg1 ;
-(id)allBulletins;
-(void)activationRequestFromTestingWithContext:(id)arg1 ;
-(id)bulletinsOnLockScreen;
-(void)setSiriTether:(AFSiriTether *)arg1 ;
-(void)_recordTimeIfNeededForButtonIdentifier:(long long)arg1 buttonDownTimestamp:(double)arg2 ;
-(void)_cancelActivationPreparationForSetup;
-(void)markBulletinWithIdentifier:(id)arg1 asRead:(BOOL)arg2 ;
-(void)unregisterActivationSourceIdentifier:(id)arg1 ;
-(void)presentationManager:(id)arg1 didEncounterError:(long long)arg2 ;
-(void)setAfPreferences:(AFPreferences *)arg1 ;
-(void)activationRequestFromSimpleActivation:(long long)arg1 ;
-(void)setSources:(NSMutableDictionary *)arg1 ;
-(BOOL)_isVoiceActivationMaskNecessaryWithRequestOptions:(id)arg1 ;
-(BOOL)_buttonIsAVExternalButton:(long long)arg1 ;
-(void)activationRequestFromBreadcrumb;
-(void)shouldAbort:(id)arg1 ;
-(BOOL)canActivateFromDirectActionSource;
-(id)requestOptionsBuilder:(id)arg1 uiPresentationIdentifierWithActivation:(id)arg2 activationPresentation:(long long)arg3 ;
-(void)_preheatPresentation;
-(void)shouldContinue:(id)arg1 ;
-(void)registerSiriPresentation:(id)arg1 withIdentifier:(long long)arg2 ;
-(void)setTestingInputController:(SASTestingInputController *)arg1 ;
-(BOOL)handleActivationRequest:(id)arg1 ;
-(void)setXcTestingActive:(BOOL)arg1 ;
-(void)_B188ActivationEvent:(long long)arg1 context:(id)arg2 options:(id)arg3 ;
-(void)_activatePresentationWithIdentifier:(long long)arg1 requestOptions:(id)arg2 analyticsContext:(id)arg3 ;
-(NSMutableDictionary *)sources;
-(void)siriPresentationFailureWithIdentifier:(long long)arg1 error:(id)arg2 ;
-(void)_unregisterForVoiceTrigger;
-(void)setSystemState:(SASSystemState *)arg1 ;
-(void)_setPocketStateFetchingInProgressForHeadsetActivation:(BOOL)arg1 ;
-(BOOL)handleActivationRequest:(id)arg1 systemState:(id)arg2 ;
-(SASTestingInputController *)testingInputController;
-(void)buttonUpFromButtonIdentifier:(long long)arg1 deviceIdentifier:(id)arg2 timestamp:(double)arg3 ;
-(void)setCanActivateFromDirectActionSource:(BOOL)arg1 ;
-(void)setVoiceTriggerNotifyTokenIsValid:(BOOL)arg1 ;
-(void)dealloc;
-(void)activationRequestFromVoiceTrigger;
-(void)siriPresentationDisplayedWithIdentifier:(long long)arg1 ;
-(BOOL)_siriIsEnabled;
-(void)setSiriTetherIsAttached:(BOOL)arg1 ;
-(BOOL)_pocketStateFetchingInProgressForHeadsetActivation;
-(void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3 ;
-(void)unregisterSiriPresentationIdentifier:(long long)arg1 ;
-(BOOL)voiceTriggerNotifyTokenIsValid;
-(BOOL)isConnectedTo188;
-(void)activationRequestFromContinuityWithContext:(id)arg1 ;
-(void)_attachToTether;
-(BOOL)requestOptionsBuilder:(id)arg1 isPredictedRecordRouteIsZLLWithActiviation:(id)arg2 ;
-(void)heaterSuggestsPreheating:(id)arg1 ;
-(void)siriPresentationDismissedWithIdentifier:(long long)arg1 ;
-(BOOL)siriTetherIsAttached;
-(void)dismissSiriWithOptions:(id)arg1 ;
-(void)didChangeLockState:(unsigned long long)arg1 ;
-(void)_handleDesignModeRequest;
-(void)setAvExternalButtonEvents:(NSMutableDictionary *)arg1 ;
-(AFPreferences *)afPreferences;
-(id)requestOptionsBuilder:(id)arg1 optionsForOverriding:(id)arg2 withActiviation:(id)arg3 ;
-(void)setBulletinManager:(SASBulletinManager *)arg1 ;
-(void)_cancelPendingActivationEventWithReason:(unsigned long long)arg1 ;
-(unsigned long long)requestOptionsBuilder:(id)arg1 currentLockStateForActivation:(id)arg2 ;
-(long long)_requestState;
-(BOOL)requestOptionsBuilder:(id)arg1 shouldRequestUseAutomaticEndpointingWithActiviation:(id)arg2 ;
-(id)_init;
-(SASRemoteRequestManager *)remoteRequestManager;
-(void)bulletinManagerDidChangeBulletins:(id)arg1 ;
-(id)init;
-(void)siriPresentationWillDismissWithIdentifier:(long long)arg1 ;
-(void)setRemoteRequestManager:(SASRemoteRequestManager *)arg1 ;
-(SASPresentationManager *)presentationManager;
-(void)activationRequestFromVoiceTriggerWithContext:(id)arg1 ;
-(BOOL)requestOptionsBuilder:(id)arg1 isRequestInitialWithActiviation:(id)arg2 ;
-(BOOL)xcTestingActive;
-(BOOL)requestOptionsBuilder:(id)arg1 isAcousticIdAllowedWithActiviation:(id)arg2 ;
-(void)registerActivationSource:(id)arg1 withIdentifier:(id)arg2 ;
-(void)presentationManager:(id)arg1 didChangeShouldRejectNewActivationsTo:(BOOL)arg2 ;
-(void)_notifySourcesOfCanActivateFromDirectActionSourceChange:(BOOL)arg1 ;
-(void)setPresentationManager:(SASPresentationManager *)arg1 ;
-(void)activationRequestFromSpotlightWithContext:(id)arg1 ;
-(void)speechRequestStateDidChange:(long long)arg1 ;
-(BOOL)_shouldRejectNewActivations:(long long)arg1 ;
-(BOOL)_isInitialRequest;
-(SASHeater *)heater;
-(void)pongWithPresentationIdentifier:(long long)arg1 ;
-(id)bulletinForIdentifier:(id)arg1 ;
-(void)_handlePocketStateFetchForScreenWakeForPresentationIdentifier:(long long)arg1 requestOptions:(id)arg2 presentationOptions:(id)arg3 ;
-(void)activationRequestFromButtonIdentifier:(long long)arg1 context:(id)arg2 ;
-(void)_defrost;
-(void)setHeater:(SASHeater *)arg1 ;
-(void)setButtonDownHasOccurredSinceActivation:(BOOL)arg1 ;
-(void)_handleTapSynthesisIfNeededForButtonIdentifier:(long long)arg1 buttonUpTimestamp:(double)arg2 ;
-(NSMutableDictionary *)avExternalButtonEvents;
-(BOOL)presentationsAreIdleAndQuiet;
-(void)buttonLongPressFromButtonIdentifier:(long long)arg1 context:(id)arg2 ;
-(void)_updateCanActivateFromDirectActionSource;
-(void)activationRequestFromDirectActionEvent:(long long)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)prewarmFromButtonIdentifier:(long long)arg1 longPressInterval:(double)arg2 ;
-(void)setActivationTimestamp:(double)arg1 ;
-(SASBulletinManager *)bulletinManager;
-(void)deactivationRequestFromButtonIdentifier:(long long)arg1 context:(id)arg2 options:(id)arg3 ;
-(void)_notifySourcesOfActiveChange:(BOOL)arg1 ;
-(double)activationTimestamp;
-(void)_registerForVoiceTrigger;
-(id)_updateRequestOptionsWithTestingContextFromActivationRequest:(id)arg1 requestOptions:(id)arg2 ;
-(oneway void)activationRequestFromTestRunnerWithContext:(id)arg1 ;
-(void)_cancelTTS;
-(void)cancelPrewarmFromButtonIdentifier:(long long)arg1 ;
-(void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1 ;
-(BOOL)_buttonIsTVMicrophoneButton:(long long)arg1 ;
-(void)callStateChangedToIsActive:(BOOL)arg1 isOutgoing:(BOOL)arg2 ;
-(AFSiriTether *)siriTether;
-(SASSystemState *)systemState;
-(BOOL)buttonDownHasOccurredSinceActivation;
-(void)buttonTapFromButtonIdentifier:(long long)arg1 ;
@end

