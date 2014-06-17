/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@class NSMutableDictionary, NSDictionary;

@interface ATUserDefaults : NSObject  {
    NSMutableDictionary *_defaults;
}

@property BOOL hasCompletedDataMigration;
@property(retain) NSDictionary * diskUsageInfo;

+ (id)readOnlyDefaults;
+ (void)synchronize;

- (id)diskUsageInfo;
- (void)setDiskUsageInfo:(id)arg1;
- (id)allHosts;
- (id)hostInfoForIdentifier:(id)arg1;
- (void)removeHost:(id)arg1;
- (void)updateLastSyncWithHostLibrary:(id)arg1;
- (void)updateHostInfo:(id)arg1 disabledAssetTypes:(id)arg2;
- (void)_updateDefaults;
- (BOOL)hasCompletedDataMigration;
- (void)setHasCompletedDataMigration:(BOOL)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end