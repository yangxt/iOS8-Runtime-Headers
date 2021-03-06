/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIPresentationController<_UISearchControllerPresenting>, _UISearchPresentationAssistant, UIView;

@interface _UISearchFormSheetPresentationController : UIPresentationController <_UISearchControllerPresenting> {
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


- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })finalFrameForContainerView;
- (id)adaptivePresentationController;
- (BOOL)shouldAccountForStatusBar;
- (float)resultsControllerContentOffset;
- (BOOL)_shouldSubscribeToKeyboardNotifications;
- (void)setContentVisible:(BOOL)arg1;
- (float)statusBarAdjustment;
- (BOOL)searchBarToBecomeTopAttached;
- (id)searchBarContainerView;
- (void)_presentedView:(id)arg1 enableFormSheetAccoutrements:(BOOL)arg2;
- (id)_presentedViewControllerForSizeClassPair:(struct { int x1; int x2; })arg1;
- (id)_presentationControllerForSizeClassPair:(struct { int x1; int x2; })arg1;
- (void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2;
- (int)adaptivePresentationStyle;
- (void)_transitionToWillBegin;
- (void)_transitionFromWillBegin;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionWillBegin;
- (void)_transitionFromDidEnd;
- (void)_transitionToDidEnd;
- (void)dismissalTransitionDidEnd:(BOOL)arg1;
- (void)presentationTransitionDidEnd:(BOOL)arg1;
- (id)presentedView;
- (BOOL)_shouldRespectDefinesPresentationContext;
- (BOOL)shouldRemovePresentersView;
- (id)initWithPresentingViewController:(id)arg1 presentedViewController:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameOfPresentedViewInContainerView;
- (void)dealloc;

@end
