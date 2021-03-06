/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class GKHairlineView, UICollectionViewCell;

@interface GKShowcaseCellView : UICollectionReusableView  {
    UICollectionViewCell *_cell;
    SEL _touchedShowcaseCellAction;
    GKHairlineView *_underlineView;
}

@property(retain) UICollectionViewCell * cell;
@property SEL touchedShowcaseCellAction;
@property(retain) GKHairlineView * underlineView;

+ (BOOL)requiresConstraintBasedLayout;

- (void)setTouchedShowcaseCellAction:(SEL)arg1;
- (SEL)touchedShowcaseCellAction;
- (void)setUnderlineView:(id)arg1;
- (id)underlineView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })alignmentRectForText;
- (void)setCell:(id)arg1;
- (id)cell;
- (void)prepareForReuse;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
