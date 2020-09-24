/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AXSpringBoardServerInstance.framework/AXSpringBoardServerInstance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXSpringBoardServerInstanceDelegate <NSObject>
@required
-(BOOL)connectedDevicesRequireAssistiveTouch;
-(BOOL)canSetDockIconActivationModeForServerInstance:(id)arg1;
-(void)resetDimTimerWithServerInstance:(id)arg1;
-(BOOL)serverInstance:(id)arg1 showControlCenter:(BOOL)arg2;
-(BOOL)isPurpleBuddyAppFrontmostWithServerInstance:(id)arg1;
-(BOOL)isSpotlightVisibleWithServerInstance:(id)arg1;
-(id)runningAppProcessesWithServerInstance:(id)arg1;
-(id)allowedMedusaGesturesWithServerInstance:(id)arg1;
-(BOOL)isBannerVisibleWithServerInstance:(id)arg1;
-(void)revealSpotlightWithServerInstance:(id)arg1;
-(double)volumeLevelWithServerInstance:(id)arg1;
-(void)simulateEdgePressHaptics:(id)arg1;
-(BOOL)isSyncingRestoringResettingOrUpdatingWithServerInstance:(id)arg1;
-(void)updateFrontMostApplicationWithServerInstance:(id)arg1;
-(void)serverInstance:(id)arg1 showSpeechPlaybackControls:(BOOL)arg2;
-(id)focusedAppProcessWithServerInstance:(id)arg1;
-(BOOL)isVoiceControlRunningWithServerInstance:(id)arg1;
-(id)serverInstance:(id)arg1 appWithIdentifier:(id)arg2;
-(BOOL)isMakingEmergencyCallWithServerInstance:(id)arg1;
-(void)openCommandAndControlSettingsWithServerInstance:(id)arg1;
-(id)installedAppsWithServerInstance:(id)arg1;
-(void)serverInstance:(id)arg1 setOrientationLocked:(BOOL)arg2;
-(BOOL)serverInstance:(id)arg1 performMedusaGesture:(unsigned long long)arg2;
-(BOOL)isSystemAppShowingAnAlertWithServerInstance:(id)arg1;
-(BOOL)isAppSwitcherVisibleWithServerInstance:(id)arg1;
-(void)openCommandAndControlVocabularyWithServerInstance:(id)arg1;
-(void)forceLoadGAXBundleWithServerInstance:(id)arg1;
-(BOOL)hasActiveOrPendingCallOrFaceTimeWithServerInstance:(id)arg1;
-(BOOL)serverInstance:(id)arg1 isShowingRemoteViewType:(long long)arg2;
-(BOOL)isSettingsAppFrontmostWithServerInstance:(id)arg1;
-(BOOL)isPasscodeRequiredOnLockWithServerInstance:(id)arg1;
-(void)setDashBoardSystemGesturesEnabled:(BOOL)arg1 withServerInstance:(id)arg2;
-(void)openVoiceControlWithServerInstance:(id)arg1;
-(BOOL)serverInstance:(id)arg1 showNotificationCenter:(BOOL)arg2;
-(BOOL)areSystemGesturesDisabledByAccessibilityWithServerInstance:(id)arg1;
-(BOOL)isScreenLockedWithServerInstance:(id)arg1;
-(BOOL)hasActiveCallWithServerInstance:(id)arg1;
-(BOOL)isSystemAppFrontmostExcludingSiri:(BOOL)arg1 withServerInstance:(id)arg2;
-(BOOL)isDockVisibleWithServerInstance:(id)arg1;
-(void)toggleSpotlightWithServerInstance:(id)arg1;
-(void)wakeUpDeviceIfNecessaryWithServerInstance:(id)arg1;
-(void)serverInstance:(id)arg1 setReachabilityEnabled:(BOOL)arg2;
-(BOOL)isPasscodeLockVisibleWithServerInstance:(id)arg1;
-(BOOL)isGuidedAccessActiveWithServerInstance:(id)arg1;
-(void)openAppSwitcherWithServerInstance:(id)arg1;
-(BOOL)hasActiveOrPendingCallWithServerInstance:(id)arg1;
-(BOOL)isOrientationLockedWithServerInstance:(id)arg1;
-(BOOL)isScreenshotWindowVisibleWithServerInstance:(id)arg1;
-(BOOL)toggleDarkModeWithServerInstance:(id)arg1;
-(id)focusedAppsWithServerInstance:(id)arg1;
-(void)activateSOSModeWithServerInstance:(id)arg1;
-(id)serverInstance:(id)arg1 splashImageForAppWithBundleIdentifier:(id)arg2;
-(BOOL)isSideSwitchUsedForOrientationWithServerInstance:(id)arg1;
-(void)openCommandAndControlCommandsWithServerInstance:(id)arg1;
-(BOOL)isStatusBarNativeFocusableWithServerInstance:(id)arg1;
-(BOOL)areSystemGesturesDisabledNativelyWithServerInstance:(id)arg1;
-(void)unlockDeviceWithServerInstance:(id)arg1;
-(BOOL)hasActiveEndpointCallWithServerInstance:(id)arg1;
-(void)openCustomGestureCreationForSCATWithServerInstance:(id)arg1;
-(void)serverInstance:(id)arg1 hideRemoteViewType:(long long)arg2;
-(BOOL)isSpeakThisTemporarilyDisabledWithServerInstance:(id)arg1;
-(BOOL)isSystemSleepingWithServerInstance:(id)arg1;
-(void)serverInstance:(id)arg1 showRemoteViewType:(long long)arg2 withData:(id)arg3;
-(id)runningAppPIDsWithServerInstance:(id)arg1;
-(BOOL)isShowingHomescreenWithServerInstance:(id)arg1;
-(BOOL)isNotificationCenterVisibleWithServerInstance:(id)arg1;
-(double)reachabilityOffsetWithServerInstance:(id)arg1;
-(BOOL)dismissSiriWithServerInstance:(id)arg1;
-(id)focusedAppPIDWithServerInstance:(id)arg1;
-(BOOL)isPIPWindowVisibleWithServerInstance:(id)arg1;
-(void)toggleDockWithServerInstance:(id)arg1;
-(BOOL)isMediaPlayingWithServerInstance:(id)arg1 forBundleId:(id)arg2;
-(void)launchMagnifierAppWithServerInstance:(id)arg1;
-(BOOL)isDarkModeActiveWithServiceInstance:(id)arg1;
-(void)serverInstance:(id)arg1 setDockIconActivationMode:(unsigned long long)arg2;
-(BOOL)isNotificationVisibleWithServerInstance:(id)arg1;
-(void)armApplePayWithServerInstance:(id)arg1;
-(BOOL)isSiriVisibleWithServerInstance:(id)arg1;
-(BOOL)handleToggleIncomingCallWithServerInstance:(id)arg1;
-(BOOL)isRingerMutedWithServerInstance:(id)arg1;
-(BOOL)isControlCenterVisibleWithServerInstance:(id)arg1;
-(BOOL)isShowingNonSystemAppWithServerInstance:(id)arg1;
-(void)setReachabilityActive:(BOOL)arg1;
-(void)serverInstance:(id)arg1 showAlertType:(int)arg2 withHandler:(/*^block*/id)arg3 withData:(id)arg4;
-(BOOL)isMagnifierVisibleWithServerInstance:(id)arg1;
-(void)rebootDeviceWithServerInstance:(id)arg1;
-(void)openCustomGestureCreationForASTWithServerInstance:(id)arg1;
-(void)hideAlertWithServerInstance:(id)arg1;
-(id)medusaAppsWithServerInstance:(id)arg1;
-(void)toggleNotificationCenterWithServerInstance:(id)arg1;
-(void)reactivateInCallServiceWithServerInstance:(id)arg1;
-(id)serverInstance:(id)arg1 springBoardSystemInfoQuery:(unsigned long long)arg2;
-(void)dismissAppSwitcherWithServerInstance:(id)arg1;
-(int)purpleBuddyPIDWithServerInstance:(id)arg1;
-(void)serverInstance:(id)arg1 pauseMedia:(BOOL)arg2 forBundleId:(id)arg3;

@end
