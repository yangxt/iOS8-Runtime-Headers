/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class _UIViewControllerOneToOneTransitionContext, UIView, UIPercentDrivenInteractiveTransition, UIViewController, NSMutableDictionary;

@interface _UIAnimationCoordinator : NSObject <UIViewControllerAnimatedTransitioning> {
    NSMutableDictionary *_stash;
    _UIViewControllerOneToOneTransitionContext *_transitionContext;
    UIPercentDrivenInteractiveTransition *_interactiveTransition;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _preperation;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _animator;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completion;

    UIView *_containerView;
    UIViewController *_viewController;
    double _duration;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _startFrame;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _endFrame;
}

@property(retain,readonly) _UIViewControllerOneToOneTransitionContext * transitionContext;
@property double duration;
@property(copy) id preperation;
@property(copy) id animator;
@property(copy) id completion;
@property(retain) UIView * containerView;
@property(retain) UIViewController * viewController;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } startFrame;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } endFrame;
@property(retain,readonly) NSMutableDictionary * stash;


- (id)animator;
- (id)preperation;
- (void)_updateTransitionContext;
- (void)animate;
- (void)setPreperation:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })startFrame;
- (void)finishInteractiveAnimation;
- (void)cancelInteractiveAnimation;
- (void)updateInteractiveProgress:(float)arg1;
- (void)animateInteractively;
- (id)stash;
- (void)setContainerView:(id)arg1;
- (void)setAnimator:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (void)setEndFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setStartFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCompletion:(id)arg1;
- (id)completion;
- (id)transitionContext;
- (void)animationEnded:(BOOL)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)containerView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })endFrame;
- (double)duration;
- (void)setDuration:(double)arg1;
- (void)dealloc;

@end
