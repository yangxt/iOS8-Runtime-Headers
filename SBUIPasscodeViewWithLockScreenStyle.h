/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@class _UIBackdropView, UIView<SBUIPasscodeLockView>;

@interface SBUIPasscodeViewWithLockScreenStyle : UIView  {
    UIView<SBUIPasscodeLockView> *_passcodeView;
    _UIBackdropView *_blurView;
    float _blurRadius;
    BOOL _blurEnabled;
}

@property(readonly) UIView<SBUIPasscodeLockView> * passcodeView;


- (id)passcodeView;
- (void)setBlurEnabled:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 includeBlur:(BOOL)arg2 passcodeViewGenerator:(id)arg3;
- (void)layoutSubviews;
- (void)dealloc;

@end
