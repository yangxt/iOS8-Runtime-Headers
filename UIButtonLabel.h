/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIButton;

@interface UIButtonLabel : UILabel  {
    BOOL _reverseShadow;
    UIButton *_button;
}

+ (id)_defaultAttributes;

- (void)setReverseShadow:(BOOL)arg1;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 button:(id)arg2;
- (id)_defaultAttributes;
- (void)_setMinimumFontSize:(float)arg1;
- (void)setMinimumScaleFactor:(float)arg1;
- (void)setAdjustsFontSizeToFitWidth:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (struct CGSize { float x1; float x2; })shadowOffset;
- (void)_setWantsAutolayout;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)setShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setLineBreakMode:(int)arg1;
- (void)setTextAlignment:(int)arg1;
- (void)setFont:(id)arg1;

@end