/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSObject<OS_dispatch_data>, NSURLResponse, NSError, NSObject<OS_dispatch_queue>, NSURLSessionTask, <SessionConnectionDelegate>;

@interface __NSCFURLSessionConnection : NSObject <NSURLAuthenticationChallengeSender, NSCopying> {
    struct SessionConnectionLoadable { int (**x1)(); int x2; int x3; int x4; int x5; int (**x6)(); int (**x7)(); id x8; } *_loaderClient;
    struct URLConnectionLoader { int (**x1)(); struct __CFAllocator {} *x2; int (**x3)(); unsigned char x4; unsigned char x5; struct InterfaceRequiredForLoader {} *x6; struct CoreSchedulingSet {} *x7; int (**x8)(); int (**x9)(); struct PerformanceTiming {} *x10; id x11; int x12; struct RedirectionRecorder {} *x13; unsigned char x14; unsigned char x15; unsigned char x16; id x17; unsigned char x18; double x19; struct URLProtocol {} *x20; id x21; unsigned char x22; struct CoreSchedulingSet {} *x23; double x24; double x25; unsigned long long x26; struct ConfigFlags { unsigned int x_27_1_1 : 1; unsigned int x_27_1_2 : 1; unsigned int x_27_1_3 : 1; unsigned int x_27_1_4 : 1; unsigned int x_27_1_5 : 1; unsigned int x_27_1_6 : 1; unsigned int x_27_1_7 : 1; } x27; unsigned char x28; unsigned char x29; unsigned char x30; unsigned char x31; unsigned char x32; unsigned long long x33; struct __CFString {} *x34; int x35; int x36; int x37; int x38; unsigned char x39; } *_loader;
    NSObject<OS_dispatch_queue> *_workQueue;
    BOOL _canceled;
    int _suspended;
    NSURLResponse *_currentResponse;
    NSObject<OS_dispatch_data> *_pendingData;
    int _pendingCompletion;
    unsigned int _didReceiveResponseDisposition;
    NSError *_pendingError;
    int _state;
    NSURLResponse *_cacheResponse;
    NSObject<OS_dispatch_data> *_cacheData;
    unsigned long _cacheDataMax;
    long long _clientBufferLength;
    NSObject<OS_dispatch_data> *_sniffData;
    NSURLResponse *_sniffResponse;
    BOOL _isMixedReplace;
    BOOL _didCheckMixedReplace;
    NSURLSessionTask *_task;
    <SessionConnectionDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property(copy) NSURLSessionTask * task;
@property(retain) <SessionConnectionDelegate> * delegate;
@property(retain) NSObject<OS_dispatch_queue> * delegateQueue;


- (void)cancelAuthenticationChallenge:(id)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (id)delegateQueue;
- (id)task;
- (void)_tick;
- (void)setPriority:(long long)arg1;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
- (void)resume;
- (void)_cleanup;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)suspend;
- (id)delegate;
- (void)cancel;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)_updateRequest:(id)arg1;
- (void)_needNewBodyStream;
- (void)_didReceiveChallenge:(id)arg1;
- (void)_redirectRequest:(id)arg1 redirectResponse:(id)arg2 completion:(id)arg3;
- (void)_conditionalRequirementsChanged:(BOOL)arg1;
- (void)_connectionIsWaiting;
- (void)_willSendRequestForEstablishedConnection:(id)arg1 completion:(id)arg2;
- (void)_didReceiveConnectionCacheKey:(struct HTTPConnectionCacheKey { int (**x1)(); struct __CFAllocator {} *x2; int x3; unsigned int x4; struct __CFString {} *x5; int x6; int x7; struct __CFDictionary {} *x8; unsigned int x9; struct __CFDictionary {} *x10; struct NetworkProxy {} *x11; struct __CFString {} *x12; int x13; int x14; }*)arg1;
- (void)_didSendBodyData:(struct UploadProgressInfo { int x1; int x2; int x3; })arg1;
- (void)_setupForCache:(BOOL)arg1 expectedLength:(long long)arg2 response:(id)arg3;
- (void)_tick_finishing;
- (void)_tick_running;
- (void)_tick_initialize;
- (void)_task_sendFinish;
- (void)withDelegateAndPendingCompletionAsync:(id)arg1;
- (void)afterDelegateWithTick:(id)arg1;
- (void)_tossCache;
- (void)_tick_sniffNow;
- (void)_didReceiveData:(id)arg1;
- (void)_didReceiveResponse:(id)arg1 sniff:(BOOL)arg2;
- (void)_didFinishWithError:(id)arg1;
- (void)withLoaderOnQueue:(id)arg1;
- (void)withLoaderAsync:(id)arg1;
- (void)withWorkQueueAsync:(id)arg1;
- (void)setTask:(id)arg1;
- (void)stopAccounting;
- (void)startAccountingFor:(id)arg1 discretionary:(BOOL)arg2;
- (id)initWithTask:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;

@end