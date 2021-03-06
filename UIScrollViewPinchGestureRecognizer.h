/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIScrollView;

@interface UIScrollViewPinchGestureRecognizer : UIPinchGestureRecognizer  {
    UIScrollView *_scrollView;
    SEL _scrollViewAction;
    unsigned int _hasParentScrollView : 1;
}

@property UIScrollView * scrollView;


- (id)scrollView;
- (void)removeTarget:(id)arg1 action:(SEL)arg2;
- (void)setScrollView:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (float)_hysteresis;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)setDelegate:(id)arg1;

@end
