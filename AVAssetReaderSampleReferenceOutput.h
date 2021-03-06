/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetTrack, AVAssetReaderSampleReferenceOutputInternal;

@interface AVAssetReaderSampleReferenceOutput : AVAssetReaderOutput  {
    AVAssetReaderSampleReferenceOutputInternal *_sampleReferenceOutputInternal;
}

@property(readonly) AVAssetTrack * track;

+ (id)assetReaderSampleReferenceOutputWithTrack:(id)arg1;

- (id)mediaType;
- (id)description;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)initWithTrack:(id)arg1;
- (id)track;
- (BOOL)_enableTrackExtractionReturningError:(id*)arg1;
- (BOOL)_trimsSampleDurations;
- (id)_asset;

@end
