/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@class NSXPCConnection;

@interface CoreRCManagerClient : CoreRCManager <CoreRCXPCServiceCEC, CoreRCXPCClientCEC, CoreRCXPCServicePrivate, CoreRCXPCServiceCECPrivate, CoreRCXPCServiceIR, CoreRCXPCService, CoreRCXPCClient> {
    NSXPCConnection *_connection;
}


- (void)busHasBeenUpdated:(id)arg1;
- (void)busHasBeenRemoved:(id)arg1;
- (void)busHasBeenAdded:(id)arg1;
- (void)sendHIDEventAsync:(id)arg1 fromDevice:(id)arg2 toDevice:(id)arg3 reply:(id)arg4;
- (void)mergeBus:(id)arg1;
- (void)synchBuses:(id)arg1;
- (void)queryBusesAsync:(id)arg1;
- (void)getPropertyAsyncForKey:(id)arg1 ofBus:(id)arg2 reply:(id)arg3;
- (void)setPropertyAsync:(id)arg1 forKey:(id)arg2 ofBus:(id)arg3 reply:(id)arg4;
- (id)buses;
- (BOOL)sendHIDEvent:(id)arg1 fromDevice:(id)arg2 toDevice:(id)arg3 error:(id*)arg4;
- (void)fakeDeviceRemoveAsync:(id)arg1 reply:(id)arg2;
- (void)fakeAssignLogicalAddressAsync:(id)arg1 logicalAddress:(unsigned char)arg2 reply:(id)arg3;
- (void)fakeCreateRemoteInstanceAsync:(unsigned int)arg1 bus:(id)arg2 withLogicalAddress:(unsigned char)arg3 withPhysicalAddress:(unsigned int)arg4 reply:(id)arg5;
- (void)fakeSetBusLinkStateAsync:(id)arg1 newLinkState:(BOOL)arg2 reply:(id)arg3;
- (void)fakeBusCreateAsync:(unsigned int)arg1 reply:(id)arg2;
- (void)setLoggingAsync:(id)arg1 reply:(id)arg2;
- (void)queryLoggingAsync:(id)arg1;
- (id)propertyForKey:(id)arg1 ofBus:(id)arg2 error:(id*)arg3;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2 ofBus:(id)arg3 error:(id*)arg4;
- (void)device:(id)arg1 receivedHIDEvent:(id)arg2 fromDevice:(id)arg3;
- (void)bus:(id)arg1 deviceHasBeenUpdated:(id)arg2;
- (void)bus:(id)arg1 deviceHasBeenRemoved:(id)arg2;
- (void)bus:(id)arg1 deviceHasBeenAdded:(id)arg2;
- (void)cecDevice:(id)arg1 standbyRequestHasBeenReceived:(id)arg2;
- (void)cecDevice:(id)arg1 featureAbort:(id)arg2;
- (void)cecDevice:(id)arg1 deckControlStatusHasBeenUpdated:(unsigned int)arg2 fromDevice:(id)arg3;
- (void)cecDevice:(id)arg1 deckControlCommandHasBeenReceived:(unsigned int)arg2 fromDevice:(id)arg3;
- (void)cecDevice:(id)arg1 deckControlPlayHasBeenReceived:(unsigned int)arg2 fromDevice:(id)arg3;
- (void)cecDevice:(id)arg1 activeSourceStatusHasChanged:(BOOL)arg2;
- (void)cecBus:(id)arg1 activeSourceHasChangedTo:(id)arg2 fromDevice:(id)arg3;
- (void)setTvLanguageCodeAsync:(id)arg1 forBus:(id)arg2 reply:(id)arg3;
- (void)setOsdNameAsync:(id)arg1 forBus:(id)arg2 reply:(id)arg3;
- (void)queryLocalInstanceAsync:(unsigned int)arg1 bus:(id)arg2 reply:(id)arg3;
- (void)performStandbyAsync:(id)arg1 targetDevice:(id)arg2 reply:(id)arg3;
- (void)performSystemAudioModeRequestAsync:(id)arg1 withDesiredState:(unsigned int)arg2 reply:(id)arg3;
- (void)performSetSystemAudioControlEnabled:(BOOL)arg1 withDeviceAsync:(id)arg2 reply:(id)arg3;
- (void)performRequestActiveSourceAsync:(id)arg1 reply:(id)arg2;
- (void)performRefreshProperties:(id)arg1 ofDevice:(id)arg2 withDeviceAsync:(id)arg3 reply:(id)arg4;
- (void)performRefreshDevicesAsync:(id)arg1 reply:(id)arg2;
- (void)performInactiveSourceAsync:(id)arg1 reply:(id)arg2;
- (void)performDeckControlRefreshStatusAsync:(id)arg1 targetDevice:(id)arg2 requestType:(unsigned int)arg3 reply:(id)arg4;
- (void)performDeckControlPlayAsync:(id)arg1 playMode:(unsigned int)arg2 targetDevice:(id)arg3 reply:(id)arg4;
- (void)performDeckControlCommandAsync:(id)arg1 controlMode:(unsigned int)arg2 targetDevice:(id)arg3 reply:(id)arg4;
- (void)performDeckControlSetDeckStatusAsync:(unsigned int)arg1 forDevice:(id)arg2 reply:(id)arg3;
- (void)performActiveSourceAsync:(id)arg1 withMenus:(BOOL)arg2 reply:(id)arg3;
- (void)addExternalDeviceOnBusAsync:(id)arg1 reply:(id)arg2;
- (id)connection;
- (void)invalidate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end