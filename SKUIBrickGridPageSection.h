/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIGridComponent, UIImage, SKUIMissingItemLoader, NSMapTable;

@interface SKUIBrickGridPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIMissingItemDelegate> {
    NSMapTable *_artworkRequests;
    float _baseHeight;
    float _columnWidth;
    NSMapTable *_editorialLayouts;
    SKUIMissingItemLoader *_missingItemLoader;
    int _numberOfColumns;
    float _paddingHorizontal;
    float _paddingTop;
    UIImage *_placeholderImage;
}

@property(retain) SKUIGridComponent * pageComponent;


- (void)_enumerateVisibleBricksUsingBlock:(id)arg1;
- (void)_loadArtworkForBrick:(id)arg1 artworkLoader:(id)arg2 reason:(int)arg3;
- (id)_editorialLayoutForBrick:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_contentInsetsForColumnIndex:(int)arg1 rowWidth:(float)arg2;
- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3;
- (id)_missingItemLoader;
- (void)_loadMissingItemsFromIndex:(int)arg1 withReason:(int)arg2;
- (id)clickEventWithLink:(id)arg1 elementName:(id)arg2 index:(int)arg3;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)prefetchResourcesWithReason:(int)arg1;
- (void)willTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (int)numberOfCells;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { float x1; float x2; })cellSizeForIndexPath:(id)arg1;
- (void)willAppearInContext:(id)arg1;
- (id)initWithPageComponent:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;

@end