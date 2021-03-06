/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, MPAVRoutingController, UIWindow, UIViewController;

@interface MPAudioVideoRoutingActionSheet : UIActionSheet <UIActionSheetDelegate> {
    int _airPlayPasswordAlertDidAppearToken;
    BOOL _airPlayPasswordAlertDidAppearTokenIsValid;
    MPAVRoutingController *_routingController;
    unsigned int _avItemType;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    UIViewController *_viewControllerForActionSheet;
    UIWindow *_windowForActionSheet;
    BOOL _shouldPauseAfterDismissing;
    NSArray *_displayedRoutes;
}


- (void)showWithValidInterfaceOrientationMaskBlock:(id)arg1 completionHandler:(id)arg2;
- (void).cxx_destruct;
- (id)initWithType:(unsigned int)arg1;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (void)showInPopoverFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 backgroundStyle:(int)arg3 animated:(BOOL)arg4 completionHandler:(id)arg5;
- (void)showWithValidInterfaceOrientationsBlock:(id)arg1 completionHandler:(id)arg2;
- (void)showFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(BOOL)arg3 withCompletionHandler:(id)arg4;
- (void)showWithValidInterfaceOrientationMaskBlock:(id)arg1 windowLevel:(float)arg2 completionHandler:(id)arg3;
- (void)_debugButtonAction:(id)arg1;
- (id)initWithType:(unsigned int)arg1 routingController:(id)arg2;
- (BOOL)_isDeviceVideoRoute:(id)arg1;
- (id)_availableRoutes;

@end
