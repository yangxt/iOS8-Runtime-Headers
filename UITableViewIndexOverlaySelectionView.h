/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UICollectionView, UITableView, UITableViewIndexOverlaySelectionViewCollectionViewFlowLayout;

@interface UITableViewIndexOverlaySelectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegate> {
    UICollectionView *_collectionView;
    UITableViewIndexOverlaySelectionViewCollectionViewFlowLayout *_flowLayout;
    UITableView *_table;
}


- (void)_setIndexColor:(id)arg1;
- (void)_doneTapped;
- (void)_cellTapped:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (BOOL)canBecomeFirstResponder;
- (void)_invalidateTable;
- (id)initWithTable:(id)arg1;
- (void)layoutSubviews;

@end