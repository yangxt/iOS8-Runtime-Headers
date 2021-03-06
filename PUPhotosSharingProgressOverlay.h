/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class UIView;

@interface PUPhotosSharingProgressOverlay : UIView  {
    BOOL _isShowing;
    UIView *_progressView;
}

@property(retain) UIView * progressView;


- (void).cxx_destruct;
- (id)progressView;
- (void)setProgressView:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_tearDownOverlayAnimated:(BOOL)arg1;
- (void)_setupOverlayAnimated:(BOOL)arg1;
- (id)_grayScaleImageFromImage:(id)arg1;
- (id)_screenshotImage;
- (void)_installInStatusBarWindow;
- (id)_statusBarWindow;
- (void)setShowing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)addProgressView:(id)arg1;

@end
