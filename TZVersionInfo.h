/* Generated by RuntimeBrowser.
   Image: /usr/lib/libtzupdate.dylib
 */

@class NSArray, NSString, NSNumber, NSURL;

@interface TZVersionInfo : NSObject  {
    NSString *_icuChecksumBaseline;
    NSString *_icuNameBaseline;
    NSString *_icuChecksumCurrent;
    NSString *_icuNameCurrent;
    NSString *_tzDataVersion;
    NSNumber *_bundleVersion;
    NSArray *_changedFiles;
    NSNumber *_shouldAlertAll;
    NSURL *_diskLocation;
}

@property(retain) NSString * icuChecksumBaseline;
@property(retain) NSString * icuNameBaseline;
@property(retain) NSString * icuChecksumCurrent;
@property(retain) NSString * icuNameCurrent;
@property(retain) NSString * tzDataVersion;
@property(retain) NSNumber * bundleVersion;
@property(retain) NSArray * changedFiles;
@property(retain) NSNumber * shouldAlertAll;
@property(readonly) NSString * versionString;
@property(retain) NSURL * diskLocation;

+ (id)_tzDataVersionFromZoneinfoDirectory:(id)arg1 withError:(id*)arg2;
+ (BOOL)_verifyVersionInfoDictionary:(id)arg1;
+ (id)versionInfoWithDictionary:(id)arg1 isPartial:(BOOL)arg2;
+ (id)_stringWithContentsOfFileAtURL:(id)arg1 error:(id*)arg2;
+ (id)versionInfoFromDefaultSystem;
+ (id)blankVersionInfo;
+ (id)versionInfoFromContainerDirectory:(id)arg1;

- (void)setDiskLocation:(id)arg1;
- (void)setShouldAlertAll:(id)arg1;
- (void)setChangedFiles:(id)arg1;
- (void)setTzDataVersion:(id)arg1;
- (void)setIcuNameCurrent:(id)arg1;
- (void)setIcuChecksumCurrent:(id)arg1;
- (void)setIcuNameBaseline:(id)arg1;
- (void)setIcuChecksumBaseline:(id)arg1;
- (id)diskLocation;
- (id)shouldAlertAll;
- (id)changedFiles;
- (id)icuNameCurrent;
- (id)icuChecksumCurrent;
- (id)icuNameBaseline;
- (id)icuChecksumBaseline;
- (id)_initWithVersionInfoDictionary:(id)arg1 isPartial:(BOOL)arg2;
- (BOOL)isBlank;
- (id)tzDataVersion;
- (void)setBundleVersion:(id)arg1;
- (id)bundleVersion;
- (void).cxx_destruct;
- (int)compare:(id)arg1;
- (id)description;
- (id)versionString;

@end
