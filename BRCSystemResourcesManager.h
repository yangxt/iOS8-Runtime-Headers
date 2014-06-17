/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class NSObject<OS_dispatch_source>, NSHashTable, NSObject<OS_dispatch_queue>, NSMapTable, NSMutableSet, BRReachabilityMonitor, NSMutableDictionary;

@interface BRCSystemResourcesManager : NSObject <BRReachabilityObserver> {
    NSObject<OS_dispatch_queue> *_notificationQueue;
    BOOL _invalidated;
    NSHashTable *_reachabilityObservers;
    BRReachabilityMonitor *_reachabilityMonitor;
    BOOL _isNetworkReachable;
    NSObject<OS_dispatch_source> *_isNetworkReachableTimer;
    NSHashTable *_powerObservers;
    int _powerNotifyToken;
    BOOL _powerLevelOK;
    NSObject<OS_dispatch_source> *_powerLevelOKTimer;
    NSMutableSet *_lowDiskSet;
    NSMutableDictionary *_lowDiskDict;
    NSObject<OS_dispatch_source> *_lowDiskSource;
    NSObject<OS_dispatch_source> *_lowDiskTimer;
    NSHashTable *_lowMemoryObservers;
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
    NSMapTable *_processObservers;
}

@property(readonly) BOOL isNetworkReachable;
@property(readonly) BOOL isPowerOK;

+ (id)manager;

- (BOOL)isNetworkReachable;
- (void)_didReceiveMemoryWarning;
- (void)removeLowMemoryObserver:(id)arg1;
- (void)addLowMemoryObserver:(id)arg1;
- (BOOL)hasEnoughSpaceForDevice:(int)arg1;
- (void)removePowerObserver:(id)arg1;
- (void)addPowerObserver:(id)arg1;
- (BOOL)isPowerOK;
- (void)removeReachabilityObserver:(id)arg1;
- (void)reachabilityMonitor:(id)arg1 didChangeReachabilityStatusTo:(BOOL)arg2;
- (id)_createMonitoringObjectForProcessID:(int)arg1 observer:(id)arg2;
- (void)_invalidateProcessMonitorObject:(id)arg1;
- (void)_processLowDiskNotification:(BOOL)arg1;
- (void)_setPowerLevel:(BOOL)arg1;
- (void)_setPowerLevelWithCoalescing:(BOOL)arg1;
- (void)_setNetworkReachable:(BOOL)arg1;
- (void)_setNetworkReachableWithCoalescing:(BOOL)arg1;
- (void)_resetLowDiskManager;
- (void)_resetPowerManager;
- (void)_resetReachability;
- (void)_invalidateProcessObservers;
- (void)_invalidateLowMemory;
- (void)_invalidateLowDiskManager;
- (void)_invalidatePowerManager;
- (void)_invalidateReachability;
- (void)_initProcessObservers;
- (void)_initLowMemory;
- (void)_initLowDiskManager;
- (void)_initPowerManager;
- (void)_initReachability;
- (void)addReachabilityObserver:(id)arg1;
- (void)removeProcessMonitor:(id)arg1;
- (void)addProcessMonitor:(id)arg1 forProcessID:(int)arg2;
- (void)removeLowDiskObserver:(id)arg1 forDevice:(int)arg2;
- (void)addLowDiskObserver:(id)arg1 forDevice:(int)arg2;
- (void).cxx_destruct;
- (void)reset;
- (void)close;
- (void)resume;
- (void)suspend;
- (void)dealloc;
- (id)init;

@end