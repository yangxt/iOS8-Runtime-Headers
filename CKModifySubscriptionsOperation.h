/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableDictionary, NSMutableArray, NSArray;

@interface CKModifySubscriptionsOperation : CKDatabaseOperation  {
    NSArray *_subscriptionsToSave;
    NSArray *_subscriptionIDsToDelete;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _modifySubscriptionsCompletionBlock;

    NSMutableArray *_savedSubscriptions;
    NSMutableArray *_deletedSubscriptionIDs;
    NSMutableDictionary *_subscriptionsBySubscriptionIDs;
    NSMutableDictionary *_subscriptionErrors;
}

@property(copy) NSArray * subscriptionsToSave;
@property(copy) NSArray * subscriptionIDsToDelete;
@property(copy) id modifySubscriptionsCompletionBlock;
@property(retain) NSMutableArray * savedSubscriptions;
@property(retain) NSMutableArray * deletedSubscriptionIDs;
@property(retain) NSMutableDictionary * subscriptionsBySubscriptionIDs;
@property(retain) NSMutableDictionary * subscriptionErrors;


- (void)setSubscriptionIDsToDelete:(id)arg1;
- (void)setSubscriptionsToSave:(id)arg1;
- (id)subscriptionIDsToDelete;
- (id)subscriptionsToSave;
- (void)setModifySubscriptionsCompletionBlock:(id)arg1;
- (id)initWithSubscriptionsToSave:(id)arg1 subscriptionIDsToDelete:(id)arg2;
- (void).cxx_destruct;
- (id)init;
- (void)setSubscriptionErrors:(id)arg1;
- (void)setSubscriptionsBySubscriptionIDs:(id)arg1;
- (void)setDeletedSubscriptionIDs:(id)arg1;
- (void)setSavedSubscriptions:(id)arg1;
- (id)modifySubscriptionsCompletionBlock;
- (id)savedSubscriptions;
- (id)deletedSubscriptionIDs;
- (id)subscriptionErrors;
- (id)subscriptionsBySubscriptionIDs;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (BOOL)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;

@end
