/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableDictionary, NSSet, NSHashTable, <BSTransactionLogger>, NSObject<OS_dispatch_queue>, NSMutableArray, NSArray, NSMutableSet, NSString, NSDate, BSTransaction;

@interface BSTransaction : NSObject <BSWatchdogProviding> {
    BSTransaction *_parentTransaction;
    NSMutableSet *_lifeAssertions;
    BOOL _failed;
    BOOL _interrupted;
    unsigned int _state;
    NSString *_failureReason;
    NSDate *_startTime;
    NSMutableDictionary *_milestonesToHandlers;
    NSMutableArray *_childTransactions;
    NSMutableSet *_milestones;
    NSHashTable *_observers;
    NSMutableArray *_auditHistory;
    BOOL _buildAuditHistory;
    <BSTransactionLogger> *_debugLogger;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionBlock;

}

@property(retain,readonly) NSObject<OS_dispatch_queue> * queue;
@property(retain,readonly) NSSet * milestones;
@property(retain,readonly) NSArray * childTransactions;
@property(getter=isInterrupted,readonly) BOOL interrupted;
@property(getter=isInterruptable,readonly) BOOL interruptable;
@property(getter=isRunning,readonly) BOOL running;
@property(getter=isComplete,readonly) BOOL complete;
@property(getter=isFailed,readonly) BOOL failed;
@property(copy) id completionBlock;
@property(retain) BSTransaction * parentTransaction;
@property(readonly) unsigned int state;


- (BOOL)isComplete;
- (BOOL)shouldWatchdog:(id*)arg1;
- (double)watchdogTimeout;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_didRemoveChildTransaction:(id)arg1;
- (void)_willAddChildTransaction:(id)arg1;
- (void)addChildTransaction:(id)arg1;
- (id)_customizedDescriptionProperties;
- (void)_didInterruptWithReason:(id)arg1;
- (BOOL)_canBeInterrupted;
- (void)_didComplete;
- (void)_begin;
- (void)failWithReason:(id)arg1;
- (void)evaluateMilestone:(id)arg1 withEvaluator:(id)arg2;
- (void)addMilestone:(id)arg1;
- (BOOL)removeMilestone:(id)arg1;
- (BOOL)isWaitingForMilestone:(id)arg1;
- (void)removeAllMilestones;
- (void)setBuildAuditHistory:(BOOL)arg1;
- (void)setDebugLogger:(id)arg1;
- (id)queue;
- (void)setParentTransaction:(id)arg1;
- (id)parentTransaction;
- (id)_stringForInterruptReason:(id)arg1;
- (void)_forceInterrupt;
- (BOOL)_isParentTransactionComplete;
- (BOOL)_isRootTransactionComplete;
- (id)debugLogger;
- (id)auditHistory;
- (BOOL)buildAuditHistory;
- (void)_evaluateCompletion;
- (void)listenForSatisfiedMilestone:(id)arg1 withBlock:(id)arg2;
- (void)removeAllChildTransactions;
- (void)removeChildTransaction:(id)arg1;
- (void)removeAllChildTransactionsOfClass:(Class)arg1;
- (id)childTransactionsOfClass:(Class)arg1;
- (BOOL)hasChildTransactionsOfClass:(Class)arg1;
- (id)childTransactions;
- (id)milestones;
- (id)_loggingProem;
- (void)_removeLifeAssertion:(id)arg1;
- (void)_addLifeAssertion:(id)arg1;
- (BOOL)_shouldComplete;
- (BOOL)_areChildTransactionsComplete;
- (void)_willInterruptWithReason:(id)arg1;
- (void)_noteChildTransactionCompleted:(id)arg1;
- (void)_notifyObserversOfCompletion;
- (void)_noteCompleted;
- (void)_willFailWithReason:(id)arg1;
- (void)_willRemoveChildTransaction:(id)arg1;
- (void)_didAddChildTransaction:(id)arg1;
- (id)_stringForState:(unsigned int)arg1;
- (id)_parentTransaction;
- (void)_noteTransactionStateInAuditHistory;
- (void)_checkAndReportIfCompleted;
- (id)_descriptionForDebugging:(BOOL)arg1 indentLevel:(unsigned int)arg2;
- (void)_didSatisfyMilestone:(id)arg1;
- (BOOL)_removeMilestones:(id)arg1 ignoringAuditHistory:(BOOL)arg2;
- (BOOL)removeMilestones:(id)arg1;
- (id)_stringForMilestones:(id)arg1;
- (void)addMilestones:(id)arg1;
- (void)_failNow;
- (void)_addAuditHistory:(id)arg1;
- (void)_interruptWithReason:(id)arg1 force:(BOOL)arg2;
- (void)interruptWithReason:(id)arg1;
- (BOOL)isInterruptable;
- (BOOL)_isRootTransaction;
- (void)_preventTransactionCompletionForReason:(id)arg1 andExecuteBlock:(id)arg2;
- (void)_didBegin;
- (void)_willBegin;
- (void)_removeChildTransaction:(id)arg1;
- (void)_addChildTransaction:(id)arg1;
- (void)_enumerateChildTransactionsWithBlock:(id)arg1;
- (void)_setParentTransaction:(id)arg1;
- (void)_debugLogWithFormat:(id)arg1;
- (void)addObserver:(id)arg1;
- (BOOL)isRunning;
- (void)_setState:(unsigned int)arg1;
- (void)setCompletionBlock:(id)arg1;
- (id)completionBlock;
- (unsigned int)_state;
- (void)removeObserver:(id)arg1;
- (unsigned int)state;
- (id)debugDescription;
- (void)_enumerateObserversWithBlock:(id)arg1;
- (id)description;
- (void)begin;
- (void)dealloc;
- (id)init;
- (void)interrupt;
- (BOOL)isFailed;
- (BOOL)isInterrupted;

@end