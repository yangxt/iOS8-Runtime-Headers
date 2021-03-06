/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVWeakReference, AVAssetTrack, NSDictionary;

@interface AVMediaSelectionTrackOption : AVMediaSelectionOption  {
    id _groupID;
    AVAssetTrack *_track;
    NSDictionary *_dictionary;
    AVWeakReference *_weakReferenceToGroup;
    BOOL _displaysNonForcedSubtitles;
}


- (id)commonMetadata;
- (int)trackID;
- (BOOL)hasMediaCharacteristic:(id)arg1;
- (id)mediaType;
- (id)group;
- (id)locale;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)dictionary;
- (void)dealloc;
- (id)initWithAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3;
- (BOOL)displaysNonForcedSubtitles;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1;
- (id)mediaSubTypes;
- (id)track;
- (id)_groupID;
- (BOOL)isPlayable;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;

@end
