/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@class NSMutableDictionary, <FBWorkspaceServerDelegate>, NSObject<OS_xpc_object>, NSObject<OS_dispatch_queue>, NSMutableArray, BSSignal;

@interface FBWorkspaceServer : NSObject  {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
    BSSignal *_invalidateSignal;
    NSMutableDictionary *_sceneIDToSceneHandlerMap;
    NSMutableArray *_messagesQueuedForSend;
    <FBWorkspaceServerDelegate> *_delegate;
    unsigned int _transactionBlockDepth;
    BOOL _triedToSendMessageInTransaction;
}

@property <FBWorkspaceServerDelegate> * delegate;


- (void)_queue_setXPCConnection:(id)arg1;
- (id)_handlerForSceneID:(id)arg1;
- (void)_queue_deserializeEventFromMessage:(id)arg1 ofType:(Class)arg2 withSceneHandlerBlock:(id)arg3;
- (void)_queue_deserializeEventFromMessage:(id)arg1 ofType:(Class)arg2 withHandlerBlock:(id)arg3;
- (void)_queue_sendReplyForMessage:(id)arg1 withEvent:(id)arg2;
- (void)_queue_handleSceneDetachContext:(id)arg1;
- (void)_queue_handleSceneUpdateContext:(id)arg1;
- (void)_queue_handleSceneAttachContext:(id)arg1;
- (void)_queue_handleSceneDidReceiveActions:(id)arg1;
- (void)_queue_handleSceneDidUpdateClientSettings:(id)arg1;
- (void)_queue_handleDestroySceneRequest:(id)arg1;
- (void)_queue_handleCreateSceneRequest:(id)arg1;
- (void)_queue_handleMessage:(id)arg1;
- (void)_queue_clientExited;
- (void)_queue_invalidate;
- (void)sendSceneActionsEvent:(id)arg1;
- (void)sendDestroySceneEvent:(id)arg1 withCompletion:(id)arg2;
- (void)sendSceneUpdateEvent:(id)arg1 withCompletion:(id)arg2;
- (void)sendCreateSceneEvent:(id)arg1 withCompletion:(id)arg2;
- (void)unregisterSceneEventHandlerForSceneID:(id)arg1;
- (void)registerSceneEventHandler:(id)arg1 forSceneID:(id)arg2;
- (void)sendActionsEvent:(id)arg1 completion:(id)arg2;
- (BOOL)_queue_handleMessage:(id)arg1 withType:(long long)arg2;
- (void)_queue_sendMessage:(int)arg1 withEvent:(id)arg2;
- (void)_queue_sendMessage:(int)arg1 withMessagePacker:(id)arg2 withReplyHandler:(id)arg3;
- (void)_queue_sendMessage:(int)arg1 withEvent:(id)arg2 withResponseEvent:(id)arg3 ofType:(Class)arg4;
- (void)endTransaction;
- (void)beginTransaction;
- (id)auditToken;
- (id)_queue;
- (id)initWithQueue:(id)arg1;
- (id)delegate;
- (void)invalidate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end
