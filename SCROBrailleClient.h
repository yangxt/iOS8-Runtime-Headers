/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@class NSMutableAttributedString, NSData, NSLock, SCROConnection, SCRCTargetSelectorTimer;

@interface SCROBrailleClient : NSObject  {
    SCROConnection *_connection;
    NSLock *_lock;
    id _delegate;
    NSMutableAttributedString *_mainStringPending;
    NSMutableAttributedString *_mainStringCache;
    NSData *_aggregatedStatusPending;
    NSData *_aggregatedStatusCache;
    SCRCTargetSelectorTimer *_deathTimer;
    BOOL _isReady;
    BOOL _needsDisplay;
    BOOL _keepConnectionAlive;
    BOOL _delegateWantsKeypresses;
    BOOL _wantsDisconnectMessage;
    BOOL _wantsReconnectMessage;
    BOOL _wantsDisplayConfigurationChanged;
    BOOL _displayDescriptorCallbackEnabled;
}


- (void)handleCallback:(id)arg1;
- (void)setPrepareToMemorizeNextKey:(BOOL)arg1 immediate:(BOOL)arg2 forDisplayWithToken:(long)arg3;
- (int)tokenForRouterIndex:(int)arg1 location:(int*)arg2 appToken:(id*)arg3 forDisplayWithToken:(long)arg4;
- (void)showNextAnnouncement;
- (void)showPreviousAnnouncement;
- (BOOL)showDotsSevenAndEight;
- (void)setShowDotsSevenAndEight:(BOOL)arg1;
- (void)setShowEightDotBraille:(BOOL)arg1;
- (BOOL)showEightDotBraille;
- (void)setContractionMode:(int)arg1;
- (id)tableIdentifier;
- (void)exitCurrentDisplayMode;
- (void)setAnnouncementsDisplayMode;
- (void)panDisplayRight:(long)arg1;
- (void)panDisplayLeft:(long)arg1;
- (void)setMainAttributedString:(id)arg1;
- (id)mainAttributedString;
- (void)setPrimaryBrailleDisplay:(long)arg1;
- (BOOL)alwaysUsesNemethCodeForTechnicalText;
- (void)setAlwaysUsesNemethCodeForTechnicalText:(BOOL)arg1;
- (id)driverConfiguration;
- (void)setAutomaticBrailleTranslationEnabled:(BOOL)arg1;
- (BOOL)automaticBrailleTranslationEnabled;
- (void)simulateKeypress:(id)arg1;
- (long)masterStatusCellIndex;
- (int)virtualStatusAlignment;
- (void)setVirtualStatusAlignment:(int)arg1;
- (id)aggregatedStatus;
- (void)setAggregatedStatus:(id)arg1;
- (void)setMasterStatusCellIndex:(long)arg1;
- (int)contractionMode;
- (void)setFocused:(BOOL)arg1 forToken:(int)arg2;
- (void)unselectAllForToken:(int)arg1;
- (void)selectAllForToken:(int)arg1;
- (void)setSelection:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 forToken:(int)arg2;
- (id)tokenArray;
- (BOOL)displayDescriptorCallbackEnabled;
- (void)setExpandedStatusDisplayModeWithStatus:(id)arg1;
- (id)pendingAggregatedStatus;
- (void)setAlertString:(id)arg1 timeout:(double)arg2 priority:(int)arg3;
- (void)setAnnouncementString:(id)arg1;
- (id)pendingMainAttributedString;
- (void)setTableIdentifier:(id)arg1;
- (void)removeDisplayWithBluetoothDeviceAddress:(id)arg1;
- (void)loadDisplayWithBluetoothDeviceAddress:(id)arg1;
- (BOOL)keepConnectionAlive;
- (void)setKeepConnectionAlive:(BOOL)arg1;
- (void)_deviceConnected:(id)arg1;
- (void)_setupDeviceDetection;
- (void)setDisplayDescriptorCallbackEnabled:(BOOL)arg1;
- (void)_refreshAfterReconnect;
- (id)_getWorkingString;
- (void)_registerDelegate;
- (id)_lazyConnection;
- (void)_deathTimerHandler;
- (id)initWithDelegate:(id)arg1;
- (int)displayMode;
- (void)displayIfNeeded;
- (BOOL)needsDisplay;
- (void)display;
- (id)delegate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)init;
- (BOOL)isConfigured;
- (BOOL)isConnected;

@end
