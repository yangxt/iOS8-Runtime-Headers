/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class NSString, NSArray;

@interface ICCameraDevice : ICDevice  {
    void *_cameraProperties;
}

@property unsigned int estimatedNumberOfDownloadableItems;
@property unsigned int contentCatalogPercentCompleted;
@property(getter=isEjectable) BOOL ejectable;
@property(getter=isLocked) BOOL locked;
@property BOOL allowsSyncingClock;
@property(readonly) NSArray * mediaFiles;
@property(readonly) BOOL batteryLevelAvailable;
@property(readonly) unsigned int batteryLevel;
@property(readonly) double timeOffset;
@property unsigned int numberOfDownloadableItems;
@property(getter=isAccessRestrictedAppleDevice) BOOL accessRestrictedAppleDevice;
@property(readonly) NSArray * contents;
@property(copy) NSString * volumePath;
@property BOOL beingEjected;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (id)mediaFiles;
- (void)requestDeleteFiles:(id)arg1;
- (void)requestDownloadFile:(id)arg1 options:(id)arg2 downloadDelegate:(id)arg3 didDownloadSelector:(SEL)arg4 contextInfo:(void*)arg5;
- (void)requestOpenSession;
- (unsigned int)contentCatalogPercentCompleted;
- (unsigned int)estimatedNumberOfDownloadableItems;
- (void)requestEject;
- (void)addToMetadataFetchQ:(id)arg1;
- (void)addToThumbnailFetchQ:(id)arg1;
- (void)removeFolder:(id)arg1;
- (void)requestSyncClock;
- (id)filesOfType:(id)arg1;
- (void)pendNotifyingDelegateOfAddedItem:(id)arg1;
- (void)notifyDelegateOfAddedItem:(id)arg1;
- (BOOL)isEjectable;
- (void)addFolder:(id)arg1;
- (void)incrementNumberOfDownloadableItems;
- (void)incrementEstimatedNumberOfDownloadableItems;
- (void)decrementEstimatedNumberOfDownloadableItems;
- (void)decrementNumberOfDownloadableItems;
- (void)receivedDeviceCommandCompletion;
- (BOOL)isAccessRestrictedAppleDevice;
- (void)setAccessRestrictedAppleDevice:(BOOL)arg1;
- (id)deviceQSemaphore;
- (id)generalQ;
- (double)downloadCancelTimestamp;
- (void)setNumberOfDownloadableItems:(unsigned int)arg1;
- (unsigned int)numberOfDownloadableItems;
- (void)setEstimatedNumberOfDownloadableItems:(unsigned int)arg1;
- (BOOL)batteryLevelAvailable;
- (void)setContentCatalogPercentCompleted:(unsigned int)arg1;
- (void)setAllowsSyncingClock:(BOOL)arg1;
- (BOOL)allowsSyncingClock;
- (void)setBeingEjected:(BOOL)arg1;
- (BOOL)beingEjected;
- (void)setEjectable:(BOOL)arg1;
- (id)volumePath;
- (void)setVolumePath:(id)arg1;
- (void)handleImageCaptureEventNotification:(id)arg1;
- (void)handleCommandCompletionNotification:(id)arg1;
- (void)requestCloseSession;
- (void)cancelDownload;
- (unsigned int)batteryLevel;
- (void)setLocked:(BOOL)arg1;
- (BOOL)isLocked;
- (id)description;
- (id)contents;
- (double)timeOffset;
- (void)dealloc;
- (void)finalize;
- (id)init;

@end