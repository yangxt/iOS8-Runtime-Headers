/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class MPURTCReportingController, MPUReportingController, NSObject<OS_dispatch_queue>, ISDialogOperation, NSString, RUJingleTiltReportingController, NSDate, MPAVController;

@interface RURadioAdObserver : NSObject <ADBannerViewDelegate, ISDialogOperationDelegate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    MPUReportingController *_globalReportingController;
    BOOL _isSlotAcquisitionInProgress;
    RUJingleTiltReportingController *_jingleTiltReportingController;
    double _minDurationToCountAsPlayed;
    NSString *_playbackSessionID;
    int _policyEngineEnabledCount;
    MPURTCReportingController *_RTCReportingController;
    NSDate *_sapSessionLoadBeginDate;
    double _skipThreshold;
    ISDialogOperation *_slotAcquisitionDialogOperation;
    double _startTimeForCurrentItem;
    int _visualEngagementCount;
    BOOL _visuallyEngaged;
    MPAVController *_player;
    unsigned int _numberOfSkippedTracks;
}

@property(retain) RUJingleTiltReportingController * jingleTiltReportingController;
@property(retain) MPUReportingController * globalReportingController;
@property(retain) MPAVController * player;
@property(retain) MPURTCReportingController * RTCReportingController;
@property(getter=isVisuallyEngaged,readonly) BOOL visuallyEngaged;
@property(readonly) unsigned int numberOfSkippedTracks;

+ (id)sharedAdObserver;

- (id)player;
- (unsigned int)numberOfSkippedTracks;
- (BOOL)isVisuallyEngaged;
- (void)willHitPlaybackTimeoutEndingPlayback:(BOOL)arg1 withCurrentItem:(id)arg2;
- (void)noteDidEnterStation:(id)arg1;
- (id)heartbeatTokenReturningError:(id*)arg1;
- (void)getTracksWithRequest:(id)arg1 completionHandler:(id)arg2;
- (void)endVisualEngagement;
- (void)didHitPlaybackTimeoutEndingPlayback:(BOOL)arg1 withCurrentItem:(id)arg2;
- (void)beginVisualEngagement;
- (void)attemptSlotAcquisition;
- (void)setRTCReportingController:(id)arg1;
- (void)setJingleTiltReportingController:(id)arg1;
- (void)setGlobalReportingController:(id)arg1;
- (void)operation:(id)arg1 selectedButton:(id)arg2;
- (id)globalReportingController;
- (void)_reportPlaybackEndedForTimeoutWithItem:(id)arg1;
- (id)jingleTiltReportingController;
- (void)endEnablingPolicyEngine;
- (BOOL)_isPolicyEngineEnabled;
- (void)beginEnablingPolicyEngine;
- (void)_reportPlaybackEndedForAdTrack:(id)arg1 withItem:(id)arg2;
- (void)_itemAssetLoadedDidChangeNotification:(id)arg1;
- (void)_handleSkipForChangedItem:(id)arg1 didChangeStation:(BOOL)arg2;
- (id)_reportingPlaybackEndEventForItem:(id)arg1;
- (void)_getCurrentTime:(double*)arg1 duration:(double*)arg2 wasSkipped:(BOOL*)arg3 didAssetFailToLoad:(BOOL*)arg4 forItem:(id)arg5;
- (void)_recordReportingEvents:(id)arg1;
- (id)_reportingTrackMetadataForItem:(id)arg1;
- (id)_reportingRadioStationMetadataForItem:(id)arg1;
- (void)optimalTransmissionWindowDidOpen;
- (void)_clearAssetCacheForItem:(id)arg1;
- (id)RTCReportingController;
- (void)_updateVisualEngagementWithApplicationState:(int)arg1;
- (void)_attemptSlotAcquisitionWithAdditionalBodyParameters:(id)arg1;
- (void)_updateWithStoreBag:(id)arg1;
- (void)_radioFairPlayControllerSAPSessionWillBeginLoadingNotification:(id)arg1;
- (void)_radioFairPlayControllerSAPSessionDidFinishLoadingNotification:(id)arg1;
- (void)_radioStreamTrackAVItemDidReceiveTimedMetadataPingsNotification:(id)arg1;
- (void)_itemNewAccessLogEntryNotification:(id)arg1;
- (void)_heartbeatChangedNotification:(id)arg1;
- (id)_adPolicyEngine;
- (void)_loadMinDurationToCountAsPlayedFromURLBag;
- (void)requestAdsForSlot:(id)arg1 completionHandler:(id)arg2;
- (void)_storeBagDidLoadNotification:(id)arg1;
- (void)historyDidBeginPlayingAdTrack:(id)arg1 withItem:(id)arg2;
- (void)historyDidEndPlayingAdTrack:(id)arg1 withItem:(id)arg2;
- (void)getHistoryWithRequest:(id)arg1 completionHandler:(id)arg2;
- (void)_applicationWillResignActiveNotification:(id)arg1;
- (void).cxx_destruct;
- (void)setPlayer:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_itemWillChangeNotification:(id)arg1;
- (void)_itemDidFinishLoadingNotification:(id)arg1;
- (void)_registerForPlayerNotifications;
- (void)_unregisterForPlayerNotifications;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_itemChangedNotification:(id)arg1;
- (void)_bufferingStateDidChangeNotification:(id)arg1;
- (void)_playbackStateDidChangeNotification:(id)arg1;

@end