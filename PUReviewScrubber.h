/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class <PUReviewScrubberDataSource>, UICollectionView, UIImageView, PUHorizontalCollectionViewLayout, <PUReviewScrubberDelegate>, _UIBackdropView, UITapGestureRecognizer;

@interface PUReviewScrubber : UIToolbar <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate> {
    BOOL __ignoreScrollViewDidScrollUpdate;
    BOOL __performingInteractiveUpdate;
    <PUReviewScrubberDataSource> *_dataSource;
    <PUReviewScrubberDelegate> *_scrubberDelegate;
    int _selectedIndex;
    unsigned int __numberOfPhotos;
    _UIBackdropView *__backdropView;
    UIImageView *__shadowView;
    UIImageView *__arrowImageView;
    PUHorizontalCollectionViewLayout *__collectionViewLayout;
    UICollectionView *__collectionView;
    UITapGestureRecognizer *__tapGestureRecognizer;
}

@property <PUReviewScrubberDataSource> * dataSource;
@property <PUReviewScrubberDelegate> * scrubberDelegate;
@property int selectedIndex;
@property(readonly) unsigned int _numberOfPhotos;
@property(readonly) _UIBackdropView * _backdropView;
@property(readonly) UIImageView * _shadowView;
@property(readonly) UIImageView * _arrowImageView;
@property(readonly) PUHorizontalCollectionViewLayout * _collectionViewLayout;
@property(readonly) UICollectionView * _collectionView;
@property(readonly) BOOL _ignoreScrollViewDidScrollUpdate;
@property(readonly) BOOL _performingInteractiveUpdate;
@property(readonly) UITapGestureRecognizer * _tapGestureRecognizer;


- (void).cxx_destruct;
- (id)_collectionView;
- (void)setSelectedIndex:(int)arg1;
- (int)selectedIndex;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)_shadowView;
- (BOOL)isMinibar;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)dataSource;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { float x1; float x2; })arg2 targetContentOffset:(inout struct CGPoint { float x1; float x2; }*)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layoutSubviews;
- (void)reloadData;
- (void)setDataSource:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)_performingInteractiveUpdate;
- (BOOL)_ignoreScrollViewDidScrollUpdate;
- (id)_arrowImageView;
- (unsigned int)_numberOfPhotos;
- (void)setScrubberDelegate:(id)arg1;
- (void)updateWithAbsoluteProgress:(float)arg1;
- (void)beginInteractiveUpdate;
- (void)reloadSelectedIndexAnimated:(BOOL)arg1;
- (void)toggleSelectedIndexAnimated:(BOOL)arg1;
- (void)_notifyDelegateOfScrub;
- (void)_handleTapAtIndexPath:(id)arg1;
- (id)_indexPathInCollectionView:(id)arg1 closestToPoint:(struct CGPoint { float x1; float x2; })arg2 excludingIndexPath:(id)arg3;
- (id)_collectionViewLayout;
- (void)_notifyDelegateOfSelection;
- (void)_updateToSelectedIndex:(int)arg1;
- (int)_indexOfCellAtContentOffset:(struct CGPoint { float x1; float x2; })arg1 ofScrollView:(id)arg2;
- (void)finishInteractiveUpdate;
- (void)reloadIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (id)scrubberDelegate;
- (void)toggleIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)_updateContentOffsetForSelectedIndexAnimated:(BOOL)arg1;
- (void)setSelectedIndex:(int)arg1 animated:(BOOL)arg2;
- (struct CGPoint { float x1; float x2; })contentOffsetForIndexOfTickMark:(int)arg1 ofScrollView:(id)arg2;
- (void)_commonPUReviewScrubberInitialization;
- (void)_handleTapOnReviewScrubber:(id)arg1;
- (id)_backdropView;
- (id)_tapGestureRecognizer;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
