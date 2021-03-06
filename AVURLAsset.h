/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSURL, NSString, AVURLAssetInternal, AVAssetCache, AVAssetResourceLoader;

@interface AVURLAsset : AVAsset  {
    AVURLAssetInternal *_URLAsset;
}

@property(readonly) double rc_durationInSeconds;
@property(readonly) AVAssetCache * assetCache;
@property(readonly) BOOL shouldMatchDataInCacheByURLPathComponentOnly;
@property(readonly) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent;
@property(readonly) NSString * cacheKey;
@property(readonly) AVAssetResourceLoader * resourceLoader;
@property(copy,readonly) NSURL * URL;

+ (id)audiovisualMIMETypes;
+ (BOOL)isPlayableExtendedMIMEType:(id)arg1;
+ (id)URLAssetWithURL:(id)arg1 options:(id)arg2;
+ (id)audiovisualTypes;
+ (id)_avfValidationPlist;
+ (id)_figMIMETypes;
+ (id)_UTTypes;
+ (id)_streamingUTTypes;
+ (id)_fileUTTypes;
+ (id)_figFilePathExtensions;
+ (id)_figStreamingMIMETypes;
+ (id)_figFileMIMETypes;
+ (id)rc_preciseTimingAssetWithURL:(id)arg1;

- (id)tracks;
- (void)cancelLoading;
- (id)resourceLoader;
- (id)lyrics;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (id)cacheKey;
- (id)URL;
- (id)description;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (void)_handleURLRequest:(id)arg1;
- (void)_finishLoadingCustomURLProviderRequestWithResponseProperties:(id)arg1 context:(id)arg2;
- (BOOL)_shouldOptimizeAccessForLinearMoviePlayback;
- (id)downloadDestinationURL;
- (id)assetCache;
- (id)SHA1Digest;
- (unsigned long long)downloadToken;
- (BOOL)shouldMatchDataInCacheByURLWithoutQueryComponent;
- (BOOL)shouldMatchDataInCacheByURLPathComponentOnly;
- (id)_errorForFigNotificationPayload:(struct __CFDictionary { }*)arg1 key:(struct __CFString { }*)arg2;
- (id)resolvedURL;
- (id)_tracks;
- (id)_handleURLAssetInitializationOptionsReturningFigAssetCreationOptions:(id)arg1 selector:(SEL)arg2;
- (void)_setAssetInspectorLoader:(id)arg1;
- (BOOL)_hasResourceLoaderDelegate;
- (void)_tracksDidChange;
- (unsigned int)referenceRestrictions;
- (id)_absoluteURL;
- (Class)_classForTrackInspectors;
- (struct OpaqueFigFormatReader { }*)_formatReader;
- (struct OpaqueFigPlaybackItem { }*)_playbackItem;
- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (void)_removeFigAssetNotifications;
- (void)_addFigAssetNotifications;
- (double)rc_durationInSeconds;

@end
