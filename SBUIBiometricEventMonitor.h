/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@class NSHashTable, <SBUIBiometricEventMonitorDelegate>, BiometricKit, NSCountedSet;

@interface SBUIBiometricEventMonitor : NSObject <BiometricKitDelegate> {
    BiometricKit *_biometricKit;
    <SBUIBiometricEventMonitorDelegate> *_delegate;
    NSHashTable *_observers;
    unsigned int _lastEvent;
    NSCountedSet *_matchingDisabledRequesters;
    NSCountedSet *_activePasscodeViews;
    BOOL _matchingEnabled;
    BOOL _screenIsOff;
    BOOL _deviceLocked;
    BOOL _lockScreenTopmost;
    BOOL _shouldSendFingerOffNotification;
}

@property <SBUIBiometricEventMonitorDelegate> * delegate;

+ (id)sharedInstance;

- (void)_deviceWillWake;
- (void)noteScreenWillTurnOn;
- (void)noteScreenDidTurnOff;
- (void)noteScreenWillTurnOff;
- (void)_setDeviceLocked:(BOOL)arg1;
- (void)setLockScreenTopmost:(BOOL)arg1;
- (void)setMatchingDisabled:(BOOL)arg1 requester:(id)arg2;
- (BOOL)isMatchingEnabled;
- (id)stringForEvent:(unsigned int)arg1;
- (BOOL)hasEnrolledIdentities;
- (void)statusMessage:(unsigned int)arg1;
- (void)matchResult:(id)arg1 withDetails:(id)arg2;
- (void)_updateHandlersForEvent:(unsigned int)arg1;
- (BOOL)shouldEnableReachabilityForUIKitTesting;
- (void)_stopMatching;
- (void)_startMatching;
- (void)_reevaluateMatching;
- (void)_profileSettingsChanged:(id)arg1;
- (void)_setMatchingEnabled:(BOOL)arg1;
- (void)disableMatchingForPasscodeView:(id)arg1;
- (void)enableMatchingForPasscodeView:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)init;

@end