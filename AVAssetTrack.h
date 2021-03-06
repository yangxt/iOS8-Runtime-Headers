/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAsset, AVAssetTrackInternal;

@interface AVAssetTrack : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {
    AVAssetTrackInternal *_track;
}

@property(readonly) AVAsset * asset;
@property(readonly) int trackID;

+ (id)keyPathsForValuesAffectingTimeRange;
+ (id)mediaTypesForMediaCharacteristics;

- (int)statusOfValueForKey:(id)arg1 error:(id*)arg2;
- (long long)totalSampleDataLength;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id)arg2;
- (id)extendedLanguageTag;
- (id)commonMetadata;
- (int)trackID;
- (BOOL)hasMediaCharacteristic:(id)arg1;
- (float)nominalFrameRate;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })preferredTransform;
- (BOOL)hasProtectedContent;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (id)formatDescriptions;
- (id)metadata;
- (id)mediaType;
- (struct CGSize { float x1; float x2; })naturalSize;
- (id)languageCode;
- (id)asset;
- (struct CGSize { float x1; float x2; })dimensions;
- (id)locale;
- (BOOL)isEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (int)layer;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (BOOL)_firstFormatDescriptionIsLPCM;
- (BOOL)_hasMultipleEdits;
- (BOOL)_hasEmptyEdits;
- (BOOL)_hasScaledEdits;
- (BOOL)_hasMultipleDistinctFormatDescriptions;
- (id)availableTrackAssociationTypes;
- (id)_pairedForcedOnlySubtitlesTrack;
- (id)_followingTrackAmongTracks:(id)arg1;
- (id)_fallbackTrack;
- (BOOL)_subtitleFormatDescriptionMatchesTextDisplayFlags:(unsigned int)arg1 flagsMask:(unsigned int)arg2;
- (id)_assetTrackInspector;
- (id)_trackReferences;
- (id)_firstAssociatedTrackWithAssociationType:(id)arg1;
- (id)associatedTracksOfType:(id)arg1;
- (BOOL)isExcludedFromAutoselectionInTrackGroup;
- (int)alternateGroupID;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })samplePresentationTimeForTrackTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)segmentForTrackTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)segments;
- (id)loudnessInfo;
- (float)estimatedDataRate;
- (BOOL)requiresFrameReordering;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })mediaDecodeTimeRange;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })mediaPresentationTimeRange;
- (id)mediaCharacteristics;
- (BOOL)isSelfContained;
- (long)playabilityValidationResult;
- (struct OpaqueFigAssetTrack { }*)_figAssetTrack;
- (struct OpaqueFigTrackReader { }*)_figTrackReader;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long)arg3;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minFrameDuration;
- (BOOL)hasMediaCharacteristics:(id)arg1;
- (id)_initWithAsset:(id)arg1 trackIndex:(long)arg2;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2;
- (int)statusOfValueForKey:(id)arg1;
- (BOOL)isPlayable;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;
- (int)naturalTimeScale;
- (float)preferredVolume;

@end
