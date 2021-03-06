/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NCTextSupporting.h>
#import <libobjc.A.dylib/MPUAutoupdatingTextContainer.h>
#import <libobjc.A.dylib/NUCrossFadeViewAnimatable.h>
#import <libobjc.A.dylib/ABText.h>
#import <UIKitCore/_UIViewBaselineSpacing.h>
#import <UIKitCore/_UIMultilineTextContentSizing.h>
#import <UIKitCore/_UILabelVisualStyleSubject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <UIKit/UIContentSizeCategoryAdjusting.h>

@class UIColor, _UILabelContent, NSAttributedString, NSDictionary, NSMutableDictionary, _UILabelScaledMetrics, _UITextSizeCache, CUICatalog, CUIStyleEffectConfiguration, UIFont, _UILabelVisualStyle, NSString, MPUTextContainerContentSizeUpdater;

@interface UILabel : UIView <NCTextSupporting, MPUAutoupdatingTextContainer, NUCrossFadeViewAnimatable, ABText, _UIViewBaselineSpacing, _UIMultilineTextContentSizing, _UILabelVisualStyleSubject, NSCoding, UIContentSizeCategoryAdjusting> {

	CGSize _size;
	UIColor* _highlightedColor;
	long long _numberOfLines;
	SCD_Struct_UI161 _baselineInfo;
	double _previousBaselineOffsetFromBottom;
	double _previousFirstLineBaseline;
	double _minimumScaleFactor;
	_UILabelContent* _content;
	NSAttributedString* _synthesizedAttributedText;
	NSDictionary* _cachedSynthesizedTextAttributes;
	NSMutableDictionary* _fallbackColorsForUserInterfaceStyle;
	double _minimumFontSize;
	long long _lineSpacing;
	id _layout;
	_UILabelScaledMetrics* _scaledMetrics;
	_UITextSizeCache* _intrinsicContentSizeCache;
	long long _contentsFormat;
	CUICatalog* _cuiCatalog;
	CUIStyleEffectConfiguration* _cuiStyleEffectConfiguration;
	NSMutableDictionary* _marqueeAnimations;
	NSMutableDictionary* _marqueeMaskAnimations;
	struct {
		unsigned highlighted : 1;
		unsigned autosizeTextToFit : 1;
		unsigned supportMultiLineShrinkToFit : 1;
		unsigned autotrackTextToFit : 1;
		unsigned baselineAdjustment : 2;
		unsigned enabled : 1;
		unsigned wordRoundingEnabled : 1;
		unsigned explicitAlignment : 1;
		unsigned enablesMarqueeWhenAncestorFocused : 1;
		unsigned marqueeEnabled : 1;
		unsigned marqueeRunable : 1;
		unsigned marqueeRequired : 1;
		unsigned usesExplicitPreferredMaxLayoutWidth : 1;
		unsigned drawsDebugBaselines : 1;
		unsigned explicitBaselineOffset : 1;
		unsigned usesSimpleTextEffects : 1;
		unsigned wantsUnderlineForAccessibilityButtonShapesEnabled : 1;
		unsigned disableUpdateTextColorOnTraitCollectionChange : 1;
		unsigned textAlignmentFollowsWritingDirection : 1;
		unsigned textAlignmentMirrored : 1;
		unsigned shortcutIntrinsicContentSize : 1;
		unsigned multilineLabelRequiresCarefulMeasurement : 1;
		unsigned noNeedsDisplayCheckForBaselineCalculationNeeded : 1;
		unsigned overallWritingDirectionFollowsLayoutDirection : 1;
		unsigned hyphenationFactorIgnoredIfURLsDetected : 1;
		unsigned extendedAccessibilityAdjustments : 1;
		unsigned canUseUILabelLayer : 1;
		unsigned implementsDefaultAttributes : 1;
		unsigned textColorFollowsTintColor : 1;
	}  _textLabelFlags;
	BOOL _adjustsFontForContentSizeCategory;
	double _preferredMaxLayoutWidth;
	double _multilineContextWidth;
	UIFont* _fontForShortcutBaselineCalculation;
	_UILabelVisualStyle* __visualStyle;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,setter=nc_setNumberOfLines:,nonatomic) unsigned long long nc_numberOfLines; 
@property (nonatomic,readonly) BOOL ic_requiresLineBreaks; 
@property (readonly,nonatomic) double firstBaselineFromTop; 
@property (readonly,nonatomic) double lastBaselineFromBottom; 
@property (readonly,nonatomic) BOOL hasContent; 
@property (readonly,nonatomic) BOOL jet_isTextExtraTall; 
@property (readonly,nonatomic) UIEdgeInsets jet_languageAwareOutsets; 
@property (readonly,nonatomic) long long jet_textLength; 
@property (assign,setter=ts_setWantsUnderlineForAccessibilityButtonShapesEnabled:,nonatomic) BOOL ts_wantsUnderlineForAccessibilityButtonShapesEnabled; 
@property (assign,setter=MPU_setAutomaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts:,nonatomic) BOOL MPU_automaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts; 
@property (nonatomic,readonly) MPUTextContainerContentSizeUpdater * MPU_contentSizeUpdater; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL roundedFont; 
@property (assign,nonatomic) BOOL accessibilityExposeLabelAsValue; 
@property (nonatomic,readonly) double naui_baselineOffsetFromBottom; 
@property (nonatomic,readonly) double naui_capOffsetFromTop; 
@property (nonatomic,copy) NSString * ab_text; 
@property (nonatomic,copy) NSDictionary * ab_textAttributes; 
@property (nonatomic,readonly) double _capOffsetFromBoundsTop; 
@property (nonatomic,readonly) double _firstLineBaselineOffsetFromBoundsTop; 
@property (assign,setter=_setFirstLineCapFrameOriginY:,nonatomic) double _firstLineCapFrameOriginY; 
@property (assign,setter=_setFirstLineBaselineFrameOriginY:,nonatomic) double _firstLineBaselineFrameOriginY; 
@property (assign,setter=_setLastLineBaselineFrameOriginY:,nonatomic) double _lastLineBaselineFrameOriginY; 
@property (assign,setter=_setDrawsDebugBaselines:,nonatomic) BOOL _drawsDebugBaselines; 
@property (assign,setter=_setWantsUnderlineForAccessibilityButtonShapesEnabled:,nonatomic) BOOL _wantsUnderlineForAccessibilityButtonShapesEnabled; 
@property (nonatomic,readonly) double _lastLineBaseline; 
@property (assign,nonatomic) long long lineSpacing; 
@property (setter=_setContent:,getter=_content,nonatomic,retain) _UILabelContent * _content; 
@property (setter=_setSynthesizedAttributedText:,getter=_synthesizedAttributedText,nonatomic,retain) NSAttributedString * _synthesizedAttributedText; 
@property (setter=_setVisualStyle:,nonatomic,retain) _UILabelVisualStyle * _visualStyle;                                                                                                   //@synthesize _visualStyle=__visualStyle - In the implementation block
@property (setter=set_fontForShortcutBaselineCalculation:,nonatomic,retain) UIFont * _fontForShortcutBaselineCalculation;                                                                  //@synthesize fontForShortcutBaselineCalculation=_fontForShortcutBaselineCalculation - In the implementation block
@property (nonatomic,readonly) long long _measuredNumberOfLines; 
@property (nonatomic,retain) UIColor * shadowColor; 
@property (assign,nonatomic) CGSize shadowOffset; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (nonatomic,retain) UIColor * highlightedTextColor;                                                                                                                               //@synthesize highlightedColor=_highlightedColor - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,getter=isUserInteractionEnabled,nonatomic) BOOL userInteractionEnabled; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) long long numberOfLines; 
@property (assign,nonatomic) BOOL adjustsFontSizeToFitWidth; 
@property (assign,nonatomic) long long baselineAdjustment; 
@property (assign,nonatomic) double minimumScaleFactor;                                                                                                                                    //@synthesize minimumScaleFactor=_minimumScaleFactor - In the implementation block
@property (assign,nonatomic) BOOL allowsDefaultTighteningForTruncation; 
@property (assign,nonatomic) unsigned long long lineBreakStrategy; 
@property (assign,nonatomic) double preferredMaxLayoutWidth;                                                                                                                               //@synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth - In the implementation block
@property (assign,nonatomic) BOOL enablesMarqueeWhenAncestorFocused; 
@property (assign,nonatomic) double minimumFontSize; 
@property (assign,nonatomic) BOOL adjustsLetterSpacingToFitWidth; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory;                                                                                                                       //@synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory - In the implementation block
+(id)labelWithText:(id)arg1 font:(id)arg2 ;
+(id)_doc_defaultTitleTextAttributes;
+(id)_doc_tagChainTitleViewForTags:(id)arg1 withTitle:(id)arg2 layoutDirection:(long long)arg3 ;
+(id)siriui_configuredBodyLabel;
+(id)siriui_configuredHeadlineLabel;
+(id)siriui_configuredSubheadLabel;
+(id)siriui_configuredCaptionLabel;
+(id)siriui_configuredFootnoteLabel;
+(id)siriui_configuredTitleLabel;
+(id)siriui_configuredLabel;
+(id)siriui_configuredPriceLabel;
+(id)siriui_configuredTitle3Label;
+(id)cps_labelWithText:(id)arg1 textColor:(id)arg2 fontSize:(double)arg3 fontWeight:(double)arg4 ;
+(BOOL)px_isTruncatedForAttributedString:(id)arg1 forWidth:(double)arg2 lines:(long long)arg3 ;
+(id)hrui_fontAdjustingLabel;
+(id)hk_fontAdjustingLabel;
+(id)_hkecg_heartRateLabel;
+(id)_hkecg_bodyLabel;
+(id)SKUITrending_defaultTitleFont;
+(id)SKUITrending_defaultTitleColor;
+(id)SKUITrending_titleLabelWithElement:(id)arg1 ;
+(id)SKUITrending_defaultLabelWithText:(id)arg1 ;
+(id)_defaultAttributes;
+(Class)layerClass;
+(CGRect)_insetRect:(CGRect)arg1 forAttributedString:(id)arg2 withDefaultFont:(id)arg3 inView:(id)arg4 ;
+(id)defaultFont;
+(id)_defaultColor;
-(double)sb_yPositionForLabelWithContainerBounds:(CGRect)arg1 lineHeight:(double)arg2 baselineOffset:(double)arg3 font:(id)arg4 ;
-(double)sb_yPositionForLabelWithContainerBounds:(CGRect)arg1 baselineOffset:(double)arg2 font:(id)arg3 ;
-(double)sb_yPositionForLayoutAfterLabel:(id)arg1 baselineOffset:(double)arg2 ;
-(id)stringMetricsForFirstLineWidth:(double)arg1 ;
-(void)drawWithMetrics:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)mtui_setText:(id)arg1 hyphenationFactor:(float)arg2 ;
-(void)configureForIKTextElement:(id)arg1 fontDescriptor:(id)arg2 textStyle:(id)arg3 ;
-(void)configureForIKTextElement:(id)arg1 fontDescriptor:(id)arg2 textStyle:(id)arg3 capitalize:(BOOL)arg4 ;
-(double)vui_heightToBaseline;
-(void)configureForIKTextElement:(id)arg1 fontDescriptor:(id)arg2 textStyle:(id)arg3 capitalize:(BOOL)arg4 overrideWithTraitCollection:(id)arg5 ;
-(CGSize)vui_textSizeForSize:(CGSize)arg1 ;
-(long long)_textAlignmentFromElementAlignment:(unsigned long long)arg1 ;
-(CGSize)tv_textSizeForSize:(CGSize)arg1 ;
-(UIEdgeInsets)tv_alignmentInsetsForExpectedWidth:(double)arg1 ;
-(double)tv_heightToFirstBaseline;
-(double)tv_scaledValueForValue:(double)arg1 ;
-(CGSize)tv_textSizeForWidth:(double)arg1 ;
-(id)br_contentDescription;
-(unsigned long long)nc_numberOfLines;
-(void)nc_setNumberOfLines:(unsigned long long)arg1 ;
-(void)setUseSecondaryTextColor;
-(void)setUseShortLineHeight;
-(BOOL)ic_requiresLineBreaks;
-(double)firstBaselineFromTop;
-(double)lastBaselineFromBottom;
-(void)_gkUpdateShadowForFocusChange:(BOOL)arg1 ;
-(void)setFrameOnBaseline:(CGRect)arg1 ;
-(CGRect)frameForBaseline:(CGRect)arg1 ;
-(void)ne_verticallyCenterCapInRect:(CGRect)arg1 ;
-(void)pk_setAttributedTextRespectingTextAndBackgroundColors:(id)arg1 ;
-(CGSize)pkui_sizeThatFits:(CGSize)arg1 ;
-(CGSize)pkui_sizeThatFits:(CGSize)arg1 forceWordWrap:(BOOL)arg2 ;
-(void)pk_applyAppearance:(id)arg1 ;
-(id)pk_childrenForAppearance;
-(BOOL)hasContent;
-(BOOL)jet_isTextExtraTall;
-(long long)jet_textLength;
-(UIEdgeInsets)jet_languageAwareOutsets;
-(JUMeasurements)measurementsWithFitting:(CGSize)arg1 in:(id)arg2 ;
-(void)ts_setHyphenationFactor:(float)arg1 ;
-(BOOL)ts_wantsUnderlineForAccessibilityButtonShapesEnabled;
-(void)ts_setWantsUnderlineForAccessibilityButtonShapesEnabled:(BOOL)arg1 ;
-(void)MPU_setAutomaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts:(BOOL)arg1 ;
-(MPUTextContainerContentSizeUpdater *)MPU_contentSizeUpdater;
-(BOOL)MPU_automaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts;
-(void)MPU_configureWithTextAttributes:(id)arg1 ;
-(BOOL)roundedFont;
-(void)setRoundedFont:(BOOL)arg1 ;
-(void)nu_crossFadeViewSetValue:(id)arg1 ;
-(void)nu_crossFadeViewClearVisibleState;
-(BOOL)px_isTruncatedForWidth:(double)arg1 lines:(long long)arg2 ;
-(BOOL)px_isOneLineForWidth:(double)arg1 ;
-(CGRect)boundingRectForCharacterRange:(NSRange)arg1 ;
-(BOOL)accessibilityExposeLabelAsValue;
-(void)setAccessibilityExposeLabelAsValue:(BOOL)arg1 ;
-(void)naui_reloadDynamicFontWithTextStyleDescriptor:(id)arg1 ;
-(double)naui_baselineOffsetFromBottom;
-(double)naui_capOffsetFromTop;
-(double)naui_distanceFromBaselineToCoordinate:(double)arg1 inView:(id)arg2 ;
-(void)setBoldSubString:(id)arg1 ;
-(NSString *)ab_text;
-(void)_cnui_applyContactStyle;
-(void)setAb_text:(NSString *)arg1 ;
-(NSDictionary *)ab_textAttributes;
-(void)setAb_textAttributes:(NSDictionary *)arg1 ;
-(BOOL)canUseFastLayoutSizeCalulation;
-(double)_nui_lineHeight;
-(BOOL)isLayoutSizeDependentOnPerpendicularAxis;
-(void)PG_removeVibrancyEffect;
-(void)PG_updateVibrancyEffectForTintColor;
-(void)mt_applyVisualStyling:(id)arg1 ;
-(CGSize)shadowOffset;
-(void)drawTextInRect:(CGRect)arg1 ;
-(long long)lineBreakMode;
-(unsigned long long)lineBreakStrategy;
-(void)setMarqueeEnabled:(BOOL)arg1 ;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setLineBreakStrategy:(unsigned long long)arg1 ;
-(id)_image;
-(NSAttributedString *)attributedText;
-(UIColor *)highlightedTextColor;
-(void)setShadowOffset:(CGSize)arg1 ;
-(UIColor *)shadowColor;
-(long long)numberOfLines;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(CGRect)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)_setVisualStyle:(id)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(long long)arg2 nextToNeighbor:(id)arg3 edge:(int)arg4 attribute:(long long)arg5 multiplier:(double)arg6 ;
-(void)setNeedsDisplay;
-(void)setLineBreakMode:(long long)arg1 ;
-(BOOL)_usesSimpleTextEffects;
-(void)setTextColor:(UIColor *)arg1 ;
-(long long)textAlignment;
-(void)_setWantsUnderlineForAccessibilityButtonShapesEnabled:(BOOL)arg1 ;
-(void)setHighlightedTextColor:(UIColor *)arg1 ;
-(id)_defaultAttributes;
-(CGSize)intrinsicContentSize;
-(BOOL)_isTextFieldCenteredLabel;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(void)tintColorDidChange;
-(CGSize)rawSize;
-(long long)baselineAdjustment;
-(void)_ancestorWillUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)_accessibilityButtonShapesParametersDidChange;
-(double)shadowBlur;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(void)setMinimumFontSize:(double)arg1 ;
-(_UILabelContent *)_content;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)_prepareForFirstIntrinsicContentSizeCalculation;
-(void)setAllowsDefaultTighteningForTruncation:(BOOL)arg1 ;
-(double)_capOffsetFromBoundsTop;
-(BOOL)_shouldCeilSizeToViewScale;
-(BOOL)isHighlighted;
-(void)invalidateIntrinsicContentSize;
-(BOOL)isEnabled;
-(void)_setFont:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setShadowColor:(UIColor *)arg1 ;
-(NSString *)text;
-(void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3 ;
-(BOOL)adjustsFontForContentSizeCategory;
-(void)dealloc;
-(void)_setOverallWritingDirectionFollowsLayoutDirection:(BOOL)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(CGRect)textRectForBounds:(CGRect)arg1 limitedToNumberOfLines:(long long)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)largeContentTitle;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(void)_setUsesSimpleTextEffects:(BOOL)arg1 ;
-(UIFont *)font;
-(void)_setDrawsDebugBaselines:(BOOL)arg1 ;
-(BOOL)_drawsDebugBaselines;
-(id)_associatedScalingLabel;
-(void)setShadowBlur:(double)arg1 ;
-(void)_setTextColorFollowsTintColor:(BOOL)arg1 ;
-(double)minimumScaleFactor;
-(BOOL)adjustsFontSizeToFitWidth;
-(void)_setFallbackTextColor:(id)arg1 forUserInterfaceStyle:(long long)arg2 ;
-(long long)lineSpacing;
-(void)layerWillDraw:(id)arg1 ;
-(id)_cuiStyleEffectConfiguration;
-(void)_setCuiCatalog:(id)arg1 ;
-(void)_setCuiStyleEffectConfiguration:(id)arg1 ;
-(void)setRawSize:(CGSize)arg1 ;
-(void)_invalidateBaselineConstraints;
-(void)_setText:(id)arg1 ;
-(void)setMinimumScaleFactor:(double)arg1 ;
-(void)_applicationDidBecomeActiveNotification:(id)arg1 ;
-(UIColor *)textColor;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_updateTextColorWithFallbackColorIfNeeded;
-(CGSize)textSize;
-(void)_setColor:(id)arg1 ;
-(BOOL)_needsDoubleUpdateConstraintsPass;
-(double)minimumFontSize;
-(double)_firstLineBaselineOffsetFromBoundsTop;
-(id)initWithCoder:(id)arg1 ;
-(void)_setTextColor:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setLineSpacing:(long long)arg1 ;
-(void)_commonInit;
-(void)_resetUsesExplicitPreferredMaxLayoutWidth;
-(BOOL)isAccessibilityElementByDefault;
-(double)preferredMaxLayoutWidth;
-(void)_contentDidChange:(long long)arg1 fromContent:(id)arg2 ;
-(BOOL)_textColorFollowsTintColor;
-(double)_baselineOffsetFromBottom;
-(_UILabelVisualStyle *)_visualStyle;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)allowsDefaultTighteningForTruncation;
-(BOOL)marqueeEnabled;
-(void)setBaselineAdjustment:(long long)arg1 ;
-(void)setPreferredMaxLayoutWidth:(double)arg1 ;
-(id)color;
-(void)_setHyphenationFactor:(float)arg1 ;
-(unsigned long long)defaultAccessibilityTraits;
-(BOOL)_shouldInvalidateBaselineConstraintsForSize:(CGSize)arg1 oldSize:(CGSize)arg2 ;
-(id)_fontInfoForBaselineSpacing;
-(void)setColor:(id)arg1 ;
-(BOOL)_shouldDrawUnderlinesLikeWebKit;
-(BOOL)_hasCustomAutolayoutNeighborSpacingForAttribute:(long long*)arg1 ;
-(BOOL)_hasFontInfoForVerticalBaselineSpacing;
-(double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(long long)arg2 inContainer:(id)arg3 isGuide:(BOOL)arg4 ;
-(void)setMarqueeRunning:(BOOL)arg1 ;
-(double)_lastLineBaseline;
-(double)_firstLineBaseline;
-(double)_firstBaselineOffsetFromTop;
-(void)_setMultilineContextWidth:(double)arg1 ;
-(BOOL)_hasBaseline;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)textSizeForWidth:(double)arg1 ;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(id)_stringDrawingContext;
-(void)setEnabled:(BOOL)arg1 ;
-(CGSize)_baselineOffsetsAtSize:(CGSize)arg1 ;
-(UIEdgeInsets)_contentInsetsFromFonts;
-(void)_setContent:(id)arg1 ;
-(void)_invalidateLabelSize;
-(id)_disabledFontColor;
-(long long)_stringDrawingOptions;
-(id)_cuiCatalog;
-(void)_invalidateTextSize;
-(BOOL)_useShortcutIntrinsicContentSize;
-(id)currentTextColor;
-(float)_hyphenationFactor;
-(BOOL)_overallWritingDirectionFollowsLayoutDirection;
-(void)_accessibilityButtonShapesChangedNotification:(id)arg1 ;
-(void)_setTextAlignment:(long long)arg1 ;
-(BOOL)adjustsLetterSpacingToFitWidth;
-(BOOL)_textAlignmentFollowsWritingDirection;
-(CGRect)_textRectForBounds:(CGRect)arg1 limitedToNumberOfLines:(long long)arg2 includingShadow:(BOOL)arg3 ;
-(BOOL)_textAlignmentMirrored;
-(void)_drawTextInRect:(CGRect)arg1 baselineCalculationOnly:(BOOL)arg2 ;
-(double)_multilineContextWidth;
-(double)_preferredMaxLayoutWidth;
-(void)_setUseShortcutIntrinsicContentSize:(BOOL)arg1 ;
-(void)_stopMarqueeWithRedisplay:(BOOL)arg1 ;
-(void)_setMultilineLabelRequiresCarefulMeasurement:(BOOL)arg1 ;
-(void)_drawFullMarqueeTextInRect:(CGRect)arg1 ;
-(BOOL)_multilineLabelRequiresCarefulMeasurement;
-(void)_startMarqueeIfNecessary;
-(BOOL)marqueeRunning;
-(void)_setSynthesizedAttributedText:(id)arg1 ;
-(BOOL)enablesMarqueeWhenAncestorFocused;
-(void)_setMinimumFontSize:(double)arg1 ;
-(void)setEnablesMarqueeWhenAncestorFocused:(BOOL)arg1 ;
-(void)setAdjustsLetterSpacingToFitWidth:(BOOL)arg1 ;
-(void)set_fontForShortcutBaselineCalculation:(UIFont *)arg1 ;
-(void)_setWordRoundingEnabled:(BOOL)arg1 ;
-(void)setDrawsUnderline:(BOOL)arg1 ;
-(BOOL)drawsUnderline;
-(void)_setTextAlignmentFollowsWritingDirection:(BOOL)arg1 ;
-(void)_setTextAlignmentMirrored:(BOOL)arg1 ;
-(void)_applicationWillResignActiveNotification:(id)arg1 ;
-(UIFont *)_fontForShortcutBaselineCalculation;
-(double)_firstLineCapFrameOriginY;
-(void)_setFirstLineCapFrameOriginY:(double)arg1 ;
-(double)_firstLineBaselineFrameOriginY;
-(void)_setFirstLineBaselineFrameOriginY:(double)arg1 ;
-(double)_lastLineBaselineFrameOriginY;
-(void)_setLastLineBaselineFrameOriginY:(double)arg1 ;
-(void)setCentersHorizontally:(BOOL)arg1 ;
-(void)setAutotrackTextToFit:(BOOL)arg1 ;
-(BOOL)_wantsUnderlineForAccessibilityButtonShapesEnabled;
-(BOOL)autotrackTextToFit;
-(BOOL)centersHorizontally;
-(void)drawContentsInRect:(CGRect)arg1 ;
-(long long)_measuredNumberOfLines;
-(double)_minimumFontSize;
-(NSAttributedString *)_synthesizedAttributedText;
-(void)_setDefaultAttributes:(id)arg1 ;
-(void)_setLineBreakMode:(long long)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(double)_actualScaleFactor;
@end

