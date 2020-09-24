/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIImageView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class UIView, UIImageView, _UISegmentedControlAppearanceStorage, _UIFloatingContentView, NSString, _UIBadgeView, NSArray, UIAction;

@interface UISegment : UIImageView <CAAnimationDelegate> {

	UIView* _info;
	UIImageView* _backgroundView;
	UIView* _selectionIndicatorView;
	UIImageView* _selectionImageView;
	_UISegmentedControlAppearanceStorage* _appearanceStorage;
	_UIFloatingContentView* _floatingContentView;
	double _width;
	CGSize _contentOffset;
	long long _barStyle;
	unsigned long long _rightSegmentState;
	NSString* _badgeValue;
	_UIBadgeView* _badgeView;
	id _objectValue;
	struct {
		unsigned size : 2;
		unsigned selected : 1;
		unsigned highlighted : 1;
		unsigned showDivider : 1;
		unsigned hasImage : 1;
		unsigned position : 3;
		unsigned autosizeText : 1;
		unsigned isMomentary : 1;
		unsigned wasSelected : 1;
		unsigned needsBackgroundAndContentViewUpdate : 1;
		unsigned usesAXTextSize : 1;
		unsigned selectionIndicatorDragged : 1;
		unsigned adjustsForContentSizeCategory : 1;
		unsigned hovered : 1;
		unsigned animatingSelectionIndicator : 1;
	}  _segmentFlags;
	NSArray* _infoConstraints;
	UIAction* _action;
	double _requestedScaleFactor;

}

@property (setter=_setInfoConstraints:,nonatomic,copy) NSArray * _infoConstraints;              //@synthesize infoConstraints=_infoConstraints - In the implementation block
@property (nonatomic,copy) UIAction * action;                                                   //@synthesize action=_action - In the implementation block
@property (getter=isSelected) BOOL selected; 
@property (getter=isMomentary) BOOL momentary; 
@property (assign) int controlSize; 
@property (nonatomic,copy) NSString * badgeValue; 
@property (readonly) UIView * badgeView; 
@property (assign,nonatomic) double requestedScaleFactor;                                       //@synthesize requestedScaleFactor=_requestedScaleFactor - In the implementation block
@property (assign,nonatomic) unsigned position; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_backgroundImageWithStorage:(id)arg1 mini:(BOOL)arg2 state:(unsigned long long)arg3 position:(unsigned)arg4 drawMode:(unsigned*)arg5 isCustom:(BOOL*)arg6 defaultBlock:(/*^block*/id)arg7 ;
-(UIView *)badgeView;
-(void)setContentOffset:(CGSize)arg1 ;
-(void)removeFromSuperview;
-(void)setBadgeValue:(NSString *)arg1 ;
-(id)_encodableSubviews;
-(NSString *)badgeValue;
-(int)controlSize;
-(id)disabledTextColor;
-(void)_updateHighlight;
-(id)_floatingContentView;
-(void)_finishInitialSegmentSetup;
-(void)setPosition:(unsigned)arg1 ;
-(id)objectValue;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)isRightSelected;
-(id)_effectiveBackgroundTintColor;
-(void)setObjectValue:(id)arg1 ;
-(void)setBarStyle:(long long)arg1 ;
-(id)viewForLastBaselineLayout;
-(void)animateRemoveForWidth:(double)arg1 ;
-(void)setNeedsBackgroundAndContentViewUpdate;
-(BOOL)isAnimatingSelectionIndicator;
-(void)_setEnabledAppearance:(BOOL)arg1 ;
-(void)updateForAppearance:(id)arg1 ;
-(void)_setSelectionIndicatorDragged:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_parentSegmentedControl;
-(CGRect)_contentRectForBounds:(CGRect)arg1 ;
-(void)tintColorDidChange;
-(id)_tintColorArchivingKey;
-(void)_updateBackgroundAndContentViews;
-(CGSize)_maximumTextSize;
-(void)_setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateTextColors;
-(void)setBounds:(CGRect)arg1 ;
-(void)updateConstraints;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(CGSize)contentSize;
-(void)setFrame:(CGRect)arg1 ;
-(void)setTintColor:(id)arg1 ;
-(BOOL)canBecomeFocused;
-(id)_dividerImageIsCustom:(BOOL*)arg1 ;
-(BOOL)_effectiveUseDynamicShadow;
-(UIAction *)action;
-(UIEdgeInsets)_paddingInsets;
-(void)_removeSelectionIndicator;
-(void)updateMasking;
-(void)dealloc;
-(id)_effectiveBackgroundView;
-(unsigned)position;
-(id)_effectiveContentView;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)_updateBackgroundAndContentViewsIfNeeded;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithInfo:(id)arg1 size:(int)arg2 barStyle:(long long)arg3 tintColor:(id)arg4 appearanceStorage:(id)arg5 position:(unsigned)arg6 autosizeText:(BOOL)arg7 adjustsForContentSizeCategory:(BOOL)arg8 ;
-(void)_updateFloatingContentControlState:(unsigned long long)arg1 context:(id)arg2 withAnimationCoordinator:(id)arg3 animated:(BOOL)arg4 ;
-(void)setUsesAXTextSize:(BOOL)arg1 ;
-(void)setRequestedScaleFactor:(double)arg1 ;
-(void)setHovered:(BOOL)arg1 ;
-(double)requestedScaleFactor;
-(void)animateAdd:(BOOL)arg1 ;
-(void)updateDividerViewForChangedSegment:(id)arg1 ;
-(id)_effectiveSelectedSegmentTintColor;
-(CATransform3D)_highlightSelectionInfoTransform;
-(void)setMomentary:(BOOL)arg1 ;
-(id)_dividerImage;
-(void)_positionInfo;
-(BOOL)_effectiveDisableShadow;
-(void)_updateSelectionIndicator;
-(BOOL)isSelected;
-(id)_stateTextAttibutes:(id)arg1 segmentState:(unsigned long long)arg2 ;
-(void)setAction:(UIAction *)arg1 ;
-(void)setAutosizeText:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 highlighted:(BOOL)arg2 ;
-(void)_invalidateInfoConstraints;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_setInfoConstraints:(id)arg1 ;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(double)_idealWidth;
-(void)setAdjustsForContentSizeCategory:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isHovered;
-(void)setWasSelected:(BOOL)arg1 ;
-(unsigned long long)_segmentState;
-(void)insertDividerView;
-(void)setShowDivider:(BOOL)arg1 ;
-(void)_insertSelectionView;
-(id)_effectiveVibrancyEffect;
-(NSArray *)_infoConstraints;
-(void)_forceInfoDisplay;
-(BOOL)_isContainedInHostedFocusSystem;
-(id)label;
-(BOOL)isMomentary;
-(BOOL)isSelectionIndicatorDragged;
-(void)setEnabled:(BOOL)arg1 ;
-(CGSize)_baselineOffsetsAtSize:(CGSize)arg1 ;
-(void)setAnimatingSelectionIndicator:(BOOL)arg1 ;
-(id)_segmentLabel;
-(BOOL)useBlockyMagnificationInClassic;
-(id)_attributedTextForState:(unsigned long long)arg1 selected:(BOOL)arg2 forceSelectedAppearance:(BOOL)arg3 ;
-(BOOL)_hasSelectedColor;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(Class)_segmentedControlClass;
-(BOOL)showDivider;
-(void)setSelectionIndicatorDragged:(BOOL)arg1 ;
-(void)_updateSelectionToTransform:(CATransform3D)arg1 infoTransform:(CATransform3D)arg2 hideSelection:(BOOL)arg3 shouldAnimate:(BOOL)arg4 ;
-(void)_updateDynamicShadow:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)setControlSize:(int)arg1 ;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(double)_barHeight;
-(CGRect)contentRect;
-(void)_positionInfoWithoutAnimation;
@end
