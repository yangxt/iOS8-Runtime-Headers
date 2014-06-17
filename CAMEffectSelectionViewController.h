/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class NSIndexPath, NSArray, <CAMEffectSelectionViewControllerDelegate>, UICollectionViewFlowLayout, CIFilter, UICollectionView;

@interface CAMEffectSelectionViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource> {
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_layout;
    NSArray *_effects;
    NSIndexPath *__selectedIndexPath;
    struct CGSize { 
        float width; 
        float height; 
    } _cellSize;
    struct CGSize { 
        float width; 
        float height; 
    } _thumbnailSize;
    <CAMEffectSelectionViewControllerDelegate> *_delegate;
}

@property <CAMEffectSelectionViewControllerDelegate> * delegate;
@property(retain) CIFilter * selectedEffect;


- (void)setSelectedEffect:(id)arg1;
- (id)initWithImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_scrollToShowNextFilterNearEdge;
- (id)selectedEffect;
- (void)_notifyEffectSelectedAndScrollIfNecessary;
- (id)_textForItemAtIndexPath:(id)arg1;
- (void)_scrollToSelectedIndexAnimated:(BOOL)arg1;
- (void)_resetSelectedToOriginal;
- (void)_generateFilters;
- (void).cxx_destruct;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)delegate;
- (id)_selectedIndexPath;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)init;
- (void)_setSelectedIndexPath:(id)arg1;

@end