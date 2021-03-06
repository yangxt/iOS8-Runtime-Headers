/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class PUFeedViewControllerSpec, NSDictionary, UICollectionView, NSMutableSet, NSMutableArray, PLCloudSharedComment, PUFeedPreheatManager, PUAlbumStreamActivity, UITapGestureRecognizer, PLManagedAsset, PHCachingImageManager, UIPopoverController, UIViewController, PUPhotosPickerViewController, UIBarButtonItem, PUImageManager, PLManagedAlbumList, PLCloudSharedAlbum, PUFeedSectionInfosManager, PUPhotoPinchGestureRecognizer, PUScrollViewSpeedometer, PUFeedViewControllerRestorableState, PLDateRangeFormatter, NSIndexPath, PUFeedAssetContainerList, _UIContentUnavailableView;

@interface PUFeedViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, PUFeedCollectionViewLayoutDelegate, PUFeedSectionInfosManagerDelegate, PUPhotoBrowserZoomTransitionDelegate, PUFeedImageCellDelegate, PUFeedTextCellDelegate, PUFeedInvitationCellDelegate, UIGestureRecognizerDelegate, PUAlbumStreamActivityDelegate, _UISettingsKeyObserver, PUScrollViewSpeedometerDelegate, PLCloudFeedNavigating, PLNavigableCloudFeedViewController> {
    BOOL __flowDirectionReversed;
    BOOL __collectionViewScrolledToNewest;
    BOOL __shouldSuspendQualityImageFormats;
    BOOL __viewDidAppear;
    BOOL __viewsInSyncWithModel;
    BOOL __appJustEnteredForeground;
    BOOL __userDidDismissPlaceholder;
    BOOL __interfaceBatchUpdateScheduled;
    BOOL __invitationsPopoverShowPending;
    BOOL __libraryUpdatingPreviouslyExpired;
    PUFeedViewControllerSpec *_spec;
    int _contentType;
    PUFeedSectionInfosManager *__feedSectionInfosManager;
    PUImageManager *__imageManager;
    PUFeedPreheatManager *__preheatManager;
    PHCachingImageManager *__cachingImageManager;
    NSMutableArray *__lastPreheatIndexPathList;
    NSMutableArray *__lastPreheatIndexPathInfoList;
    PLDateRangeFormatter *__dateRangeFormatter;
    PUScrollViewSpeedometer *__collectionViewSpeedometer;
    int __sizeTransitionState;
    PUFeedViewControllerRestorableState *__rotationLastRestorableState;
    int __barsState;
    int __currentCollectionViewType;
    int __targetCollectionViewType;
    UICollectionView *__currentCollectionView;
    UICollectionView *__targetCollectionView;
    int __loadedSectionInfosWindowSize;
    UITapGestureRecognizer *__tapGestureRecognizer;
    UIBarButtonItem *__invitationsBarButtonItem;
    UIPopoverController *__invitationsPopoverController;
    NSIndexPath *__indexPathForImageHiddenDuringZoomTransition;
    PUPhotoPinchGestureRecognizer *__pinchGestureRecognizer;
    UICollectionView *__pinchedCollectionView;
    PLManagedAlbumList *__sharedAlbumList;
    PLCloudSharedAlbum *__pushedAlbum;
    UIViewController *__pushedViewController;
    PUPhotosPickerViewController *__presentedPhotosPickerViewController;
    _UIContentUnavailableView *__emptyPlaceholderView;
    PUAlbumStreamActivity *__albumStreamActivity;
    PLManagedAsset *__browsingSelectedAsset;
    PLCloudSharedComment *__browsingSelectedComment;
    PUFeedAssetContainerList *__browsingAssetContainerList;
    NSDictionary *__justLikedSections;
    NSMutableSet *__sectionInfosWithCommentChanges;
    NSMutableSet *__updatedAssets;
    float __preheatingWindowSize;
    struct CGSize { 
        float width; 
        float height; 
    } __targetSize;
    struct CGPoint { 
        float x; 
        float y; 
    } __lastPreheatedContentOffset;
}

@property(readonly) PUFeedViewControllerSpec * spec;
@property(readonly) int contentType;
@property(readonly) PUFeedSectionInfosManager * _feedSectionInfosManager;
@property(readonly) PUImageManager * _imageManager;
@property(readonly) PUFeedPreheatManager * _preheatManager;
@property(readonly) PHCachingImageManager * _cachingImageManager;
@property(retain) NSMutableArray * _lastPreheatIndexPathList;
@property(retain) NSMutableArray * _lastPreheatIndexPathInfoList;
@property(readonly) PLDateRangeFormatter * _dateRangeFormatter;
@property(getter=_isFlowDirectionReversed,setter=_setFlowDirectionReversed:) BOOL _flowDirectionReversed;
@property(setter=_setCollectionViewSpeedometer:,retain) PUScrollViewSpeedometer * _collectionViewSpeedometer;
@property(getter=_isCollectionViewScrolledToNewest,setter=_setCollectionViewScrolledToNewest:) BOOL _collectionViewScrolledToNewest;
@property(setter=_setShouldSuspendQualityImageFormats:) BOOL _shouldSuspendQualityImageFormats;
@property(setter=_setViewDidAppear:) BOOL _viewDidAppear;
@property(setter=_setSizeTransitionState:) int _sizeTransitionState;
@property(setter=_setRotationLastRestorableState:,retain) PUFeedViewControllerRestorableState * _rotationLastRestorableState;
@property(setter=_setBarsState:) int _barsState;
@property(setter=_setTargetSize:) struct CGSize { float x1; float x2; } _targetSize;
@property(setter=_setCurrentCollectionViewType:) int _currentCollectionViewType;
@property(setter=_setTargetCollectionViewType:) int _targetCollectionViewType;
@property(setter=_setCurrentCollectionView:,retain) UICollectionView * _currentCollectionView;
@property(setter=_setTargetCollectionView:,retain) UICollectionView * _targetCollectionView;
@property(setter=_setLoadedSectionInfosWindowSize:) int _loadedSectionInfosWindowSize;
@property(getter=_areViewsInSyncWithModel,setter=_setViewsInSyncWithModel:) BOOL _viewsInSyncWithModel;
@property(setter=_setTapGestureRecognizer:,retain) UITapGestureRecognizer * _tapGestureRecognizer;
@property(setter=_setInvitationsBarButtonItem:,retain) UIBarButtonItem * _invitationsBarButtonItem;
@property(setter=_setInvitationsPopoverController:,retain) UIPopoverController * _invitationsPopoverController;
@property(setter=_setLastPreheatedContentOffset:) struct CGPoint { float x1; float x2; } _lastPreheatedContentOffset;
@property(setter=_setIndexPathForImageHiddenDuringZoomTransition:,copy) NSIndexPath * _indexPathForImageHiddenDuringZoomTransition;
@property(setter=_setPinchGestureRecognizer:,retain) PUPhotoPinchGestureRecognizer * _pinchGestureRecognizer;
@property(setter=_setPinchedCollectionView:,retain) UICollectionView * _pinchedCollectionView;
@property(readonly) PLManagedAlbumList * _sharedAlbumList;
@property(setter=_setPushedAlbum:,retain) PLCloudSharedAlbum * _pushedAlbum;
@property(setter=_setPushedViewController:,retain) UIViewController * _pushedViewController;
@property(setter=_setPresentedPhotosPickerViewController:,retain) PUPhotosPickerViewController * _presentedPhotosPickerViewController;
@property(setter=_setAppJustEnteredForeground:) BOOL _appJustEnteredForeground;
@property(setter=_setEmptyPlaceholderView:,retain) _UIContentUnavailableView * _emptyPlaceholderView;
@property(setter=_setUserDidDismissPlaceholder:) BOOL _userDidDismissPlaceholder;
@property(setter=_setAlbumStreamActivity:,retain) PUAlbumStreamActivity * _albumStreamActivity;
@property(setter=_setBrowsingSelectedAsset:,retain) PLManagedAsset * _browsingSelectedAsset;
@property(setter=_setBrowsingSelectedComment:,retain) PLCloudSharedComment * _browsingSelectedComment;
@property(setter=_setBrowsingAssetContainerList:,retain) PUFeedAssetContainerList * _browsingAssetContainerList;
@property(setter=_setJustLikedSections:,retain) NSDictionary * _justLikedSections;
@property(getter=_isInterfaceBatchUpdateScheduled,setter=_setInterfaceBatchUpdateScheduled:) BOOL _interfaceBatchUpdateScheduled;
@property(setter=_setSectionInfosWithCommentChanges:,retain) NSMutableSet * _sectionInfosWithCommentChanges;
@property(setter=_setUpdatedAssets:,retain) NSMutableSet * _updatedAssets;
@property(getter=_isInvitationsPopoverShowPending,setter=_setInvitationsPopoverShowPending:) BOOL _invitationsPopoverShowPending;
@property(getter=_isLibraryUpdatingPreviouslyExpired,setter=_setLibraryUpdatingPreviouslyExpired:) BOOL _libraryUpdatingPreviouslyExpired;
@property(setter=_setPreheatingWindowSize:) float _preheatingWindowSize;

+ (void)initialize;

- (int)contentType;
- (void)assetContainerListDidChange:(id)arg1;
- (void)_appDidEnterBackground:(id)arg1;
- (void)_handleTap:(id)arg1;
- (void).cxx_destruct;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (id)contentScrollView;
- (void)viewWillAppear:(BOOL)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (BOOL)canBecomeFirstResponder;
- (BOOL)shouldAutorotate;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_handlePinch:(id)arg1;
- (id)ppt_currentCollectionView;
- (id)_albumStreamActivity;
- (void)set_lastPreheatIndexPathInfoList:(id)arg1;
- (void)set_lastPreheatIndexPathList:(id)arg1;
- (void)didTapButtonInFeedTextCell:(id)arg1;
- (void)didTapCommentButtonInFeedImageCell:(id)arg1;
- (void)didTapOverlayPlayButtonInFeedImageCell:(id)arg1;
- (void)feedSectionInfosManager:(id)arg1 sectionInfosDidChange:(id)arg2;
- (float)collectionView:(id)arg1 layout:(id)arg2 spacingBetweenSection:(int)arg3 andHeaderForGroupID:(id)arg4;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 headerSizeForGroupID:(id)arg3 proposedSize:(struct CGSize { float x1; float x2; })arg4;
- (id)collectionView:(id)arg1 layout:(id)arg2 groupIDForSection:(int)arg3;
- (struct PUFeedSeparatorMetrics { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; struct UIEdgeInsets { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; })collectionView:(id)arg1 layout:(id)arg2 metricsForSeparatorBetweenSection:(int)arg3 andSection:(int)arg4 proposedMetrics:(struct PUFeedSeparatorMetrics { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; struct UIEdgeInsets { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; })arg5;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForFooterInSection:(int)arg3 proposedSize:(struct CGSize { float x1; float x2; })arg4;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForHeaderOfSections:(id)arg3 proposedSize:(struct CGSize { float x1; float x2; })arg4;
- (BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldHideHeaderInSection:(int)arg3;
- (BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldJoinSection:(int)arg3 withSection:(int)arg4;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForThumbnailInSection:(int)arg3;
- (struct PUFeedSeparatorMetrics { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; struct UIEdgeInsets { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; })collectionView:(id)arg1 layout:(id)arg2 metricsForSeparatorBetweenRowAtIndexPath:(id)arg3 andRowAtIndexPath:(id)arg4 proposedMetrics:(struct PUFeedSeparatorMetrics { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; struct UIEdgeInsets { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; })arg5;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForRowAtIndexPath:(id)arg3 proposedSize:(struct CGSize { float x1; float x2; })arg4;
- (void)collectionView:(id)arg1 layout:(id)arg2 referenceMaximumLength:(float*)arg3 minimumNumberOfTilesToOmit:(int*)arg4 forSection:(int)arg5;
- (id)collectionView:(id)arg1 layout:(id)arg2 batchIDForTileAtIndexPath:(id)arg3;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 captionSizeForTileAtIndexPath:(id)arg3 proposedSize:(struct CGSize { float x1; float x2; })arg4;
- (BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldShowCaptionForTileAtIndexPath:(id)arg3;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 mininumSizeForTileAtIndexPath:(id)arg3;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 imageSizeForTileAtIndexPath:(id)arg3;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })collectionView:(id)arg1 layout:(id)arg2 contentInsetsForSection:(int)arg3;
- (int)collectionView:(id)arg1 layout:(id)arg2 typeForSection:(int)arg3;
- (BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldHideSection:(int)arg3;
- (void)_setAlbumStreamActivity:(id)arg1;
- (void)_createNewStream;
- (void)_setInvitationsPopoverController:(id)arg1;
- (id)initWithSpec:(id)arg1 contentType:(int)arg2;
- (void)_setInvitationsPopoverShowPending:(BOOL)arg1;
- (void)_setPinchedCollectionView:(id)arg1;
- (BOOL)_beginInteractiveNavigationForItemAtIndexPath:(id)arg1 inCollectionView:(id)arg2;
- (void)_openiCloudSettings;
- (void)_enumerateCenterAssetsInRestorableState:(id)arg1 inCollectionView:(id)arg2 usingBlock:(id)arg3;
- (id)_indexPathForItemWithAsset:(id)arg1 inCollectionView:(id)arg2;
- (void)_setShouldSuspendQualityImageFormats:(BOOL)arg1;
- (BOOL)_shouldSuspendQualityImageFormats;
- (int)_defaultMaximumScrollRegimeForQualityImageFormats;
- (void)_showOutOfNetworkInvitationMessageForSharedAlbum:(id)arg1 completionHandler:(id)arg2;
- (void)_setUserCloudSharedLiked:(BOOL)arg1 forItemsInSections:(id)arg2 inCollectionView:(id)arg3;
- (void)_setJustLikedSections:(id)arg1;
- (void)_navigateToRevealPhoto:(id)arg1 inAlbum:(struct NSObject { Class x1; }*)arg2 animated:(BOOL)arg3;
- (id)_collectionViewContainingView:(id)arg1;
- (void)_didTapSectionFooterFeedCell:(id)arg1;
- (void)_didTapSectionHeaderFeedCell:(id)arg1;
- (void)_didTapThumbnailOrOverlayPlayButtonInFeedCell:(id)arg1;
- (void)_setPresentedPhotosPickerViewController:(id)arg1;
- (id)_presentedPhotosPickerViewController;
- (void)_navigateToSectionInfo:(id)arg1 atItemIndex:(int)arg2 completion:(id)arg3;
- (BOOL)_navigateToRevealComment:(id)arg1 completion:(id)arg2;
- (void)_navigateToRevealAsset:(id)arg1 completion:(id)arg2;
- (id)_loadedSectionInfoForCloudFeedEntry:(id)arg1;
- (id)_pinchedCollectionView;
- (void)_setIndexPathForImageHiddenDuringZoomTransition:(id)arg1;
- (id)_pushedAlbum;
- (void)_updateSectionsWithCaptionChangesFromUpdatedAssets:(id)arg1;
- (void)_performInterfaceBatchUpdateNow;
- (void)_setInterfaceBatchUpdateScheduled:(BOOL)arg1;
- (BOOL)_isInterfaceBatchUpdateScheduled;
- (void)_setUpdatedAssets:(id)arg1;
- (id)_updatedAssets;
- (void)_setSectionInfosWithCommentChanges:(id)arg1;
- (id)_sectionInfosWithCommentChanges;
- (void)_scheduleInterfaceUpdateForSectionInfosWithCommentChanges:(id)arg1 updatedAssets:(id)arg2;
- (void)_updateInterfaceForDeletedSections:(id)arg1 insertedSections:(id)arg2 updatedSections:(id)arg3;
- (void)_userDidScrollFeed;
- (struct CGPoint { float x1; float x2; })_lastPreheatedContentOffset;
- (void)_expandWindowOfLoadedSectionInfos;
- (void)_setCollectionViewScrolledToNewest:(BOOL)arg1;
- (BOOL)_isCollectionViewScrolledToNewest;
- (BOOL)_viewDidAppear;
- (BOOL)_shouldHideHeaderForSectionWithType:(int)arg1;
- (BOOL)_shouldJoinSectionInfo:(id)arg1 withSectionInfo:(id)arg2 collectionViewType:(int)arg3;
- (int)_typeForSectionInfo:(id)arg1;
- (BOOL)_shouldHideSectionInfo:(id)arg1 forCollectionView:(id)arg2;
- (void)_getPhotoBrowserController:(out id*)arg1 transition:(out id*)arg2 withOptions:(int)arg3;
- (BOOL)_setupBrowsingFromItemAtIndexPath:(id)arg1 inCollectionView:(id)arg2;
- (void)_configureTextCell:(id)arg1 forHeaderOfGroupID:(id)arg2 inCollectionView:(id)arg3;
- (id)_groupIDForSectionWithInfo:(id)arg1;
- (BOOL)_configureTextCell:(id)arg1 forFooterOfSection:(int)arg2 inCollectionView:(id)arg3;
- (void)_configureTextCell:(id)arg1 forHeaderOfSections:(id)arg2 inCollectionView:(id)arg3 animated:(BOOL)arg4;
- (void)_configureTextCell:(id)arg1 forCaptionAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (void)_configureStackCell:(id)arg1 forThumbnailsAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (void)_configureImageCell:(id)arg1 forThumbnailAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (void)_configureInvitationCell:(id)arg1 forInvitationAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (void)_configureTextCell:(id)arg1 forTextAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (void)_configureTextCell:(id)arg1 forLikesAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (void)_configureTextCell:(id)arg1 forCommentAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (void)_configureImageCell:(id)arg1 forAssetAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (int)_numberOfSectionInfosForCollectionView:(id)arg1;
- (void)_autoHideBarsNow;
- (void)_handlePlaceholderAction;
- (void)_setUserDidDismissPlaceholder:(BOOL)arg1;
- (int)_placeholderTypeForSizeTransitionState:(int)arg1;
- (void)_setInvitationsBarButtonItem:(id)arg1;
- (void)_invitationsButtonAction:(id)arg1;
- (id)_invitationsBarButtonItem;
- (BOOL)_isAnySharedAlbumAvailable;
- (void)_setCollectionViewSpeedometer:(id)arg1;
- (void)_configureSpeedometer:(id)arg1;
- (id)_collectionViewSpeedometer;
- (void)_setTargetCollectionView:(id)arg1;
- (void)_configureCollectionView:(id)arg1;
- (void)_setFlowDirectionReversed:(BOOL)arg1;
- (void)_preheatSectionInfosAtIndexes:(id)arg1;
- (void)_setLoadedSectionInfosWindowSize:(int)arg1;
- (BOOL)_isFlowDirectionReversed;
- (int)_loadedSectionInfosWindowSize;
- (id)_browsingSelectedAsset;
- (id)_browsingSelectedComment;
- (id)_pushedViewController;
- (id)_browsingAssetContainerList;
- (id)_sectionInfosForBrowsingFromSectionInfo:(id)arg1;
- (void)_ensureWindowOfLoadedSectionInfosIncludesSection:(int)arg1;
- (int)_browsingSelectedSection;
- (void)_setBrowsingAssetContainerList:(id)arg1;
- (void)_updateBrowsingAssetContainerList;
- (void)_setBrowsingSelectedComment:(id)arg1;
- (void)_setBrowsingSelectedAsset:(id)arg1;
- (void)_setupBrowsingFromAsset:(id)arg1 orComment:(id)arg2;
- (BOOL)_isCollectionViewEmpty:(id)arg1;
- (BOOL)_shouldHideSectionWithType:(int)arg1 inCollectionViewType:(int)arg2;
- (BOOL)_userDidDismissPlaceholder;
- (BOOL)_shouldShowTransitionUI;
- (BOOL)_isLibraryUpdatingTimeoutExpired;
- (BOOL)_isLibraryUpdatingPreviouslyExpired;
- (void)_setLibraryUpdatingPreviouslyExpired:(BOOL)arg1;
- (id)_sharedAlbumList;
- (BOOL)_areSharedStreamsEnabled;
- (void)_setLastPreheatedContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (id)_lastPreheatIndexPathInfoList;
- (id)_lastPreheatIndexPathList;
- (id)_assetForItemAtIndexPath:(id)arg1 inCollectionView:(id)arg2;
- (float)_preheatingWindowSize;
- (void)_contextDidFinishRemoteMerge:(id)arg1;
- (void)_setAppJustEnteredForeground:(BOOL)arg1;
- (BOOL)_appJustEnteredForeground;
- (id)_textForDate:(id)arg1;
- (id)_dateForSectionWithInfo:(id)arg1;
- (void)_getDescriptionPhrase:(out id*)arg1 streamAffordanceLabel:(out id*)arg2 actionText:(out id*)arg3 buttonType:(int*)arg4 forSections:(id)arg5 inCollectionView:(id)arg6;
- (id)_justLikedSections;
- (id)_sectionInfosForSections:(id)arg1 collectionView:(id)arg2;
- (id)_indexPathForImageHiddenDuringZoomTransition;
- (int)_typeForCollectionView:(id)arg1;
- (id)_sectionInfoForSection:(int)arg1 collectionView:(id)arg2;
- (id)_feedSectionInfosManager;
- (id)_collectionViews;
- (id)_invitationsPopoverController;
- (void)_appDidFinishEnteringForeground;
- (void)_setViewDidAppear:(BOOL)arg1;
- (void)_showInvitationsPopoverAnimated:(BOOL)arg1;
- (BOOL)_isInvitationsPopoverShowPending;
- (void)_scheduleBarsAutoHide;
- (int)_barsState;
- (int)_currentCollectionViewType;
- (BOOL)_areViewsInSyncWithModel;
- (void)_tearDownBrowsing;
- (void)_setPushedViewController:(id)arg1;
- (void)_setPushedAlbum:(id)arg1;
- (void)_setCurrentCollectionView:(id)arg1;
- (id)_currentCollectionView;
- (void)_setPinchGestureRecognizer:(id)arg1;
- (id)_pinchGestureRecognizer;
- (void)_setViewsInSyncWithModel:(BOOL)arg1;
- (void)_updateWindowOfLoadedSectionInfos;
- (void)_userDidViewFeed;
- (void)_setCurrentCollectionViewType:(int)arg1;
- (void)_setBarsState:(int)arg1;
- (BOOL)_shouldShowBarsForCollectionViewType:(int)arg1;
- (int)_targetCollectionViewType;
- (void)_updateNavigationItemAnimated:(BOOL)arg1;
- (int)_sizeTransitionState;
- (void)_updatePreheatedAssetsForCollectionView:(id)arg1;
- (void)_invalidateLastPreheatedContentOffset;
- (void)_restoreScrollPositionInCollectionView:(id)arg1 fromRestorableState:(id)arg2;
- (id)_targetCollectionView;
- (void)_setRotationLastRestorableState:(id)arg1;
- (id)_currentRestorableState;
- (id)_rotationLastRestorableState;
- (void)_updateCollectionViews;
- (void)_setTargetCollectionViewType:(int)arg1;
- (int)_collectionViewTypeForSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_setSizeTransitionState:(int)arg1;
- (void)_cancelBarsAutoHide;
- (void)_setTargetSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })_targetSize;
- (void)_setPreheatingWindowSize:(float)arg1;
- (id)_dateRangeFormatter;
- (void)_appWillEnterForeground:(id)arg1;
- (BOOL)_updateSpec;
- (id)_suppressionContexts;
- (BOOL)_appAllowsSupressionOfAlerts;
- (id)_preheatManager;
- (void)navigateToNewestContentAnimated:(BOOL)arg1;
- (void)didTapFeedCell:(id)arg1;
- (id)_imageManager;
- (BOOL)zoomTransition:(id)arg1 transitionImageForPhotoToken:(id)arg2 callback:(id)arg3;
- (void)_updateInterfaceForModelReloadAnimated:(BOOL)arg1;
- (void)_updatePeripheralInterfaceAnimated:(BOOL)arg1;
- (id)spec;
- (void)scrollViewSpeedometer:(id)arg1 regimeDidChange:(int)arg2 from:(int)arg3;
- (void)feedInvitationCell:(id)arg1 didAccept:(BOOL)arg2;
- (BOOL)pu_wantsNavigationBarVisible;
- (void)_updateSubviewsOrdering;
- (BOOL)cloudFeedInvitationForAlbumIsAvailableForNavigation:(id)arg1;
- (BOOL)cloudFeedCommentIsAvailableForNavigation:(id)arg1;
- (BOOL)cloudFeedAssetIsAvailableForNavigation:(id)arg1;
- (void)navigateToRevealCloudFeedInvitationForAlbum:(id)arg1 completion:(id)arg2;
- (void)navigateToCloudFeedComment:(id)arg1 completion:(id)arg2;
- (void)navigateToRevealCloudFeedComment:(id)arg1 completion:(id)arg2;
- (void)navigateToCloudFeedAsset:(id)arg1 completion:(id)arg2;
- (void)navigateToRevealCloudFeedAsset:(id)arg1 completion:(id)arg2;
- (BOOL)pu_wantsStatusBarVisible;
- (void)_dateRangeFormatterChanged:(id)arg1;
- (BOOL)pu_handleSecondTabTap;
- (void)zoomTransition:(id)arg1 didFinishForOperation:(int)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4;
- (void)zoomTransition:(id)arg1 willBeginForOperation:(int)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4;
- (void)zoomTransition:(id)arg1 setVisibility:(BOOL)arg2 forPhotoToken:(id)arg3;
- (id)zoomTransition:(id)arg1 photoTokenForPhoto:(id)arg2 inCollection:(id)arg3;
- (BOOL)pu_wantsTabBarVisible;
- (BOOL)pu_wantsToolbarVisible;
- (void)_setEmptyPlaceholderView:(id)arg1;
- (id)_emptyPlaceholderView;
- (void)_updateEmptyPlaceholderAnimated:(BOOL)arg1;
- (BOOL)prepareForDismissingForced:(BOOL)arg1;
- (id)_cachingImageManager;
- (BOOL)pu_shouldActAsTabRootViewController;
- (BOOL)zoomTransition:(id)arg1 getFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 contentMode:(int*)arg3 forPhotoToken:(id)arg4 operation:(int)arg5;
- (void)_setTapGestureRecognizer:(id)arg1;
- (id)_tapGestureRecognizer;
- (void)dealloc;

@end
