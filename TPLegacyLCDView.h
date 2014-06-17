/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class TPLegacyLCDSubImageView, TPLegacyLCDTextView, UIView;

@interface TPLegacyLCDView : TPLegacyLCDBar  {
    UIView *_contentView;
    TPLegacyLCDTextView *_textView;
    TPLegacyLCDTextView *_secondLineTextView;
    TPLegacyLCDTextView *_labelView;
    TPLegacyLCDSubImageView *_imageView;
    unsigned int _layoutAsLabelled : 1;
    BOOL _hasBackgroundGradient;
    UIView *_backgroundGradientView;
}

@property(retain) UIView * backgroundGradientView;
@property BOOL hasBackgroundGradient;

+ (float)textFontSize;
+ (float)labelFontSize;

- (void)setHasBackgroundGradient:(BOOL)arg1;
- (BOOL)hasBackgroundGradient;
- (void)setBackgroundGradientView:(id)arg1;
- (id)backgroundGradientView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_text2Frame;
- (id)secondLineText;
- (void)setSecondLineText:(id)arg1;
- (void)setLayoutAsLabelled:(BOOL)arg1;
- (void)setSubImage:(id)arg1;
- (void)blinkLabel;
- (void)setContentsAlpha:(float)arg1;
- (void)didFinishAnimatingLCDLabelFadeOut:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)setLabel:(id)arg1 animate:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_imageViewFrame;
- (BOOL)shouldCenterText;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_text1Frame;
- (BOOL)shouldCenterContentView;
- (float)_labelVInset;
- (float)_textVInset;
- (void)_resetContentViewFrame;
- (id)subImage;
- (id)initWithDefaultSizeForOrientation:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })fullSizedContentViewFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textFrame;
- (void)setLabel:(id)arg1;
- (id)label;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_labelFrame;
- (void)setShadowColor:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (void)layoutSubviews;
- (void)dealloc;

@end