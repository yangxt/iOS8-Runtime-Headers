/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_source>, BRCFSEventsPersistedState, NSObject<OS_dispatch_queue>, PQLConnection, NSObject<OS_dispatch_semaphore>, BRCAccountSession, <BRCFSEventsDelegate>, BRCRelativePath, NSString;

@interface BRCFSEventsMonitor : NSObject <BRCModule, BRCLowDiskDelegate> {
    BRCAccountSession *_session;

  /* Unexpected information at end of encoded ivar type: i */
  /* Error parsing encoded ivar type info: Ai */
    /* Warning: Unrecognized filer type: 'A' using 'void*' */ void*_suspendCount;


  /* Unexpected information at end of encoded ivar type: i */
  /* Error parsing encoded ivar type info: Ai */
    /* Warning: Unrecognized filer type: 'A' using 'void*' */ void*_resetCount;

    BRCFSEventsPersistedState *_persistedState;
    NSString *_devicePath;
    NSString *_rootPathRelativeToDevice;
    NSObject<OS_dispatch_source> *_rootVnodeWatcher;
    BOOL _volumeHasLowDiskSpace;
    BOOL _volumeIsCaseSensitive;
    struct __FSEventStream { } *_stream;
    NSObject<OS_dispatch_queue> *_streamQueue;
    NSObject<OS_dispatch_source> *_historicalEventSource;
    BRCFSEventsPersistedState *_rendezVous;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    BOOL _drainEvents;
    BRCRelativePath *_root;
    <BRCFSEventsDelegate> *_delegate;
    PQLConnection *_db;
}

@property <BRCFSEventsDelegate> * delegate;
@property(setter=setDB:,retain) PQLConnection * db;
@property(readonly) BRCRelativePath * root;
@property(readonly) BOOL volumeIsCaseSensitive;


- (id)root;
- (void)didProcessEventID:(unsigned long long)arg1;
- (BOOL)setUpStreamSynchronously:(BOOL)arg1 error:(id*)arg2;
- (BOOL)setUpRootAtPath:(id)arg1 error:(id*)arg2;
- (void)fseventAtPath:(id)arg1 withFlags:(unsigned long)arg2 andID:(unsigned long long)arg3 eventIndex:(unsigned int)arg4 eventCount:(unsigned int)arg5 initialScan:(BOOL)arg6;
- (void)signalAfterCurrentFSEvent:(id)arg1;
- (BOOL)openWithRootPath:(id)arg1 error:(id*)arg2;
- (void)setDB:(id)arg1;
- (void)lowDiskStatusChangedForDevice:(int)arg1 hasEnoughSpace:(BOOL)arg2;
- (BOOL)volumeIsCaseSensitive;
- (id)initWithAccountSession:(id)arg1;
- (id)db;
- (void)_cancel;
- (void).cxx_destruct;
- (void)reset;
- (void)close;
- (void)resume;
- (void)suspend;
- (id)delegate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end