/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class CAMCameraRollSpec, DeferredFrameworkLoader;

@interface DeferredPUCameraApplicationViewController : CAMApplicationViewController  {
    CAMCameraRollSpec *_spec;
    DeferredFrameworkLoader *_deferredLoader;
}

@property(retain) CAMCameraRollSpec * spec;
@property(retain) DeferredFrameworkLoader * deferredLoader;


- (void)setDeferredLoader:(id)arg1;
- (id)deferredLoader;
- (id)initForCurrentPlatformWithSessionID:(id)arg1 usesCameraLocationBundleID:(BOOL)arg2 startPreviewImmediately:(BOOL)arg3;
- (id)initForCurrentPlatformWithSessionID:(id)arg1 startPreviewImmediately:(BOOL)arg2;
- (id)_initWithSessionID:(id)arg1 usesCameraLocationBundleID:(BOOL)arg2 startPreviewImmediately:(BOOL)arg3;
- (void)prepareAlbumNavigationControllerForReuse:(id)arg1 withCameraRoll:(id)arg2;
- (id)newAlbumNavigationControllerForCameraRoll:(id)arg1;
- (void).cxx_destruct;
- (BOOL)_navigationControllerShouldCrossFadeBottomBars:(id)arg1;
- (id)navigationController:(id)arg1 interactionControllerUsingAnimator:(id)arg2;
- (id)navigationController:(id)arg1 animatorForOperation:(int)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (BOOL)definesPresentationContext;
- (void)setSpec:(id)arg1;
- (id)spec;

@end