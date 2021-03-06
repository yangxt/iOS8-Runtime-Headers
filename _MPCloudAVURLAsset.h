/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class AVAssetDownloadSession;

@interface _MPCloudAVURLAsset : AVURLAsset  {
    BOOL _isStreamingQuality;
    AVAssetDownloadSession *_downloadSession;
}

@property AVAssetDownloadSession * downloadSession;
@property BOOL isStreamingQuality;


- (void).cxx_destruct;
- (void)dealloc;
- (void)setIsStreamingQuality:(BOOL)arg1;
- (BOOL)isStreamingQuality;
- (id)downloadSession;
- (void)setDownloadSession:(id)arg1;

@end
