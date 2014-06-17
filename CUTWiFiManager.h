/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
 */

@class NSHashTable, NSString, NSRecursiveLock, NSDictionary, NSObject<OS_dispatch_queue>, NSNumber;

@interface CUTWiFiManager : NSObject <CUTPowerMonitorDelegate> {
    BOOL _isPrimaryCellularCached;
    NSRecursiveLock *_lock;
    NSHashTable *_delegateMap;
    NSHashTable *_wowClients;
    void *_currentNetwork;
    int _linkToken;
    void *_wifiManager;
    void *_wifiDevice;
    void *_dynamicStore;
    NSDictionary *_lastWiFiPowerInfo;
    NSObject<OS_dispatch_queue> *_scUpdateQueue;
}

@property(readonly) BOOL isWiFiEnabled;
@property(readonly) BOOL isWiFiAssociated;
@property(readonly) BOOL isHostingWiFiHotSpot;
@property(readonly) BOOL isWiFiCaptive;
@property(retain,readonly) NSNumber * wiFiSignalStrength;
@property(retain,readonly) NSNumber * wiFiScaledRSSI;
@property(retain,readonly) NSNumber * wiFiScaledRate;
@property(retain,readonly) NSString * currentSSID;
@property(retain) NSRecursiveLock * lock;
@property void* wifiManager;
@property void* wifiDevice;
@property void* currentNetwork;
@property void* dynamicStore;
@property int linkToken;
@property(retain) NSHashTable * delegateMap;
@property(retain) NSHashTable * wowClients;
@property(copy) NSDictionary * lastWiFiPowerInfo;
@property NSObject<OS_dispatch_queue> * scUpdateQueue;
@property BOOL isPrimaryCellularCached;

+ (id)sharedInstance;

- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)setWifiManager:(void*)arg1;
- (void)setWifiDevice:(void*)arg1;
- (void*)wifiDevice;
- (void*)wifiManager;
- (BOOL)willTryToSearchForWiFiNetwork;
- (BOOL)willTryToAutoAssociateWiFiNetwork;
- (BOOL)isHostingWiFiHotSpot;
- (BOOL)isWiFiCaptive;
- (BOOL)isWiFiAssociated;
- (id)wiFiScaledRate;
- (id)wiFiScaledRSSI;
- (id)wiFiSignalStrength;
- (void)_createWiFiManager;
- (void)setIsPrimaryCellularCached:(BOOL)arg1;
- (BOOL)isPrimaryCellularCached;
- (void)setScUpdateQueue:(id)arg1;
- (id)scUpdateQueue;
- (void)setLastWiFiPowerInfo:(id)arg1;
- (id)lastWiFiPowerInfo;
- (void)setDynamicStore:(void*)arg1;
- (void*)dynamicStore;
- (void)setLinkToken:(int)arg1;
- (int)linkToken;
- (void)setCurrentNetwork:(void*)arg1;
- (void)setWowClients:(id)arg1;
- (id)wowClients;
- (void)setDelegateMap:(id)arg1;
- (id)delegateMap;
- (id)currentSSID;
- (void)_performPowerReading;
- (void)_setCurrentNetwork:(struct __WiFiNetwork { }*)arg1;
- (void)_handleDeviceAttachedCallback;
- (void)removeWoWClient:(id)arg1;
- (void)addWoWClient:(id)arg1;
- (BOOL)_isPrimaryCellular;
- (void)_performCurrentNetworkBlock:(id)arg1;
- (double)_wifiMeasurementErrorForInterval:(double)arg1;
- (void)currentWiFiNetworkPowerUsageWithCompletion:(id)arg1;
- (void)_performCurrentNetworkBlock:(id)arg1 withDevice:(struct __WiFiDeviceClient { }*)arg2;
- (void)_performDeviceBlock:(id)arg1;
- (void)_performDeviceBlock:(id)arg1 useCache:(BOOL)arg2;
- (void)_handlePotentialDeviceChange:(struct __WiFiDeviceClient { }*)arg1;
- (void)_performCurrentNetworkBlock:(id)arg1 withDevice:(struct __WiFiDeviceClient { }*)arg2 async:(BOOL)arg3;
- (id)_ssidFromNetwork:(struct __WiFiNetwork { }*)arg1;
- (void)_createDynamicStore;
- (void)setLock:(id)arg1;
- (void*)currentNetwork;
- (id)lock;
- (void)dealloc;
- (id)init;
- (BOOL)isWiFiEnabled;

@end