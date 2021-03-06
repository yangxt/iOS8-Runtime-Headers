/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVMetadataItem, NSArray, NSString, NSData, NSDictionary;

@interface AVAssetInspector : AVFigObjectInspector <NSCopying> {
}

@property(readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property(readonly) float preferredRate;
@property(readonly) float preferredVolume;
@property(readonly) float preferredSoundCheckVolumeNormalization;
@property(readonly) struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } preferredTransform;
@property(readonly) struct CGSize { float x1; float x2; } naturalSize;
@property(readonly) int naturalTimeScale;
@property(readonly) BOOL providesPreciseDurationAndTiming;
@property(readonly) long trackCount;
@property(readonly) NSArray * trackIDs;
@property(readonly) NSArray * alternateTrackGroups;
@property(readonly) NSDictionary * trackReferences;
@property(readonly) NSArray * mediaSelectionGroups;
@property(readonly) AVMetadataItem * creationDate;
@property(readonly) NSString * lyrics;
@property(readonly) NSArray * commonMetadata;
@property(readonly) NSArray * availableMetadataFormats;
@property(getter=isPlayable,readonly) BOOL playable;
@property(getter=isExportable,readonly) BOOL exportable;
@property(getter=isReadable,readonly) BOOL readable;
@property(getter=isComposable,readonly) BOOL composable;
@property(getter=isCompatibleWithSavedPhotosAlbum,readonly) BOOL compatibleWithSavedPhotosAlbum;
@property(readonly) NSData * SHA1Digest;
@property(readonly) BOOL canContainMovieFragments;
@property(readonly) id propertyListForProxy;


- (id)commonMetadata;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })preferredTransform;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (id)creationDate;
- (BOOL)hasProtectedContent;
- (id)lyrics;
- (struct CGSize { float x1; float x2; })naturalSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)propertyListForProxy;
- (id)SHA1Digest;
- (long)trackCount;
- (BOOL)canContainMovieFragments;
- (BOOL)isComposable;
- (BOOL)isReadable;
- (BOOL)isExportable;
- (BOOL)isPlayable;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;
- (id)trackReferences;
- (id)mediaSelectionGroups;
- (id)trackIDs;
- (id)alternateTrackGroups;
- (BOOL)providesPreciseDurationAndTiming;
- (int)naturalTimeScale;
- (float)preferredSoundCheckVolumeNormalization;
- (float)preferredVolume;
- (float)preferredRate;

@end
