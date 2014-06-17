/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@class NSDictionary, NSData, NSObject<OS_dispatch_queue>;

@interface SBKStoreClampsController : NSObject <NSCoding> {
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_transactionClamps;
    NSData *_pendingUserDefaultArchivedData;
    double _accountIdentifierCheckTimestamp;
    double _authenticationNeededTimestamp;
    double _userAcceptedSyncTimestamp;
    double _networkingBlockedUntil;
    double _backOffUntil;
    double _userCancelledSignInBackOffUntil;
    double _nextUserCancelBackOffInterval;
}

@property(retain) NSObject<OS_dispatch_queue> * queue;
@property(retain) NSDictionary * transactionClamps;
@property double accountIdentifierCheckTimestamp;
@property double authenticationNeededTimestamp;
@property double userAcceptedSyncTimestamp;
@property double networkingBlockedUntil;
@property double backOffUntil;
@property double userCancelledSignInBackOffUntil;
@property double nextUserCancelBackOffInterval;
@property(retain) NSData * pendingUserDefaultArchivedData;

+ (id)sharedClampsController;

- (void)setNextUserCancelBackOffInterval:(double)arg1;
- (double)nextUserCancelBackOffInterval;
- (void)setTransactionClamps:(id)arg1;
- (void)setNetworkingBlocked;
- (void)backOffForTimeInterval:(double)arg1;
- (void)setUserCancelledSignIn;
- (BOOL)hasUserRecentlyAcceptedSync;
- (void)setUserAcceptedSyncTimestamp;
- (BOOL)hasAuthenticatedTooRecentlyForTransaction:(id)arg1 error:(id*)arg2;
- (void)setAuthenticationRequest;
- (void)setAccountIdentifierCheckTimestamp;
- (void)setTimestampForTransaction:(id)arg1;
- (BOOL)canScheduleTransaction:(id)arg1 error:(id*)arg2;
- (double)userCancelledSignInBackOffUntil;
- (double)backOffUntil;
- (double)accountIdentifierCheckTimestamp;
- (BOOL)isNetworkingBlocked;
- (void)clearTimestampForTransaction:(id)arg1;
- (double)networkingBlockedUntil;
- (void)setNetworkingBlockedUntil:(double)arg1;
- (void)setBackOffUntil:(double)arg1;
- (void)setUserCancelledSignInBackOffUntil:(double)arg1;
- (double)userAcceptedSyncTimestamp;
- (void)setUserAcceptedSyncTimestamp:(double)arg1;
- (double)authenticationNeededTimestamp;
- (void)setAuthenticationNeededTimestamp:(double)arg1;
- (void)setAccountIdentifierCheckTimestamp:(double)arg1;
- (double)_rightNow;
- (id)_keyForTransaction:(id)arg1;
- (void)saveToUserDefaults;
- (void)clearUserCancelledSignIn;
- (void)clearUserAcceptedSyncTimestamp;
- (void)clearNetworkingBlocked;
- (void)clearBackOff;
- (void)clearAuthenticationRequest;
- (void)clearAccountIdentifierCheckTimestamp;
- (BOOL)_canScheduleTransactionBasedOnType:(id)arg1 error:(id*)arg2;
- (BOOL)_canScheduleTransactionBasedOnAccountIdentifierCheck:(id)arg1 error:(id*)arg2;
- (BOOL)_canScheduleTransactionBasedOnUserCancelledSignIn:(id)arg1 error:(id*)arg2;
- (BOOL)_canScheduleTransactionBasedOnBackOff:(id)arg1 error:(id*)arg2;
- (BOOL)_canScheduleTransactionBasedOfNetworkingBlocked:(id)arg1 error:(id*)arg2;
- (id)transactionClamps;
- (void)setPendingUserDefaultArchivedData:(id)arg1;
- (id)pendingUserDefaultArchivedData;
- (void)accessTransactionClampsWithBlock:(id)arg1;
- (void)setQueue:(id)arg1;
- (id)queue;
- (void).cxx_destruct;
- (void)reset;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)init;

@end