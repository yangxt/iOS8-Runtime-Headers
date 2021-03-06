/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
 */

@class AppLaunchStatsComputation, NSObject<OS_dispatch_queue>, AppLaunchStatsState, AppLaunchStatsStateHandlerQueue;

@interface AppLaunchStatsREventHandler : NSObject  {
    AppLaunchStatsComputation *aplsComputation;
    AppLaunchStatsState *aplsState;
    AppLaunchStatsStateHandlerQueue *aplsStateHandlerQueue;
    NSObject<OS_dispatch_queue> *rEventQueue;
}


- (void)hdlr:(id)arg1;
- (id)init:(id)arg1 withHandlers:(id)arg2;
- (void)hdlr_nonprewarm:(id)arg1;
- (void)hdlr_dbolderthan:(id)arg1;
- (void)hdlr_readTrendEvents:(id)arg1;
- (void)hdlr_resourcePool:(id)arg1;
- (void)hdlr_updateAliveList:(id)arg1;
- (void)hdlr_budgetRead:(id)arg1;
- (void)hdlr_energyforecast:(unsigned long long)arg1 withXPCObject:(id)arg2;
- (void)hdlr_appforecast:(unsigned long long)arg1 withXPCObject:(id)arg2;
- (void)hdlr_dataforecast:(unsigned long long)arg1 withXPCObject:(id)arg2;
- (void)hdlr_ok2launch:(unsigned long long)arg1 withXPCObject:(id)arg2;
- (void)hdlr_getscores:(unsigned long long)arg1 withXPCObject:(id)arg2;
- (void).cxx_destruct;

@end
