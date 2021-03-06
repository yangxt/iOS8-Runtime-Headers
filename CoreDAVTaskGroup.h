/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <CoreDAVTaskManager>, NSMutableSet, NSError, <CoreDAVTaskGroupDelegate>, <CoreDAVAccountInfoProvider>;

@interface CoreDAVTaskGroup : NSObject <CoreDAVSubmittable> {
    <CoreDAVTaskManager> *_taskManager;
    <CoreDAVAccountInfoProvider> *_accountInfoProvider;
    double _timeoutInterval;
    NSMutableSet *_outstandingTasks;
    BOOL _isCancelling;
    BOOL _isTearingDown;
    BOOL _isFinished;
    <CoreDAVTaskGroupDelegate> *_delegate;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _progressBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionBlock;

    NSError *_error;
    id _context;
}

@property <CoreDAVTaskGroupDelegate> * delegate;
@property double timeoutInterval;
@property(copy) id progressBlock;
@property(copy) id completionBlock;
@property(retain) id context;
@property(retain) NSError * error;
@property <CoreDAVTaskManager> * taskManager;
@property <CoreDAVAccountInfoProvider> * accountInfoProvider;
@property(readonly) NSMutableSet * outstandingTasks;


- (void)setProgressBlock:(id)arg1;
- (id)progressBlock;
- (id)error;
- (void)setError:(id)arg1;
- (void)setTaskManager:(id)arg1;
- (id)taskManager;
- (id)outstandingTasks;
- (void)finishCoreDAVTaskGroupWithError:(id)arg1;
- (void)_tearDownAllTasks;
- (void)syncAway;
- (void)cancelTaskGroup;
- (void)finishEarlyWithError:(id)arg1;
- (void)submitWithTaskManager:(id)arg1;
- (void)startTaskGroup;
- (void)finishCoreDAVTaskGroupWithError:(id)arg1 delegateCallbackBlock:(id)arg2;
- (void)bailWithError:(id)arg1;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;
- (double)timeoutInterval;
- (id)accountInfoProvider;
- (void)setAccountInfoProvider:(id)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (void)setCompletionBlock:(id)arg1;
- (id)completionBlock;
- (void)setContext:(id)arg1;
- (id)delegate;
- (id)context;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end
