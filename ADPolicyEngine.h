/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class NSError, ADBannerView, NSObject<OS_dispatch_queue>, ADInterstitialAd, NSMutableArray, NSString, NSURL, NSData, NSArray;

@interface ADPolicyEngine : NSObject <ADBannerViewInternalDelegate, ADInterstitialAdDelegate> {
    BOOL _visuallyEngaged;
    BOOL _enabled;
    BOOL _sharedInterstitialAdIsInUse;
    BOOL _sharedMediaPlayerVideoAdClaimed;
    NSArray *_gatewayEnabledStationIDs;
    NSObject<OS_dispatch_queue> *_policyEngineQueue;
    NSMutableArray *_queuedCommands;
    NSData *_heartbeatToken;
    NSError *_heartbeatTokenError;
    ADInterstitialAd *_sharedInterstitialAd;
    NSString *_sharedInterstitialSection;
    NSURL *_sharedInterstitialServerURL;
    NSString *_sharedInterstitialAuthenticationUserName;
    ADBannerView *_sharedMediaPlayerVideoAd;
    NSError *_lastSharedMediaPlayerVideoAdError;
    NSData *_currentStationData;
    NSData *_currentSongData;
    NSArray *_currentSponsoredStationIDs;
    double _nextInterstitialPresentationTime;
    double _nextPrerollPlaybackTime;
    double _heartbeatTokenExpiration;
}

@property BOOL visuallyEngaged;
@property(readonly) NSArray * gatewayEnabledStationIDs;
@property double nextInterstitialPresentationTime;
@property double nextPrerollPlaybackTime;
@property(retain) NSObject<OS_dispatch_queue> * policyEngineQueue;
@property(readonly) NSMutableArray * queuedCommands;
@property BOOL enabled;
@property(retain) NSData * heartbeatToken;
@property(retain) NSError * heartbeatTokenError;
@property double heartbeatTokenExpiration;
@property(retain) ADInterstitialAd * sharedInterstitialAd;
@property BOOL sharedInterstitialAdIsInUse;
@property(copy) NSString * sharedInterstitialSection;
@property(copy) NSURL * sharedInterstitialServerURL;
@property(copy) NSString * sharedInterstitialAuthenticationUserName;
@property(retain) ADBannerView * sharedMediaPlayerVideoAd;
@property BOOL sharedMediaPlayerVideoAdClaimed;
@property(retain) NSError * lastSharedMediaPlayerVideoAdError;
@property(retain) NSData * currentStationData;
@property(retain) NSData * currentSongData;
@property(retain) NSArray * currentSponsoredStationIDs;

+ (id)sharedEngine;

- (void)reportStationTileImpression:(id)arg1;
- (void)setSponsoredStationIDs:(id)arg1;
- (void)setVisuallyEngaged:(BOOL)arg1;
- (void)acquireMatchSlotWithBodyParameters:(id)arg1 completionHandler:(id)arg2;
- (void)didEnterStation:(id)arg1;
- (id)heartbeatToken:(id*)arg1;
- (void)disablePolicyEngine;
- (void)enablePolicyEngine;
- (void)reportClientEvent:(id)arg1;
- (void)didStopPlaybackOnStation:(id)arg1;
- (void)optimalTransmissionWindowDidOpen;
- (void)didBeginPlaybackOnStation:(id)arg1 song:(id)arg2;
- (void)requestAdsForSlot:(id)arg1 completionHandler:(id)arg2;
- (void)bannerViewActionDidFinish:(id)arg1;
- (BOOL)bannerViewActionShouldBegin:(id)arg1 willLeaveApplication:(BOOL)arg2;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)bannerViewDidLoadAd:(id)arg1;
- (void)bannerViewWillLoadAd:(id)arg1;
- (id)currentSponsoredStationIDs;
- (void)setCurrentSongData:(id)arg1;
- (id)currentSongData;
- (void)setCurrentStationData:(id)arg1;
- (id)currentStationData;
- (void)setSharedInterstitialAd:(id)arg1;
- (void)setPolicyEngineQueue:(id)arg1;
- (void)setNextPrerollPlaybackTime:(double)arg1;
- (void)reportListeningPresenceEvent:(int)arg1;
- (id)gatewayEnabledStationIDs;
- (void)songSkipped;
- (void)songStopped;
- (void)songBeganWithTags:(id)arg1;
- (void)stationChanged:(id)arg1 completionHandler:(id)arg2;
- (void)setStationData:(id)arg1 withInitialTrackBlobs:(id)arg2;
- (void)relinquishSharedMediaPlayerVideoAd;
- (BOOL)claimSharedMediaPlayerVideoAdWithError:(id*)arg1;
- (BOOL)canPresentSharedInterstitialAdWithResultMessage:(id*)arg1;
- (void)setSharedInterstitialAuthenticationUserName:(id)arg1;
- (void)setSharedInterstitialServerURL:(id)arg1;
- (void)setSharedInterstitialSection:(id)arg1;
- (void)removeRecordForAccountWithIdentifier:(id)arg1;
- (void)acquireMatchSlotWithUserConfirmation:(BOOL)arg1 completionHandler:(id)arg2;
- (void)songBeganWithTags:(id)arg1 completionHandler:(id)arg2;
- (void)sharedMediaPlayerVideoAdActionDidFinish;
- (void)sharedMediaPlayerVideoAdDidFailToReceiveAdWithError:(id)arg1;
- (void)sharedMediaPlayerVideoAdDidLoad;
- (void)sharedMediaPlayerVideoAdWillLoad;
- (void)setLastSharedMediaPlayerVideoAdError:(id)arg1;
- (void)setSharedMediaPlayerVideoAdClaimed:(BOOL)arg1;
- (double)nextPrerollPlaybackTime;
- (id)lastSharedMediaPlayerVideoAdError;
- (BOOL)sharedMediaPlayerVideoAdClaimed;
- (id)sharedMediaPlayerVideoAd;
- (void)setSharedMediaPlayerVideoAd:(id)arg1;
- (void)setSharedInterstitialAdIsInUse:(BOOL)arg1;
- (double)nextInterstitialPresentationTime;
- (BOOL)sharedInterstitialAdIsInUse;
- (id)sharedInterstitialAd;
- (id)sharedInterstitialAuthenticationUserName;
- (id)sharedInterstitialSection;
- (id)sharedInterstitialServerURL;
- (void)setCurrentSponsoredStationIDs:(id)arg1;
- (void)_performWhenAdSheetConnectionEstablished:(id)arg1;
- (double)heartbeatTokenExpiration;
- (id)heartbeatToken;
- (id)heartbeatTokenError;
- (void)setHeartbeatTokenExpiration:(double)arg1;
- (void)setHeartbeatTokenError:(id)arg1;
- (void)setHeartbeatToken:(id)arg1;
- (id)queuedCommands;
- (void)_enablePolicyEngineWithReason:(id)arg1;
- (id)policyEngineQueue;
- (void)_adSheetConnectionBootstrapped;
- (BOOL)visuallyEngaged;
- (void)finishedPresentingSharedInterstitialAd;
- (void)setNextInterstitialPresentationTime:(double)arg1;
- (void)setGatewayEnabledStationIDs:(id)arg1;
- (void)setHeartbeatToken:(id)arg1 expirationDate:(double)arg2 error:(id)arg3;
- (void)interstitialAd:(id)arg1 didFailWithError:(id)arg2;
- (void)interstitialAdDidLoad:(id)arg1;
- (void)interstitialAdDidUnload:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)enabled;
- (id)init;

@end
