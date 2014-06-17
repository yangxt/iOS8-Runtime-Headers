/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class PUCollectionViewData, <PUHorizontalTiledCollectionViewLayoutDelegate>, UICollectionViewLayoutAttributes;

@interface PUHorizontalTiledCollectionViewLayout : UICollectionViewLayout  {
    PUCollectionViewData *_data;
    UICollectionViewLayoutAttributes *_dummyAttrs;
    float _interitemSpacing;
    <PUHorizontalTiledCollectionViewLayoutDelegate> *_delegate;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _itemsContentInset;
}

@property float interitemSpacing;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } itemsContentInset;
@property <PUHorizontalTiledCollectionViewLayoutDelegate> * delegate;
@property(readonly) BOOL hasReferenceIndexPath;

+ (Class)invalidationContextClass;

- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void).cxx_destruct;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize { float x1; float x2; })collectionViewContentSize;
- (id)delegate;
- (void)_ensureIndexPath:(id)arg1 inData:(id)arg2;
- (void)_ensureRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inData:(id)arg2 outDeltaOriginX:(float*)arg3;
- (BOOL)_updateLayoutData:(id)arg1 inDirection:(int)arg2 outDeltaOriginX:(float*)arg3;
- (id)_layoutAttributesForItemAtIndexPath:(id)arg1;
- (BOOL)_shouldInvalidateCachedLayoutForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)interitemSpacing;
- (void)invalidateCachedLayout;
- (void)setItemsContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (id)layoutAttributesForItemsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)hasReferenceIndexPath;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })itemsContentInset;
- (void)setInteritemSpacing:(float)arg1;
- (void)setDelegate:(id)arg1;
- (id)init;

@end