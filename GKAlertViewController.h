/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKUIAlertView;

@interface GKAlertViewController : UIViewController <UIAlertViewDelegate> {
    BOOL _isShown;
    GKUIAlertView *_alertView;
}

@property BOOL isShown;
@property(retain) GKUIAlertView * alertView;

+ (id)alertViewControllerWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 dismissHandler:(id)arg5;

- (void)setIsShown:(BOOL)arg1;
- (BOOL)isShown;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)loadView;
- (id)alertView;
- (void)setAlertView:(id)arg1;
- (void)dealloc;
- (id)init;

@end
