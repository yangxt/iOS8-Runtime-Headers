/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKeyboardCandidatePageControl;

@interface UIKeyboardCandidateView_iPad : UIKeyboardCandidateView <UICollectionViewDelegate, UIKeyboardCandidateBarDelegate> {
    UIKeyboardCandidatePageControl *_pageControl;
}

+ (float)defaultExtendedControlHeight;

- (float)rightButtonYOffset;
- (float)_additionalClipHeight;
- (unsigned int)_numberOfColumns:(BOOL)arg1;
- (void)updatePageControlStatus;
- (void)candidateBarDidScroll:(id)arg1;
- (void)didEndSplitTransition;
- (void)setCandidateViewExtended:(BOOL)arg1;
- (int)_clipCornersOfView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end