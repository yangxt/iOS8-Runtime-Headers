/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class UIImageView, UIView, UIImage, CAShapeLayer;

@interface ADCountdownButton : UIControl  {
    BOOL _dimmed;
    UIImage *_iconImage;
    UIImage *_dimmedIconImage;
    UIImageView *_backgroundView;
    UIImageView *_iconView;
    UIView *_outlineView;
    CAShapeLayer *_outlineProgressLayer;
}

@property BOOL dimmed;
@property(retain) UIImage * iconImage;
@property(retain) UIImage * dimmedIconImage;
@property(retain) UIImageView * backgroundView;
@property(retain) UIImageView * iconView;
@property(retain) UIView * outlineView;
@property(retain) CAShapeLayer * outlineProgressLayer;

+ (id)_inactiveCloseBoxImage;
+ (id)_closeBoxImage;

- (void)setDimmed:(BOOL)arg1;
- (BOOL)dimmed;
- (double)countdownProgress;
- (id)dimmedIconImage;
- (void)setDimmed:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setCountdownProgress:(double)arg1;
- (id)outlineProgressLayer;
- (void)setOutlineProgressLayer:(id)arg1;
- (id)outlineView;
- (void)setOutlineView:(id)arg1;
- (void)setDimmedIconImage:(id)arg1;
- (void)startEnablingButtonWithCountdownDuration:(double)arg1 completionHandler:(id)arg2;
- (void)setIconView:(id)arg1;
- (id)iconView;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)iconImage;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)dealloc;
- (id)init;

@end