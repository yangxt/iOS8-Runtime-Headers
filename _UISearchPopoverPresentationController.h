/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIPresentationController<_UISearchControllerPresenting>, _UISearchPresentationAssistant, UIView;

@interface _UISearchPopoverPresentationController : UIPopoverPresentationController <_UISearchControllerPresenting> {
    _UISearchPresentationAssistant *_assistant;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } finalFrameForContainerView;
}

@property(retain,readonly) UIView * searchBarContainerView;
@property(readonly) BOOL shouldAccountForStatusBar;
@property(readonly) float statusBarAdjustment;
@property(readonly) BOOL searchBarToBecomeTopAttached;
@property(readonly) float resultsControllerContentOffset;
@property(readonly) UIPresentationController<_UISearchControllerPresenting> * adaptivePresentationController;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } finalFrameForContainerView;


- (id)_popoverHostingWindow;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })finalFrameForContainerView;
- (id)adaptivePresentationController;
- (BOOL)shouldAccountForStatusBar;
- (float)resultsControllerContentOffset;
- (void)setContentVisible:(BOOL)arg1;
- (float)statusBarAdjustment;
- (BOOL)searchBarToBecomeTopAttached;
- (id)searchBarContainerView;
- (id)_presentedViewControllerForSizeClassPair:(struct { int x1; int x2; })arg1;
- (id)_presentationControllerForSizeClassPair:(struct { int x1; int x2; })arg1;
- (int)adaptivePresentationStyle;
- (void)_transitionToWillBegin;
- (void)_transitionFromWillBegin;
- (void)presentationTransitionWillBegin;
- (void)_transitionFromDidEnd;
- (void)_transitionToDidEnd;
- (id)initWithPresentingViewController:(id)arg1 presentedViewController:(id)arg2;
- (void)dealloc;

@end
