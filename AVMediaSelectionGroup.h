/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVMediaSelectionGroupInternal, AVMediaSelectionOption, NSArray;

@interface AVMediaSelectionGroup : NSObject <NSCopying> {
    AVMediaSelectionGroupInternal *_mediaSelectionGroup;
}

@property(readonly) NSArray * options;
@property(readonly) AVMediaSelectionOption * defaultOption;
@property(readonly) BOOL allowsEmptySelection;

+ (id)playableMediaSelectionOptionsFromArray:(id)arg1;
+ (id)mediaSelectionOptionsFromArray:(id)arg1 withoutMediaCharacteristics:(id)arg2;
+ (id)mediaSelectionOptionsFromArray:(id)arg1 withMediaCharacteristics:(id)arg2;
+ (id)mediaSelectionOptionsFromArray:(id)arg1 filteredAndSortedAccordingToPreferredLanguages:(id)arg2;
+ (id)mediaSelectionOptionsFromArray:(id)arg1 withLocale:(id)arg2;
+ (id)mediaSelectionGroupWithAsset:(id)arg1 dictionary:(id)arg2;

- (id)asset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionary;
- (id)options;
- (id)description;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)_optionWithID:(id)arg1 displaysNonForcedSubtitles:(BOOL)arg2;
- (id)defaultOption;
- (BOOL)_matchesGroupID:(id)arg1 mediaType:(id)arg2;
- (id)_groupID;
- (id)_groupMediaType;
- (BOOL)allowsEmptySelection;
- (BOOL)_isStreamingGroup;
- (id)_weakReference;
- (id)mediaSelectionOptionWithPropertyList:(id)arg1;

@end
