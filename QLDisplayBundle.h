/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class UIView, NSString, <QLPreviewItemInteractionDelegate>, NSTimer, <QLPreviewItem>;

@interface QLDisplayBundle : UIViewController  {
    <QLPreviewItemInteractionDelegate> *_delegate;
    <QLPreviewItem> *_previewItem;
    BOOL _overlayHidden;
    int _previewMode;
    BOOL _loaded;
    BOOL _loading;
    NSString *_password;
    NSTimer *_refreshTimer;
    int _index;
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
@property <QLPreviewItemInteractionDelegate> * delegate;
@property(retain) <QLPreviewItem> * previewItem;
@property int previewMode;
@property int index;
@property BOOL loaded;
@property BOOL loading;
@property(retain) NSString * password;
@property(readonly) int airPlayMode;
@property(readonly) UIView * accessoryView;
@property(readonly) UIView * airplayView;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } contentFrame;

+ (BOOL)needsAVControls;
+ (double)allowedLoadingDelay;

- (BOOL)loading;
- (BOOL)loaded;
- (void)cancelLoad;
- (struct { int x1; struct { unsigned int x_2_1_1[8]; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; })clientContext;
- (void)setClientContext:(struct { int x1; struct { unsigned int x_2_1_1[8]; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; })arg1;
- (void)setLoading:(BOOL)arg1;
- (int)previewMode;
- (void)setPreviewMode:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentFrame;
- (void)setPassword:(id)arg1;
- (id)printPageRenderer;
- (void)setIndex:(int)arg1;
- (id)accessoryView;
- (int)index;
- (void)viewDidAppear:(BOOL)arg1;
- (int)modalPresentationStyle;
- (void)didReceiveMemoryWarning;
- (id)delegate;
- (id)gestureRecognizersForFullScreenDisplay;
- (void)endScrubbing;
- (void)scrubToValue:(double)arg1;
- (void)beginScrubbing;
- (id)printPageHelper;
- (id)pdfPreviewData;
- (void)setNavigationBarVerticalOffset:(float)arg1;
- (void)discardAirPlayView;
- (void)setupAirPlayView;
- (void)endTrackingViewUpdates;
- (void)beginTrackingViewUpdates;
- (int)airPlayMode;
- (BOOL)canCopyToPasteboard;
- (BOOL)acceptControllerTouch:(id)arg1 fromGestureRecognizer:(id)arg2;
- (void)requiresDisplayBundle:(id)arg1 withHints:(id)arg2;
- (void)didFailLoadingWithError:(id)arg1;
- (BOOL)overlayIsHidden;
- (void)cancelLoadIfNeeded;
- (BOOL)canBeCached;
- (void)viewDidUpdate;
- (id)airplayView;
- (void)_notifyDidLoadWithError:(id)arg1;
- (void)didLoad;
- (void)loadIfNeededWithHints:(id)arg1;
- (void)_performCancelLoad;
- (void)loadWithHints:(id)arg1;
- (void)togglePlayState;
- (void)setOverlayHidden:(BOOL)arg1 duration:(double)arg2;
- (void)enterBackground;
- (void)setPreviewItem:(id)arg1;
- (id)previewItem;
- (void)setLoaded:(BOOL)arg1;
- (id)description;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)init;
- (id)password;

@end