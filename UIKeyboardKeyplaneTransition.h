/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIView, UIKBTree, <UIKeyboardKeyplaneTransitionDelegate>, CADisplayLink;

@interface UIKeyboardKeyplaneTransition : NSObject  {
    float _currentProgress;
    float _liftOffProgress;
    float _finishProgress;
    float _finishDuration;
    double _finalTransitionStartTime;
    CADisplayLink *_displayLink;
    UIKBTree *_start;
    UIKBTree *_end;
    UIView *_startView;
    UIView *_endView;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionBlock;

    <UIKeyboardKeyplaneTransitionDelegate> *_transitionDelegate;
    BOOL _initiallyAtEnd;
}

@property(copy) id completionBlock;
@property <UIKeyboardKeyplaneTransitionDelegate> * transitionDelegate;
@property BOOL initiallyAtEnd;
@property(readonly) float startHeight;
@property(readonly) float endHeight;


- (void)setInitiallyAtEnd:(BOOL)arg1;
- (BOOL)initiallyAtEnd;
- (void)setTransitionDelegate:(id)arg1;
- (BOOL)canDisplayTransitionFromKeyplane:(id)arg1 toKeyplane:(id)arg2;
- (void)finishWithProgress:(float)arg1 completionBlock:(id)arg2;
- (void)rebuildFromStartKeyplane:(id)arg1 startView:(id)arg2 toEndKeyplane:(id)arg3 endView:(id)arg4;
- (void)transitionToFinalState:(id)arg1;
- (void)updateWithProgress:(float)arg1;
- (void)finalizeTransition;
- (void)setCompletionBlock:(id)arg1;
- (id)completionBlock;
- (float)endHeight;
- (float)startHeight;
- (id)transitionDelegate;
- (void)removeAllAnimations;
- (void)dealloc;

@end
