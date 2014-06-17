/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class UIView, UILabel;

@interface MFComposeFromView : MFComposeHeaderView  {
    UILabel *_accountLabel;
    UIView *_background;
    BOOL _accountHasUnsafeDomain;
}

@property BOOL accountHasUnsafeDomain;


- (void)tintColorDidChange;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)accountHasUnsafeDomain;
- (void)_setBackgroundVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (id)_accountLabel;
- (void)setAccountHasUnsafeDomain:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accountLabelRect;
- (void)setLabelHighlighted:(BOOL)arg1;
- (void)setAccountLabel:(id)arg1;
- (void)dealloc;

@end