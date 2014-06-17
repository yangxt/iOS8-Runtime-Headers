/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIBezierPath, CAShapeLayer;

@interface _UITextFieldPasscodeCutoutBackground : UITextFieldBackgroundView  {
    BOOL _customStrokeColor;
    BOOL _customFillColor;
    CAShapeLayer *_lighteningOutline;
    float _outlineAlpha;
    float _cornerRadius;
}

@property float outlineAlpha;
@property float cornerRadius;
@property(readonly) UIBezierPath * customPath;

+ (id)_fillColor:(BOOL)arg1;
+ (id)_strokeColor:(BOOL)arg1;
+ (Class)layerClass;

- (float)outlineAlpha;
- (void)setOutlineAlpha:(float)arg1;
- (id)customPath;
- (void)_updateLightingOutlinePath;
- (float)_pixelAlignment;
- (float)_pathInset;
- (void)setLineWidth:(float)arg1 updatePath:(BOOL)arg2;
- (void)_updatePath;
- (id)_fillColor:(BOOL)arg1;
- (id)strokeColor;
- (id)_strokeColor:(BOOL)arg1;
- (id)fillColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 active:(BOOL)arg2;
- (void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setActive:(BOOL)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)setFillColor:(id)arg1;
- (void)setCornerRadius:(float)arg1;
- (float)cornerRadius;
- (id)_layer;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)setLineWidth:(float)arg1;
- (float)lineWidth;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end