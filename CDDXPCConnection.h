/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/CoreDuetDaemonProtocol
 */

@class CDDebug, NSString, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, NSMutableDictionary;

@interface CDDXPCConnection : NSObject  {
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
    BOOL _hasValidConnection;
    long long _sequenceNumber;
    BOOL _usesSendWithReply;
    NSString *_serviceName;
    NSMutableDictionary *_sentMessages;
    CDDebug *_debug;
}

@property(readonly) BOOL usesSendWithReply;
@property(readonly) NSString * serviceName;
@property(retain) NSMutableDictionary * sentMessages;
@property(readonly) CDDebug * debug;


- (void)setSentMessages:(id)arg1;
- (void)sendBarrier:(id)arg1;
- (void)invalidateConnection;
- (void)clearSentMessagesWithEvent:(id)arg1;
- (id)sentMessages;
- (BOOL)usesSendWithReply;
- (id)makeStashWithId:(unsigned long long)arg1;
- (BOOL)sendMessageAsync:(id)arg1 withReplyHandler:(id)arg2;
- (id)initWithMachServiceName:(id)arg1 dispatchQueue:(id)arg2 useSendWithReply:(BOOL)arg3;
- (id)connection;
- (void).cxx_destruct;
- (BOOL)establishConnection;
- (void)dealloc;
- (unsigned long long)sequenceNumber;
- (id)debug;
- (id)serviceName;

@end