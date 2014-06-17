/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSArray;

@interface ISSoftwareMap : NSObject  {
    NSArray *_applications;
}

@property(readonly) NSArray * applications;

+ (void)invalidateCurrentMap;
+ (void)startObservingNotifications;
+ (id)applicationForBundleIdentifier:(id)arg1;
+ (id)loadedMap;
+ (void)_startWatchingInstallationNotifications;
+ (void)enumerateApplicationsForProxies:(id)arg1 usingBlock:(id)arg2;
+ (BOOL)haveApplicationsOfType:(id)arg1;
+ (id)containerPathForApp:(id)arg1 homeDirectory:(id)arg2 systemMetadataDirectory:(id)arg3;
+ (id)_newSoftwareUpdateDictionaryForApplication:(id)arg1;
+ (id)copySoftwareUpdatesPropertyListWithApplications:(id)arg1 updatesContext:(id)arg2;
+ (id)currentMap;
+ (void)setCurrentMap:(id)arg1;
+ (BOOL)currentMapIsValid;
+ (id)applicationForBundleIdentifier:(id)arg1 applicationType:(id)arg2;

- (id)applicationForBundleIdentifier:(id)arg1;
- (id)applications;
- (id)applicationForItemIdentifier:(id)arg1;
- (id)copySoftwareUpdatesPropertyList;
- (id)copySoftwareUpdatesPropertyListWithUpdatesContext:(id)arg1;
- (void)_loadFromMobileInstallation;
- (void)dealloc;
- (id)init;

@end