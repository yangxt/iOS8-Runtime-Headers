/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSURL, NSString, NSDictionary;

@interface ASAsset : NSObject  {
    NSString *_assetType;
    NSDictionary *_attributes;
    NSDictionary *_downloadOptions;
    NSString *_clientName;
    NSString *_identifier;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _progressHandler;

    struct __MobileAsset { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __CFString {} *x2; struct __CFDictionary {} *x3; struct __MobileAssetQuery {} *x4; struct __MobileAssetQuery {} *x5; unsigned char x6; } *_cfAsset;
}

@property(retain) NSString * clientName;
@property(readonly) NSDictionary * fullAttributes;
@property(readonly) NSString * assetType;
@property(readonly) NSDictionary * attributes;
@property(readonly) int state;
@property(readonly) NSURL * localURL;
@property int garbageCollectionBehavior;
@property(copy) id progressHandler;
@property(retain) NSDictionary * downloadOptions;


- (BOOL)requiredDiskSpaceIsAvailable:(long long*)arg1 error:(id*)arg2;
- (void)adjustDownloadOptions:(id)arg1 completion:(id)arg2;
- (void)cancelDownload:(id)arg1;
- (void)purge:(id)arg1;
- (id)assetType;
- (BOOL)isPresentOnDisk;
- (id)fullAttributes;
- (id)initWithAssetType:(id)arg1 attributes:(id)arg2;
- (id)downloadOptions;
- (int)garbageCollectionBehavior;
- (BOOL)pauseDownloadAndReturnError:(id*)arg1;
- (void)_downloadWithOptions:(id)arg1 shouldFireCallback:(BOOL)arg2;
- (void)setDownloadOptions:(id)arg1;
- (BOOL)requiredDiskSpaceIsAvailableForDownloadOptions:(id)arg1 requiredBytes:(long long*)arg2 error:(id*)arg3;
- (struct __MobileAsset { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __CFString {} *x2; struct __CFDictionary {} *x3; struct __MobileAssetQuery {} *x4; struct __MobileAssetQuery {} *x5; unsigned char x6; }*)mobileAsset;
- (int)assetStateForStateString:(id)arg1;
- (id)_getLocalAttribute:(id)arg1;
- (void)setClientName:(id)arg1;
- (void)setGarbageCollectionBehavior:(int)arg1;
- (id)progressHandler;
- (BOOL)cancelDownloadAndReturnError:(id*)arg1;
- (BOOL)resumeDownloadAndReturnError:(id*)arg1;
- (void)setProgressHandler:(id)arg1;
- (BOOL)purgeAndReturnError:(id*)arg1;
- (void)beginDownloadWithOptions:(id)arg1;
- (id)localURL;
- (id)attributes;
- (id)identifier;
- (int)state;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)clientName;
- (id)description;
- (void)dealloc;
- (void)pauseDownload:(id)arg1;
- (void)resumeDownload:(id)arg1;
- (int)_contentVersion;
- (int)_formatVersion;
- (BOOL)isInstalled;
- (BOOL)isDownloading;
- (BOOL)isDownloadingOrInstalled;
- (void)cancelDownloadIfNecessary;
- (void)cleanupAsset;
- (BOOL)isEmergencyUpdate;

@end
