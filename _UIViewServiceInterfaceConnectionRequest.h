/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSError, _UIAsyncInvocation, NSObject<OS_dispatch_queue>, NSString, BKSProcessAssertion, _UIRemoteViewService, NSXPCConnection;

@interface _UIViewServiceInterfaceConnectionRequest : NSObject  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _connectionHandler;

    NSString *_serviceBundleIdentifier;
    _UIRemoteViewService *_service;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isCancelled;
    NSError *_cancellationError;
    _UIAsyncInvocation *_cancellationInvocation;
    int _sessionRequestNotifyToken;
    BKSProcessAssertion *_serviceProcessAssertion;
    NSXPCConnection *_serviceSessionConnection;
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
}

+ (id)connectToViewService:(id)arg1 connectionHandler:(id)arg2;
+ (id)connectToViewServiceWithBundleIdentifier:(id)arg1 connectionHandler:(id)arg2;
+ (id)_connectToViewServiceWithBundleIdentifier:(id)arg1 service:(id)arg2 connectionHandler:(id)arg3;

- (void)_didConnectToService;
- (void)_establishConnection;
- (void)_createProcessAssertionForPID:(int)arg1 aquiredHandler:(id)arg2;
- (void)_createAndEstablishConnection;
- (void)_createProcessAssertion;
- (void)_createPlugInProcessAssertion;
- (void)_launchService;
- (void)_cancelWithError:(id)arg1;
- (void)_cancelUnconditionallyThen:(id)arg1;
- (int)__automatic_invalidation_logic;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned int)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;

@end
