/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVPlayerItemTrackInternal, AVAssetTrack;

@interface AVPlayerItemTrack : NSObject  {
    AVPlayerItemTrackInternal *_playerItemTrack;
}

@property(readonly) AVAssetTrack * assetTrack;
@property(getter=isEnabled) BOOL enabled;
@property(readonly) float currentVideoFrameRate;

+ (id)playerItemTrackWithFigPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1 readyForInspection:(BOOL)arg2 trackID:(int)arg3 asset:(id)arg4 playerItem:(id)arg5;

- (int)trackID;
- (id)assetTrack;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (void)finalize;
- (void)setLoudnessInfo:(id)arg1;
- (float)currentVideoFrameRate;
- (id)fallbackTrack;
- (void)_transferCachedValuesToFig;
- (void)_transferLoudnessInfoToFig;
- (void)_transferEnabledToFig;
- (id)_weakReferenceToPlayerItem;
- (id)_initWithFigPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1 readyForInspection:(BOOL)arg2 trackID:(int)arg3 asset:(id)arg4 playerItem:(id)arg5;
- (id)_playerItem;
- (void)_respondToFigPlaybackItemBecomingReadyForInpection;
- (void)_attachToFigPlaybackItemOfPlayerItem:(id)arg1;
- (id)loudnessInfo;

@end
