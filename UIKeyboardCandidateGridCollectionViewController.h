/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKBCandidateCollectionView, TIKeyboardCandidateResultSet, <UIKeyboardCandidateGridCollectionViewControllerDelegate>, UIKeyboardCandidateGridCollectionView, UIKeyboardCandidateGridLayout, UIButton, UIView, <UIKeyboardCandidateListDelegate>, NSArray;

@interface UIKeyboardCandidateGridCollectionViewController : UIViewController <UICollectionViewDataSource, UIKeyboardCandidateList, UIKeyboardCandidateGridLayoutDelegate> {
    BOOL _alwaysShowExtensionCandidates;
    BOOL _hasSecondaryCandidates;
    BOOL _showHiddenCandidatesOnly;
    BOOL _singleLineMode;
    BOOL _showsExtensionCandidates;
    BOOL _supportsNumberKeySelection;
    BOOL _secondaryCandidatesViewIsCurrent;
    BOOL __usesDeemphasizedTextAppearance;
    <UIKeyboardCandidateGridCollectionViewControllerDelegate> *_delegate;
    <UIKeyboardCandidateListDelegate> *_candidateListDelegate;
    TIKeyboardCandidateResultSet *_candidateSet;
    NSArray *_candidateGroups;
    float _rowHeight;
    struct { 
        unsigned int idiom : 6; 
        unsigned int landscape : 1; 
        unsigned int split : 1; 
        unsigned int appearance : 8; 
        unsigned int rendering : 16; 
    } _visualStyling;
    int _candidatesVisualStyle;
    UIButton *_padInlineFloatingArrowButton;
    UIView *_headerView;
    UIKBCandidateCollectionView *_secondaryCandidatesView;
    float _groupBarWidth;
}

@property(readonly) UIKeyboardCandidateGridCollectionView * collectionView;
@property <UIKeyboardCandidateGridCollectionViewControllerDelegate> * delegate;
@property <UIKeyboardCandidateListDelegate> * candidateListDelegate;
@property(retain) TIKeyboardCandidateResultSet * candidateSet;
@property(retain) NSArray * candidateGroups;
@property float rowHeight;
@property struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; } visualStyling;
@property int candidatesVisualStyle;
@property BOOL alwaysShowExtensionCandidates;
@property(readonly) UIButton * padInlineFloatingArrowButton;
@property(retain) UIView * headerView;
@property BOOL hasSecondaryCandidates;
@property(retain) UIKBCandidateCollectionView * secondaryCandidatesView;
@property BOOL showHiddenCandidatesOnly;
@property BOOL singleLineMode;
@property(readonly) UIKeyboardCandidateGridLayout * collectionViewGridLayout;
@property float groupBarWidth;
@property(readonly) BOOL hasGroupBar;
@property BOOL showsExtensionCandidates;
@property BOOL supportsNumberKeySelection;
@property BOOL secondaryCandidatesViewIsCurrent;
@property BOOL _usesDeemphasizedTextAppearance;


- (BOOL)showsExtensionCandidates;
- (void)setSingleLineMode:(BOOL)arg1;
- (BOOL)singleLineMode;
- (void)setShowHiddenCandidatesOnly:(BOOL)arg1;
- (id)padInlineFloatingArrowButton;
- (void)setAlwaysShowExtensionCandidates:(BOOL)arg1;
- (BOOL)hasGroupBar;
- (id)lastCandidateIndexPath;
- (void)candidateViewDidFinishExtending;
- (void)candidateViewWillBeginExtendingWithVisibleCandidates:(id)arg1;
- (struct CGSize { float x1; float x2; })rowSizeForGridLayout;
- (void)setShowsExtensionCandidates:(BOOL)arg1;
- (BOOL)alwaysShowExtensionCandidates;
- (unsigned int)rowIndexForCellAtIndexPath:(id)arg1;
- (BOOL)showHiddenCandidatesOnly;
- (id)candidateAtIndexPath:(id)arg1;
- (void)stepOneLine:(BOOL)arg1;
- (id)firstCandidateIndexPath;
- (id)indexPathForCandidate:(id)arg1;
- (void)scrollViewIndexChanged:(id)arg1;
- (void)setGroupBarWidth:(float)arg1;
- (float)groupBarWidth;
- (void)setHasSecondaryCandidates:(BOOL)arg1;
- (void)setCandidateGroups:(id)arg1;
- (BOOL)padInlineFloatingIsExpanded;
- (void)setSupportsNumberKeySelection:(BOOL)arg1;
- (BOOL)supportsNumberKeySelection;
- (void)updateIndexTitles;
- (void)updateHeaderView;
- (id)lastCandidateIndexPathInGroupAtIndex:(unsigned int)arg1;
- (id)firstCandidateIndexPathInGroupAtIndex:(unsigned int)arg1;
- (unsigned int)candidateIndexOffset;
- (id)groupAtIndex:(unsigned int)arg1;
- (BOOL)secondaryCandidatesViewIsCurrent;
- (unsigned int)groupsCount;
- (void)setSecondaryCandidatesViewIsCurrent:(BOOL)arg1;
- (void)setHeaderView:(id)arg1;
- (void)padInlineFloatingExpand;
- (unsigned int)padInlineHighlightedRowIndex;
- (id)candidateGroups;
- (BOOL)_usesDeemphasizedTextAppearance;
- (id)collectionViewGridLayout;
- (void)set_usesDeemphasizedTextAppearance:(BOOL)arg1;
- (void)scrollToBottomWithAnimation:(BOOL)arg1;
- (void)scrollToTopWithAnimation:(BOOL)arg1 revealHeaderView:(BOOL)arg2;
- (void)scrollToTopWithAnimation:(BOOL)arg1;
- (id)headerView;
- (void)setSecondaryCandidatesView:(id)arg1;
- (int)candidatesVisualStyle;
- (id)secondaryCandidatesView;
- (BOOL)hasSecondaryCandidates;
- (void)loadSecondaryCandidatesView;
- (void)setCandidatesVisualStyle:(int)arg1;
- (struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })visualStyling;
- (void)setVisualStyling:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })arg1;
- (void)viewDidLoad;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)loadView;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)revealHiddenCandidates;
- (void)candidatesDidChange;
- (BOOL)hasPreviousPage;
- (BOOL)hasNextPage;
- (BOOL)handleNumberKey:(unsigned int)arg1;
- (unsigned int)selectedSortIndex;
- (id)keyboardBehaviors;
- (void)candidateAcceptedAtIndex:(unsigned int)arg1;
- (unsigned int)currentIndex;
- (id)currentCandidate;
- (void)showPreviousRow;
- (void)showNextRow;
- (void)showPreviousPage;
- (void)showNextPage;
- (void)showPreviousCandidate;
- (BOOL)showCandidate:(id)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (BOOL)isHiddenCandidatesList;
- (BOOL)isExtendedList;
- (id)statisticsIdentifier;
- (void)setCandidateListDelegate:(id)arg1;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 maxX:(float)arg4 layout:(BOOL)arg5;
- (void)setCandidateSet:(id)arg1;
- (BOOL)hasCandidates;
- (id)candidateSet;
- (id)selectedItemIndexPath;
- (id)collectionView;
- (id)candidateListDelegate;
- (void)showNextCandidate;
- (void)showCandidateAtIndex:(unsigned int)arg1;
- (void)layout;
- (id)delegate;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (float)rowHeight;
- (void)setRowHeight:(float)arg1;
- (void)reloadData;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)init;

@end
