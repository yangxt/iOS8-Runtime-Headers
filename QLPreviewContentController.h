/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSMutableDictionary, UIColor, UIPageViewController, <QLPreviewContentDelegate>, NSMutableOrderedSet, <QLPreviewContentDataSource>, UILongPressGestureRecognizer, NSMutableSet, UITapGestureRecognizer, NSString, QLAirPlayController, UISegmentedControl, NSMutableArray;

@interface QLPreviewContentController : UIViewController <QLPreviewContentControllerProtocol, QLPreviewItemInteractionDelegate> {
    <QLPreviewContentDataSource> *_dataSource;
    <QLPreviewContentDelegate> *_delegate;
    BOOL _isForeground;
    QLAirPlayController *_airPlayController;
    UITapGestureRecognizer *_tapRecognizer;
    UILongPressGestureRecognizer *_longPressRecognizer;
    UIPageViewController *_pageViewController;
    NSMutableDictionary *_previewViewControllerCache;
    NSMutableSet *_gestureRecognizersForFullScreenDisplay;
    NSMutableArray *_previewViewControllerCacheOrdering;
    int _previewMode;
    int _numberOfPreviewItems;
    int _currentPreviewItemIndex;
    NSString *_loadingTextForMissingFiles;
    UISegmentedControl *_customToolbarSegmentedArrowControl;
    UIColor *_backgroundColor;
    BOOL _transitioning;
    BOOL _swiping;
    NSMutableSet *_loadingItems;
    NSMutableOrderedSet *_scheduledLoads;
    float _navigationBarVerticalOffset;
    BOOL _overlayHidden;
    BOOL _blockRemoteImages;
    struct { 
        int pid; 
        struct { 
            unsigned int val[8]; 
        } audit_token; 
        struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } contentFrame; 
    } clientContext;
}

@property struct { int x1; struct { unsigned int x_2_1_1[8]; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; } clientContext;
@property(copy) UIColor * backgroundColor;
@property <QLPreviewContentDataSource> * dataSource;
@property <QLPreviewContentDelegate> * delegate;
@property int previewMode;


- (struct { int x1; struct { unsigned int x_2_1_1[8]; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; })clientContext;
- (void)setClientContext:(struct { int x1; struct { unsigned int x_2_1_1[8]; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; })arg1;
- (int)previewMode;
- (void)setPreviewMode:(int)arg1;
- (void)refreshCurrentPreviewItem;
- (void)setLoadingTextForMissingFiles:(id)arg1;
- (id)currentPreviewItem;
- (int)currentPreviewItemIndex;
- (void)setCurrentPreviewItemIndex:(int)arg1;
- (void)_tapGestureRecognized:(id)arg1;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)pageViewController:(id)arg1 didFinishAnimating:(BOOL)arg2 previousViewControllers:(id)arg3 transitionCompleted:(BOOL)arg4;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (id)printPageRenderer;
- (void)setBlockRemoteImages:(BOOL)arg1;
- (void)_longPressGestureRecognized:(id)arg1;
- (void)copy:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)snapshotView;
- (BOOL)canBecomeFirstResponder;
- (void)didReceiveMemoryWarning;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)delegate;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)backgroundColor;
- (void)_rightSwipeRecognized:(id)arg1;
- (void)_leftSwipeRecognized:(id)arg1;
- (void)_dequeueScheduledLoad;
- (void)_schedulePreviewViewControllerIfNeeded:(id)arg1;
- (void)_activateAirPlayOnRemoteScreen:(id)arg1;
- (void)_updateAirPlay;
- (void)_scheduleAdjacentPreviewItems;
- (void)_removeNonCachedPreviewViewControllers;
- (void)_updateBackgroundWithDuration:(double)arg1;
- (id)currentPreviewViewController;
- (id)_previewViewControllerForPreviewItemIndex:(unsigned int)arg1;
- (id)_previewControllerForPreviewItem:(id)arg1 createIfNeeded:(BOOL)arg2 withIndex:(int)arg3;
- (void)_cachePreviewViewController:(id)arg1;
- (id)_copyPreviewControllerForPreview:(id)arg1 withIndex:(int)arg2;
- (id)_cachedPreviewControllerForPreviewItem:(id)arg1 withIndex:(int)arg2;
- (void)_updateScreenConfiguration;
- (void)_deactivateAirPlay;
- (void)_hideMenuController;
- (void)_updateContentFrame;
- (void)refreshCurrentPreviewItem:(BOOL)arg1;
- (void)_updateDisabledScrollingRect;
- (void)_clearPreviewViewControllerCache;
- (void)previewItemDidExitFullScreen:(id)arg1;
- (void)previewItem:(id)arg1 willEnterFullScreenWithHostedWindow:(id)arg2;
- (void)previewItem:(id)arg1 setAVState:(id)arg2;
- (void)previewItem:(id)arg1 willHideOverlayWithDuration:(double)arg2;
- (void)previewItem:(id)arg1 willShowOverlayWithDuration:(double)arg2;
- (void)viewWasTappedOnPreviewItem:(id)arg1;
- (void)overlayWasInteractedWithOnPreviewItem:(id)arg1;
- (id)clientProcessAlertViewForPreviewItem:(id)arg1;
- (void)previewItem:(id)arg1 receivedTapOnURL:(id)arg2;
- (id)previewItem:(id)arg1 willSendRequest:(id)arg2;
- (void)showContentsWasTappedForPreviewItem:(id)arg1;
- (void)endScrubbing;
- (void)scrubToValue:(double)arg1;
- (void)beginScrubbing;
- (id)printPageHelper;
- (void)setNavigationBarVerticalOffset:(float)arg1;
- (void)viewDidUpdateForPreviewItem:(id)arg1;
- (void)previewItem:(id)arg1 requiresDisplayBundle:(id)arg2 withHints:(id)arg3;
- (void)previewItemDidLoad:(id)arg1 atIndex:(int)arg2 withError:(id)arg3;
- (void)previewItemWillLoad:(id)arg1;
- (void)togglePlayState;
- (void)forceResignFirstResponder;
- (void)setContentFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)willChangeContentFrame;
- (void)configureWithParameters:(id)arg1;
- (void)setOverlayHidden:(BOOL)arg1 duration:(double)arg2;
- (void)becomeForeground;
- (void)enterBackground;
- (void)checkCurrentPreviewItem;
- (void)setTransitioning:(BOOL)arg1 synchronizedWithBlock:(id)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)init;
- (void)_screenDidDisconnect:(id)arg1;
- (void)_screenDidConnect:(id)arg1;

@end
