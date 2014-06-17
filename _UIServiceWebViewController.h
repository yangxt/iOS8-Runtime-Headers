/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class WebUIBrowserLoadingController, _UIServiceWebView;

@interface _UIServiceWebViewController : UIViewController <_UIServiceWebViewControllerProtocol, WebUIBrowserLoadingControllerDelegate> {
    _UIServiceWebView *_uiWebView;
    WebUIBrowserLoadingController *_loadingController;
}

+ (id)_remoteViewControllerInterface;
+ (id)_exportedInterface;

- (void)_remotelyDispatchDidDismissViewController;
- (void)_remotelyDispatchWillPresentViewControllerWithCompletionHandler:(id)arg1;
- (void)_remotelyDecidePolicyForRequest:(id)arg1 inMainFrame:(BOOL)arg2 navigationType:(id)arg3 decisionHandler:(id)arg4;
- (void)browserLoadingController:(id)arg1 didFinishLoadingWithError:(id)arg2 dataSource:(id)arg3;
- (void)browserLoadingControllerDidStartLoading:(id)arg1;
- (void)browserLoadingControllerDidUpdateEstimatedProgress:(id)arg1;
- (void)browserLoadingControllerDidUpdateBackForward:(id)arg1;
- (void)browserLoadingControllerDidUpdateTitle:(id)arg1;
- (void)browserLoadingControllerDidUpdateURLString:(id)arg1;
- (void)_setupRemoteInspectorDetailsForRequestingProcess;
- (id)localizedApplicationNameForProcess:(int)arg1;
- (BOOL)_isInternalInstall;
- (void)_webContentSizeWithReplyHandler:(id)arg1;
- (void)configureWithEncodedSettings:(id)arg1;
- (void)setShouldDecidePolicyRemotely:(BOOL)arg1;
- (void)loadUserTypedAddress:(id)arg1;
- (void)loadEncodedRequest:(id)arg1;
- (void)_willAppearInRemoteViewController;
- (void)goForward;
- (void)goBack;
- (void)stopLoading;
- (id)_makeAlertView;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)reload;
- (void)dealloc;

@end