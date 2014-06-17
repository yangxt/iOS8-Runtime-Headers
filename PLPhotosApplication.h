/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIWindow, BLActivityAlert, PLUIController, NSMutableSet, NSString, NSDictionary, NSMutableDictionary;

@interface PLPhotosApplication : UIApplication <UIApplicationDelegate, PLPublishingAgentDelegate> {
    PLUIController *_uiController;
    int _delaySuspendCount;
    BOOL _receivingRemoteControlEvents;
    BOOL _wantsToSuspend;
    unsigned int _backgroundTaskIdentifier;
    BOOL _isRemaking;
    BOOL _cameraCancelledRemaking;
    UIWindow *_window;
    NSMutableSet *_publishingAgents;
    NSMutableDictionary *_publishingAgentsByMediaItem;
    int _enableNetworkingFlagsCount;
    BOOL _inactiveUnderTaskSwitcher;
    BOOL _urlNeedsHandling;
    BOOL _shouldCancelPublishAfterRemaking;
    int _observeForRechabilityChanges;
    BOOL _isReachable;
    BOOL _isOnWifi;
    BOOL _photoStreamIsBusy;
    BOOL _sharedPhotoStreamIsBusy;
    int _photoStreamActivityToken;
    int _sharedPhotoStreamActivityToken;
    int _sharedPhotoStreamInvitationFailureToken;
    NSString *_currentTestName;
    NSDictionary *_currentTestOptions;
    BLActivityAlert *_iPhotoMigrationActivityAlert;
}

@property(readonly) BOOL isReachable;
@property(readonly) BOOL isOnWifi;
@property(retain) NSString * currentTestName;
@property(retain) NSDictionary * currentTestOptions;
@property(retain) BLActivityAlert * iPhotoMigrationActivityAlert;
@property(retain) UIWindow * window;

+ (void)initialize;

- (void)_stopObservingReachabilityChanges;
- (void)_startObservingReachabilityChanges;
- (void)_networkReachabilityDidChange:(id)arg1;
- (void)photosPreferencesChanged;
- (void)setCurrentTestOptions:(id)arg1;
- (id)currentTestOptions;
- (void)setCurrentTestName:(id)arg1;
- (id)currentTestName;
- (BOOL)visitViewControllersWithBlock:(id)arg1;
- (id)publishingAgentForMediaItem:(id)arg1;
- (BOOL)useCompatibleSuspensionAnimation;
- (void)_finishExtendedTest;
- (void)publishingAgentDidEndPublishing:(id)arg1 error:(id)arg2;
- (void)presentInternalSettingsController;
- (void)_updateNetworkActivityIndicatorAsync;
- (void)cleanStateAfterPublishForAgent:(id)arg1;
- (void)addPublishingAgent:(id)arg1;
- (void)setEnableNetworkingFlags:(BOOL)arg1;
- (void)_unregisterForPhotoStreamActivityNotifications;
- (void)_updateSuspensionSettings;
- (void)_clearPublishingSheetResponders;
- (id)currentUIConfiguration;
- (void)_updateSharedPhotoStreamProgressDisplay;
- (void)_updatePhotoStreamProgressDisplay;
- (void)setIPhotoMigrationActivityAlert:(id)arg1;
- (id)iPhotoMigrationActivityAlert;
- (void)_statusBarDoubleTap:(id)arg1;
- (void)sharedFinishedLaunching:(BOOL)arg1;
- (void)_registerForPhotoStreamActivityNotifications;
- (void)_showAlertForInterruptionDuringRemaking;
- (id)mainWindow;
- (void)_setImageOptions;
- (void)_cleanUpPendingRemakingAndPublishIfNeeded;
- (void)_cancelPublish;
- (void)_discardMediaFilesForPublishingAgentsIfNeeded;
- (void)publishingAgentDidEndRemaking:(id)arg1 didSucceed:(BOOL)arg2;
- (void)publishingAgentDidStartRemaking:(id)arg1;
- (void)publishingAgentWillBeDisplayed:(id)arg1;
- (void)publishingAgentDidBeginPublishing:(id)arg1;
- (void)publishingAgentDoneButtonClicked:(id)arg1;
- (void)publishingAgentCancelButtonClicked:(id)arg1;
- (BOOL)isOnWifi;
- (void)disableNetworkObservation;
- (void)enableNetworkObservation;
- (void)setReceivingRemoteControlEvents:(BOOL)arg1;
- (void)_cancelRemaking;
- (BOOL)isReachable;
- (void)_applicationDidResignActive:(id)arg1;
- (void)setDelaySuspend:(BOOL)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (id)rootViewController;
- (BOOL)applicationSuspend:(struct __GSEvent { }*)arg1 settings:(id)arg2;
- (id)_extendLaunchTest;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void*)getSharedAddressBook;
- (void)setIsRemaking:(BOOL)arg1;
- (BOOL)shouldAllowSBAlertSupression;
- (BOOL)isCameraApp;
- (void)dealloc;

@end