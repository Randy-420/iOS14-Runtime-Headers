/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBGestureSwitcherModifier.h>
#import <libobjc.A.dylib/SBHomeGestureDockSwitcherModifierDelegate.h>
#import <libobjc.A.dylib/SBHomeGestureFinalDestinationSwitcherModifierDelegate.h>

@class SBCoplanarSwitcherModifier, SBHomeGestureDockSwitcherModifier, SBHomeGestureFinalDestinationSwitcherModifier, SBDismissSiriSwitcherModifier, SBAppLayout, NSString;

@interface SBReduceMotionHomeGestureSwitcherModifier : SBGestureSwitcherModifier <SBHomeGestureDockSwitcherModifierDelegate, SBHomeGestureFinalDestinationSwitcherModifierDelegate> {

	SBCoplanarSwitcherModifier* _coplanarLayoutModifier;
	SBHomeGestureDockSwitcherModifier* _dockModifier;
	SBHomeGestureFinalDestinationSwitcherModifier* _finalDestinationModifier;
	SBDismissSiriSwitcherModifier* _dismissSiriModifier;
	SBAppLayout* _selectedAppLayout;
	long long _startingEnvironmentMode;
	BOOL _continuingGesture;
	BOOL _lastGestureWasAnArcSwipe;
	BOOL _scrunchInitiated;
	CGPoint _initialTouchLocation;
	CGPoint _lastTouchLocation;
	CGPoint _translation;
	CGPoint _velocity;
	CGPoint _translationAdjustmentForStartingFromHomeScreen;
	BOOL _gestureHasBegun;
	BOOL _gestureHasEnded;
	unsigned long long _reduceMotionAxis;
	BOOL _endingGestureForAppSwitcher;
	BOOL _didWarmupReduceMotionHaptic;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)homeScreenBackdropBlurType;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)isSwitcherWindowVisible;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(long long)wallpaperStyle;
-(id)appLayoutsToCacheSnapshots;
-(UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1 ;
-(void)_applyPrototypeSettings;
-(id)appLayoutsToResignActive;
-(void)didMoveToParentModifier:(id)arg1 ;
-(BOOL)shouldRubberbandFullScreenHomeGrabberView;
-(id)appLayoutsToCacheFullsizeSnapshots;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(id)keyboardSuppressionMode;
-(id)visibleAppLayouts;
-(id)liveContentRasterizationAttributesForAppLayout:(id)arg1 ;
-(id)handleGestureEvent:(id)arg1 ;
-(id)_newDockModifierRequiringVerticalSwipeToTrackDock:(BOOL)arg1 startingEnvironmentMode:(long long)arg2 ;
-(id)handleHomeGestureSettingsChangedEvent:(id)arg1 ;
-(id)_updateForGestureDidBeginWithEvent:(id)arg1 ;
-(id)_updateForGestureDidChangeWithEvent:(id)arg1 ;
-(id)_updateForGestureDidEndWithEvent:(id)arg1 ;
-(long long)currentFinalDestination;
-(id)_responseForActivatingFinalDestination:(long long)arg1 ;
-(void)_updateTranslationAdjustmentForGestureFromHomeScreenIfNeededWithEvent:(id)arg1 ;
-(double)unconditionalDistanceThresholdForHome;
-(void)_updateGestureTranslationAndVelocityWithEvent:(id)arg1 ;
-(id)_updateReduceMotionAxisIfNecessaryWithEvent:(id)arg1 ;
-(id)initWithGestureID:(id)arg1 selectedAppLayout:(id)arg2 startingEnvironmentMode:(long long)arg3 scrunchInitiated:(BOOL)arg4 continuingGesture:(BOOL)arg5 lastGestureWasAnArcSwipe:(BOOL)arg6 ;
@end

