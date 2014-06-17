/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIColor;

@interface SKUISwooshCollectionViewLayout : UICollectionViewFlowLayout  {
    UIColor *_backgroundColor;
    BOOL _snapsToItemBoundaries;
    BOOL _snapsToItemCenters;
}

@property(copy) UIColor * backgroundColor;
@property BOOL snapsToItemBoundaries;
@property BOOL snapsToItemCenters;

+ (float)snapToBoundariesDecelerationRate;
+ (Class)layoutAttributesClass;

- (void)setSnapsToItemCenters:(BOOL)arg1;
- (BOOL)snapsToItemCenters;
- (BOOL)snapsToItemBoundaries;
- (void)setSnapsToItemBoundaries:(BOOL)arg1;
- (struct CGPoint { float x1; float x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { float x1; float x2; })arg1 withScrollingVelocity:(struct CGPoint { float x1; float x2; })arg2;
- (void).cxx_destruct;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (id)init;

@end