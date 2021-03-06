/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIWindow, UIColor;

@interface SUApplication : UIApplication <UIApplicationDelegate> {
    BOOL _terminateOnNextSuspend;
    UIWindow *_window;
    UIColor *_interactionTintColor;
}

@property(copy) UIColor * interactionTintColor;
@property(retain) UIWindow * window;


- (void)runTestInvocation:(id)arg1;
- (void)_runScriptTestWithOptions:(id)arg1;
- (void)_exitForStoreNotAvailable;
- (void)_exitIfStoreNotAvailable;
- (void)_setupUI;
- (void)_teardownUI;
- (void)_storeEnabledChangeNotification:(id)arg1;
- (void)_applicationDidFinishLaunching:(id)arg1;
- (BOOL)runTest:(id)arg1 options:(id)arg2;
- (id)interactionTintColor;
- (void)setInteractionTintColor:(id)arg1;
- (BOOL)applicationSuspend:(struct __GSEvent { }*)arg1 settings:(id)arg2;
- (double)defaultImageSnapshotExpiration;
- (void)applicationDidFinishLaunching:(id)arg1;
- (BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (unsigned int)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)dealloc;
- (id)init;

@end
