/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@class SBKTransaction, NSString;

@interface SBKStoreError : NSError  {
    SBKTransaction *_transaction;
}

@property(retain) SBKTransaction * transaction;
@property(readonly) BOOL isAuthenticationError;
@property(readonly) BOOL isAccountsChangedError;
@property(readonly) BOOL isRecoverableError;
@property(readonly) BOOL isClampError;
@property(readonly) BOOL isTransactionCancelledError;
@property(readonly) BOOL isTransactionMissingInformationError;
@property(copy,readonly) NSString * previousStoreAccountName;
@property(copy,readonly) NSString * currentStoreAccountName;
@property(readonly) double retrySeconds;

+ (id)transactionTimeoutErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;
+ (id)transactionMissingURLErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;
+ (id)transactionMissingDomainErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;
+ (id)storeAccountMismatchErrorWithPreviousStoreAccountName:(id)arg1 currentStoreAccountName:(id)arg2 transaction:(id)arg3 underlyingError:(id)arg4;
+ (id)storeLoggedOutErrorWithPreviousStoreAccountName:(id)arg1 transaction:(id)arg2 underlyingError:(id)arg3;
+ (id)keyValueStoreErrorWithCode:(int)arg1 localizedDescription:(id)arg2 transaction:(id)arg3 underlyingError:(id)arg4;
+ (id)userEnteredWrongCredentialsErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;
+ (id)userCancelledSignInErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;
+ (id)delegateCancelledErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;
+ (id)unknownErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;
+ (id)storeAccountSessionExpiredWithTransaction:(id)arg1 underlyingError:(id)arg2;
+ (id)storeValidationErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;
+ (id)killSwitchErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;
+ (id)storeGenericErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;
+ (id)transactionCancelledErrorWithTransaction:(id)arg1 code:(int)arg2 underlyingError:(id)arg3;
+ (id)transactionCancelledErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;
+ (id)noStoreAccountErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;
+ (id)keyValueStoreDisabledErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;
+ (id)networkingBlockedErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;
+ (id)serverClampErrorWithTransaction:(id)arg1 retrySeconds:(double)arg2 underlyingError:(id)arg3;
+ (id)userClampErrorWithTransaction:(id)arg1 retrySeconds:(double)arg2 underlyingError:(id)arg3;

- (id)currentStoreAccountName;
- (id)previousStoreAccountName;
- (BOOL)isTransactionMissingInformationError;
- (BOOL)isRecoverableError;
- (BOOL)isAccountsChangedError;
- (BOOL)isTransactionCancelledError;
- (BOOL)isAuthenticationError;
- (double)retrySeconds;
- (BOOL)isClampError;
- (id)transaction;
- (void)setTransaction:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;

@end
