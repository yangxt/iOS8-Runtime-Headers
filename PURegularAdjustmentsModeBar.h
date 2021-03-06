/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class UIButton, UIView, NSArray, PUSlidersCollectionView, PUAdjustmentsMode, NSMapTable;

@interface PURegularAdjustmentsModeBar : PUAdjustmentsModeBar <UICollectionViewDataSource> {
    NSMapTable *_supermodeButtonsByMode;
    NSMapTable *_supermodeLabelsByMode;
    UIView *_modeDetailView;
    PUSlidersCollectionView *_modeDetailSlidersCollectionView;
    UIButton *_expansionButton;
    NSArray *_supermodeButtonsConstraints;
    NSArray *_modeDetailViewConstraints;
    NSArray *_modeDetailSlidersCollectionViewConstraints;
    NSArray *_expansionButtonConstraints;
    NSArray *__availableSupermodes;
    NSArray *__visibleSliderModes;
}

@property(readonly) PUAdjustmentsMode * _expandedSupermode;


- (void).cxx_destruct;
- (void)updateConstraints;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)willMoveToWindow:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)newConstraintsForModePickerList:(id)arg1;
- (id)currentSlidersCollectionView;
- (BOOL)wantsToHandleEventAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)configureSliderCell:(id)arg1 forMode:(id)arg2;
- (id)visibleSliderAdjustmentModes;
- (void)_handleModeButton:(id)arg1;
- (id)_layoutConstraintsForCollapsedModeDetailView:(id)arg1 mode:(id)arg2;
- (void)_createNewModeDetailViewAndSubviews;
- (void)_updateViewsForExpandedSupermode:(id)arg1 fromOldSupermode:(id)arg2 animated:(BOOL)arg3;
- (void)setSelectedMode:(id)arg1 animated:(BOOL)arg2;
- (void)setSlidersLongContentLength:(float)arg1;
- (float)_slidersViewLongSideLength;
- (id)_layoutConstraintsForExpandedModeDetailView:(id)arg1 mode:(id)arg2;
- (id)_expandedSupermode;
- (id)_availableSupermodes;
- (void)_updateSupermodeButtons;

@end
