/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class NSArray, <RURadioDataSourceDelegate>, NSMutableSet, RadioPushNotificationController, RURadioPlaybackCoordinator;

@interface RURadioDataSource : MPUDataSource <RadioPushNotificationControllerDelegate> {
    <RURadioDataSourceDelegate> *_delegate;
    NSArray *_featuredStations;
    BOOL _optedInToRadio;
    RadioPushNotificationController *_pushNotificationController;
    int _stationCountToRefresh;
    NSMutableSet *_stationsBeingRefreshed;
    NSArray *_stations;
    NSArray *_userStations;
    RURadioPlaybackCoordinator *_playbackCoordinator;
}

@property <RURadioDataSourceDelegate> * delegate;
@property(readonly) NSArray * featuredStations;
@property(getter=isOptedInToRadio,readonly) BOOL optedInToRadio;
@property(retain) RURadioPlaybackCoordinator * playbackCoordinator;
@property(readonly) NSArray * stations;
@property(readonly) NSArray * userStations;

+ (void)_accountStoreDidChangeNotification:(id)arg1;
+ (BOOL)isRadioAvailable;
+ (void)_updateRadioAvailabilityWithStoreBag:(id)arg1 error:(id)arg2;
+ (void)_reloadRadioAvailability;
+ (BOOL)isOptedInToRadio;
+ (void)_networkReachabilityDidChangeNotification:(id)arg1;
+ (void)_storeBagDidLoadNotification:(id)arg1;
+ (void)initialize;

- (id)entities;
- (void)_accountStoreDidChangeNotification:(id)arg1;
- (void)setPlaybackCoordinator:(id)arg1;
- (void)checkAcceptedTermsWithCompletionHandler:(id)arg1;
- (id)playbackContextForIndex:(unsigned int)arg1;
- (BOOL)entityIsNowPlayingAtIndex:(unsigned int)arg1;
- (int)editingTypeForEntityAtIndex:(unsigned int)arg1;
- (void)pushNotificationControllerDidReceiveSyncRequest:(id)arg1 toGlobalVersion:(unsigned long long)arg2;
- (void)_notifyAssistantOfStationChanges;
- (void)deauthenticateIfNecessary;
- (void)refreshFeaturedStations;
- (void)_reloadOptedInToRadio;
- (id)featuredStations;
- (void)_deauthenticate;
- (void)synchronizeStationsAsAutomaticUpdate:(BOOL)arg1 withCompletionHandler:(id)arg2;
- (void)_invalidateCalculatedEntities;
- (id)playbackCoordinator;
- (BOOL)isOptedInToRadio;
- (void)_radioRequestDidFinishNotification:(id)arg1;
- (void).cxx_destruct;
- (id)delegate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)stations;
- (id)userStations;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (id)initWithEntityType:(int)arg1;

@end