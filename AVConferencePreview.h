/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class AVConferenceXPCClient, VideoAttributes, NSObject<OS_dispatch_queue>, CALayer, NSObject<AVConferencePreviewClientDelegate>;

@interface AVConferencePreview : NSObject  {
    BOOL clientWantsPreview;
    unsigned int connectionAttempts;
    AVConferenceXPCClient *connection;
    CALayer *caLayerFront;
    CALayer *caLayerBack;
    VideoAttributes *localVideoAttributes;
    struct CGSize { 
        float width; 
        float height; 
    } localScreenPortraitAspectRatio;
    struct CGSize { 
        float width; 
        float height; 
    } localScreenLandscapeAspectRatio;
    NSObject<AVConferencePreviewClientDelegate> *delegate;
    NSObject<OS_dispatch_queue> *avConferencePreviewQueue;
    NSObject<OS_dispatch_queue> *avConferencePreviewNotificationQueue;
}

@property(retain) NSObject<AVConferencePreviewClientDelegate> * delegate;

+ (id)AVConferencePreviewSingleton;

- (unsigned int)localCamera;
- (void)setLocalCamera:(unsigned int)arg1;
- (id)localVideoLayer:(BOOL)arg1;
- (void)connectLayer:(id)arg1 withSlot:(unsigned int)arg2;
- (void)setLocalVideoLayer:(id)arg1 front:(BOOL)arg2;
- (void)didReceiveCommError;
- (void)startPreviewUnpausing:(BOOL)arg1;
- (void)didStopPreview;
- (void)didPausePreview;
- (void)didStartPreview;
- (void)didChangeLocalScreenAttributes:(id)arg1;
- (void)didChangeLocalVideoAttributes:(id)arg1;
- (void)didReceiveFirstPreviewFrameFromCamera:(unsigned int)arg1;
- (void)didReceiveErrorFromCamera:(unsigned int)arg1 error:(id)arg2;
- (void)endPIPToPreviewAnimation;
- (void)beginPIPToPreviewAnimation;
- (void)endPreviewToPIPAnimation;
- (void)beginPreviewToPIPAnimation;
- (void)setLocalVideoAttributes:(id)arg1;
- (void)stopPreview;
- (void)pausePreview;
- (id)localVideoAttributes;
- (BOOL)isPreviewRunning;
- (void)startPreview;
- (void)setLocalScreenAttributes:(id)arg1;
- (id)localScreenAttributesForVideoAttributes:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)allocWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (unsigned int)retainCount;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)autorelease;
- (id)retain;
- (oneway void)release;
- (id)init;

@end
