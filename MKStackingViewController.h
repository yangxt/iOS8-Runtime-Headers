/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class _MKStackingView, NSMapTable, UITableView, <MKStackingViewControllerDelegate>, UIView, NSDictionary, UIViewController, NSArray;

@interface MKStackingViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    _MKStackingView *_stackingView;
    UIView *_contentView;
    BOOL _isScrollingProgrammaticallyToViewController;
    unsigned int _inTableViewCallbacks;
    UITableView *_table;
    BOOL _hasScrolledToTop;
    NSDictionary *_previousNavigationBarBackgroundsByStyle;
    NSMapTable *_knownHeightsForRowsByViewControllers;
    <MKStackingViewControllerDelegate> *_stackingDelegate;
    UIView *_headerView;
    UIView *_selectorView;
    NSArray *_viewControllers;
    UIViewController *_selectedViewController;
}

@property(retain) UIView * headerView;
@property(retain) UIView * selectorView;
@property(copy) NSArray * viewControllers;
@property UIViewController * selectedViewController;
@property <MKStackingViewControllerDelegate> * stackingDelegate;


- (void)_setNeedsLayout;
- (void).cxx_destruct;
- (void)setHeaderView:(id)arg1;
- (id)headerView;
- (void)setSelectedViewController:(id)arg1;
- (id)selectedViewController;
- (void)setViewControllers:(id)arg1;
- (id)viewControllers;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (struct CGSize { float x1; float x2; })_contentSize;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)dealloc;
- (void)setSelectedViewController:(id)arg1 animated:(BOOL)arg2;
- (void)setSelectorView:(id)arg1;
- (float)_heightForViewOfViewController:(id)arg1;
- (int)_rowIndexForIndexPath:(id)arg1;
- (BOOL)_showsTitleForViewController:(id)arg1;
- (BOOL)_showsTitleForSectionAtIndex:(int)arg1;
- (BOOL)_isInTableViewCallbacks;
- (void)_updateSelectedViewControllerAfterPositionChange;
- (void)_enumerateVisibleCellsUsingBlock:(id)arg1;
- (void)_preferredSizeDidChangeForViewControllerAtIndex:(unsigned int)arg1;
- (void)_scrollToViewControllerAtIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)_setSelectedViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_updateSelectorView;
- (void)_performAsTableViewCallback:(id)arg1;
- (void)_startObservingPropertiesOfViewController:(id)arg1;
- (float)_fittingHeightForView:(id)arg1;
- (id)stackingDelegate;
- (void)_getSelectorViewFrame:(out struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 headerViewFrame:(out struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 headerViewBackgroundTransfrom:(out struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; }*)arg3 forContentBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;
- (void)_setTopInset:(float)arg1;
- (float)_selectorHeight;
- (float)_topLayoutGuideLength;
- (void)_repositionTopViews;
- (id)selectorView;
- (void)_addFloatingSubviewIfPossibleAndNeeded:(id)arg1;
- (void)_stopObservingPropertiesOfViewController:(id)arg1;
- (float)_headerHeight;
- (void)performUserSelectionForViewControllerAtIndex:(unsigned int)arg1;
- (void)setSelectorViewNeedsUpdate;
- (void)setStackingDelegate:(id)arg1;

@end