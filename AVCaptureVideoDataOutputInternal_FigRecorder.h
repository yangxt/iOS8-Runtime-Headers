/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSDictionary, AVWeakReferencingDelegateStorage;

@interface AVCaptureVideoDataOutputInternal_FigRecorder : NSObject  {
    AVWeakReferencingDelegateStorage *delegateStorage;
    BOOL delegateRespondsToDidOutputSBufCallback;
    BOOL delegateRespondsToDidDropSBufCallback;
    NSDictionary *videoSettings;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } deprecatedMinFrameDuration;
    BOOL alwaysDiscardsLateVideoFrames;
}


- (void)dealloc;
- (id)init;

@end
