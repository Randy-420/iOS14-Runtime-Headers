/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBSystemGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBTouchTemplateGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBIndirectPanGestureRecognizerOrientationProviding.h>

@protocol SBCoverSheetSystemGestureDelegatePositionProviding;
@class UIPanGestureRecognizer, SBIndirectPanGestureRecognizer, SBFluidScrunchGestureRecognizer, UIViewController, UIGestureRecognizer, CSCoverSheetDismissGestureSettings, NSString;

@interface SBCoverSheetSystemGesturesDelegate : NSObject <SBSystemGestureRecognizerDelegate, SBTouchTemplateGestureRecognizerDelegate, SBIndirectPanGestureRecognizerOrientationProviding> {

	int _syntheticAppearState;
	id<SBCoverSheetSystemGestureDelegatePositionProviding> _positionProvider;
	UIPanGestureRecognizer* _presentGestureRecognizer;
	SBIndirectPanGestureRecognizer* _indirectPresentGestureRecognizer;
	SBIndirectPanGestureRecognizer* _indirectDismissGestureRecognizer;
	SBFluidScrunchGestureRecognizer* _scrunchDismissGestureRecognizer;
	UIViewController* _viewController;
	UIGestureRecognizer* _dismissGestureRecognizer;
	UIGestureRecognizer* _dismissAddendumGestureRecognizer;
	UIGestureRecognizer* _preemptingGestureRecognizer;
	CSCoverSheetDismissGestureSettings* _dismissGestureSettings;

}

@property (assign,nonatomic,__weak) UIViewController * viewController;                                                    //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic,__weak) UIGestureRecognizer * dismissGestureRecognizer;                                       //@synthesize dismissGestureRecognizer=_dismissGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) UIGestureRecognizer * dismissAddendumGestureRecognizer;                               //@synthesize dismissAddendumGestureRecognizer=_dismissAddendumGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) UIGestureRecognizer * preemptingGestureRecognizer;                                    //@synthesize preemptingGestureRecognizer=_preemptingGestureRecognizer - In the implementation block
@property (nonatomic,retain) CSCoverSheetDismissGestureSettings * dismissGestureSettings;                                 //@synthesize dismissGestureSettings=_dismissGestureSettings - In the implementation block
@property (assign,nonatomic,__weak) id<SBCoverSheetSystemGestureDelegatePositionProviding> positionProvider;              //@synthesize positionProvider=_positionProvider - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * presentGestureRecognizer;                                           //@synthesize presentGestureRecognizer=_presentGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBIndirectPanGestureRecognizer * indirectPresentGestureRecognizer;                           //@synthesize indirectPresentGestureRecognizer=_indirectPresentGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBIndirectPanGestureRecognizer * indirectDismissGestureRecognizer;                           //@synthesize indirectDismissGestureRecognizer=_indirectDismissGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBFluidScrunchGestureRecognizer * scrunchDismissGestureRecognizer;                           //@synthesize scrunchDismissGestureRecognizer=_scrunchDismissGestureRecognizer - In the implementation block
@property (assign,nonatomic) int syntheticAppearState;                                                                    //@synthesize syntheticAppearState=_syntheticAppearState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isDismissGestureActive;
-(UIGestureRecognizer *)dismissAddendumGestureRecognizer;
-(SBFluidScrunchGestureRecognizer *)scrunchDismissGestureRecognizer;
-(void)setDismissAddendumGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(void)setIndirectPresentGestureRecognizer:(SBIndirectPanGestureRecognizer *)arg1 ;
-(SBIndirectPanGestureRecognizer *)indirectPresentGestureRecognizer;
-(BOOL)_canPresentGestureBegin;
-(void)setDismissGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(void)setScrunchDismissGestureRecognizer:(SBFluidScrunchGestureRecognizer *)arg1 ;
-(id)viewForSystemGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)isAnyGestureActivelyRecognized;
-(void)setPresentGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(void)setIndirectDismissGestureRecognizer:(SBIndirectPanGestureRecognizer *)arg1 ;
-(UIGestureRecognizer *)dismissGestureRecognizer;
-(BOOL)isPresentGestureActive;
-(SBIndirectPanGestureRecognizer *)indirectDismissGestureRecognizer;
-(BOOL)_isGestureActivelyRecognized:(id)arg1 ;
-(BOOL)_areAnyGesturesRecognizedInSet:(id)arg1 ;
-(UIViewController *)viewController;
-(void)setPresentGestureFailureRequirements:(id)arg1 ;
-(void)setDismissGestureSettings:(CSCoverSheetDismissGestureSettings *)arg1 ;
-(int)syntheticAppearState;
-(void)setPositionProvider:(id<SBCoverSheetSystemGestureDelegatePositionProviding>)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(id)initWithViewController:(id)arg1 dismissGestureRecognizer:(id)arg2 dismissAddendumGestureRecognizer:(id)arg3 dismissalPreemptingGestureRecognizer:(id)arg4 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(BOOL)_isGestureAllowedByTransientOverlaysOrTopmostApp;
-(CSCoverSheetDismissGestureSettings *)dismissGestureSettings;
-(BOOL)_canDismissGestureBegin;
-(id)presentGestures;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(long long)indirectPanEffectiveInterfaceOrientation;
-(void)setSyntheticAppearState:(int)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(UIGestureRecognizer *)preemptingGestureRecognizer;
-(id<SBCoverSheetSystemGestureDelegatePositionProviding>)positionProvider;
-(UIPanGestureRecognizer *)presentGestureRecognizer;
-(void)setPreemptingGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(id)dismissGestures;
@end

