/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class NSString;

@interface UIFont : NSObject <NSCopying> {
}

@property(readonly) NSString * rc_textStyle;
@property(retain,readonly) NSString * familyName;
@property(retain,readonly) NSString * fontName;
@property(readonly) float pointSize;
@property(readonly) float ascender;
@property(readonly) float descender;
@property(readonly) float capHeight;
@property(readonly) float xHeight;
@property(readonly) float lineHeight;
@property(readonly) float leading;

+ (id)fontNamesForFamilyName:(id)arg1;
+ (id)familyNames;
+ (id)preferredFontForUsage:(id)arg1 contentSizeCategoryName:(id)arg2;
+ (id)preferredFontForUsage:(id)arg1;
+ (float)buttonFontSize;
+ (id)italicSystemFontOfSize:(float)arg1;
+ (id)fontWithMarkupDescription:(id)arg1;
+ (void)_evictAllItemsFromFontAndFontDescriptorCaches;
+ (id)_sharedZeroPointFont;
+ (id)ib_preferredFontForTextStyle:(id)arg1;
+ (id)_systemFontsOfSize:(float)arg1 traits:(int)arg2;
+ (id)systemFontOfSize:(float)arg1 traits:(int)arg2;
+ (id)_sharedFontCache;
+ (id)userFontOfSize:(float)arg1;
+ (id)_thinSystemFontOfSize:(float)arg1;
+ (float)smallSystemFontSize;
+ (id)_lightSystemFontOfSize:(float)arg1;
+ (id)fontWithName:(id)arg1 size:(float)arg2 traits:(int)arg3;
+ (float)labelFontSize;
+ (id)_opticalBoldSystemFontOfSize:(float)arg1;
+ (id)_opticalSystemFontOfSize:(float)arg1;
+ (id)preferredFontForTextStyle:(id)arg1;
+ (id)classFallbacksForKeyedArchiver;
+ (id)fontWithName:(id)arg1 size:(float)arg2;
+ (id)fontWithFamilyName:(id)arg1 traits:(int)arg2 size:(float)arg3;
+ (id)defaultFontForTextStyle:(id)arg1;
+ (id)fontWithDescriptor:(id)arg1 size:(float)arg2;
+ (float)systemFontSize;
+ (id)boldSystemFontOfSize:(float)arg1;
+ (void)initialize;
+ (id)_ultraLightSystemFontOfSize:(float)arg1;
+ (id)systemFontOfSize:(float)arg1;
+ (id)_ui_bulletFontForFont:(id)arg1;
+ (id)italicTimeFontOfSize:(float)arg1;
+ (id)boldTimeFontOfSize:(float)arg1;
+ (id)timeFontWithName:(id)arg1 size:(float)arg2;
+ (id)_timeFontFromFont:(id)arg1;
+ (id)timeFontOfSize:(float)arg1;
+ (void)ab_setIgnoreUserFontSize:(BOOL)arg1;
+ (BOOL)_shouldUseDefaultFont;
+ (BOOL)ab_preferredContentSizeCategoryIsAccessibilityCategory;
+ (id)ab_preferredContentSizeCategoryName;
+ (id)ab_preferredRowFontForTextStyle:(id)arg1;
+ (id)ab_preferredFontForTextStyle:(id)arg1;
+ (id)aa_fontForLargeButton;
+ (id)aa_fontForPrimaryInformationLabel;
+ (id)aa_fontForPageTitle;
+ (id)cam_cameraModeDialKerningForContentSize:(id)arg1;
+ (id)cam_cameraKerningForContentSize:(id)arg1;
+ (id)cam_cameraTimerFontForContentSize:(id)arg1;
+ (id)cam_cameraFontForContentSize:(id)arg1;
+ (float)_interpolatedAdditionalFontSizeForMainScreen;
+ (id)cam_cameraPadModeDialFontForContentSize:(id)arg1;
+ (id)cam_cameraModeDialFontForContentSize:(id)arg1;
+ (id)cam_cameraModeDialApproximateFontForContentSize:(id)arg1;
+ (id)cam_cameraFontOfSize:(float)arg1;
+ (id)pu_defaultFontForTextStyle:(id)arg1 withSymbolicTraits:(unsigned int)arg2;
+ (id)siriui_scaledServerUtteranceFont;
+ (id)siriui_scaledUserUtteranceFont;
+ (id)siriui_subtitleFont;
+ (id)siriui_largeHeaderFontWithSize:(float)arg1;
+ (id)siriui_multiLineHeaderFont;
+ (id)siriui_headerFont;
+ (id)siriui_mediumWeightBodySubtextSizeFont;
+ (id)siriui_thinWeightBodySubtextSizeFont;
+ (id)siriui_lightWeightBodySubtextSizeFont;
+ (id)siriui_mediumWeightBodySizeFont;
+ (id)siriui_thinWeightBodySizeFont;
+ (id)siriui_lightWeightBodySizeFont;
+ (id)siriui_mediumWeightFontWithSize:(float)arg1;
+ (id)siriui_thinWeightFontWithSize:(float)arg1;
+ (id)siriui_lightWeightFontWithSize:(float)arg1;
+ (id)__ck_shortEmphasizedPreferredFontForTextStyle:(id)arg1;
+ (id)__ck_emphasizedPreferredFontForTextStyle:(id)arg1;
+ (id)__ck_shortDefaultFontForTextStyle:(id)arg1;
+ (id)__ck_shortPreferredFontForTextStyle:(id)arg1;
+ (id)rcs_ultraLightMonospacedFontOfSize:(float)arg1;

- (unsigned int)mostCompatibleStringEncoding;
- (unsigned int)_defaultGlyphForChar:(unsigned short)arg1;
- (id)_familyName;
- (float)_ascenderDeltaForBehavior:(int)arg1;
- (BOOL)_isHiraginoFont;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_textMatrixTransformForContext:(struct CGContext { }*)arg1;
- (BOOL)isFixedPitch;
- (id)_fontScaledByScaleFactor:(float)arg1;
- (id)initWithName:(id)arg1 size:(float)arg2;
- (id)_alternateSystemFonts;
- (id)familyNameForCSSFontFamilyValue;
- (BOOL)isIBTextStyleFont;
- (id)initWithFamilyName:(id)arg1 traits:(int)arg2 size:(float)arg3;
- (id)initWithMarkupDescription:(id)arg1;
- (bool)_getLatin1GlyphMapping:(const unsigned short**)arg1 andAdvanceMapping:(const struct CGSize {}**)arg2;
- (float)_baseLineHeightForFont:(BOOL)arg1;
- (id)lastResortFont;
- (id)bestMatchingFontForCharacters:(const unsigned short*)arg1 length:(unsigned int)arg2 attributes:(id)arg3 actualCoveredLength:(unsigned int*)arg4;
- (id)coveredCharacterSet;
- (unsigned short)glyphWithName:(id)arg1;
- (id)screenFontWithRenderingMode:(unsigned int)arg1;
- (void)getBoundingRects:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 forCGGlyphs:(const unsigned short*)arg2 count:(unsigned int)arg3;
- (unsigned int)hyphenGlyphForLocale:(id)arg1;
- (id)_kernOverride;
- (BOOL)_isDefaultFace;
- (float)_totalAdvancementForNativeGlyphs:(const unsigned short*)arg1 count:(long)arg2;
- (unsigned int)getCaretPositions:(float*)arg1 forGlyph:(unsigned int)arg2 maximumLength:(unsigned int)arg3;
- (void)getVerticalOriginTranslations:(struct CGSize { float x1; float x2; }*)arg1 forCGGlyphs:(const unsigned short*)arg2 count:(unsigned int)arg3;
- (void)getAdvancements:(struct CGSize { float x1; float x2; }*)arg1 forCGGlyphs:(const unsigned short*)arg2 count:(unsigned int)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingRectForFont;
- (float)underlineThickness;
- (struct CGFont { }*)_backingCGSFont;
- (struct CGSize { float x1; float x2; })advancementForGlyph:(unsigned short)arg1;
- (id)verticalFont;
- (BOOL)isSystemFont;
- (float)_leading;
- (BOOL)isVertical;
- (float)xHeight;
- (struct __CTFont { }*)CTFont;
- (float)_scaledValueForValue:(float)arg1;
- (float)leading;
- (id)fontDescriptor;
- (id)familyName;
- (int)traits;
- (float)_bodyLeading;
- (float)_defaultLineHeightForUILayout;
- (id)fontName;
- (id)markupDescription;
- (unsigned int)numberOfGlyphs;
- (void)setInContext:(struct CGContext { }*)arg1;
- (float)descender;
- (float)capHeight;
- (id)fontWithSize:(float)arg1;
- (float)pointSize;
- (float)lineHeight;
- (float)ascender;
- (unsigned int)renderingMode;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)ab_italicFont;
- (id)ab_boldFont;
- (struct CGPoint { float x1; float x2; })mf_originPointFromMidlinePoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })mf_caplinePointFromBaselinePoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })mf_baselinePointFromCaplinePoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })mf_caplinePointFromOriginPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })mf_originPointFromCaplinePoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })mf_originPointFromBaselinePoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })mf_baselinePointFromOriginPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)rc_textStyle;

@end
