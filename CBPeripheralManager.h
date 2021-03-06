/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class CBXpcConnection, NSMapTable, NSMutableArray, NSLock, CBPairingAgent, NSMutableDictionary, <CBPeripheralManagerDelegate>;

@interface CBPeripheralManager : NSObject <CBPairingAgentParentDelegate, CBXpcConnectionDelegate> {
    <CBPeripheralManagerDelegate> *_delegate;
    struct { 
        unsigned int willRestoreState : 1; 
        unsigned int didAddService : 1; 
        unsigned int didReceiveReadRequest : 1; 
        unsigned int didReceiveWriteRequests : 1; 
        unsigned int centralDidSubscribeToCharacteristic : 1; 
        unsigned int centralDidUnsubscribeFromCharacteristic : 1; 
        unsigned int didStartAdvertising : 1; 
        unsigned int isReadyToUpdate : 1; 
        unsigned int centralDidConnect : 1; 
        unsigned int centralDidUpdateConnectionParameters : 1; 
    } _delegateFlags;
    CBXpcConnection *_connection;
    CBPairingAgent *_pairingAgent;
    int _state;
    BOOL _isAdvertising;
    NSMapTable *_centrals;
    NSMutableArray *_services;
    NSMutableDictionary *_characteristicIDs;
    NSLock *_updateLock;
    BOOL _readyForUpdates;
    BOOL _waitingForReady;
}

@property <CBPeripheralManagerDelegate> * delegate;
@property int state;
@property BOOL isAdvertising;
@property(readonly) CBPairingAgent * sharedPairingAgent;

+ (int)authorizationStatus;

- (void)stopAdvertising;
- (BOOL)updateValue:(id)arg1 forCharacteristic:(id)arg2 onSubscribedCentrals:(id)arg3;
- (void)respondToRequest:(id)arg1 withResult:(int)arg2;
- (void)startAdvertising:(id)arg1;
- (void)addService:(id)arg1;
- (void)removeAllServices;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (id)sharedPairingAgent;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3;
- (void)setState:(int)arg1;
- (int)state;
- (id)delegate;
- (void)setIsAdvertising:(BOOL)arg1;
- (BOOL)isAdvertising;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (oneway void)release;
- (void)removeService:(id)arg1;
- (void)setDesiredConnectionLatency:(int)arg1 forCentral:(id)arg2;
- (void)handleSolicitedServicesFound:(id)arg1;
- (void)handleMTUChanged:(id)arg1;
- (void)handleReadyForUpdates:(id)arg1;
- (void)handleAdvertisingStopped:(id)arg1;
- (void)handleAdvertisingStarted:(id)arg1;
- (void)handleNotificationRemoved:(id)arg1;
- (void)handleNotificationAdded:(id)arg1;
- (void)handleSetAttributeValues:(id)arg1;
- (void)handleGetAttributeValue:(id)arg1;
- (void)handleServiceAdded:(id)arg1;
- (void)forEachCentral:(id)arg1;
- (id)centralWithIdentifier:(id)arg1 dict:(id)arg2;
- (void)xpcConnectionDidFinalize:(id)arg1;
- (void)xpcConnection:(id)arg1 didReceiveMsg:(unsigned short)arg2 args:(id)arg3;
- (void)xpcConnectionIsInvalid:(id)arg1;
- (void)xpcConnectionDidReset:(id)arg1;
- (id)peerWithIdentifier:(id)arg1 dict:(id)arg2;
- (void)handleConnectionParametersUpdated:(id)arg1;
- (void)handleRestoringState:(id)arg1;
- (void)handleStateUpdated:(id)arg1;
- (id)sendSyncMsg:(int)arg1 args:(id)arg2;
- (BOOL)sendMsg:(int)arg1 args:(id)arg2;
- (BOOL)isMsgAllowedAlways:(int)arg1;
- (BOOL)isMsgAllowedWhenOff:(int)arg1;

@end
