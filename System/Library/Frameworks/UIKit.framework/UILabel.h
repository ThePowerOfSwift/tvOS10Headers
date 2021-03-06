/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:12 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/_UIMultilineTextContentSizing.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <UIKit/UIContentSizeCategoryAdjusting.h>

@class UIColor, NSAttributedString, NSMutableDictionary, _UILabelScaledMetrics, CUICatalog, CUIStyleEffectConfiguration, NSString, UIFont;

@interface UILabel : UIView <_UIMultilineTextContentSizing, NSCoding, UIContentSizeCategoryAdjusting> {

	CGSize _size;
	UIColor* _highlightedColor;
	long long _numberOfLines;
	long long _measuredNumberOfLines;
	CGRect _baselineReferenceBounds;
	double _lastLineBaseline;
	double _previousBaselineOffsetFromBottom;
	double _firstLineBaseline;
	double _previousFirstLineBaseline;
	double _minimumScaleFactor;
	id _content;
	NSAttributedString* _synthesizedAttributedText;
	NSMutableDictionary* _defaultAttributes;
	NSMutableDictionary* _fallbackColorsForUserInterfaceStyle;
	double _minimumFontSize;
	long long _lineSpacing;
	id _layout;
	_UILabelScaledMetrics* _scaledMetrics;
	CGSize _cachedIntrinsicContentSize;
	long long _contentsFormat;
	CUICatalog* _cuiCatalog;
	CUIStyleEffectConfiguration* _cuiStyleEffectConfiguration;
	struct {
		unsigned unused1 : 3;
		unsigned highlighted : 1;
		unsigned autosizeTextToFit : 1;
		unsigned autotrackTextToFit : 1;
		unsigned baselineAdjustment : 2;
		unsigned enabled : 1;
		unsigned wordRoundingEnabled : 1;
		unsigned explicitAlignment : 1;
		unsigned marqueeEnabled : 1;
		unsigned marqueeRunable : 1;
		unsigned marqueeRequired : 1;
		unsigned drawsLetterpress : 1;
		unsigned unused3 : 1;
		unsigned usesExplicitPreferredMaxLayoutWidth : 1;
		unsigned drawsDebugBaselines : 1;
		unsigned explicitBaselineOffset : 1;
		unsigned usesSimpleTextEffects : 1;
		unsigned isComplexString : 1;
		unsigned isVariableLengthString : 1;
		unsigned wantsUnderlineForAccessibilityButtonShapesEnabled : 1;
		unsigned cachedIntrinsicContentSizeIsValid : 1;
		unsigned overridesDrawRect : 1;
		unsigned overridesTextAccessors : 1;
		unsigned disableUpdateTextColorOnTraitCollectionChange : 1;
		unsigned textAlignmentFollowsWritingDirection : 1;
		unsigned textAlignmentMirrored : 1;
	}  _textLabelFlags;
	BOOL _adjustsFontForContentSizeCategory;
	BOOL __textColorFollowsTintColor;
	double _preferredMaxLayoutWidth;
	double _multilineContextWidth;

}

@property (nonatomic,readonly) double _capOffsetFromBoundsTop; 
@property (nonatomic,readonly) double _firstLineBaselineOffsetFromBoundsTop; 
@property (assign,setter=_setFirstLineCapFrameOriginY:,nonatomic) double _firstLineCapFrameOriginY; 
@property (assign,setter=_setFirstLineBaselineFrameOriginY:,nonatomic) double _firstLineBaselineFrameOriginY; 
@property (assign,setter=_setLastLineBaselineFrameOriginY:,nonatomic) double _lastLineBaselineFrameOriginY; 
@property (assign,setter=_setDrawsDebugBaselines:,nonatomic) BOOL _drawsDebugBaselines; 
@property (assign,setter=_setWantsUnderlineForAccessibilityButtonShapesEnabled:,nonatomic) BOOL _wantsUnderlineForAccessibilityButtonShapesEnabled; 
@property (nonatomic,readonly) double _lastLineBaseline; 
@property (assign,nonatomic) long long lineSpacing; 
@property (setter=_setSynthesizedAttributedText:,getter=_synthesizedAttributedText,nonatomic,retain) NSAttributedString * _synthesizedAttributedText; 
@property (assign,setter=_setTextColorFollowsTintColor:,nonatomic) BOOL _textColorFollowsTintColor;                                                                //@synthesize _textColorFollowsTintColor=__textColorFollowsTintColor - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (nonatomic,retain) UIColor * shadowColor; 
@property (assign,nonatomic) CGSize shadowOffset; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (nonatomic,retain) UIColor * highlightedTextColor;                                                                                                       //@synthesize highlightedColor=_highlightedColor - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,getter=isUserInteractionEnabled,nonatomic) BOOL userInteractionEnabled; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) long long numberOfLines; 
@property (assign,nonatomic) BOOL adjustsFontSizeToFitWidth; 
@property (assign,nonatomic) long long baselineAdjustment; 
@property (assign,nonatomic) double minimumScaleFactor;                                                                                                            //@synthesize minimumScaleFactor=_minimumScaleFactor - In the implementation block
@property (assign,nonatomic) BOOL allowsDefaultTighteningForTruncation; 
@property (assign,nonatomic) double preferredMaxLayoutWidth;                                                                                                       //@synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth - In the implementation block
@property (assign,nonatomic) double minimumFontSize; 
@property (assign,nonatomic) BOOL adjustsLetterSpacingToFitWidth; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory;                                                                                               //@synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory - In the implementation block
+(CGSize)_legacy_adjustSizeForWebKitConstraining:(CGSize)arg1 withFont:(id)arg2 ;
+(Class)layerClass;
+(id)defaultFont;
+(CFCharacterSetRef)_tooBigChars;
+(UIEdgeInsets)_insetsForAttributedString:(id)arg1 withDefaultFont:(id)arg2 inView:(id)arg3 ;
+(id)_defaultAttributes;
+(UIEdgeInsets)_insetsForString:(id)arg1 withFont:(id)arg2 inView:(id)arg3 ;
+(BOOL)_isMonochromeDrawingDisabled;
+(CGRect)_insetRect:(CGRect)arg1 forAttributedString:(id)arg2 withDefaultFont:(id)arg3 inView:(id)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)_image;
-(void)setBackgroundColor:(id)arg1 ;
-(void)_setTextColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)invalidateIntrinsicContentSize;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)color;
-(void)setColor:(id)arg1 ;
-(void)setLineBreakMode:(long long)arg1 ;
-(void)setShadowColor:(UIColor *)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(double)_minimumFontSize;
-(void)_commonInit;
-(void)_setNeedsUpdateConstraintsNeedingLayout:(BOOL)arg1 ;
-(BOOL)_wantsDeepDrawing;
-(long long)_contentsFormatForNonDeepDrawing;
-(BOOL)_needsDoubleUpdateConstraintsPass;
-(void)_invalidateIntrinsicContentSizeNeedingLayout:(BOOL)arg1 ;
-(double)_baselineOffsetFromBottom;
-(double)_firstBaselineOffsetFromTop;
-(void)_evaluateContentsFormat;
-(void)tintColorDidChange;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(CGSize)intrinsicContentSize;
-(void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3 ;
-(void)_setLineBreakMode:(long long)arg1 ;
-(CGSize)shadowOffset;
-(void)_accessibilityButtonShapesParametersDidChange;
-(void)setHighlighted:(BOOL)arg1 ;
-(NSAttributedString *)_synthesizedAttributedText;
-(UIColor *)shadowColor;
-(void)_setFont:(id)arg1 ;
-(BOOL)isHighlighted;
-(UIFont *)font;
-(UIColor *)textColor;
-(NSAttributedString *)attributedText;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(BOOL)adjustsFontSizeToFitWidth;
-(void)setMinimumScaleFactor:(double)arg1 ;
-(UIEdgeInsets)_contentInsetsFromFonts;
-(long long)textAlignment;
-(id)_cuiStyleEffectConfiguration;
-(id)_cuiCatalog;
-(void)_setWantsUnderlineForAccessibilityButtonShapesEnabled:(BOOL)arg1 ;
-(CGSize)textSize;
-(void)_setMinimumFontSize:(double)arg1 ;
-(id)_disabledFontColor;
-(id)_associatedScalingLabel;
-(double)_actualScaleFactor;
-(id)_defaultAttributes;
-(void)_noteInstanceCustomizationForAttributedString:(id)arg1 attributes:(id)arg2 ;
-(void)_invalidateSynthesizedAttributedTextAndLayout;
-(void)_invalidateTextSize;
-(id)_shadow;
-(BOOL)_textColorFollowsTintColor;
-(id)currentTextColor;
-(id)_synthesizedTextAttributes;
-(id)_compatibilityAttributedString;
-(void)_invalidateCachedDefaultAttributes;
-(void)_invalidateLayout;
-(void)_accessibilityButtonShapesChangedNotification:(id)arg1 ;
-(void)_applicationWillResignActiveNotification:(id)arg1 ;
-(void)_applicationDidBecomeActiveNotification:(id)arg1 ;
-(void)_setFallbackTextColor:(id)arg1 forUserInterfaceStyle:(long long)arg2 ;
-(void)drawTextInRect:(CGRect)arg1 ;
-(void)_updateVariableLengthString;
-(void)_invalidateAsNeededForNewSize:(CGSize)arg1 oldSize:(CGSize)arg2 withLinkCheck:(BOOL)arg3 ;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(void)_setText:(id)arg1 ;
-(void)_setTextAlignment:(long long)arg1 ;
-(void)_setAllowsDefaultTighteningForTruncation:(BOOL)arg1 ;
-(long long)lineBreakMode;
-(BOOL)adjustsFontForContentSizeCategory;
-(BOOL)allowsDefaultTighteningForTruncation;
-(BOOL)_attributedStringHasAttributesNotCoveredByPrimitives;
-(double)minimumScaleFactor;
-(BOOL)adjustsLetterSpacingToFitWidth;
-(void)setLetterpressStyle:(id)arg1 ;
-(long long)_stringDrawingOptions;
-(id)_stringDrawingContext;
-(CGRect)_textRectForBounds:(CGRect)arg1 limitedToNumberOfLines:(long long)arg2 includingShadow:(BOOL)arg3 ;
-(BOOL)_shouldDrawUnderlinesLikeWebKit;
-(BOOL)_textAlignmentFollowsWritingDirection;
-(BOOL)_textAlignmentMirrored;
-(BOOL)_shouldCeilSizeToViewScale;
-(void)_baselineOffsetParametersDidChange;
-(void)_setAttributedText:(id)arg1 andTakeOwnership:(BOOL)arg2 ;
-(double)shadowBlur;
-(id)_safeContent:(BOOL*)arg1 ;
-(id)letterpressStyle;
-(id)__currentDefaultColor;
-(long long)_determineContentsFormat;
-(void)_updateTextColorWithFallbackColorIfNeeded;
-(BOOL)_updateScaledMetricsForRect:(CGRect)arg1 ;
-(void)setAllowsDefaultTighteningForTruncation:(BOOL)arg1 ;
-(UIColor *)highlightedTextColor;
-(void)_adjustPreferredFontForCurrentContentSizeCategory;
-(void)_setShadow:(id)arg1 ;
-(void)_drawTextInRect:(CGRect)arg1 baselineCalculationOnly:(BOOL)arg2 ;
-(double)_preferredMaxLayoutWidth;
-(CGRect)_ensureBaselineMetricsReturningBounds;
-(void)_prepareForFirstIntrinsicContentSizeCalculation;
-(void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(CGRect)arg1 ;
-(id)_fallbackTextColorForUserInterfaceStyle:(long long)arg1 ;
-(CGRect)textRectForBounds:(CGRect)arg1 limitedToNumberOfLines:(long long)arg2 ;
-(CGSize)textSizeForWidth:(double)arg1 ;
-(void)_drawFullMarqueeTextInRect:(CGRect)arg1 ;
-(void)_startMarqueeIfNecessary;
-(BOOL)_isTextFieldCenteredLabel;
-(long long)lineSpacing;
-(long long)numberOfLines;
-(void)setMarqueeRunning:(BOOL)arg1 ;
-(id)_siblingMarqueeLabels;
-(double)_maximumMarqueeTextWidth;
-(void)_coordinateBeginTimeForMarqueeAnimations:(double)arg1 ;
-(BOOL)marqueeRunning;
-(void)_startMarquee;
-(void)_stopMarqueeWithRedisplay:(BOOL)arg1 ;
-(BOOL)_drawsUnderline;
-(void)_setCuiCatalog:(id)arg1 ;
-(void)_setCuiStyleEffectConfiguration:(id)arg1 ;
-(void)setPreferredMaxLayoutWidth:(double)arg1 ;
-(void)_setDefaultAttributes:(id)arg1 ;
-(void)_setNeedsDisplayForInvalidatedContents;
-(void)_setSynthesizedAttributedText:(id)arg1 ;
-(void)setMinimumFontSize:(double)arg1 ;
-(double)minimumFontSize;
-(void)_setTextColorFollowsTintColor:(BOOL)arg1 ;
-(void)setHighlightedTextColor:(UIColor *)arg1 ;
-(void)_setShadowUIOffset:(UIOffset)arg1 ;
-(void)setShadowBlur:(double)arg1 ;
-(void)setLineSpacing:(long long)arg1 ;
-(void)setAdjustsLetterSpacingToFitWidth:(BOOL)arg1 ;
-(void)setBaselineAdjustment:(long long)arg1 ;
-(void)_setDrawsDebugBaselines:(BOOL)arg1 ;
-(BOOL)_drawsDebugBaselines;
-(id)_layoutDebuggingTitle;
-(long long)baselineAdjustment;
-(double)_lastLineBaseline;
-(double)_firstLineBaseline;
-(void)_setWordRoundingEnabled:(BOOL)arg1 ;
-(void)setMarqueeEnabled:(BOOL)arg1 ;
-(BOOL)marqueeEnabled;
-(void)setDrawsLetterpress:(BOOL)arg1 ;
-(BOOL)drawsLetterpress;
-(void)setDrawsUnderline:(BOOL)arg1 ;
-(BOOL)drawsUnderline;
-(void)_setUsesSimpleTextEffects:(BOOL)arg1 ;
-(BOOL)_usesSimpleTextEffects;
-(void)_setTextAlignmentFollowsWritingDirection:(BOOL)arg1 ;
-(void)_setTextAlignmentMirrored:(BOOL)arg1 ;
-(double)preferredMaxLayoutWidth;
-(double)_multilineContextWidth;
-(void)_setMultilineContextWidth:(double)arg1 ;
-(long long)_measuredNumberOfLines;
-(double)_capOffsetFromBoundsTop;
-(double)_firstLineBaselineOffsetFromBoundsTop;
-(double)_firstLineCapFrameOriginY;
-(void)_setFirstLineCapFrameOriginY:(double)arg1 ;
-(double)_firstLineBaselineFrameOriginY;
-(void)_setFirstLineBaselineFrameOriginY:(double)arg1 ;
-(double)_lastLineBaselineFrameOriginY;
-(void)_setLastLineBaselineFrameOriginY:(double)arg1 ;
-(BOOL)_wantsUnderlineForAccessibilityButtonShapesEnabled;
-(BOOL)_shouldShowAccessibilityButtonShapesUnderline;
-(void)_resetUsesExplicitPreferredMaxLayoutWidth;
-(void)_setColor:(id)arg1 ;
-(void)setAutotrackTextToFit:(BOOL)arg1 ;
-(BOOL)autotrackTextToFit;
-(void)setCentersHorizontally:(BOOL)arg1 ;
-(BOOL)centersHorizontally;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(void)drawContentsInRect:(CGRect)arg1 ;
-(void)setRawSize:(CGSize)arg1 ;
-(CGSize)rawSize;
-(unsigned long long)defaultAccessibilityTraits;
-(BOOL)isAccessibilityElementByDefault;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
@end

