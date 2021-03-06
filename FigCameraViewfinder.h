/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class FigCameraViewfinderSession, <FigCameraViewfinderDelegate><FigCameraViewfinderSessionDelegate>, NSObject<OS_dispatch_queue>, FigDelegateStorage;

@interface FigCameraViewfinder : NSObject  {
    FigCameraViewfinderSession *_delegateActiveViewfinderSession;
    FigDelegateStorage *_delegateStorage;
}

@property(readonly) <FigCameraViewfinderDelegate><FigCameraViewfinderSessionDelegate> * delegate;
@property(readonly) NSObject<OS_dispatch_queue> * queue;
@property(retain) FigCameraViewfinderSession * delegateActiveViewfinderSession;

+ (id)cameraViewfinder;

- (void)setDelegateActiveViewfinderSession:(id)arg1;
- (id)delegateActiveViewfinderSession;
- (void)startWithOptions:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (id)queue;
- (id)delegate;
- (void)stop;
- (void)dealloc;
- (id)init;

@end
