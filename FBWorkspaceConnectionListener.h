/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@class NSObject<OS_dispatch_queue>;

@interface FBWorkspaceConnectionListener : NSObject <BSXPCConnectionListenerHandler> {
    NSObject<OS_dispatch_queue> *_connectionDispatcherQueue;
}

+ (id)sharedInstance;

- (void)handleIncomingConnection:(id)arg1 forService:(id)arg2;
- (void)dealloc;
- (id)init;

@end