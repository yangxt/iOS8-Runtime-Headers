/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLPhotoLibrary, NSObject<OS_dispatch_queue>, PLCLoudPhotoLibraryManager;

@interface PLCacheDeleteManager : NSObject  {
    PLPhotoLibrary *_photoLibrary;
    PLCLoudPhotoLibraryManager *_cloudManager;
    bool_cancelRequested;
    NSObject<OS_dispatch_queue> *_pruneQueue;
}


- (id)debugEstimateForUrgency:(int)arg1;
- (void)debugPurge:(int)arg1 target:(long long)arg2;
- (id)debugFriendlyDictionary:(id)arg1;
- (id)localResourcesWithCloudMasters;
- (void)unregisterWithCacheDeleteService;
- (void)registerWithCacheDeleteService;
- (long long)_attemptToDeleteAtLeast:(long long)arg1 withUrgencyLevel:(int)arg2;
- (long long)attemptToDeleteAtLeast:(long long)arg1 fromResourcesArray:(id)arg2 withUrgencyLevel:(int)arg3;
- (long long)_attemptToDeleteAtLeast:(long long)arg1 fromTrashWithUrgencyLevel:(int)arg2;
- (id)cachedAssetsForUrgencyLevel:(int)arg1 includeOriginals:(BOOL)arg2;
- (BOOL)keepOriginalsEnabled;
- (long long)deleteBatchInCPLAndReportDeletedBytes:(id)arg1;
- (long long)combinedAssetsSize:(id)arg1;
- (id)deleteResourcesBatchAndReturnSuccessfullyDeletedAssets:(id)arg1;
- (id)assetsSubsetForUrgencyLevel:(int)arg1 fromBundle:(id)arg2 keepOriginals:(bool)arg3;
- (id)assetsAsResourceBundles;
- (id)assetsAsResourceBundlesWithManualVerification:(BOOL)arg1;
- (id)pruningOrder;
- (id)pruningFilters;
- (void)stopService;
- (void)startService;
- (id)initWithPhotoLibrary:(id)arg1 cloudPhotoLibraryManager:(id)arg2;
- (void)deleteExpiredTrashBinObjects;

@end
