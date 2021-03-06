/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@class NSDictionary, NSMutableDictionary, NSMutableSet;

@interface AXHASettings : NSObject  {
    NSMutableSet *_registeredNotifications;
    NSMutableSet *_synchronizePreferences;
    NSMutableDictionary *_updateBlocks;
}

@property(retain) NSDictionary * pairedHearingAids;
@property BOOL independentHearingAidSettings;
@property BOOL allowHearingAidControlOnLockScreen;
@property BOOL shouldStreamToLeftAid;
@property BOOL shouldStreamToRightAid;
@property(retain) NSMutableSet * registeredNotifications;
@property(retain) NSMutableSet * synchronizePreferences;
@property(retain) NSMutableDictionary * updateBlocks;

+ (void)initialize;
+ (id)sharedInstance;

- (void)setRegisteredNotifications:(id)arg1;
- (id)registeredNotifications;
- (void)setUpdateBlocks:(id)arg1;
- (void)setShouldStreamToRightAid:(BOOL)arg1;
- (void)setShouldStreamToLeftAid:(BOOL)arg1;
- (void)setAllowHearingAidControlOnLockScreen:(BOOL)arg1;
- (void)setIndependentHearingAidSettings:(BOOL)arg1;
- (void)setPairedHearingAids:(id)arg1;
- (void)registerUpdateBlock:(id)arg1 forRetrieveSelector:(SEL)arg2 withListener:(id)arg3;
- (void)_handlePreferenceChanged:(id)arg1;
- (id)_valueForPreferenceKey:(id)arg1;
- (id)_preferenceKeyForSelector:(SEL)arg1;
- (id)updateBlocks;
- (void)_registerForNotification:(id)arg1;
- (id)_notificationForPreferenceKey:(id)arg1;
- (void)_setValue:(id)arg1 forPreferenceKey:(id)arg2;
- (BOOL)independentHearingAidSettings;
- (id)pairedHearingAids;
- (BOOL)shouldStreamToRightAid;
- (BOOL)shouldStreamToLeftAid;
- (BOOL)allowHearingAidControlOnLockScreen;
- (void)setSynchronizePreferences:(id)arg1;
- (void)_synchronizeIfNecessary:(id)arg1;
- (void)setLocalHearingAidsFromiCloud:(id)arg1;
- (void)pushLocalHearingAidsToiCloud;
- (void)icloudHearingSettingsDidChange:(id)arg1;
- (id)synchronizePreferences;
- (void)dealloc;
- (id)init;

@end
