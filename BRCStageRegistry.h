/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_source>, NSObject<OS_dispatch_queue>, BRCAccountSession, BRCStagePersistedState, NSMutableSet, NSString, NSMutableDictionary;

@interface BRCStageRegistry : NSObject <BRCModule, BRCLowDiskDelegate> {
    BRCAccountSession *_session;
    NSString *_stageDirectoryPath[7];
    unsigned long long _stageDirectoryFileID[7];
    NSMutableSet *_unflushedStagedFileIDs;
    NSMutableSet *_containersWithUnflushedFileIDs;
    NSMutableDictionary *_lockedFileIDs;
    NSObject<OS_dispatch_source> *_lockedTestTimer;
    NSObject<OS_dispatch_queue> *_flushingQueue;
    BRCStagePersistedState *_persistedState;
    BOOL _lowDiskSpace;

  /* Unexpected information at end of encoded ivar type: i */
  /* Error parsing encoded ivar type info: Ai */
    /* Warning: Unrecognized filer type: 'A' using 'void*' */ void*_suspendCount;

    NSObject<OS_dispatch_queue> *_queue;
    int _deviceID;
}

@property(readonly) int deviceID;


- (void)open;
- (long long)purgeOldFiles;
- (long long)purgableSpace;
- (id)copyBundleIconsToStageWithDictionary:(id)arg1;
- (BOOL)transferDocumentID:(unsigned int)arg1 fromOldVersionStage:(unsigned long long)arg2 toStage:(unsigned long long)arg3;
- (BOOL)existsInOldVersionStage:(unsigned long long)arg1 generationID:(unsigned int*)arg2;
- (id)pathInStage:(unsigned long long)arg1;
- (BOOL)existsInStage:(unsigned long long)arg1 generationID:(unsigned int*)arg2;
- (BOOL)moveXattrBlobToStage:(id)arg1 signature:(id)arg2 error:(id*)arg3;
- (BOOL)moveToGraveyardFromPath:(id)arg1 error:(id*)arg2;
- (BOOL)moveOldVersionFromPath:(id)arg1 error:(id*)arg2;
- (BOOL)moveFromStage:(unsigned long long)arg1 toPath:(id)arg2 fileName:(id)arg3 error:(id*)arg4;
- (BOOL)finishStageOfPackageWithManifestID:(id)arg1 gatherFileID:(unsigned long long*)arg2 generationID:(unsigned int*)arg3 documentID:(unsigned int*)arg4 inContainer:(id)arg5 error:(id*)arg6;
- (BOOL)manifestExistsInStageWithManifestID:(id)arg1 gatherPackageFileID:(unsigned long long*)arg2 gatherManifestFileID:(unsigned long long*)arg3;
- (BOOL)makeSideFaultInStageGatherFileID:(unsigned long long*)arg1 generationID:(unsigned int*)arg2 documentID:(unsigned int*)arg3 properties:(id)arg4 inContainer:(id)arg5 forCreation:(BOOL)arg6 error:(id*)arg7;
- (id)makeNonLocalVersionSideFaultWithAdditionName:(id)arg1 containerID:(id)arg2 statInfo:(id)arg3 version:(id)arg4 error:(id*)arg5;
- (BOOL)makeDirectoryInStageGatherFileID:(unsigned long long*)arg1 generationID:(unsigned int*)arg2 inContainer:(id)arg3 error:(id*)arg4;
- (void)lowDiskStatusChangedForDevice:(int)arg1 hasEnoughSpace:(BOOL)arg2;
- (void)_watchLockedRelpath:(id)arg1;
- (BOOL)_applyXattrWithSignature:(id)arg1 onFD:(int)arg2 error:(id*)arg3;
- (BOOL)isItemInStageWithParentFileID:(unsigned long long)arg1 error:(id*)arg2;
- (BOOL)applyMetadataOnFileDescriptor:(int)arg1 liveFileDescriptor:(int)arg2 containerID:(id)arg3 statInfo:(id)arg4 version:(id)arg5 error:(id*)arg6;
- (id)nonLocalFaultURLForAdditionName:(id)arg1;
- (int)_openStageDirectory:(unsigned char)arg1;
- (long long)garbageCollect:(BOOL)arg1;
- (void)_testLockedFiles;
- (int)_performInStageDirectory:(unsigned char)arg1 block:(id)arg2;
- (id)stagedManifestURLForManifestID:(id)arg1;
- (BOOL)copyPackageFileWithPackageFd:(int)arg1 toStageFd:(int)arg2 relpath:(id)arg3;
- (BOOL)manifestFileIDsForManifestID:(id)arg1 manifestFileID:(unsigned long long*)arg2 stagingManifestFileID:(unsigned long long*)arg3 error:(id*)arg4;
- (BOOL)beginStageOfPackageWithManifestID:(id)arg1 manifestPath:(id)arg2 error:(id*)arg3;
- (unsigned long long)packageRootFileIDForManifestID:(id)arg1 createIfMissing:(BOOL)arg2 error:(id*)arg3;
- (BOOL)mayLockFileID:(unsigned long long)arg1;
- (BOOL)didFlushStagedFileID:(unsigned long long)arg1;
- (void)forgetWatchedLockedFileIDsForContainer:(id)arg1;
- (id)urlToFileWithXattrSignature:(id)arg1;
- (BOOL)fileExistsWithXattrSignature:(id)arg1;
- (BOOL)moveToStageFromTmp:(id)arg1 gatherFileID:(unsigned long long*)arg2 generationID:(unsigned int*)arg3 documentID:(unsigned int*)arg4 inContainer:(id)arg5 error:(id*)arg6;
- (BOOL)moveFromStageToGraveyard:(unsigned long long)arg1;
- (void)forgetWatchedLockedFileID:(unsigned long long)arg1;
- (BOOL)getStructuralXattrSignature:(id*)arg1 contentXattrSignature:(id*)arg2 fromFilePath:(id)arg3 error:(id*)arg4;
- (id)initWithAccountSession:(id)arg1;
- (void)didFlushAllStagedFileIDs;
- (int)deviceID;
- (void).cxx_destruct;
- (void)close;
- (void)resume;
- (void)suspend;
- (void)dealloc;

@end