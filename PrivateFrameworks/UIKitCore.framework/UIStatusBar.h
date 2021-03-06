/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIStatusBar_Base.h>
#import <UIKit/UIStatusBarServerClient.h>

@class UIStatusBarBackgroundView, UIStatusBarForegroundView, UILabel, UIView, NSString, NSMutableArray, UIStatusBarStyleAttributes, UIColor, UIStatusBarStyleAnimationParameters, NSNumber, NSMutableSet, NSMutableDictionary;

@interface UIStatusBar : UIStatusBar_Base <UIStatusBarServerClient> {

	BOOL _showsForeground;
	BOOL _observingDefaults;
	UIStatusBarBackgroundView* _backgroundView;
	UIStatusBarForegroundView* _foregroundView;
	UILabel* _doubleHeightLabel;
	UIView* _doubleHeightLabelContainer;
	NSString* _currentDoubleHeightText;
	SCD_Struct_UI125 _currentRawData;
	NSMutableArray* _interruptedAnimationCompositeViews;
	UIStatusBarBackgroundView* _newStyleBackgroundView;
	UIStatusBarForegroundView* _newStyleForegroundView;
	UIStatusBar* _slidingStatusBar;
	UIStatusBarStyleAttributes* _styleAttributes;
	BOOL _waitingOnCallbackAfterChangingStyleOverridesLocally;
	BOOL _showOnlyCenterItems;
	BOOL _foregroundViewShouldIgnoreStatusBarDataDuringAnimation;
	UIColor* _tintColor;
	UIColor* _lastUsedBackgroundColor;
	UIStatusBarStyleAnimationParameters* _nextTintTransition;
	NSNumber* _overrideHeight;
	NSMutableSet* _disableRasterizationReasons;
	NSMutableDictionary* _actions;
	BOOL _disablesRasterization;
	BOOL _timeHidden;

}

@property (assign,getter=isTimeHidden,nonatomic) BOOL timeHidden;              //@synthesize timeHidden=_timeHidden - In the implementation block
+(BOOL)_isLightContentStyle:(long long)arg1 ;
+(double)_regularPadBaselineOffset;
+(void)_setDeviceUserInterfaceLayoutDirection:(long long)arg1 ;
+(NSDirectionalEdgeInsets)_roundedPadEdgeInsets;
+(double)_roundedPadBaselineOffset;
+(BOOL)_shouldForwardToImplementationClassForStyle:(long long)arg1 ;
+(double)_viewControllerAdjustmentForOrientation:(long long)arg1 inWindow:(id)arg2 ;
+(void)enumerateStatusBarStyleOverridesWithBlock:(/*^block*/id)arg1 ;
+(long long)_deviceUserInterfaceLayoutDirection;
+(id)_styleAttributesForRequest:(id)arg1 ;
+(id)_styleAttributesForStatusBarStyle:(long long)arg1 ;
+(id)_newStyleAttributesForRequest:(id)arg1 ;
+(long long)lowBatteryLevel;
+(void)getData:(SCD_Struct_UI125*)arg1 forRequestedData:(const SCD_Struct_UI125*)arg2 withOverrides:(const SCD_Struct_UI127*)arg3 ;
+(double)_heightForStyle:(long long)arg1 orientation:(long long)arg2 forStatusBarFrame:(BOOL)arg3 inWindow:(id)arg4 ;
+(NSDirectionalEdgeInsets)_regularPadEdgeInsets;
+(long long)defaultStyleForRequestedStyle:(long long)arg1 styleOverrides:(int)arg2 ;
-(void)setRegistered:(BOOL)arg1 ;
-(void)jiggleLockIcon;
-(void)_setStyle:(id)arg1 ;
-(void)animateUnlock;
-(CGAffineTransform)_slideTransform;
-(BOOL)isTranslucent;
-(double)defaultHeight;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)isDoubleHeight;
-(id)_backgroundView;
-(void)setStyleRequest:(id)arg1 animationParameters:(id)arg2 ;
-(BOOL)_shouldSeekHigherPriorityTouchTarget;
-(BOOL)_shouldUseInProcessProviderDoubleHeightStatusString;
-(double)heightForOrientation:(long long)arg1 ;
-(void)_crossfadeToNewForegroundViewWithAlpha:(double)arg1 ;
-(CGRect)frameForPartWithIdentifier:(id)arg1 ;
-(id)_currentComposedData;
-(void)_setVisualAltitudeBias:(CGSize)arg1 ;
-(void)_setVisualAltitude:(double)arg1 ;
-(id)_doubleHeightStatusStringForStyle:(long long)arg1 ;
-(id)_initWithFrame:(CGRect)arg1 showForegroundView:(BOOL)arg2 wantsServer:(BOOL)arg3 inProcessStateProvider:(id)arg4 ;
-(id)enabledPartIdentifiers;
-(id)_prepareInterruptedAnimationCompositeViewIncludingForeground:(BOOL)arg1 ;
-(void)_swapToNewBackgroundView;
-(CGRect)frameForOrientation:(long long)arg1 ;
-(void)setLegibilityStyle:(long long)arg1 animationParameters:(id)arg2 ;
-(void)_setOverrideHeight:(double)arg1 ;
-(id)currentStyleRequestForStyle:(long long)arg1 ;
-(id)_currentComposedDataForStyle:(id)arg1 ;
-(void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3 ;
-(void)setEnabledCenterItems:(id)arg1 duration:(double)arg2 ;
-(void)setTintColor:(id)arg1 ;
-(void)_updatePersistentAnimationsEnabledForForegroundView:(id)arg1 ;
-(void)dealloc;
-(void)_beginDisablingRasterizationForReason:(id)arg1 ;
-(void)statusBarStateProvider:(id)arg1 didChangeDoubleHeightStatusStringForStyle:(long long)arg2 ;
-(BOOL)_touchShouldProduceReturnEvent;
-(void)_swapToNewForegroundView;
-(void)_itemViewShouldBeginDisablingRasterization:(id)arg1 ;
-(void)_updateUIWithStyleAttributes:(id)arg1 animationParameters:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setTintColor:(id)arg1 withDuration:(double)arg2 ;
-(void)forceUpdateDoubleHeightStatus;
-(void)layoutSubviews;
-(void)_statusBarWillAnimateRotation;
-(void)statusBarServer:(id)arg1 didReceiveDoubleHeightStatusString:(id)arg2 forStyle:(long long)arg3 ;
-(void)setSuppressesHiddenSideEffects:(BOOL)arg1 ;
-(void)statusBarStateProvider:(id)arg1 didPostStatusBarData:(const SCD_Struct_UI125*)arg2 withActions:(int)arg3 ;
-(void)setAction:(id)arg1 forPartWithIdentifier:(id)arg2 ;
-(CGRect)_backgroundFrameForAttributes:(id)arg1 ;
-(id)styleRequest;
-(void)_requestStyle:(long long)arg1 partStyles:(id)arg2 animationParameters:(id)arg3 forced:(BOOL)arg4 ;
-(BOOL)isTimeHidden;
-(void)_crossfadeToNewBackgroundView;
-(void)_performBlockWhileIgnoringForegroundViewChanges:(/*^block*/id)arg1 ;
-(id)_currentStyleAttributes;
-(BOOL)_shouldReverseLayoutDirection;
-(long long)currentStyle;
-(double)defaultDoubleHeight;
-(BOOL)disablesRasterization;
-(void)setForegroundAlpha:(double)arg1 animationParameters:(id)arg2 ;
-(void)_updateBackgroundFrame;
-(void)forgetEitherSideHistory;
-(void)forceUpdateToData:(const SCD_Struct_UI125*)arg1 animated:(BOOL)arg2 ;
-(void)statusBarServer:(id)arg1 didReceiveStyleOverrides:(int)arg2 ;
-(void)setOrientation:(long long)arg1 ;
-(void)statusBarServer:(id)arg1 didReceiveGlowAnimationState:(BOOL)arg2 forStyle:(long long)arg3 ;
-(void)setPersistentAnimationsEnabled:(BOOL)arg1 ;
-(void)setShowsOnlyCenterItems:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setTimeHidden:(BOOL)arg1 ;
-(id)statusBarWindow;
-(void)statusBarServer:(id)arg1 didReceiveStatusBarData:(const SCD_Struct_UI125*)arg2 withActions:(int)arg3 ;
-(void)_finishedSettingStyleWithOldHeight:(double)arg1 newHeight:(double)arg2 animation:(int)arg3 ;
-(BOOL)_rectIntersectsTimeItem:(CGRect)arg1 ;
-(id)_styleAttributesForRequest:(id)arg1 ;
-(void)_setStyle:(id)arg1 animation:(int)arg2 ;
-(void)_setFrameForStyle:(id)arg1 ;
-(void)_endDisablingRasterizationForReason:(id)arg1 ;
-(void)setEnabledPartIdentifiers:(id)arg1 ;
-(void)_statusBarDidAnimateRotation;
-(void)forceUpdateData:(BOOL)arg1 ;
-(void)_updateShouldRasterize;
-(id)_prepareToSetStyle:(id)arg1 animation:(int)arg2 forced:(BOOL)arg3 ;
-(void)_clearOverrideHeight;
-(void)forceUpdate:(BOOL)arg1 ;
-(void)_adjustDoubleHeightTextVisibility;
-(id)actionForPartWithIdentifier:(id)arg1 ;
-(void)_noteStyleOverridesChangedLocally;
-(BOOL)_isTransparent;
-(void)_itemViewShouldEndDisablingRasterization:(id)arg1 ;
-(void)_dateTimePreferencesUpdated;
-(void)_updateUIWithStyleAttributes:(id)arg1 animationParameters:(id)arg2 forced:(BOOL)arg3 ;
-(void)_setDoubleHeightStatusString:(id)arg1 ;
-(void)requestStyle:(long long)arg1 animation:(int)arg2 startTime:(double)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)setForegroundColor:(id)arg1 animationParameters:(id)arg2 ;
-(void)_setDisablesRasterization:(BOOL)arg1 ;
-(void)_itemViewPerformButtonAction:(id)arg1 ;
@end

