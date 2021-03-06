/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class <PUPhotosSharingCollectionViewLayoutDelegate>, NSMutableDictionary, NSIndexPath;

@interface PUPhotosSharingCollectionViewLayout : PUHorizontalTiledCollectionViewLayout  {
    NSMutableDictionary *_cachedHeaderAttributes;
    NSIndexPath *_zoomingCellIndexPath;
    struct UIOffset { 
        float horizontal; 
        float vertical; 
    } _sharingBadgeOffset;
}

@property struct UIOffset { float x1; float x2; } sharingBadgeOffset;
@property(retain) NSIndexPath * zoomingCellIndexPath;
@property <PUPhotosSharingCollectionViewLayoutDelegate> * delegate;


- (void)_didFinishLayoutTransitionAnimations:(BOOL)arg1;
- (BOOL)_supportsAdvancedTransitionAnimations;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void).cxx_destruct;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_floatingSelectionBadgeFrameForBadgeFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 itemFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 visibleItemFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 atIndexPath:(id)arg4;
- (void)invalidateCachedLayout;
- (void)setSharingBadgeOffset:(struct UIOffset { float x1; float x2; })arg1;
- (void)setZoomingCellIndexPath:(id)arg1;
- (id)_badgeLayoutAttributesForItemLayoutAttributes:(id)arg1;
- (id)zoomingCellIndexPath;
- (struct UIOffset { float x1; float x2; })sharingBadgeOffset;

@end
