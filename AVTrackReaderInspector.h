/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVWeakReference;

@interface AVTrackReaderInspector : AVAssetTrackInspector  {
    struct OpaqueFigFormatReader { } *_formatReader;
    struct OpaqueFigTrackReader { } *_trackReader;
    int _trackID;
    unsigned long _mediaType;
    AVWeakReference *_weakReferenceToAsset;
}


- (long long)totalSampleDataLength;
- (id)extendedLanguageTag;
- (id)commonMetadata;
- (int)trackID;
- (float)nominalFrameRate;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })preferredTransform;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (id)formatDescriptions;
- (id)mediaType;
- (struct CGSize { float x1; float x2; })naturalSize;
- (id)languageCode;
- (id)asset;
- (struct CGSize { float x1; float x2; })dimensions;
- (BOOL)isEnabled;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)layer;
- (void)dealloc;
- (void)finalize;
- (unsigned long)_figMediaType;
- (void*)_valueAsCFTypeForProperty:(struct __CFString { }*)arg1;
- (BOOL)isExcludedFromAutoselectionInTrackGroup;
- (int)alternateGroupID;
- (id)segmentForTrackTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)segments;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minSampleDuration;
- (id)loudnessInfo;
- (float)estimatedDataRate;
- (BOOL)requiresFrameReordering;
- (BOOL)isSelfContained;
- (struct OpaqueFigTrackReader { }*)_figTrackReader;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long)arg3;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;
- (int)naturalTimeScale;
- (float)preferredVolume;

@end