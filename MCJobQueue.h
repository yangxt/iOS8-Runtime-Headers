/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <MCJobQueueObserver>, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>;

@interface MCJobQueue : NSObject  {
    NSObject<OS_dispatch_queue> *_executionQueue;
    <MCJobQueueObserver> *_observer;
    NSObject<OS_dispatch_queue> *_jobQueue;
    NSObject<OS_dispatch_group> *_jobGroup;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _executionQueueAbortCompletionBlock;

}

@property(retain) NSObject<OS_dispatch_queue> * executionQueue;
@property <MCJobQueueObserver> * observer;
@property(retain) NSObject<OS_dispatch_queue> * jobQueue;
@property(retain) NSObject<OS_dispatch_group> * jobGroup;
@property(copy) id executionQueueAbortCompletionBlock;


- (void)enqueueJob:(id)arg1;
- (void)setJobGroup:(id)arg1;
- (void)setJobQueue:(id)arg1;
- (void)setExecutionQueue:(id)arg1;
- (void)abortEnqueuedJobsCompletionBlock:(id)arg1;
- (void)waitForEnqueuedJobsToCompleteCompletionBlock:(id)arg1;
- (void)jobDidFinish;
- (void)setExecutionQueueAbortCompletionBlock:(id)arg1;
- (id)executionQueueAbortCompletionBlock;
- (id)jobQueue;
- (id)jobGroup;
- (id)executionQueue;
- (void).cxx_destruct;
- (void)setObserver:(id)arg1;
- (id)observer;
- (id)init;

@end
