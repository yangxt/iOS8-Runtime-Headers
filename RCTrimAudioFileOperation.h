/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class RCCompositionComposedAssetWriter, NSError, NSURL;

@interface RCTrimAudioFileOperation : RCTrimTimeRangeOperation  {
    RCCompositionComposedAssetWriter *_assetWriter;
    BOOL _success;
    BOOL _createWaveform;
    NSError *_error;
    NSURL *_sourceURL;
    NSURL *_destinationURL;
    double _exportedDuration;
}

@property(copy,readonly) NSURL * sourceURL;
@property(copy,readonly) NSURL * destinationURL;
@property(readonly) BOOL createWaveform;

+ (id)exportableAudioFormatPathExtensionWithSourceURL:(id)arg1;

- (BOOL)createWaveform;
- (double)exportedDuration;
- (id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 createWaveform:(BOOL)arg3 timeRange:(struct { double x1; double x2; })arg4 trimMode:(int)arg5;
- (id)error;
- (BOOL)success;
- (void).cxx_destruct;
- (void)main;
- (double)progress;
- (void)cancel;
- (id)sourceURL;
- (id)destinationURL;

@end
