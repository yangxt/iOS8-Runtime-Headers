/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLWallpaperNavigationItem, NSString, NSArray, UIActionSheet, SBSUIWallpaperPreviewViewController;

@interface PLWallpaperImageViewController : PLUIEditImageViewController <SBFLegibilitySettingsProviderDelegate, UIActionSheetDelegate> {
    PLWallpaperNavigationItem *_navItem;
    int _wallpaperMode;
    NSArray *_navigationToolbarItems;
    BOOL _saveWallpaperData;
    NSString *_wallpaperTitle;
    UIActionSheet *_wallpaperOptionsSheet;
    unsigned int _didSetImageMode : 1;
    BOOL _isWallpaperEdit;
    SBSUIWallpaperPreviewViewController *_wallpaperPreviewViewController;
    int _previewVariant;
    int _previewType;
}

@property(retain) SBSUIWallpaperPreviewViewController * wallpaperPreviewViewController;
@property BOOL saveWallpaperData;
@property(copy) NSString * wallpaperTitle;
@property int previewVariant;
@property int previewType;
@property BOOL isWallpaperEdit;


- (int)imageFormat;
- (void)setIsWallpaperEdit:(BOOL)arg1;
- (BOOL)isWallpaperEdit;
- (int)previewType;
- (int)previewVariant;
- (void)setWallpaperTitle:(id)arg1;
- (void)setupWallpaperPreview;
- (void)_adjustScrollViewGeometry;
- (void)setWallpaperFromArgs:(id)arg1;
- (void)providerLegibilitySettingsChanged:(id)arg1;
- (void)_displayWallpaperOptionsSheet;
- (void)_savePhoto;
- (void)setWallpaperSynchronouslyFromArgs:(id)arg1;
- (BOOL)saveWallpaperData;
- (void)_cropWallpaperFinished:(id)arg1;
- (void)_backgroundCropWallpaper;
- (id)wallpaperTitle;
- (void)_updatePreviewFrame:(id)arg1;
- (void)_updateTitles;
- (void)setWallpaperPreviewViewController:(id)arg1;
- (id)initWithWallpaperVariant:(int)arg1;
- (void)setPreviewType:(int)arg1;
- (void)setPreviewVariant:(int)arg1;
- (void)prepareForForeground:(id)arg1;
- (void)prepareForBackground:(id)arg1;
- (id)wallpaperPreviewViewController;
- (int)desiredStatusBarAnimation;
- (BOOL)wantsStatusBarVisible;
- (BOOL)clientIsWallpaper;
- (unsigned int)_tileAutoresizingMask;
- (void)setupNavigationItem;
- (unsigned int)_contentAutoresizingMask;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_viewFrame;
- (int)cropOverlayMode;
- (BOOL)uiipc_useTelephonyUI;
- (void)motionToggledManually:(BOOL)arg1;
- (void)setImageAsHomeScreenAndLockScreenClicked:(id)arg1;
- (void)setImageAsLockScreenClicked:(id)arg1;
- (void)setImageAsHomeScreenClicked:(id)arg1;
- (void)cropOverlayWasOKed:(id)arg1;
- (void)cropOverlayWasCancelled:(id)arg1;
- (void)photoTileViewControllerRequestsFullScreenImage:(id)arg1;
- (id)initWithUIImage:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)loadView;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)navigationItem;
- (void)setSaveWallpaperData:(BOOL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)dealloc;
- (id)init;

@end