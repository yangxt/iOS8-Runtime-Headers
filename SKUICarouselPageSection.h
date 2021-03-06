/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, SKUIViewElementLayoutContext, NSObject<OS_dispatch_source>, SKUIMissingItemLoader, SKUICarouselPageComponent, UICollectionView;

@interface SKUICarouselPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIMissingItemDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {
    UICollectionView *_carouselCollectionView;
    int _cellCount;
    SKUIViewElementLayoutContext *_cellLayoutContext;
    NSObject<OS_dispatch_source> *_cycleTimer;
    struct CGSize { 
        float width; 
        float height; 
    } _itemSize;
    float _itemSpacing;
    SKUIMissingItemLoader *_missingItemLoader;
    NSArray *_modelObjects;
    BOOL _needsReload;
}

@property(retain) SKUICarouselPageComponent * pageComponent;


- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3;
- (void)_fireCycleTimer;
- (float)_legacyItemSpacing;
- (struct CGSize { float x1; float x2; })_legacyItemSize;
- (id)_missingItemLoader;
- (BOOL)_isItemEnabledAtIndexPath:(id)arg1;
- (void)_addImpressionForIndex:(int)arg1 toSession:(id)arg2;
- (id)_dequeueCellForViewElement:(id)arg1 collectionView:(id)arg2 indexPath:(id)arg3;
- (float)_actualContentWidth;
- (void)_reloadLegacySizing;
- (void)_loadMissingItemsFromIndex:(int)arg1 withReason:(int)arg2;
- (void)_cancelCycleTimer;
- (void)_startCycleTimerIfNecessary;
- (id)_carouselCollectionView;
- (void)collectionView:(id)arg1 carouselLayout:(id)arg2 willApplyLayoutAttributes:(id)arg3;
- (int)defaultPinStyle;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (Class)_cellClassForLockup:(id)arg1;
- (id)_dequeueCellForLockup:(id)arg1 collectionView:(id)arg2 indexPath:(id)arg3;
- (Class)_cellClassForViewElement:(id)arg1;
- (id)backgroundColorForIndexPath:(id)arg1;
- (void)_reloadViewElementProperties;
- (void)prefetchResourcesWithReason:(int)arg1;
- (void)willTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (int)numberOfCells;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { float x1; float x2; })cellSizeForIndexPath:(id)arg1;
- (void)willAppearInContext:(id)arg1;
- (void)setPageComponent:(id)arg1;
- (id)initWithPageComponent:(id)arg1;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)dealloc;

@end
