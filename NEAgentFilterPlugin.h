/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NEAgentServer, NSString, NSObject<OS_dispatch_queue>, NSUUID, NSObject<OS_xpc_object>, NEPluginPreferences;

@interface NEAgentFilterPlugin : NSObject <NEAgentServerDelegate> {
    struct __CFBundle { } *_pluginBundle;
    struct __CFDictionary { } *_pendingGlobalPersistentData;
    struct __CFDictionary { } *_pendingPerConfigurationPersistentData;
    struct NESocketContentFilter_s { } *_socketContentFilter;
    struct NEAgentFilterPluginCallbacks { 
        int (*PluginInit)(); 
        int (*PluginStart)(); 
        int (*PluginStop)(); 
        int (*PluginEnvironmentEvent)(); 
        int (*PluginDispose)(); 
    } _pluginCallbacks;
    void *_pluginInfo;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _browserNewFlowHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _browserDataHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _browserDataCompleteHandler;

    NSObject<OS_dispatch_queue> *_clientQueue;
    void *_clientInfo;
    struct __CFDictionary { } *_browserFlows;
    BOOL _pluginInitialized;
    NEAgentServer *_server;
    NSString *_pluginType;
    NSObject<OS_dispatch_queue> *_queue;
    NSUUID *_configID;
    NEPluginPreferences *_pluginPrefs;
    NSObject<OS_xpc_object> *_clientListener;
    int _outstandingSetGlobalDataOps;
    int _outstandingSetDataOps;
}

@property(readonly) NEAgentServer * server;
@property(readonly) NSString * pluginType;
@property(readonly) NSObject<OS_dispatch_queue> * queue;
@property BOOL pluginInitialized;
@property(retain) NSUUID * configID;
@property(retain) NEPluginPreferences * pluginPrefs;
@property(retain) NSObject<OS_xpc_object> * clientListener;
@property int outstandingSetGlobalDataOps;
@property int outstandingSetDataOps;


- (id)queue;
- (void)cleanup;
- (void).cxx_destruct;
- (id)server;
- (void)setBrowserNewFlowHandler:(id)arg1 dataHandler:(id)arg2 dataCompleteHandler:(id)arg3 clientQueue:(id)arg4 andClientInfo:(void*)arg5;
- (struct NESocketContentFilter_s { }*)copySocketContentFilter;
- (struct __CFDictionary { }*)copyPersistentDataOfType:(long)arg1;
- (BOOL)sendSetPersistentData:(struct __CFDictionary { }*)arg1 ofType:(long)arg2;
- (BOOL)sendSocketContentFilterRequestWithCompletionHandler:(id)arg1;
- (void)sendBrowserContentFilterServerRequest;
- (void)handleMessage:(id)arg1 withOuterMessage:(id)arg2;
- (void)handleDisposeWithCompletionHandler:(id)arg1;
- (BOOL)handleInit;
- (id)initWithServer:(id)arg1 pluginType:(id)arg2 primaryPluginType:(id)arg3 pluginBundle:(struct __CFBundle { }*)arg4;
- (id)configID;
- (id)pluginPrefs;
- (void)setOutstandingSetDataOps:(int)arg1;
- (int)outstandingSetDataOps;
- (void)setOutstandingSetGlobalDataOps:(int)arg1;
- (int)outstandingSetGlobalDataOps;
- (void)sendEnvironmentEventComplete:(long)arg1;
- (void)sendStatus:(long)arg1 withError:(long)arg2;
- (void)setPluginPrefs:(id)arg1;
- (void)setConfigID:(id)arg1;
- (void)acceptNewClientConnection:(id)arg1;
- (void)setClientListener:(id)arg1;
- (id)clientListener;
- (void)handleClientMessage:(id)arg1 forConnection:(id)arg2;
- (void)handleDataCompleteMessage:(id)arg1 forConnection:(id)arg2;
- (void)handleAddDataMessage:(id)arg1 forConnection:(id)arg2;
- (void)handleNewFlowMessage:(id)arg1 forConnection:(id)arg2;
- (void)closeBrowserFilterFlow:(struct NEContentFilterFlow_s { }*)arg1 forUUID:(struct __CFUUID { }*)arg2;
- (void)handleAddClientMessage:(id)arg1;
- (void)handleEnvironmentEvent:(id)arg1;
- (void)handleStop:(id)arg1;
- (void)handleStart:(id)arg1;
- (void)handleInitMessage:(id)arg1;
- (void)setPluginInitialized:(BOOL)arg1;
- (BOOL)pluginInitialized;
- (id)pluginType;

@end
