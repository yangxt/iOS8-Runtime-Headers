/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

@class NSXPCConnection, NSString, NSObject<OS_dispatch_queue>, MSTimerGate;

@interface MSClientSidePauseContext : NSObject  {
    NSString *_UUID;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSXPCConnection *_server;
    MSTimerGate *_gate;
}

@property(retain) NSObject<OS_dispatch_queue> * timerQueue;
@property(retain) NSXPCConnection * server;
@property(retain) MSTimerGate * gate;


- (void)setTimerQueue:(id)arg1;
- (void)timerQueuePing;
- (void)timerQueueTimerFired;
- (id)timerQueue;
- (void)setGate:(id)arg1;
- (id)gate;
- (void)setServer:(id)arg1;
- (id)initWithServer:(id)arg1;
- (void).cxx_destruct;
- (void)resume;
- (id)server;

@end
