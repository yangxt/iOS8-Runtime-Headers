/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLManagedAsset, PLCloudSharedComment, UITableView, CAGradientLayer, UIImageView, UIView, PLPhotoCommentEntryView, <PLCommentsViewControllerDelegate>, NSCache, _UIBackdropView, UIBarButtonItem;

@interface PLCommentsViewController : UIViewController <PLCloudCommentsChangeObserver, PLPhotoCommentEntryViewDelegate, PLDismissableViewController, UITableViewDelegate, UITableViewDataSource> {
    UITableView *_tableView;
    UIView *_tableContainerView;
    PLManagedAsset *_asset;
    CAGradientLayer *_maskLayer;
    PLPhotoCommentEntryView *_entryView;
    PLCloudSharedComment *_justInsertedComment;
    BOOL _justTappedSmileButton;
    BOOL _editMode;
    BOOL _temporaryKeyboardHideReshow;
    BOOL _shouldAdjustInitialScrollPosition;
    float _keyboardOverlap;
    <PLCommentsViewControllerDelegate> *_commentsControllerDelegate;
    UIView *_containerView;
    NSCache *_commentsHeightCache;
    UIImageView *_gradientView;
    _UIBackdropView *_backdropView;
    UIBarButtonItem *_cancelButton;
    BOOL _isCompact;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _availableBounds;
}

@property(retain) PLManagedAsset * asset;
@property BOOL isCompact;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } availableBounds;
@property BOOL editMode;
@property(readonly) UIBarButtonItem * cancelButton;
@property <PLCommentsViewControllerDelegate> * commentsControllerDelegate;
@property(retain) PLCloudSharedComment * justInsertedComment;


- (void)cloudCommentsDidChange:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })availableBounds;
- (BOOL)isCompact;
- (id)commentsControllerDelegate;
- (void)photoCommentEntryViewHeightDidChange:(id)arg1;
- (void)setJustInsertedComment:(id)arg1;
- (id)justInsertedComment;
- (BOOL)checkAndAlertMaxLikesReached;
- (void)setEditMode:(BOOL)arg1;
- (BOOL)_checkAndAlertMaxCommentsReachedWhenFinalizing:(BOOL)arg1;
- (void)_addCommentButtonTapped:(id)arg1;
- (void)_smileButtonTapped:(id)arg1;
- (int)textCommentSection;
- (int)assetOwnerCommentSection;
- (int)smileCommentSection;
- (BOOL)shouldShowCommentPostingUI;
- (id)_firstUnreadCloudComment;
- (void)_postCommentValidated:(id)arg1;
- (int)postCommentSection;
- (struct CGSize { float x1; float x2; })_preferredViewSizeInContainerSize:(struct CGSize { float x1; float x2; })arg1 forInterfaceOrientation:(int)arg2 tableViewSize:(struct CGSize { float x1; float x2; }*)arg3;
- (void)_stopWatchingKeyboard;
- (void)_startWatchingKeyboard;
- (void)_adjustInitialScrollPosition:(BOOL)arg1;
- (void)_updateLayerMaskWithBoundsChange;
- (BOOL)_adjustTextEntrySize;
- (float)_tableViewHeightForWidth:(float)arg1 interfaceOrientation:(int)arg2;
- (float)_heightForComment:(id)arg1 forWidth:(float)arg2 forInterfaceOrientation:(int)arg3;
- (BOOL)showAssetOwnerSection;
- (void)updateViewLayoutWithDuration:(double)arg1 completion:(id)arg2;
- (void)setCommentsControllerDelegate:(id)arg1;
- (void)setAvailableBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setIsCompact:(BOOL)arg1;
- (void)cancelDeleteMode:(id)arg1;
- (void)setRasterization:(BOOL)arg1;
- (void)cancelCurrentAction:(id)arg1;
- (BOOL)editMode;
- (void)scrollToComment:(id)arg1 animated:(BOOL)arg2;
- (id)asset;
- (void)setAsset:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (id)cancelButton;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)prepareForDismissingForced:(BOOL)arg1;
- (void)dealloc;

@end
