/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextInteraction.h>

@class UITextGestureTuning, NSNumber, _UIKeyboardTextSelectionController, UITextSelectionGrabberSuppressionAssertion;

@interface UITextSelectionInteraction : UITextInteraction {

	double _lastTapTimestamp;
	CGPoint _lastTapLocation;
	UITextGestureTuning* _gestureTuning;
	BOOL _indirectSelectionType;
	CGRect _originalCaretRect;
	BOOL _wasOriginallyFirstResponder;
	NSNumber* _granularityToHandOff;
	_UIKeyboardTextSelectionController* _activeSelectionController;
	UITextSelectionGrabberSuppressionAssertion* _grabberSuppressionAssertion;

}
-(BOOL)_isNowWithinRepeatedTapTime;
-(void)didMoveToView:(id)arg1 ;
-(BOOL)_isWithinRepeatedTapTimeForTouch:(id)arg1 ;
-(BOOL)_usesPencilSelectionBehaviorForGesture:(id)arg1 ;
-(void)twoFingerRangedSelectGesture:(id)arg1 ;
-(void)_showSelectionCommandsIfApplicableAfterDelay:(double)arg1 ;
-(long long)_textGranularityForNumberOfTaps:(unsigned long long)arg1 ;
-(BOOL)_isShiftKeyBeingHeldForGesture:(id)arg1 ;
-(long long)_textGranularityForRepeatedTap:(long long)arg1 ;
-(void)oneFingerTapSelectsAll:(id)arg1 ;
-(BOOL)_usesIndirectSelectionBehavior;
-(id)handOffGranularity;
-(BOOL)_shouldAllowEnforcedTouchTypeForTouch:(id)arg1 forGestureRecognizer:(id)arg2 ;
-(void)_handleMultiTapGesture:(id)arg1 ;
-(void)tappedToPositionCursorWithGesture:(id)arg1 atPoint:(CGPoint)arg2 granularity:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_updateTapGestureHistoryWithLocation:(CGPoint)arg1 ;
-(void)_createGestureTuningIfNecessary;
-(void)confirmMarkedText:(id)arg1 ;
-(void)tappedToSelectTextWithGesture:(id)arg1 atPoint:(CGPoint)arg2 granularity:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)shouldHandleOneFingerTapInUneditable:(id)arg1 ;
-(void)_applyTransientState:(id)arg1 ;
-(BOOL)interaction_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)_transientState;
-(void)oneFingerTripleTap:(id)arg1 ;
-(void)didUpdateSelectionWithGesture:(id)arg1 ;
-(BOOL)_isRepeatedTap:(id)arg1 gestureLocationOut:(CGPoint*)arg2 ;
-(void)setHybridSelectionWithPoint:(CGPoint)arg1 ;
-(void)tappedToUpdateSelectionWithGesture:(id)arg1 atPoint:(CGPoint)arg2 granularity:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)interaction_gestureRecognizerShouldBegin:(id)arg1 ;
-(void)oneFingerDoubleTap:(id)arg1 ;
-(void)finishSetup;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)initWithMode:(long long)arg1 ;
-(void)_checkForRepeatedTap:(id)arg1 gestureLocationOut:(CGPoint*)arg2 ;
-(void)toggleSelectionCommands;
-(id)initWithMode:(long long)arg1 indirect:(BOOL)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)willUpdateSelectionWithGesture:(id)arg1 ;
-(void)tapAndAHalf:(id)arg1 ;
@end

