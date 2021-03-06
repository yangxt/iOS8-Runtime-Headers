/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadarCompose.framework/RadarCompose
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIImageView, UIImage, UIColor, UIBarButtonItem, UIScrollView, UITapGestureRecognizer;

@interface RCImageViewer : UIViewController <UIScrollViewDelegate, UIGestureRecognizerDelegate, UINavigationControllerDelegate> {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _dismissHandler;

    BOOL _previousNavBarHidden;
    BOOL _previousNavBarTranslucent;
    int _previousNavBarStyle;
    int _previousStatusBarStyle;
    UIColor *_previousNavBarTintColor;
    UIColor *_previousNavBarBarTintColor;
    UIBarButtonItem *_previousViewControllerBackButton;
    UIImage *_previousNavigationBarBackgroundImageDefault;
    UIImage *_previousNavigationBarBackgroundImageLandscapePhone;
    BOOL _oldPreviousNavBarTranslucent;
    BOOL _oldPreviousNavBarHidden;
    BOOL _shouldRemoveImage;
    UIImage *_image;
    int _oldPreviousNavBarStyle;
    UIColor *_oldPreviousNavBarTintColor;
    UIScrollView *_scrollView;
    UIImageView *_imageView;
    UITapGestureRecognizer *_doubleTapRecognizer;
}

@property(retain) UIImage * image;
@property int oldPreviousNavBarStyle;
@property BOOL oldPreviousNavBarTranslucent;
@property(retain) UIColor * oldPreviousNavBarTintColor;
@property BOOL oldPreviousNavBarHidden;
@property(retain) UIScrollView * scrollView;
@property(retain) UIImageView * imageView;
@property(retain) UITapGestureRecognizer * doubleTapRecognizer;
@property BOOL shouldRemoveImage;


- (id)initWithImage:(id)arg1 andDismissHandler:(id)arg2;
- (void)setOldPreviousNavBarHidden:(BOOL)arg1;
- (void)setOldPreviousNavBarStyle:(int)arg1;
- (void)setOldPreviousNavBarTranslucent:(BOOL)arg1;
- (void)setOldPreviousNavBarTintColor:(id)arg1;
- (BOOL)oldPreviousNavBarHidden;
- (int)oldPreviousNavBarStyle;
- (BOOL)oldPreviousNavBarTranslucent;
- (id)oldPreviousNavBarTintColor;
- (BOOL)shouldRemoveImage;
- (void)restoreNavBar;
- (void)setNavbar;
- (void)saveNavBar;
- (void)removeImage:(id)arg1;
- (id)doubleTapRecognizer;
- (void)setDoubleTapRecognizer:(id)arg1;
- (void)handleDoubleTapGesture:(id)arg1;
- (void)setShouldRemoveImage:(BOOL)arg1;
- (void)dismiss:(id)arg1;
- (void).cxx_destruct;
- (void)setImageView:(id)arg1;
- (id)imageView;
- (id)scrollView;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)setScrollView:(id)arg1;
- (id)image;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)setImage:(id)arg1;

@end
