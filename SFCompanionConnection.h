/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@class SFCompanionService, NSObject<OS_dispatch_queue>, <SFCompanionConnectionDelegate>, SFCompanionDevice, NSString, <SFCompanionConnectionManagerProtocol>, SFCompanionInterface, NSXPCConnection;

@interface SFCompanionConnection : NSObject <SFCompanionConnectionManagerClient, SFCompanionXPCManagerObserver> {
    BOOL _waitForAccept;
    BOOL _invalid;
    <SFCompanionConnectionDelegate> *_delegate;
    unsigned int _status;
    SFCompanionService *_service;
    SFCompanionInterface *_exportedInterface;
    id _exportedObject;
    SFCompanionInterface *_remoteObjectInterface;
    SFCompanionDevice *_connectedDevice;
    NSString *_connectionID;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSXPCConnection *_userConnection;
    <SFCompanionConnectionManagerProtocol> *_connectionProxy;
}

@property <SFCompanionConnectionDelegate> * delegate;
@property unsigned int status;
@property(retain) SFCompanionService * service;
@property(retain) SFCompanionInterface * exportedInterface;
@property(retain) id exportedObject;
@property(retain) SFCompanionInterface * remoteObjectInterface;
@property(retain) SFCompanionDevice * connectedDevice;
@property BOOL waitForAccept;
@property(copy,readonly) NSString * connectionID;
@property NSObject<OS_dispatch_queue> * workQueue;
@property BOOL invalid;
@property(retain) NSXPCConnection * userConnection;
@property(retain) <SFCompanionConnectionManagerProtocol> * connectionProxy;


- (void)setUserConnection:(id)arg1;
- (id)userConnection;
- (void)setWaitForAccept:(BOOL)arg1;
- (void)setConnectedDevice:(id)arg1;
- (id)connectedDevice;
- (void)sendData:(id)arg1 withReply:(id)arg2;
- (BOOL)sendData:(id)arg1 withErrorHandler:(id)arg2;
- (id)initWithDevice:(id)arg1 connectionID:(id)arg2 serviceType:(id)arg3 delegate:(id)arg4;
- (id)initWithDevice:(id)arg1 serviceType:(id)arg2 delegate:(id)arg3;
- (id)initWithConnectionID:(id)arg1;
- (void)onqueue_userInvalidated;
- (void)onqueue_openXPCConnection;
- (void)invalidationCallback;
- (void)onqueue_setupUserConnection:(id)arg1;
- (void)onqueue_invalidate;
- (void)onqueue_proxyHandler:(id)arg1;
- (BOOL)waitForAccept;
- (void)onqueue_resume;
- (void)setupWorkQueue;
- (void)connectionResumed;
- (void)xpcManagerConnectionInterrupted;
- (id)connectionProxy;
- (void)setConnectionProxy:(id)arg1;
- (id)workQueue;
- (void)setService:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)exportedObject;
- (id)connectionID;
- (void)setStatus:(unsigned int)arg1;
- (unsigned int)status;
- (void)setExportedObject:(id)arg1;
- (void)setExportedInterface:(id)arg1;
- (void)connect;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id)arg1;
- (void)resume;
- (void)setRemoteObjectInterface:(id)arg1;
- (id)exportedInterface;
- (void)suspend;
- (id)delegate;
- (void)invalidate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)remoteObjectInterface;
- (id)service;
- (id)initWithService:(id)arg1;
- (BOOL)invalid;
- (void)setInvalid:(BOOL)arg1;

@end
