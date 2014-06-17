/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, SSLookupRequest, CLLocationManager, NSObject<OS_dispatch_source>, NSDictionary, SKUIClientContext;

@interface SKUINearMeController : NSObject <CLLocationManagerDelegate, SKUIItemStateCenterObserver> {
    NSArray *_items;
    int _status;
    BOOL _isMonitoring;
    SSLookupRequest *_lookupRequest;
    CLLocationManager *_locationManager;
    int _authorizationStatus;
    NSObject<OS_dispatch_source> *_locationTimeoutTimer;
    int _locationTimeoutCount;
    NSObject<OS_dispatch_source> *_refreshTimer;
    NSDictionary *_responseDictionary;
    SKUIClientContext *_clientContext;
}

@property(retain) SKUIClientContext * clientContext;
@property(readonly) NSArray * items;
@property(readonly) int status;
@property(readonly) NSDictionary * responseDictionary;

+ (id)sharedController;

- (void)getItems;
- (void)_refreshTimeout;
- (void)_finishLookupWithItems:(id)arg1 response:(id)arg2 error:(id)arg3;
- (void)_startRefreshTimer;
- (void)_monitorLocationTimeout;
- (void)_stopRefreshTimer;
- (void)_lookupItemsForLocation:(id)arg1;
- (void)_setItems:(id)arg1 responseDictionary:(id)arg2 error:(id)arg3 status:(int)arg4;
- (void)_disableNearMe;
- (id)clientContext;
- (void)itemStateCenterRestrictionsChanged:(id)arg1;
- (void)setClientContext:(id)arg1;
- (id)responseDictionary;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)disable;
- (int)status;
- (void).cxx_destruct;
- (void)_applicationWillEnterForeground:(id)arg1;
- (id)items;
- (void)_stopMonitoringLocation;
- (void)_startMonitoringLocation;
- (id)init;

@end