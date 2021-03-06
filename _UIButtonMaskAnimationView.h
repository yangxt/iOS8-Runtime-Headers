/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, UIButton, UIView;

@interface _UIButtonMaskAnimationView : UIView  {
    unsigned int _hardEdge;
    UIView *_hardEdgeLine;
    UIButton *_delegate;
}

@property UIButton * delegate;
@property float borderWidth;
@property UIColor * borderColor;
@property unsigned int hardEdge;


- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForLine;
- (unsigned int)hardEdge;
- (void)setHardEdge:(unsigned int)arg1;
- (id)borderColor;
- (float)borderWidth;
- (void)setBorderColor:(id)arg1;
- (void)setBorderWidth:(float)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)delegate;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)init;

@end
