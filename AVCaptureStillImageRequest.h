/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class AVCaptureBracketedStillImageSettings;

@interface AVCaptureStillImageRequest : NSObject  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _sbufCompletionBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _iosurfaceCompletionBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _bracketedCaptureCompletionBlock;

    long long _settingsID;
    unsigned long _shutterSoundID;
    AVCaptureBracketedStillImageSettings *_bracketedSettings;
}

@property(copy) id sbufCompletionBlock;
@property(copy) id iosurfaceCompletionBlock;
@property(copy) id bracketedCaptureCompletionBlock;
@property long long settingsID;
@property unsigned long shutterSoundID;
@property(retain) AVCaptureBracketedStillImageSettings * bracketedSettings;

+ (id)request;

- (void)setSettingsID:(long long)arg1;
- (long long)settingsID;
- (void)dealloc;
- (void)setBracketedSettings:(id)arg1;
- (id)bracketedSettings;
- (void)setShutterSoundID:(unsigned long)arg1;
- (unsigned long)shutterSoundID;
- (void)setBracketedCaptureCompletionBlock:(id)arg1;
- (id)bracketedCaptureCompletionBlock;
- (void)setIosurfaceCompletionBlock:(id)arg1;
- (id)iosurfaceCompletionBlock;
- (void)setSbufCompletionBlock:(id)arg1;
- (id)sbufCompletionBlock;

@end
