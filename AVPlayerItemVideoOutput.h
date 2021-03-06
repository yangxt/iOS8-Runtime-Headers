/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVPlayerItemVideoOutputInternal, <AVPlayerItemOutputPullDelegate>, NSObject<OS_dispatch_queue>;

@interface AVPlayerItemVideoOutput : AVPlayerItemOutput  {
    AVPlayerItemVideoOutputInternal *_videoOutputInternal;
}

@property(readonly) <AVPlayerItemOutputPullDelegate> * delegate;
@property(readonly) NSObject<OS_dispatch_queue> * delegateQueue;


- (void)requestNotificationOfMediaDataChangeWithAdvanceInterval:(double)arg1;
- (struct __CVBuffer { }*)copyPixelBufferForItemTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 itemTimeForDisplay:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2;
- (BOOL)hasNewPixelBufferForItemTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setSuppressesPlayerRendering:(BOOL)arg1;
- (id)initWithPixelBufferAttributes:(id)arg1;
- (id)delegateQueue;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (id)delegate;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (void)_dispatchOutputSequenceWasFlushed;
- (void)_setTagBuffersWithConversionInformation;
- (void)_startObservingTimebaseNotificationsForTimebase:(struct OpaqueCMTimebase { }*)arg1;
- (void)_stopObservingTimebaseNotificationsForTimebase:(struct OpaqueCMTimebase { }*)arg1;
- (void)_dispatchOutputMediaDataWillChange;
- (void)_detachFromPlayerItem;
- (void)_setTimebase:(struct OpaqueCMTimebase { }*)arg1;
- (BOOL)_attachToPlayerItem:(id)arg1;
- (id)_pixelBufferAttributes;
- (struct OpaqueFigVisualContext { }*)_visualContext;
- (BOOL)suppressesPlayerRendering;

@end
