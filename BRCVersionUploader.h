/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class BRCOperationMultiplexer, BRCTransferQueue, NSObject<OS_dispatch_queue>, BRCLocalContainer;

@interface BRCVersionUploader : NSObject <BRCTransferQueueDelegate, BRCLifeCycle> {
    NSObject<OS_dispatch_queue> *_queue;
    BRCTransferQueue *_transferQueue;
    BRCLocalContainer *_container;
    BRCOperationMultiplexer *_uploadMultiplexer;
}

@property(readonly) BRCOperationMultiplexer * uploadMultiplexer;


- (id)uploadMultiplexer;
- (void)_scheduleUploads;
- (BOOL)_scheduleUploadForItem:(id)arg1;
- (void)_didUploadContentWithItemID:(id)arg1 record:(id)arg2;
- (void)_didFailUploadingContentWithItemID:(id)arg1 error:(id)arg2;
- (void)signalNeedsUploads;
- (id)initWithLocalContainer:(id)arg1;
- (void)transferQueueDidRequestOperations:(id)arg1;
- (id)verboseDescription;
- (void)cancelUploadForItemID:(id)arg1;
- (BOOL)isUploadingItemID:(id)arg1;
- (void).cxx_destruct;
- (void)close;
- (void)resume;
- (void)suspend;
- (id)description;

@end