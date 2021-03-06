/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class GKTextView, NSArray, UIScrollView, UIView, GKContiguousContainerView;

@interface GKBaseComposeController : GKLoadableContentViewController <UITextViewDelegate> {
    UIScrollView *_backgroundView;
    NSArray *_composeHeaderFields;
    GKTextView *_messageField;
    UIView *_intendedFirstResponder;
    GKContiguousContainerView *_headerFieldContainer;
    UIView *_touchForwardView;
    float _scrollContentInsetAdjustY;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _lastKnownKeyboardFrame;
}

@property(retain) UIScrollView * backgroundView;
@property(retain) NSArray * composeHeaderFields;
@property(retain) GKTextView * messageField;
@property UIView * intendedFirstResponder;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } lastKnownKeyboardFrame;
@property(retain) GKContiguousContainerView * headerFieldContainer;
@property(retain) UIView * touchForwardView;
@property float scrollContentInsetAdjustY;


- (void)setScrollContentInsetAdjustY:(float)arg1;
- (float)scrollContentInsetAdjustY;
- (void)setTouchForwardView:(id)arg1;
- (id)touchForwardView;
- (void)setHeaderFieldContainer:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })lastKnownKeyboardFrame;
- (void)setMessageField:(id)arg1;
- (id)composeHeaderFields;
- (void)setMessageFieldText:(id)arg1;
- (BOOL)_gkWantsCustomRightBarButtonItemInViewService;
- (void)setComposeHeaderFields:(id)arg1;
- (id)intendedFirstResponder;
- (void)_scrollSelectedTextToVisible;
- (void)messageFieldTextDidChange;
- (id)messageField;
- (id)viewMetricsForContainerView:(id)arg1;
- (void)_adjustContentInsetForShowingKeyboard:(BOOL)arg1;
- (void)setLastKnownKeyboardFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)headerFieldContainer;
- (void)keyboardWillHideShow:(id)arg1;
- (void)setIntendedFirstResponder:(id)arg1;
- (void)didTouchBackground;
- (void)didEnterLoadedState;
- (void)didEnterLoadingState;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)updateViewConstraints;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (void)dealloc;
- (id)init;

@end
