/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@interface TKCapabilitiesManager : NSObject  {
    BOOL _ringtoneStoreAvailable;
    BOOL _alertToneStoreAvailable;
}

@property(getter=isRingtoneStoreAvailable,readonly) BOOL ringtoneStoreAvailable;
@property(getter=isAlertToneStoreAvailable,readonly) BOOL alertToneStoreAvailable;
@property(readonly) BOOL hasVibratorCapability;
@property(readonly) BOOL hasUserGeneratedVibrationsCapability;
@property(getter=_isRingtoneStoreAvailable,setter=_setRingtoneStoreAvailable:) BOOL _ringtoneStoreAvailable;
@property(getter=_isAlertToneStoreAvailable,setter=_setAlertToneStoreAvailable:) BOOL _alertToneStoreAvailable;

+ (id)sharedCapabilitiesManager;

- (BOOL)hasUserGeneratedVibrationsCapability;
- (BOOL)_isAlertToneStoreAvailable;
- (BOOL)_isRingtoneStoreAvailable;
- (BOOL)_hasTelephonyCapability;
- (void)_checkRingtoneStoreAvailability;
- (void)_setAlertToneStoreAvailable:(BOOL)arg1;
- (void)_setRingtoneStoreAvailable:(BOOL)arg1;
- (BOOL)isAlertToneStoreAvailable;
- (BOOL)isRingtoneStoreAvailable;
- (void)dealloc;
- (id)init;
- (BOOL)hasVibratorCapability;

@end
