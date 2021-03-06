/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSError, NSMutableOrderedSet, NSMutableArray, NSObject<OS_xpc_object>, NSObject<OS_dispatch_semaphore>, NSString, NSMutableSet, NSMutableDictionary;

@interface NSFileAccessClaim : NSObject  {
    NSObject<OS_xpc_object> *_client;
    NSString *_claimID;
    NSString *_purposeIDOrNil;
    BOOL _cameFromSuperarbiter;
    unsigned int _blockageCount;
    BOOL _didWait;
    BOOL _isRevoked;
    NSMutableArray *_claimerBlockageReasons;
    NSError *_claimerError;
    NSMutableOrderedSet *_pendingClaims;
    NSMutableSet *_blockingClaims;
    NSMutableSet *_blockingReactorIDs;
    NSMutableArray *_providerCancellationProcedures;
    NSMutableDictionary *_reacquisitionProceduresByPresenterID;
    NSMutableArray *_revocationProcedures;
    NSMutableArray *_finishingProcedures;
    id _claimerOrNil;
    NSObject<OS_dispatch_semaphore> *_claimerWaiterOrNull;
    NSMutableArray *_sandboxTokens;
}

+ (BOOL)writingItemAtLocation:(id)arg1 withPurposeID:(id)arg2 requiresOnlyPhysicalItemWithOptions:(unsigned int)arg3;
+ (BOOL)readingItemAtLocation:(id)arg1 withPurposeID:(id)arg2 requiresOnlyPhysicalItemWithOptions:(unsigned int)arg3;
+ (BOOL)canWritingItemAtLocation:(id)arg1 options:(unsigned int)arg2 safelyOverlapWritingItemAtLocation:(id)arg3 options:(unsigned int)arg4;
+ (BOOL)canReadingItemAtLocation:(id)arg1 options:(unsigned int)arg2 safelyOverlapWritingItemAtLocation:(id)arg3 options:(unsigned int)arg4;

- (id)client;
- (void)block;
- (void)cancelled;
- (id)description;
- (void)dealloc;
- (void)finalize;
- (BOOL)shouldBeRevokedPriorToInvokingAccessor;
- (id)purposeIDOfClaimOnItemAtLocation:(id)arg1 forMessagingPresenter:(id)arg2;
- (BOOL)checkIfSymbolicLinkAtURL:(id)arg1 withResolutionCount:(int*)arg2 andIfSoThenReevaluateSelf:(id)arg3;
- (void)devalueOldClaim:(id)arg1;
- (void)prepareItemForUploadingFromURL:(id)arg1 thenContinue:(id)arg2;
- (BOOL)canAccessLocations:(id)arg1 forReading:(BOOL)arg2 error:(id*)arg3;
- (void)makePresentersOfItemAtLocation:(id)arg1 orContainedItem:(BOOL)arg2 relinquishUsingProcedureGetter:(id)arg3;
- (void)makeProviderOfItemAtLocation:(id)arg1 providePhysicalURLThenContinue:(id)arg2;
- (void)makeProviderOfItemAtLocation:(id)arg1 provideThenContinue:(id)arg2;
- (BOOL)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned int)arg2;
- (BOOL)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned int)arg2;
- (void)removePendingClaims:(id)arg1;
- (void)evaluateNewClaim:(id)arg1;
- (id)claimerError;
- (BOOL)didWait;
- (id)initWithClient:(id)arg1 claimID:(id)arg2 purposeID:(id)arg3;
- (id)descriptionWithIndenting:(id)arg1;
- (void)devalueSelf;
- (void)whenFinishedPerformProcedure:(id)arg1;
- (BOOL)_writeArchiveOfDirectoryAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (void)setClaimerError:(id)arg1;
- (void)addPendingClaim:(id)arg1;
- (void)whenRevokedPerformProcedure:(id)arg1;
- (void)unblockClaimerForReason:(id)arg1;
- (void)blockClaimerForReason:(id)arg1;
- (BOOL)isBlockedByClaimWithPurposeID:(id)arg1;
- (id)purposeID;
- (BOOL)claimerInvokingIsBlockedByReactorWithID:(id)arg1;
- (void)invokeClaimer;
- (void)granted;
- (id)newClaimerWaiter;
- (id)pendingClaims;
- (void)setCameFromSuperarbiter;
- (id)initWithClient:(id)arg1 messageParameters:(id)arg2 replySender:(id)arg3;
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;
- (BOOL)isGranted;
- (BOOL)isRevoked;
- (void)revoked;
- (void)unblock;
- (void)forwardUsingMessageSender:(id)arg1 crashHandler:(id)arg2;
- (id)claimID;
- (BOOL)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(BOOL)arg2;
- (BOOL)cameFromSuperarbiter;
- (void)finished;

@end
