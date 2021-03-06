/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSMutableArray, NSString, VMUProcessDescription, NSConditionLock, VMUTaskMemoryCache, NSMapTable;

@interface VMUSampler : NSObject  {
    unsigned int _options;
    int _pid;
    unsigned int _task;
    BOOL _needTaskPortDealloc;
    BOOL _recordThreadStates;
    BOOL _taskIs64Bit;
    NSString *_processName;
    VMUProcessDescription *_processDescription;
    struct _CSTypeRef { 
        unsigned int _opaque_1; 
        unsigned int _opaque_2; 
    } _symbolicator;
    VMUTaskMemoryCache *_memCache;
    struct sampling_context_t { } *_samplingContext;
    unsigned int _mainThread;
    NSMapTable *_lastThreadBacktraceMap;
    unsigned int _numberOfCopiedBacktraces;
    unsigned int *_previousThreadList;
    unsigned int _previousThreadCount;
    unsigned int _maxPreviousThreadCount;
    double _tbRate;
    double _tbInterval;
    NSConditionLock *_stateLock;
    double _interval;
    double _timeLimit;
    unsigned int _sampleLimit;
    BOOL _sampling;
    unsigned int _samplingThreadPort;
    unsigned int _numberOfSamples;
    NSMutableArray *_samples;
    BOOL _stacksFixed;
    id _delegate;
    double _timeSpentSamplingWithoutCFI;
    double _timeSpentSamplingWithCFI;
    unsigned int _dispatchThreadSoftLimit;
    unsigned int _dispatchThreadSoftLimitCount;
    unsigned int _dispatchThreadHardLimit;
    unsigned int _dispatchThreadHardLimitCount;
}

+ (id)sampleAllThreadsOfTask:(unsigned int)arg1 symbolicate:(BOOL)arg2;
+ (id)sampleAllThreadsOfTask:(unsigned int)arg1;
+ (id)sampleAllThreadsOfPID:(int)arg1;
+ (void)initialize;

- (void)writeOutput:(id)arg1 append:(BOOL)arg2;
- (id)createOutput;
- (void)sampleForDuration:(unsigned int)arg1 interval:(unsigned int)arg2;
- (void)preloadSymbols;
- (id)dispatchQueueNameForSerialNumber:(unsigned long long)arg1;
- (id)threadNameForThread:(unsigned int)arg1;
- (void)flushData;
- (struct _CSTypeRef { unsigned int x1; unsigned int x2; })symbolicator;
- (BOOL)shouldOutputSignature;
- (void)setShouldOutputSignature:(BOOL)arg1;
- (void)setRecordThreadStates:(BOOL)arg1;
- (unsigned int)sampleLimit;
- (void)setSampleLimit:(unsigned int)arg1;
- (double)samplingInterval;
- (id)sampleThread:(unsigned int)arg1;
- (id)initWithPID:(int)arg1 options:(unsigned int)arg2;
- (id)stopSamplingAndReturnCallNode;
- (void)stopSampling;
- (void)setSamplingInterval:(double)arg1;
- (id)dispatchQueueNameForSerialNumber:(unsigned long long)arg1 returnedConcurrentFlag:(BOOL*)arg2 returnedThreadId:(unsigned long long*)arg3;
- (id)threadNameForThread:(unsigned int)arg1 returnedThreadId:(unsigned long long*)arg2 returnedDispatchQueueSerialNum:(unsigned long long*)arg3;
- (void)_runSamplingThread;
- (void)_fixupStacks:(id)arg1;
- (id)sampleAllThreadsOnce;
- (id)initWithPID:(int)arg1;
- (void)_makeTimeshare;
- (unsigned int)recordSampleTo:(id)arg1 beginTime:(double)arg2 endTime:(double)arg3 thread:(unsigned int)arg4;
- (void)initializeSamplingContext:(BOOL)arg1;
- (void)_makeHighPriority;
- (void)_checkDispatchThreadLimits;
- (id)initWithPID:(int)arg1 orTask:(unsigned int)arg2 options:(unsigned int)arg3;
- (void)forceStop;
- (BOOL)waitUntilDone;
- (id)outputString;
- (id)samples;
- (int)pid;
- (double)timeLimit;
- (void)setTimeLimit:(double)arg1;
- (id)initWithTask:(unsigned int)arg1 options:(unsigned int)arg2;
- (unsigned int)sampleCount;
- (id)delegate;
- (BOOL)start;
- (BOOL)stop;
- (void)dealloc;
- (void)finalize;
- (void)setDelegate:(id)arg1;
- (id)initWithTask:(unsigned int)arg1;
- (unsigned int)mainThread;

@end
