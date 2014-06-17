/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@class NSSet, NSString, NSDictionary;

@interface MBDomain : NSObject  {
    BOOL _shouldDigest;
    NSString *_rootPath;
    NSString *_name;
    NSSet *_relativePathsToBackupAndRestore;
    NSSet *_relativePathsNotToBackup;
    NSSet *_relativePathsNotToBackupToDrive;
    NSSet *_relativePathsNotToBackupToService;
    NSSet *_relativePathsToOnlyBackupEncrypted;
    NSSet *_relativePathsNotToCheckIfModifiedDuringBackup;
    NSSet *_relativePathsToRestoreOnly;
    NSSet *_relativePathsToRestoreOnlyFromService;
    NSSet *_relativePathsToRemoveOnRestore;
    NSSet *_relativePathsOfSystemFilesToAlwaysRestore;
    NSSet *_relativePathsOfSystemFilesToAlwaysRemoveOnRestore;
    NSSet *_relativePathsNotToRestore;
    NSSet *_relativePathsNotToMigrate;
    NSSet *_relativePathsNotToRestoreToIPods;
    NSSet *_relativePathsNotToBackupAndRestoreToAppleTVs;
    NSSet *_relativePathsToBackgroundRestore;
    NSSet *_relativePathsNotToRemoveIfNotRestored;
    NSDictionary *_relativePathAggregateDictionaryGroups;
    NSDictionary *_relativePathDomainRedirects;
}

@property(readonly) NSString * name;
@property(readonly) NSString * rootPath;
@property(readonly) NSString * bundleID;
@property(readonly) NSSet * relativePathsToBackup;
@property(retain) NSSet * relativePathsToBackupAndRestore;
@property(retain) NSSet * relativePathsNotToBackup;
@property(retain) NSSet * relativePathsNotToBackupToDrive;
@property(retain) NSSet * relativePathsNotToBackupToService;
@property(retain) NSSet * relativePathsToOnlyBackupEncrypted;
@property(retain) NSSet * relativePathsNotToCheckIfModifiedDuringBackup;
@property(readonly) NSSet * relativePathsToRestore;
@property(retain) NSSet * relativePathsToRestoreOnly;
@property(retain) NSSet * relativePathsToRestoreOnlyFromService;
@property(retain) NSSet * relativePathsToRemoveOnRestore;
@property(retain) NSSet * relativePathsOfSystemFilesToAlwaysRestore;
@property(retain) NSSet * relativePathsOfSystemFilesToAlwaysRemoveOnRestore;
@property(retain) NSSet * relativePathsNotToRestore;
@property(retain) NSSet * relativePathsNotToMigrate;
@property(retain) NSSet * relativePathsNotToRestoreToIPods;
@property(retain) NSSet * relativePathsNotToBackupAndRestoreToAppleTVs;
@property(retain) NSSet * relativePathsToBackgroundRestore;
@property(retain) NSSet * relativePathsNotToRemoveIfNotRestored;
@property(retain) NSDictionary * relativePathAggregateDictionaryGroups;
@property(retain) NSDictionary * relativePathDomainRedirects;
@property BOOL shouldDigest;
@property(getter=isAppDomain,readonly) BOOL appDomain;
@property(getter=isPlaceholderAppDomain,readonly) BOOL placeholderAppDomain;
@property(getter=isUninstalledAppDomain,readonly) BOOL installedAppDomain;

+ (id)uninstalledAppDomainWithBundleID:(id)arg1;
+ (id)appPlaceholderDomainWithBundleID:(id)arg1 rootPath:(id)arg2;
+ (id)appDomainWithBundleID:(id)arg1 rootPath:(id)arg2;
+ (id)systemDomainsByName;
+ (id)systemDomains;
+ (id)bundleIDWithName:(id)arg1;
+ (BOOL)isAppPlaceholderName:(id)arg1;
+ (BOOL)isAppName:(id)arg1;
+ (id)_dictionaryOfStringsToStringFromValue:(id)arg1 forKey:(id)arg2;
+ (id)_relativePathsByAddingSQLiteJournals:(id)arg1;
+ (id)_setOfStringsFromValue:(id)arg1 forKey:(id)arg2;
+ (BOOL)_boolFromValue:(id)arg1 forKey:(id)arg2;
+ (id)domainWithName:(id)arg1 rootPath:(id)arg2;
+ (void)_loadSystemDomains;
+ (double)_doubleFromStringValueForKey:(id)arg1 plist:(id)arg2;
+ (id)_stringByRemovingCommentsFromValue:(id)arg1 forKey:(id)arg2;
+ (id)nameWithAppBundleID:(id)arg1;
+ (double)systemDomainsMaxSupportedVersion;
+ (double)systemDomainsMinSupportedVersion;
+ (double)systemDomainsVersion;

- (void)setShouldDigest:(BOOL)arg1;
- (BOOL)shouldDigest;
- (void)setRelativePathDomainRedirects:(id)arg1;
- (id)relativePathDomainRedirects;
- (void)setRelativePathAggregateDictionaryGroups:(id)arg1;
- (id)relativePathAggregateDictionaryGroups;
- (void)setRelativePathsNotToRemoveIfNotRestored:(id)arg1;
- (id)relativePathsNotToRemoveIfNotRestored;
- (void)setRelativePathsToBackgroundRestore:(id)arg1;
- (id)relativePathsToBackgroundRestore;
- (void)setRelativePathsNotToBackupAndRestoreToAppleTVs:(id)arg1;
- (id)relativePathsNotToBackupAndRestoreToAppleTVs;
- (void)setRelativePathsNotToRestoreToIPods:(id)arg1;
- (id)relativePathsNotToRestoreToIPods;
- (void)setRelativePathsNotToMigrate:(id)arg1;
- (id)relativePathsNotToMigrate;
- (void)setRelativePathsNotToRestore:(id)arg1;
- (id)relativePathsNotToRestore;
- (void)setRelativePathsOfSystemFilesToAlwaysRemoveOnRestore:(id)arg1;
- (id)relativePathsOfSystemFilesToAlwaysRemoveOnRestore;
- (void)setRelativePathsOfSystemFilesToAlwaysRestore:(id)arg1;
- (id)relativePathsOfSystemFilesToAlwaysRestore;
- (void)setRelativePathsToRemoveOnRestore:(id)arg1;
- (id)relativePathsToRemoveOnRestore;
- (void)setRelativePathsToRestoreOnlyFromService:(id)arg1;
- (id)relativePathsToRestoreOnlyFromService;
- (void)setRelativePathsToRestoreOnly:(id)arg1;
- (id)relativePathsToRestoreOnly;
- (void)setRelativePathsNotToCheckIfModifiedDuringBackup:(id)arg1;
- (id)relativePathsNotToCheckIfModifiedDuringBackup;
- (void)setRelativePathsToOnlyBackupEncrypted:(id)arg1;
- (id)relativePathsToOnlyBackupEncrypted;
- (void)setRelativePathsNotToBackupToService:(id)arg1;
- (id)relativePathsNotToBackupToService;
- (void)setRelativePathsNotToBackupToDrive:(id)arg1;
- (id)relativePathsNotToBackupToDrive;
- (void)setRelativePathsNotToBackup:(id)arg1;
- (id)relativePathsNotToBackup;
- (void)setRelativePathsToBackupAndRestore:(id)arg1;
- (id)relativePathsToBackupAndRestore;
- (id)rootPath;
- (BOOL)isUninstalledAppDomain;
- (BOOL)isPlaceholderAppDomain;
- (id)relativePathsToRestore;
- (id)relativePathsToBackup;
- (BOOL)isEqualToDomain:(id)arg1;
- (id)initWithName:(id)arg1 rootPath:(id)arg2;
- (id)initWithName:(id)arg1 plist:(id)arg2;
- (BOOL)isAppDomain;
- (id)bundleID;
- (int)compare:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (id)description;
- (void)dealloc;

@end