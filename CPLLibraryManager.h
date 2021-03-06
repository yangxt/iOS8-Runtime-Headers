/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class NSError, NSProgress, NSObject<OS_dispatch_queue>, CPLPlatformObject, <CPLLibraryManagerDelegate>, NSString, CPLChangeSession, NSURL, <CPLResourceProgressDelegate>;

@interface CPLLibraryManager : NSObject <CPLAbstractObject> {
    CPLChangeSession *_currentSession;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_sessionLock;
    CPLPlatformObject *_platformObject;
    NSURL *_clientLibraryBaseURL;
    NSURL *_cloudLibraryStateStorageURL;
    NSURL *_cloudLibraryResourceStorageURL;
    NSString *_libraryIdentifier;
    NSString *_libraryVersion;
    <CPLLibraryManagerDelegate> *_delegate;
    <CPLResourceProgressDelegate> *_resourceProgressDelegate;
    unsigned int _status;
    NSError *_statusError;
    unsigned int _state;
    NSString *_userOverride;
    NSString *_effectiveClientBundleIdentifier;
}

@property(copy,readonly) NSURL * clientLibraryBaseURL;
@property(copy,readonly) NSURL * cloudLibraryStateStorageURL;
@property(copy,readonly) NSURL * cloudLibraryResourceStorageURL;
@property(copy,readonly) NSString * libraryIdentifier;
@property(copy,readonly) NSString * libraryVersion;
@property <CPLLibraryManagerDelegate> * delegate;
@property <CPLResourceProgressDelegate> * resourceProgressDelegate;
@property(readonly) unsigned int status;
@property(readonly) NSError * statusError;
@property BOOL diagnosticsEnabled;
@property(readonly) NSProgress * cloudSyncProgress;
@property unsigned int state;
@property(copy) NSString * userOverride;
@property(copy) NSString * effectiveClientBundleIdentifier;
@property(readonly) CPLPlatformObject * platformObject;

+ (void)useCloudPhotoDaemonImplementation;
+ (id)stateDescriptionForState:(unsigned int)arg1;
+ (id)platformImplementationProtocol;

- (void)removeCloudLibraryWithCompletionHandler:(id)arg1;
- (void)noteClientIsInBackground;
- (void)noteClientIsInForeground;
- (void)takeStatisticsSnapshotSinceDate:(id)arg1 completionHandler:(id)arg2;
- (void)beginPullChangeSessionWithKnownLibraryVersion:(id)arg1 completionHandler:(id)arg2;
- (void)beginPushChangeSessionWithKnownLibraryVersion:(id)arg1 completionHandler:(id)arg2;
- (void)addInfoToLog:(id)arg1;
- (void)deleteResourcesIfSafe:(id)arg1 completionHandler:(id)arg2;
- (void)beginDownloadForResource:(id)arg1 highPriority:(BOOL)arg2 completionHandler:(id)arg3;
- (void)publishResource:(id)arg1 completionHandler:(id)arg2;
- (void)startSyncSession;
- (void)deactivateWithCompletionHandler:(id)arg1;
- (void)setResourceProgressDelegate:(id)arg1;
- (id)initWithClientLibraryBaseURL:(id)arg1 cloudLibraryStateStorageURL:(id)arg2 cloudLibraryResourceStorageURL:(id)arg3 libraryIdentifier:(id)arg4;
- (void)cloudCacheGetDescriptionForRecordWithIdentifier:(id)arg1 completionHandler:(id)arg2;
- (void)cloudCacheGetDescriptionForRecordWithIdentifier:(id)arg1 related:(BOOL)arg2 completionHandler:(id)arg3;
- (void)getStatusArrayForComponents:(id)arg1 completionHandler:(id)arg2;
- (void)getStatusForComponents:(id)arg1 completionHandler:(id)arg2;
- (void)getListOfComponentsWithCompletionHandler:(id)arg1;
- (void)setEffectiveClientBundleIdentifier:(id)arg1;
- (id)effectiveClientBundleIdentifier;
- (void)setUserOverride:(id)arg1;
- (id)userOverride;
- (id)statusError;
- (id)resourceProgressDelegate;
- (id)cloudLibraryStateStorageURL;
- (id)clientLibraryBaseURL;
- (id)cloudSyncProgress;
- (id)addSubscriberUsingPublishingHandler:(id)arg1;
- (BOOL)_setStatus:(unsigned int)arg1 andError:(id)arg2;
- (id)initForManagement;
- (void)resetCacheWithOption:(unsigned int)arg1 completionHandler:(id)arg2;
- (void)downloadOriginalsOfType:(id)arg1 localIdentifiers:(id)arg2 destinationURL:(id)arg3 progressIdentifier:(id)arg4 completionHandler:(id)arg5;
- (void)compactFileCacheWithCompletionHandler:(id)arg1;
- (void)getResourcesForItemWithIdentifier:(id)arg1 completionHandler:(id)arg2;
- (void)setDiagnosticsEnabled:(BOOL)arg1;
- (BOOL)diagnosticsEnabled;
- (void)noteClientReceivedNotificationOfServerChanges;
- (void)resetStatus;
- (void)discardCurrentSession;
- (void)_setCurrentSession:(id)arg1;
- (id)currentSession;
- (void)_closeDeactivating:(BOOL)arg1 completionHandler:(id)arg2;
- (void)barrier;
- (void)_setLibraryVersion:(id)arg1;
- (void)enableSynchronizationWithReason:(id)arg1;
- (void)disableSynchronizationWithReason:(id)arg1;
- (id)libraryIdentifier;
- (id)libraryVersion;
- (id)platformObject;
- (id)cloudLibraryResourceStorageURL;
- (unsigned int)status;
- (void)closeWithCompletionHandler:(id)arg1;
- (void)openWithCompletionHandler:(id)arg1;
- (void).cxx_destruct;
- (void)setState:(unsigned int)arg1;
- (unsigned int)state;
- (id)delegate;
- (id)description;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end
