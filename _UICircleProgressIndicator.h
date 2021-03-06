/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, UIImage, UIColor, CADisplayLink;

@interface _UICircleProgressIndicator : UIView  {
    float _animatedValue;
    double _animationEndTime;
    double _animationStartTime;
    float _animationStartValue;
    UIImage *_borderImage;
    UIImage *_centerImage;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _centerImageInsets;
    CADisplayLink *_displayLink;
    UIImage *_fillImage;
    BOOL _highlighted;
    UIImageView *_indeterminateView;
    BOOL _isAnimating;
    float _progress;
    UIColor *_unhighlightedBackgroundColor;
}

@property(retain) UIImage * image;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } imageInsets;
@property(getter=isIndeterminate) BOOL indeterminate;
@property float progress;
@property(getter=isHighlighted) BOOL highlighted;
@property(retain) UIImage * borderImage;
@property(retain) UIImage * fillImage;

+ (id)_indeterminateImage;
+ (id)_borderImage;
+ (id)_fillImage;

- (id)fillImage;
- (id)borderImage;
- (void)_setHidesBorderView:(BOOL)arg1;
- (void)setIndeterminate:(BOOL)arg1;
- (BOOL)isIndeterminate;
- (void)setFillImage:(id)arg1;
- (void)setBorderImage:(id)arg1;
- (void)_animateValueOnDisplayLink:(id)arg1;
- (void)_startIndeterminateAnimation;
- (float)progress;
- (void)setProgress:(float)arg1 animated:(BOOL)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })imageInsets;
- (void)setImageInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (void)setProgress:(float)arg1;
- (void)tintColorDidChange;
- (id)image;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)setImage:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
