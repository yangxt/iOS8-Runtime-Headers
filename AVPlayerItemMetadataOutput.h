/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVPlayerItemMetadataOutputInternal, <AVPlayerItemMetadataOutputPushDelegate>, NSObject<OS_dispatch_queue>;

@interface AVPlayerItemMetadataOutput : AVPlayerItemOutput  {
    AVPlayerItemMetadataOutputInternal *_metadataOutputInternal;
}

@property(readonly) <AVPlayerItemMetadataOutputPushDelegate> * delegate;
@property(readonly) NSObject<OS_dispatch_queue> * delegateQueue;
@property double advanceIntervalForDelegateInvocation;

+ (void)initialize;

- (void)setAdvanceIntervalForDelegateInvocation:(double)arg1;
- (id)delegateQueue;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (id)delegate;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (void)_collectUncollectables;
- (id)initWithIdentifiers:(id)arg1;
- (void)_pushTimedMetadataGroups:(id)arg1 fromPlayerItemTrack:(id)arg2;
- (void)_signalFlush;
- (void)_detachFromPlayerItem;
- (BOOL)_attachToPlayerItem:(id)arg1;
- (double)advanceIntervalForDelegateInvocation;

@end