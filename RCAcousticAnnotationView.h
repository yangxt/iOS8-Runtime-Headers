/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class RCLayoutMetrics, RCUIConfiguration;

@interface RCAcousticAnnotationView : UIView  {
    struct CGGradient { } *_decibelMarkerBackgroundGradient;
    RCUIConfiguration *_UIConfiguration;
    RCLayoutMetrics *_layoutMetrics;
    float _gradientAlpha;
}

@property(copy) RCUIConfiguration * UIConfiguration;
@property(retain) RCLayoutMetrics * layoutMetrics;
@property float gradientAlpha;

+ (float)requiredWidth;

- (float)gradientAlpha;
- (id)_zeroMarkerAttributes;
- (id)_decibelMarkersAttributes;
- (void)_reloadGradient;
- (void)setGradientAlpha:(float)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })annotationBoundaryRect;
- (id)layoutMetrics;
- (id)UIConfiguration;
- (void)setLayoutMetrics:(id)arg1;
- (void)setUIConfiguration:(id)arg1;
- (void).cxx_destruct;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
