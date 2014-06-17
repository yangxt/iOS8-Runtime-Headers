/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class GKTextStyle, NSString, GKLabel;

@interface GKValueWithCaptionBubbleControl : GKBubbleWithStackedContent  {
    NSString *_valueText;
    BOOL _smallText;
    NSString *_captionText;
    GKLabel *_valueLabel;
    GKTextStyle *_overrideValueStyle;
    GKTextStyle *_overrideCaptionStyle;
    float _referenceZPosition;
    GKTextStyle *_smallValueStyle;
    GKTextStyle *_normalValueStyle;
    id _blockToken;
    GKLabel *_captionLabel;
}

@property BOOL smallText;
@property(retain) NSString * captionText;
@property(retain) NSString * valueText;
@property(retain) GKLabel * valueLabel;
@property(retain) GKTextStyle * overrideValueStyle;
@property(retain) GKTextStyle * overrideCaptionStyle;
@property float referenceZPosition;
@property(retain) GKTextStyle * smallValueStyle;
@property(retain) GKTextStyle * normalValueStyle;
@property(retain) id blockToken;
@property(retain) GKLabel * captionLabel;


- (void)setCaptionLabel:(id)arg1;
- (id)captionLabel;
- (id)blockToken;
- (id)normalValueStyle;
- (id)smallValueStyle;
- (BOOL)smallText;
- (void)blinkOutThenInWithValueText:(id)arg1 captionText:(id)arg2 afterDelay:(double)arg3;
- (void)setSmallText:(BOOL)arg1;
- (id)valueTextStyle;
- (void)_updateValueTextLabel;
- (id)captionTextStyle;
- (id)_scaledTextStyle:(id)arg1;
- (void)_updateCaptionTextLabel;
- (void)updateTextFieldsFor3DScaling;
- (void)setReferenceZPosition:(float)arg1;
- (float)referenceZPosition;
- (id)overrideValueStyle;
- (id)overrideCaptionStyle;
- (void)setAttributedValueText:(id)arg1;
- (id)attributedValueText;
- (void)setAttributedCaptionText:(id)arg1;
- (id)attributedCaptionText;
- (void)setSmallValueStyle:(id)arg1;
- (void)setNormalValueStyle:(id)arg1;
- (void)setBlockToken:(id)arg1;
- (void)updateLabelRasterizationScaleForLabels;
- (void)setValueLabel:(id)arg1;
- (void)setOverrideValueStyle:(id)arg1;
- (void)setOverrideCaptionStyle:(id)arg1;
- (void)setCaptionText:(id)arg1;
- (id)captionText;
- (void)didMoveToSuperview;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAlpha:(float)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setValueText:(id)arg1;
- (id)valueText;
- (id)description;
- (void)dealloc;
- (id)valueLabel;

@end