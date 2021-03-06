/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSObject<OS_dispatch_queue>, NSMutableArray, NSObject<OS_xpc_object>, PLCacheDeleteManager, PLPhotoLibrary, NSMutableDictionary, CPLLibraryManager;

@interface PLCLoudPhotoLibraryManager : NSObject <CPLResourceProgressDelegate, CPLLibraryManagerDelegate, PLForegroundObserver> {
    NSMutableArray *_uploadBatchArray;
    unsigned long long _lastKnownChangeHubEventIndex;
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_xpc_object> *_hubConnection;
    unsigned char _nodeUUID[16];
    NSMutableArray *_cameraAsset;
    BOOL _processingChange;
    unsigned int _mode;
    BOOL _pushOnIdle;
    BOOL _pullOnIdle;
    BOOL _modeChangePending;
    BOOL _closeLibrary;
    BOOL _initialUpload;
    unsigned int _uploadCounterCheck;
    unsigned int _downloadCounterCheck;
    NSMutableArray *_downloadedDeleteUuid;
    NSMutableDictionary *_taskIdentifierToPendingResourceTask;
    PLPhotoLibrary *_photoLibrary;
    CPLLibraryManager *_cplLibrary;
    BOOL _stopping;
    BOOL _stopped;
    BOOL _needToResume;
    BOOL _needSoftReset;
    BOOL _pausing;
    unsigned int _defaultResourceDownloadType;
    unsigned int _powerAssertionId;
    PLCacheDeleteManager *_cacheDeleteManager;
}

+ (id)descriptionForResourceType:(unsigned int)arg1;

- (id)_copyTemporaryAssetToFinalPhotoLocationWithResourceIdentity:(id)arg1 withExtension:(id)arg2 withName:(id)arg3;
- (void)addLogMark:(id)arg1;
- (void)doSoftResetSync;
- (void)downloadAsset:(id)arg1 resourceType:(unsigned int)arg2 highPriority:(BOOL)arg3 taskDidBeginHandler:(id)arg4 progressBlock:(id)arg5 completionHandler:(id)arg6;
- (void)fetchPublicURLForAsset:(id)arg1 resourceType:(unsigned int)arg2 completionHandler:(id)arg3;
- (BOOL)isResourceTransferTaskAliveWithTaskWithIdentifier:(id)arg1;
- (void)cancelResourceTransferTaskWithIdentifier:(id)arg1;
- (void)unpause;
- (void)foregroundMonitor:(id)arg1 changedStateToForeground:(BOOL)arg2 context:(id)arg3;
- (void)libraryManagerHasChangesToPull:(id)arg1;
- (void)libraryManagerDidStartSynchronization:(id)arg1;
- (void)libraryManagerStatusDidChange:(id)arg1;
- (void)libraryManager:(id)arg1 downloadDidProgress:(float)arg2 forResourceTransferTask:(id)arg3;
- (void)libraryManager:(id)arg1 uploadDidFinishForResourceTransferTask:(id)arg2 withError:(id)arg3;
- (void)libraryManager:(id)arg1 uploadDidStartForResourceTransferTask:(id)arg2;
- (void)libraryManager:(id)arg1 backgroundDownloadDidFinishForResource:(id)arg2;
- (void)libraryManager:(id)arg1 downloadDidFinishForResourceTransferTask:(id)arg2 withError:(id)arg3;
- (void)libraryManager:(id)arg1 downloadDidStartForResourceTransferTask:(id)arg2;
- (void)_updateThumbnailDataForAsset:(id)arg1 withImageFileURL:(id)arg2;
- (void)_linkFileFrom:(id)arg1 to:(id)arg2;
- (void)_updateAsset:(id)arg1 withImageFileURL:(id)arg2;
- (short)_placeHolderKindFromCPLResourceType:(unsigned int)arg1;
- (void)takeStatisticsSnapshotSinceDate:(id)arg1 completionHandler:(id)arg2;
- (void)_updateWithCPLResource:(id)arg1;
- (void)sync;
- (void)_handleRelationRecords:(id)arg1 inLibrary:(id)arg2;
- (void)_handleDeleteRecords:(id)arg1 inLibrary:(id)arg2;
- (void)_handleAssetRecords:(id)arg1 andMasterRecords:(id)arg2 inLibrary:(id)arg3;
- (void)_handleAlbumRecords:(id)arg1 inLibrary:(id)arg2;
- (void)processDownloadBatchWithSession:(id)arg1;
- (void)_runOnIsolationQueueAfterDelayInSeconds:(unsigned int)arg1 withBlock:(id)arg2;
- (void)_cleanUploadedResources:(id)arg1;
- (BOOL)needResetSyncErrorType:(id)arg1;
- (id)lastKnownCloudVersionFromDisk;
- (void)_processUploadBatchWithStartupFailureCount:(unsigned int)arg1;
- (id)createBatchesForChanges:(id)arg1 withContainerChangeForAsset:(BOOL)arg2;
- (id)filterCloudDeleteForKey:(const char *)arg1 fromEvent:(id)arg2;
- (void)sortData:(id)arg1 withMode:(int)arg2 forAssets:(id*)arg3 adjustedAssets:(id*)arg4 andAlbums:(id*)arg5 andOrders:(id*)arg6 inManagedObjectContext:(id)arg7;
- (BOOL)asset:(id)arg1 isIn:(id)arg2;
- (BOOL)asset:(id)arg1 isInOrderList:(id)arg2;
- (BOOL)shouldProcessDuringInitialUpload:(id)arg1;
- (void)prepareEventForUploadProcess:(id)arg1;
- (void)sendAssets:(id)arg1 toBatchManager:(id)arg2;
- (void)sendAlbums:(id)arg1 toBatchManager:(id)arg2;
- (void)uploadToCloudForEvents:(id)arg1;
- (void)saveCPLPlistVersion:(id)arg1 forVersionKey:(id)arg2;
- (void)deleteResourcesIfSafe:(id)arg1 completionHandler:(id)arg2;
- (void)_recoverFromPauseUnderDiskPressureIfNeeded;
- (id)readCPLPlist;
- (void)updateLastKnownIndexFromChangeHub;
- (unsigned int)registerToChangeHubNotification;
- (unsigned int)diskSpaceLevel;
- (void)_doResetSync:(BOOL)arg1;
- (void)stopAll;
- (void)closeCPLLibrary;
- (void)downloadFromCloud;
- (void)uploadFullPhotoLibraryToCloud;
- (void)processUploadBatch;
- (void)fetchNewEventsFromChangeHub;
- (void)_createPowerAssertion;
- (void)openCPLLibrary;
- (void)_processNextTransaction;
- (id)_debugNameForMode:(unsigned int)arg1;
- (void)setupHubConnection;
- (void)deactivateCPLLibrary;
- (void)deleteCPLPlist;
- (void)resetFlags;
- (void)unregisterToChangeHubNotification;
- (void)_resetCPLLibrary;
- (void)_releasePowerAssertion;
- (BOOL)_canExternallyTransitionToNewLibraryModeIgnoringPause:(BOOL)arg1;
- (void)_deactivateCPLLibrary;
- (void)_runBlockOnIsolationQueue:(id)arg1;
- (void)_cleanupCPLLibrary;
- (BOOL)createPathIfNeeded:(id)arg1;
- (void)deleteExpiredTrashBinObjects;
- (void)transitionToState:(unsigned int)arg1;
- (void)pause;
- (void)resume;
- (void)stop;
- (void)dealloc;
- (id)init;

@end
