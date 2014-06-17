/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@class NSHashTable, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_group>, NSProtocolChecker;

@interface IDSDaemonListener : NSObject <IDSDaemonListenerProtocol> {
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSHashTable *_handlers;
    NSProtocolChecker *_protocol;
    NSMutableDictionary *_topicToAccountDictionaries;
    NSMutableDictionary *_topicToEnabledAccounts;
    NSMutableDictionary *_accountToDevices;
    NSObject<OS_dispatch_group> *_accountsLoadedGroup;
    NSObject<OS_dispatch_group> *_enabledAccountsLoadedGroup;
    NSObject<OS_dispatch_group> *_dependentDevicesLoadedGroup;
    BOOL _setupComplete;
    BOOL _postedSetupComplete;
    BOOL _hidingDisconnect;
}

@property(readonly) BOOL isSetupComplete;
@property(readonly) BOOL hasPostedSetupComplete;
@property(setter=_setHidingDisconnect:) BOOL _hidingDisconnect;


- (void)xpcObject:(id)arg1 objectContext:(id)arg2;
- (void)registrationFailedForAccount:(id)arg1 needsDeletion:(id)arg2;
- (void)activeDevicesUpdatedForAccount:(id)arg1;
- (void)refreshRegistrationForAccount:(id)arg1;
- (void)account:(id)arg1 displayNameChanged:(id)arg2;
- (void)account:(id)arg1 loginChanged:(id)arg2;
- (void)account:(id)arg1 profileChanged:(id)arg2;
- (void)account:(id)arg1 vettedAliasesChanged:(id)arg2;
- (void)account:(id)arg1 aliasesChanged:(id)arg2;
- (void)account:(id)arg1 registrationStatusInfoChanged:(id)arg2;
- (BOOL)hasPostedSetupComplete;
- (BOOL)isSetupComplete;
- (void)_setHidingDisconnect:(BOOL)arg1;
- (void)removeHandler:(id)arg1;
- (void)addHandler:(id)arg1;
- (void)_noteDisconnected;
- (BOOL)_hidingDisconnect;
- (void)accountRemoved:(id)arg1;
- (void)setupComplete:(BOOL)arg1 info:(id)arg2;
- (id)dependentDevicesForAccount:(id)arg1 blocking:(BOOL)arg2;
- (id)enabledAccountsForService:(id)arg1 blocking:(BOOL)arg2;
- (id)accountDictionariesForService:(id)arg1 blocking:(BOOL)arg2;
- (void)_deferredSetupOnIvarQueue:(id)arg1;
- (void)_callHandlersWithBlock:(id)arg1;
- (void)_removeAccountOnIvarQueue:(id)arg1;
- (void)_callHandlersWithBlockOnIvarQueue:(id)arg1 cleanup:(id)arg2;
- (void)_callHandlersWithBlockOnIvarQueue:(id)arg1;
- (void)continuityDidDisconnectFromPeer:(id)arg1 withError:(id)arg2;
- (void)continuityDidConnectToPeer:(id)arg1 withError:(id)arg2;
- (void)continuityDidDiscoverPeerWithData:(id)arg1 fromPeer:(id)arg2;
- (void)continuityDidDiscoverType:(int)arg1 withData:(id)arg2 fromPeer:(id)arg3;
- (void)continuityDidFailToStartScanningForType:(int)arg1 withError:(id)arg2;
- (void)continuityDidStopScanningForType:(int)arg1;
- (void)continuityDidStartScanningForType:(int)arg1;
- (void)continuityDidFailToStartAdvertisingOfType:(int)arg1 withError:(id)arg2;
- (void)continuityDidStopAdvertisingOfType:(int)arg1;
- (void)continuityDidStartAdvertisingOfType:(int)arg1;
- (void)continuityDidUpdateState:(int)arg1;
- (void)device:(id)arg1 nsuuidChanged:(id)arg2;
- (void)session:(id)arg1 audioEnabled:(BOOL)arg2;
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;
- (void)sessionStarted:(id)arg1;
- (void)sessionDeclineReceived:(id)arg1;
- (void)sessionAcceptReceived:(id)arg1;
- (void)account:(id)arg1 localDeviceAdded:(id)arg2;
- (void)account:(id)arg1 dependentDevicesUpdated:(id)arg2;
- (void)account:(id)arg1 accountInfoChanged:(id)arg2;
- (void)accountDisabled:(id)arg1 onService:(id)arg2;
- (void)accountEnabled:(id)arg1 onService:(id)arg2;
- (void)accountAdded:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)dealloc;
- (id)init;

@end