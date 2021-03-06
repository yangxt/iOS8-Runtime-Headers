/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class UILabel, CAMAnimationDelegate, UIView;

@interface CAMTimerIndicatorView : UIView  {
    BOOL __performingStyleAnimation;
    int _style;
    UIView *__dimmingView;
    UILabel *__countdownLabel;
    int __startingTicks;
    int __remainingTicks;
    int __labelOrientation;
    CAMAnimationDelegate *__animationDelegate;
    int __deferredLabelOrientation;
}

@property int style;
@property(readonly) UIView * _dimmingView;
@property(readonly) UILabel * _countdownLabel;
@property(readonly) int _startingTicks;
@property(readonly) int _remainingTicks;
@property(setter=_setLabelOrientation:) int _labelOrientation;
@property(readonly) CAMAnimationDelegate * _animationDelegate;
@property(getter=_isPerformingStyleAnimation,setter=_setPerformingStyleAnimation:) BOOL _performingStyleAnimation;
@property(setter=_setDeferredOrientation:) int _deferredLabelOrientation;


- (id)_animationDelegate;
- (int)_labelOrientation;
- (int)_remainingTicks;
- (int)_startingTicks;
- (id)_countdownLabel;
- (void)_setLabelOrientation:(int)arg1;
- (id)_finalDimmingAnimation;
- (id)_dimmingAnimationForTick:(int)arg1;
- (id)_decrementAnimationForTick:(int)arg1;
- (void)_addDimmingAnimationForTick:(int)arg1;
- (void)_addDecrementAnimationForTick:(int)arg1;
- (void)_setDeferredOrientation:(int)arg1;
- (void)_handleOrientationChange:(int)arg1;
- (int)_deferredLabelOrientation;
- (void)_transitionDimmingViewFromStyle:(int)arg1;
- (void)_setPerformingStyleAnimation:(BOOL)arg1;
- (void)_updateFromChangeToStyle:(int)arg1 animated:(BOOL)arg2;
- (void)_layoutCountdownLabelForLargeStyle;
- (void)_layoutCountdownLabelForSmallStyle;
- (BOOL)_isPerformingStyleAnimation;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_landscapeSwapBoundsCoordinates:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_layoutCountdownLabelForStyle:(int)arg1;
- (void)_commonCAMTimerIndicatorViewInitialization;
- (void)_updateCountdownLabelWithTicksRemaining;
- (id)_fontForStyle:(int)arg1;
- (void)startCountdownWithAnimationDelegate:(id)arg1;
- (void)resetWithNumberOfTicks:(int)arg1;
- (void)stopCountdown;
- (void)cam_rotateWithDeviceOrientation:(int)arg1 animated:(BOOL)arg2;
- (void).cxx_destruct;
- (id)_dimmingView;
- (id)font;
- (void)setStyle:(int)arg1 animated:(BOOL)arg2;
- (void)setStyle:(int)arg1;
- (int)style;
- (void)setFont:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (void)decrement;

@end
