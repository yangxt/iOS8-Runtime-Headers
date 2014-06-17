/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSObject<OS_dispatch_queue>, <HAPKeyStore>, NSDictionary, NSString, HAPHTTPClient, <HAPAccessoryServerDelegate>, HAPAccessory;

@interface HAPAccessoryServerIP : HAPAccessoryServer  {
    struct MFiSAP { } *_mfiSAP;
    struct PairingSessionPrivate { } *_pairingSession;
    BOOL _pairedState;
    NSString *_deviceID;
    NSString *_model;
    NSString *_protocolVersion;
    NSString *_sourceVersion;
    int _configNumber;
    int _stateNumber;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSDictionary *_bonjourDeviceInfo;
    <HAPAccessoryServerDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    <HAPKeyStore> *_keyStore;
    NSString *_accessoryServerName;
    NSArray *_ipServices;
    HAPAccessory *_primaryAccessoryForServer;
    HAPHTTPClient *_httpClient;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _pairVerifyCompletionBlock;

    NSString *_controllerUsername;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _netServiceResolveCompletionBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _invalidateCompletionBlock;

    NSObject<OS_dispatch_queue> *_invalidateQueue;
}

@property(retain) NSString * deviceID;
@property(retain) NSString * model;
@property(retain) NSString * protocolVersion;
@property(retain) NSString * sourceVersion;
@property int configNumber;
@property int stateNumber;
@property(retain) NSObject<OS_dispatch_queue> * workQueue;
@property(retain) NSDictionary * bonjourDeviceInfo;
@property <HAPAccessoryServerDelegate> * delegate;
@property(retain) NSObject<OS_dispatch_queue> * delegateQueue;
@property <HAPKeyStore> * keyStore;
@property(copy) NSString * accessoryServerName;
@property(retain) NSArray * ipServices;
@property(retain) HAPAccessory * primaryAccessoryForServer;
@property BOOL pairedState;
@property(retain) HAPHTTPClient * httpClient;
@property(copy) id pairVerifyCompletionBlock;
@property(retain) NSString * controllerUsername;
@property(copy) id netServiceResolveCompletionBlock;
@property(copy) id invalidateCompletionBlock;
@property(retain) NSObject<OS_dispatch_queue> * invalidateQueue;


- (id)services;
- (id)workQueue;
- (void)setSourceVersion:(id)arg1;
- (id)sourceVersion;
- (id)protocolVersion;
- (void)setProtocolVersion:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)setNetServiceResolveCompletionBlock:(id)arg1;
- (id)netServiceResolveCompletionBlock;
- (void)setControllerUsername:(id)arg1;
- (void)setIpServices:(id)arg1;
- (void)setAccessoryServerName:(id)arg1;
- (void)setKeyStore:(id)arg1;
- (BOOL)removePairingForCurrentControllerWithCompletion:(id)arg1;
- (BOOL)pairAdditionalControllerWithName:(id)arg1 publicKey:(id)arg2 completion:(id)arg3;
- (long)_mfiSetupStart;
- (void)writeValue:(id)arg1 forCharacteristic:(id)arg2 withCompletionHandler:(id)arg3;
- (void)readValueForCharacteristic:(id)arg1 withCompletionHandler:(id)arg2;
- (BOOL)stopPairingWithError:(id*)arg1;
- (BOOL)tryPairingPassword:(id)arg1 error:(id*)arg2;
- (BOOL)startPairingWithError:(id*)arg1;
- (void)discoverAccessories;
- (id)primaryAccessory;
- (void)updateWithBonjourDeviceInfo:(id)arg1;
- (BOOL)isPaired;
- (id)briefDescription;
- (void)invalidateWithCompletionHandler:(id)arg1 queue:(id)arg2;
- (id)initWithBonjourDeviceInfo:(id)arg1;
- (BOOL)removePairingForControllerWithName:(id)arg1 publicKey:(id)arg2 completion:(id)arg3;
- (void)_removePairingForControllerWithName:(id)arg1 publicKey:(id)arg2 completion:(id)arg3;
- (void)_startPairingAdditionalControllerWithName:(id)arg1 publicKey:(id)arg2 completion:(id)arg3;
- (id)pairVerifyCompletionBlock;
- (long)_handlePairVerifyCompletionWithData:(id)arg1;
- (id)controllerUsername;
- (void)setPairedState:(BOOL)arg1;
- (long)_handlePairSetupCompletionWithData:(id)arg1;
- (long)_ensureHTTPClientSetUp;
- (long)_handleMFiSetupCompletionWithData:(id)arg1;
- (long)_pairVerifyStart;
- (void)setPrimaryAccessoryForServer:(id)arg1;
- (void)_copyPropertiesForPrimaryAccessoryFromAccessory:(id)arg1;
- (id)primaryAccessoryForServer;
- (void)_parseAttributeDatabase:(id)arg1;
- (void)setStateNumber:(int)arg1;
- (void)setConfigNumber:(int)arg1;
- (void)_parseTXTRecordDictionary:(id)arg1;
- (id)bonjourDeviceInfo;
- (void)_writeValue:(id)arg1 forCharacteristic:(id)arg2 withCompletionHandler:(id)arg3;
- (id)httpClient;
- (void)_readValueForCharacteristic:(id)arg1 withCompletionHandler:(id)arg2;
- (void)setHttpClient:(id)arg1;
- (long)_pairSetupTryPassword:(id)arg1;
- (long)_pairSetupStart;
- (id)keyStore;
- (void)_establishSecureSession;
- (void)setPairVerifyCompletionBlock:(id)arg1;
- (void)_getAttributeDatabase;
- (BOOL)_isSessionEstablished;
- (id)ipServices;
- (void)setBonjourDeviceInfo:(id)arg1;
- (void)_updateWithBonjourDeviceInfo:(id)arg1;
- (BOOL)pairedState;
- (id)accessoryServerName;
- (int)stateNumber;
- (int)configNumber;
- (id)invalidateCompletionBlock;
- (id)invalidateQueue;
- (void)setInvalidateQueue:(id)arg1;
- (void)setInvalidateCompletionBlock:(id)arg1;
- (BOOL)_checkPairedState;
- (BOOL)_parseAndValidateTXTRecord;
- (void)setDelegateQueue:(id)arg1;
- (void)setDeviceID:(id)arg1;
- (id)deviceID;
- (id)delegateQueue;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void).cxx_destruct;
- (id)model;
- (void)setModel:(id)arg1;
- (id)identifier;
- (id)delegate;
- (id)name;
- (id)description;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end