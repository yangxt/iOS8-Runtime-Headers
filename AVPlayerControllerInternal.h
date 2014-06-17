/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@class AVPlayer, CALayer<AVPlayerLayer>, NSArray, NSObject<OS_dispatch_queue>, NSDictionary, AVValueTiming;

@interface AVPlayerControllerInternal : AVPlayerController  {
    unsigned int _jKeyDown : 1;
    unsigned int _kKeyDown : 1;
    unsigned int _lKeyDown : 1;
    CALayer<AVPlayerLayer> *_playerLayer;
    id _deviceBatteryStateDidChangeObserver;
    unsigned int _deviceBatteryMonitoringWasEnabled : 1;
    unsigned int _deviceBatteryChargingOrFull : 1;
    unsigned int _playingOnSecondScreen : 1;
    id _timeObserverToken;
    id _playerItemTimeJumpedObserver;
    BOOL _looping;
    int _actionAtItemEnd;
    NSObject<OS_dispatch_queue> *_seekQueue;
    BOOL _isSeeking;
    BOOL _pendingSeek;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _seekToTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _toleranceBefore;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _toleranceAfter;
    BOOL _isScanningForward;
    BOOL _isScanningBackward;
    unsigned int _scanningCount;
    double _preScanningRate;
    NSObject<OS_dispatch_queue> *_setRateWithThrottlingQueue;
    BOOL _isActuallySettingRateWithThrottling;
    BOOL _pendingSetRateWithThrottling;
    double _setToRate;
    BOOL _ignoreBackwardAndForwardScans;
    BOOL _scrubbing;
    BOOL _composable;
    BOOL _hasProtectedContent;
    BOOL _preventingIdleSystemSleep;
    BOOL _preventingIdleDisplaySleep;
    BOOL _disablingAutomaticTermination;
    AVPlayer *_player;
    AVValueTiming *_timing;
    NSDictionary *_metadata;
    NSArray *_contentChapters;
    NSArray *_availableMetadataFormats;
    double _rateBeforeScrubBegan;
}

@property(getter=isDeviceBatteryChargingOrFull) BOOL deviceBatteryChargingOrFull;
@property(readonly) BOOL shouldPreventIdleDisplaySleep;
@property(getter=isScrubbing) BOOL scrubbing;
@property(retain) AVPlayer * player;
@property(retain) AVValueTiming * timing;
@property(retain) NSDictionary * metadata;
@property(retain) NSArray * contentChapters;
@property(getter=isComposable) BOOL composable;
@property BOOL hasProtectedContent;
@property(retain) NSArray * availableMetadataFormats;
@property double rateBeforeScrubBegan;
@property(getter=isPreventingIdleSystemSleep) BOOL preventingIdleSystemSleep;
@property(getter=isPreventingIdleDisplaySleep) BOOL preventingIdleDisplaySleep;
@property(getter=isDisablingAutomaticTermination) BOOL disablingAutomaticTermination;

+ (id)keyPathsForValuesAffectingHasLegibleMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasAudioMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingCanSeekToEnd;
+ (id)keyPathsForValuesAffectingCanSeekToBeginning;
+ (id)keyPathsForValuesAffectingCanScanBackward;
+ (id)keyPathsForValuesAffectingCanScanForward;
+ (id)keyPathsForValuesAffectingHasLiveStreamingContent;
+ (id)keyPathsForValuesAffectingPlaying;
+ (id)keyPathsForValuesAffectingExternalPlaybackAirPlayDeviceLocalizedName;
+ (id)keyPathsForValuesAffectingExternalPlaybackType;
+ (id)keyPathsForValuesAffectingExternalPlaybackActive;
+ (id)keyPathsForValuesAffectingPlayingOnExternalScreen;
+ (id)keyPathsForValuesAffectingAllowsExternalPlayback;
+ (id)keyPathsForValuesAffectingCanSeekChapterBackward;
+ (id)keyPathsForValuesAffectingCanSeekChapterForward;
+ (id)keyPathsForValuesAffectingCanSeekFrameBackward;
+ (id)keyPathsForValuesAffectingCanSeekFrameForward;
+ (id)keyPathsForValuesAffectingCanSeek;
+ (id)keyPathsForValuesAffectingHasShareableContent;
+ (id)keyPathsForValuesAffectingHasTrimmableContent;
+ (id)keyPathsForValuesAffectingHasContentChapters;
+ (id)keyPathsForValuesAffectingHasEnabledVideo;
+ (id)keyPathsForValuesAffectingHasEnabledAudio;
+ (id)keyPathsForValuesAffectingLoadedTimeRanges;
+ (id)keyPathsForValuesAffectingContentDurationWithinEndTimes;
+ (id)keyPathsForValuesAffectingMaxTime;
+ (id)keyPathsForValuesAffectingMinTime;
+ (id)keyPathsForValuesAffectingContentDimensions;
+ (id)keyPathsForValuesAffectingContentDuration;
+ (id)keyPathsForValuesAffectingHasContent;
+ (id)keyPathsForValuesAffectingCanTogglePlayback;
+ (id)keyPathsForValuesAffectingCanPause;
+ (id)keyPathsForValuesAffectingCanPlay;
+ (id)keyPathsForValuesAffectingSeekableTimeRanges;
+ (id)keyPathsForValuesAffectingShouldPreventIdleDisplaySleep;
+ (id)keyPathsForValuesAffectingLegibleMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingAudioMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingError;
+ (id)keyPathsForValuesAffectingStatus;
+ (id)keyPathsForValuesAffectingVolume;
+ (id)keyPathsForValuesAffectingRate;

- (void)setTiming:(id)arg1;
- (id)loadedTimeRanges;
- (double)contentDurationWithinEndTimes;
- (void)setMaxTime:(double)arg1;
- (double)maxTime;
- (void)setMinTime:(double)arg1;
- (double)minTime;
- (BOOL)hasEnabledVideo;
- (BOOL)hasEnabledAudio;
- (struct CGSize { float x1; float x2; })contentDimensions;
- (BOOL)canSeek;
- (BOOL)canTogglePlayback;
- (BOOL)canPause;
- (void)setCurrentLegibleMediaSelectionOption:(id)arg1;
- (id)currentLegibleMediaSelectionOption;
- (void)setCurrentAudioMediaSelectionOption:(id)arg1;
- (id)currentAudioMediaSelectionOption;
- (BOOL)hasMediaSelectionOptions;
- (void)seekToEnd:(id)arg1;
- (BOOL)canSeekToEnd;
- (void)seekToBeginning:(id)arg1;
- (BOOL)canSeekToBeginning;
- (void)endScanningBackward:(id)arg1;
- (void)beginScanningBackward:(id)arg1;
- (BOOL)canScanBackward;
- (void)endScanningForward:(id)arg1;
- (void)beginScanningForward:(id)arg1;
- (BOOL)canScanForward;
- (void)gotoEndOfSeekableRanges:(id)arg1;
- (void)skipBackwardThirtySeconds:(id)arg1;
- (BOOL)hasLiveStreamingContent;
- (void)endScrubbing:(id)arg1;
- (void)beginScrubbing:(id)arg1;
- (void)setPlaying:(BOOL)arg1;
- (BOOL)isPlaying;
- (void)togglePlayback:(id)arg1;
- (void)pause:(id)arg1;
- (id)legibleMediaSelectionOptions;
- (id)audioMediaSelectionOptions;
- (BOOL)hasLegibleMediaSelectionOptions;
- (BOOL)hasAudioMediaSelectionOptions;
- (BOOL)canPlay;
- (void)seekToTime:(double)arg1;
- (id)timing;
- (double)contentDuration;
- (id)player;
- (BOOL)allowsExternalPlayback;
- (BOOL)isExternalPlaybackActive;
- (id)seekableTimeRanges;
- (void)setRate:(double)arg1;
- (void)setAllowsExternalPlayback:(BOOL)arg1;
- (id)error;
- (BOOL)isLooping;
- (BOOL)hasProtectedContent;
- (id)metadata;
- (void)setMetadata:(id)arg1;
- (void)play:(id)arg1;
- (double)rate;
- (void)setVolume:(double)arg1;
- (double)volume;
- (int)status;
- (void).cxx_destruct;
- (BOOL)hasContent;
- (void)endScrubbing;
- (void)beginScrubbing;
- (void)setPlayer:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)initWithPlayer:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)isScrubbing;
- (void)setDisablingAutomaticTermination:(BOOL)arg1;
- (BOOL)isDisablingAutomaticTermination;
- (void)setPreventingIdleSystemSleep:(BOOL)arg1;
- (BOOL)isPreventingIdleSystemSleep;
- (void)_updateScanningBackwardRate;
- (id)scanningDelays;
- (void)_updateScanningForwardRate;
- (void)actuallySeekToTime;
- (double)rateBeforeScrubBegan;
- (void)setScrubbing:(BOOL)arg1;
- (BOOL)_isMarkedNotSerializablePlayerItem:(id)arg1;
- (BOOL)_isRestrictedFromSavingPlayerItem:(id)arg1;
- (void)_itemDidPlayToEndTime:(id)arg1;
- (void)actuallySetRateWithThrottling;
- (void)setPreventingIdleDisplaySleep:(BOOL)arg1;
- (void)setContentChapters:(id)arg1;
- (void)setAvailableMetadataFormats:(id)arg1;
- (void)setHasProtectedContent:(BOOL)arg1;
- (void)setComposable:(BOOL)arg1;
- (void)setRateBeforeScrubBegan:(double)arg1;
- (BOOL)isPreventingIdleDisplaySleep;
- (void)updateTiming;
- (BOOL)CALayerDestinationIsTVOut;
- (void)_Starsky_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (BOOL)shouldPreventIdleDisplaySleep;
- (void)_Starsky_dealloc;
- (void)_Starsky_init;
- (BOOL)isDeviceBatteryChargingOrFull;
- (void)setDeviceBatteryChargingOrFull:(BOOL)arg1;
- (void)setCALayerDestinationIsTVOut:(BOOL)arg1;
- (id)externalPlaybackAirPlayDeviceLocalizedName;
- (BOOL)isPlayingOnSecondScreen;
- (BOOL)isPlayingOnExternalScreen;
- (BOOL)canSeekChapterBackward;
- (BOOL)canSeekChapterForward;
- (void)seekToChapter:(id)arg1;
- (id)contentChapters;
- (void)seekFrameBackward:(id)arg1;
- (BOOL)canSeekFrameBackward;
- (void)seekFrameForward:(id)arg1;
- (BOOL)canSeekFrameForward;
- (void)scanBackward:(id)arg1;
- (void)scanForward:(id)arg1;
- (void)seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)seekByTimeInterval:(double)arg1;
- (BOOL)isSeeking;
- (BOOL)hasShareableContent;
- (BOOL)hasTrimmableContent;
- (BOOL)hasContentChapters;
- (void)toggleMuted:(id)arg1;
- (void)changeVolumeToMaximum:(id)arg1;
- (void)changeVolumeToMinimum:(id)arg1;
- (void)decreaseVolume:(id)arg1;
- (void)increaseVolume:(id)arg1;
- (void)setLooping:(BOOL)arg1;
- (void)setRateWithThrottling:(double)arg1;
- (void)seekChapterForward:(id)arg1;
- (void)seekChapterBackward:(id)arg1;
- (void)setPlayingOnSecondScreen:(BOOL)arg1;
- (id)_extendedLanguageTagsForOptions:(id)arg1;
- (id)_legibleAuxillaryOptions;
- (id)_legibleEasyToReadOptions;
- (void)_enableAutoMediaSelection:(id)arg1;
- (void)_disableLegibleMediaSelectionOptions:(id)arg1;
- (id)_auxillaryClosedCaptionOptions;
- (id)_auxillarySDHOptions;
- (id)_auxillarySubtitleOptions;
- (id)_easyToReadClosedCaptionOptions;
- (id)_easyToReadSDHOptions;
- (id)_easyToReadSubtitleOptions;
- (id)_closedCaptionOptions;
- (id)_SDHOptions;
- (id)_subtitleOptions;
- (id)_selectedMediaOptionWithMediaCharacteristic:(id)arg1;
- (void)_setMediaOption:(id)arg1 mediaCharacteristic:(id)arg2;
- (id)_mediaSelectionOptionForLanguageCode:(id)arg1 options:(id)arg2;
- (id)_languageCodesForOptions:(id)arg1;
- (id)_auxillaryAudioOptions;
- (id)_DVSAudioOptions;
- (id)_mainAudioOptions;
- (id)_pushSystemLanguageToTop:(id)arg1;
- (id)_playableMediaSelectionOptionsForMediaCharacteristic:(id)arg1;
- (int)externalPlaybackType;
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (BOOL)isComposable;
- (id)availableMetadataFormats;
- (float)preferredRate;

@end