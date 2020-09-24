/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBHardwareButtonGestureParametersProviderBase.h>
#import <libobjc.A.dylib/SBHardwareButtonInteraction.h>

@protocol SiriAssertion;
@class SiriLongPressButtonSource, NSString;

@interface SBSiriHardwareButtonInteraction : SBHardwareButtonGestureParametersProviderBase <SBHardwareButtonInteraction> {

	double _initialPressDownTime;
	long long _siriButtonIdentifier;
	SiriLongPressButtonSource* _siriActivationSource;
	double _activationInterval;
	id<SiriAssertion> _siriPreheatAssertion;
	id<SiriAssertion> _siriButtonDownAssertion;

}

@property (assign,nonatomic) long long siriButtonIdentifier;                                //@synthesize siriButtonIdentifier=_siriButtonIdentifier - In the implementation block
@property (nonatomic,retain) SiriLongPressButtonSource * siriActivationSource;              //@synthesize siriActivationSource=_siriActivationSource - In the implementation block
@property (assign,nonatomic) double activationInterval;                                     //@synthesize activationInterval=_activationInterval - In the implementation block
@property (nonatomic,retain) id<SiriAssertion> siriPreheatAssertion;                        //@synthesize siriPreheatAssertion=_siriPreheatAssertion - In the implementation block
@property (nonatomic,retain) id<SiriAssertion> siriButtonDownAssertion;                     //@synthesize siriButtonDownAssertion=_siriButtonDownAssertion - In the implementation block
@property (assign,nonatomic) double initialPressDownTime;                                   //@synthesize initialPressDownTime=_initialPressDownTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)hardwareButtonInteractionForLockButton;
+(id)hardwareButtonInteractionForHomeButton;
+(BOOL)dismissSiriTransientOverlayOnSinglePressUp:(long long)arg1 ;
-(long long)siriButtonIdentifier;
-(BOOL)consumeLongPress;
-(id<SiriAssertion>)siriButtonDownAssertion;
-(void)_preheatSiriForPresentationAfterInterval:(double)arg1 ;
-(BOOL)consumeInitialPressDown;
-(double)initialPressDownTime;
-(id<SiriAssertion>)siriPreheatAssertion;
-(SiriLongPressButtonSource *)siriActivationSource;
-(void)observeFinalPressUp;
-(BOOL)consumeSinglePressUp;
-(void)_cancelAllSiriActions;
-(void)_cancelPreheating;
-(double)activationInterval;
-(void)setInitialPressDownTime:(double)arg1 ;
-(void)setActivationInterval:(double)arg1 ;
-(void)setSiriActivationSource:(SiriLongPressButtonSource *)arg1 ;
-(id)hardwareButtonGestureParameters;
-(void)setSiriButtonIdentifier:(long long)arg1 ;
-(void)setSiriPreheatAssertion:(id<SiriAssertion>)arg1 ;
-(void)observeLongPressCanceled;
-(void)_siriHomeButtonPrefsDidChange:(id)arg1 ;
-(void)setSiriButtonDownAssertion:(id<SiriAssertion>)arg1 ;
-(id)initWithSiriButton:(long long)arg1 ;
@end
