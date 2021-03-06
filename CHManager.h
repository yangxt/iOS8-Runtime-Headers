/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@class <SyncManagerProtocol>, NSArray, NSString, NSDate, NSPredicate;

@interface CHManager : CHSynchronizedLoggable  {
    BOOL _showsFaceTimeCalls;
    BOOL _showsFaceTimeAudioCalls;
    BOOL _showsTelephonyCalls;
    BOOL _generateSyncTransactions;
    BOOL _cacheIsDirty;
    BOOL _reCoalesce;
    NSArray *_recentCalls;
    unsigned int _limitingCallTypes;
    NSDate *_limitingStartDate;
    NSDate *_limitingEndDate;
    NSPredicate *_postFetchingPredicate;
    NSString *_coalescingStrategy;
    int _numberOfUnseenMissedCalls;
    <SyncManagerProtocol> *_syncManager;
    NSArray *_uncoalescedRecentCalls;
}

@property(retain) NSArray * recentCalls;
@property BOOL showsFaceTimeCalls;
@property BOOL showsFaceTimeAudioCalls;
@property BOOL showsTelephonyCalls;
@property BOOL generateSyncTransactions;
@property unsigned int limitingCallTypes;
@property(copy) NSDate * limitingStartDate;
@property(copy) NSDate * limitingEndDate;
@property(copy) NSPredicate * postFetchingPredicate;
@property(copy) NSString * coalescingStrategy;
@property int numberOfUnseenMissedCalls;
@property(retain) <SyncManagerProtocol> * syncManager;
@property BOOL cacheIsDirty;
@property BOOL reCoalesce;
@property(getter=uncoalescedRecentCallsSync,retain) NSArray * uncoalescedRecentCalls;

+ (unsigned int)CHCallStatusForCallWithDuration:(double)arg1 isOriginated:(BOOL)arg2 isAnswered:(BOOL)arg3;

- (id)recentCallsWithPredicate:(id)arg1;
- (id)recentCalls;
- (void)addToCallHistory:(id)arg1;
- (void)registerForNotifications;
- (id)syncManager;
- (void)addressBookChanged:(id)arg1;
- (void)setUncoalescedRecentCalls:(id)arg1;
- (void)setSyncManager:(id)arg1;
- (void)setNumberOfUnseenMissedCalls:(int)arg1;
- (int)numberOfUnseenMissedCalls;
- (void)setGenerateSyncTransactions:(BOOL)arg1;
- (BOOL)showsTelephonyCalls;
- (BOOL)showsFaceTimeAudioCalls;
- (BOOL)showsFaceTimeCalls;
- (void)setRecentCalls:(id)arg1;
- (void)callTimersReset;
- (double)callTimersGetLifetime;
- (double)callTimersGetOutgoing;
- (double)callTimersGetIncoming;
- (void)setShowsTelephonyCalls:(BOOL)arg1;
- (void)setShowsFaceTimeAudioCalls:(BOOL)arg1;
- (void)setShowsFaceTimeCalls:(BOOL)arg1;
- (void)setCoalescingStrategy:(id)arg1;
- (void)setLimitingEndDate:(id)arg1;
- (void)setLimitingStartDate:(id)arg1;
- (void)setPostFetchingPredicate:(id)arg1;
- (void)setLimitingCallTypes:(unsigned int)arg1;
- (void)deleteAllCalls;
- (void)deleteCallAtIndex:(unsigned int)arg1;
- (void)deleteCallsWithPredicate:(id)arg1;
- (void)deleteTheseCalls:(id)arg1;
- (void)markAllCallsAsReadWithPredicate:(id)arg1;
- (unsigned int)countCallsWithPredicate:(id)arg1;
- (id)initWithFetchingLimitsDictionary:(id)arg1 andCoalescingStrategy:(id)arg2 andPostFetchingPredicate:(id)arg3 withQueue:(id)arg4;
- (void)setLimitingCallTypesSync:(unsigned int)arg1;
- (void)deleteCall:(id)arg1;
- (void)deleteAllCallsSync;
- (void)deleteTheseCallsSync:(id)arg1;
- (BOOL)generateSyncTransactions;
- (id)fetchUnCoalescedRecentCallsSyncWithPredicate:(id)arg1;
- (id)uncoalescedRecentCallsSync;
- (BOOL)reCoalesce;
- (id)postFetchingPredicate;
- (id)limitingEndDate;
- (id)limitingStartDate;
- (unsigned int)limitingCallTypes;
- (BOOL)cacheIsDirty;
- (id)applyPredicate:(id)arg1 toCalls:(id)arg2;
- (id)coalesceCalls:(id)arg1;
- (id)unCoalesceCall:(id)arg1;
- (id)fetchRecentCallsSync;
- (void)setReCoalesce:(BOOL)arg1;
- (id)coalescingStrategy;
- (void)setCacheIsDirty:(BOOL)arg1;
- (void)databaseChanged:(id)arg1;
- (void)unRegisterForNotifications;
- (void).cxx_destruct;
- (void)flush;
- (void)dealloc;
- (id)init;

@end
