/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class PLAgent;

@interface PLTelephonyConnection : NSObject  {
    struct __CTServerConnection { } *connection;
    struct __CFMachPort { } *ctServerPort;
    struct __CFRunLoopSource { } *ctServerSource;
    PLAgent *_observerAgent;
}

@property(retain) PLAgent * observerAgent;
@property(readonly) struct __CTServerConnection { }* connection;

+ (id)sharedTelephonyConnection;

- (void)deregisterForAllTelephonyNotifications;
- (BOOL)requestBasebandCoreDump:(id)arg1;
- (BOOL)requestBasebandStateDump:(id)arg1;
- (id)observerAgent;
- (id)humanReadableCallStatus:(int)arg1;
- (void)teardownConnection;
- (id)humanReadableRATName:(struct __CFString { }*)arg1;
- (id)currentCallStatus;
- (void)getSignalStrength:(int*)arg1 asPercentage:(int*)arg2 withBars:(int*)arg3;
- (void)getRAT:(id*)arg1 preferredRAT:(id*)arg2 campedRAT:(id*)arg3;
- (id)wakeReason;
- (void)requestBasebandStateDurationReport;
- (void)registerCallback:(int (*)())arg1 forTelephonyNotification:(struct __CFString { }*)arg2;
- (void)setObserverAgent:(id)arg1;
- (id)activeBand;
- (id)getRemotePortNameWithLocalName:(id)arg1;
- (struct __CTServerConnection { }*)connection;
- (void).cxx_destruct;
- (void)invalidate;
- (id)init;

@end
