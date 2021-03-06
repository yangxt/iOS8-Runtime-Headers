/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/StoreBookkeeperClient
 */

@class NSString;

@interface SBCPlaybackPositionDomain : NSObject <NSCopying, NSSecureCoding> {
    BOOL _supportsSyncProtocol;
    NSString *_domainIdentifier;
    NSString *_ubiquitousDatabasePath;
    NSString *_foreignDatabasePath;
}

@property(readonly) NSString * domainIdentifier;
@property(retain) NSString * ubiquitousDatabasePath;
@property(readonly) NSString * foreignDatabasePath;
@property BOOL supportsSyncProtocol;

+ (id)domainForExtrasValues;
+ (id)allSyncingDomains;
+ (id)domainForSyncingMusicLibraryWithLibraryPath:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (id)foreignDatabasePath;
- (id)ubiquitousDatabasePath;
- (void)setUbiquitousDatabasePath:(id)arg1;
- (void)setSupportsSyncProtocol:(BOOL)arg1;
- (id)initWithDomainIdentifier:(id)arg1 foreignDatabasePath:(id)arg2;
- (BOOL)supportsSyncProtocol;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)domainIdentifier;

@end
