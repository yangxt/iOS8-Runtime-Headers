/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableSet, NSString, NSXPCConnection, NSLock, NSDictionary, NSMutableDictionary;

@interface NSProgress : NSObject <NSProgressPublisher> {
    id _group;
    long long _reserved4;
    id _values;
    id _reserved5;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _cancellationHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _pausingHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _prioritizationHandler;

    unsigned long long _flags;
    id _userInfoProxy;
    NSString *_publisherID;
    NSXPCConnection *_connection;
    int _unpublishingBlockageCount;
    int _disconnectingBlockageCount;
    int _remoteObserverCount;
    NSMutableDictionary *_acknowledgementHandlersByBundleID;
    NSMutableDictionary *_lastNotificationTimesByKey;
    NSMutableDictionary *_userInfoLastNotificationTimesByKey;
    NSLock *_lock;
    NSMutableSet *_childrenGroups;
}

@property(readonly) NSString * sf_publishingKey;
@property(readonly) NSString * sf_bundleID;
@property(readonly) NSString * sf_sessionID;
@property(readonly) NSString * sf_personRealName;
@property(readonly) NSString * sf_error;
@property int sf_transferState;
@property unsigned int installState;
@property unsigned int installPhase;
@property long long totalUnitCount;
@property long long completedUnitCount;
@property(copy) NSString * localizedDescription;
@property(copy) NSString * localizedAdditionalDescription;
@property(getter=isCancellable) BOOL cancellable;
@property(getter=isPausable) BOOL pausable;
@property(getter=isCancelled,readonly) BOOL cancelled;
@property(getter=isPaused,readonly) BOOL paused;
@property(copy) id cancellationHandler;
@property(copy) id pausingHandler;
@property(getter=isIndeterminate,readonly) BOOL indeterminate;
@property(readonly) double fractionCompleted;
@property(copy,readonly) NSDictionary * userInfo;
@property(copy) NSString * kind;
@property(getter=isOld,readonly) BOOL old;

+ (id)progressWithTotalUnitCount:(long long)arg1;
+ (void)_removeSubscriber:(id)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)_subscriberInterface;
+ (id)addSubscriberForFileURL:(id)arg1 usingBlock:(id)arg2;
+ (id)_addSubscriberForCategory:(id)arg1 usingPublishingHandler:(id)arg2;
+ (void)removeSubscriber:(id)arg1;
+ (id)addSubscriberForFileURL:(id)arg1 withPublishingHandler:(id)arg2;
+ (id)keyPathsForValuesAffectingLocalizedAdditionalDescription;
+ (id)keyPathsForValuesAffectingLocalizedDescription;
+ (id)_addSubscriberForFileURL:(id)arg1 usingBlock:(id)arg2;
+ (id)_addSubscriberForFileURL:(id)arg1 withPublishingHandler:(id)arg2;
+ (id)_publisherInterface;
+ (id)_registrarInterface;
+ (id)currentProgress;
+ (id)keyPathsForValuesAffectingInstallPhase;
+ (id)keyPathsForValuesAffectingInstallState;
+ (id)childProgressForBundleID:(id)arg1 andPhase:(unsigned int)arg2;
+ (id)publishingKeyForApp:(id)arg1 withPhase:(unsigned int)arg2;
+ (void)initialize;
+ (id)uploadProgressWithBRCLocalItem:(id)arg1;
+ (id)downloadProgressWithBRCLocalItem:(id)arg1;
+ (id)progressWithBRCLocalItem:(id)arg1 totalSize:(long long)arg2;
+ (id)sf_transferStateAsString:(int)arg1;
+ (id)sf_publishingKeyForApp:(id)arg1 sessionID:(id)arg2;

- (BOOL)isPaused;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (void)setKind:(id)arg1;
- (void)setCompletedUnitCount:(long long)arg1;
- (id)initWithParent:(id)arg1 userInfo:(id)arg2;
- (void)_unpublish;
- (void)_publish;
- (void)setCancellable:(BOOL)arg1;
- (BOOL)isFinished;
- (long long)completedUnitCount;
- (long long)totalUnitCount;
- (double)fractionCompleted;
- (void)pause;
- (id)kind;
- (BOOL)isIndeterminate;
- (id)localizedDescription;
- (BOOL)isCancelled;
- (id)cancellationHandler;
- (void)setCancellationHandler:(id)arg1;
- (id)userInfo;
- (void)cancel;
- (void)resignCurrent;
- (void)becomeCurrentWithPendingUnitCount:(long long)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)acknowledge;
- (void)handleAcknowledgementByAppWithBundleIdentifer:(id)arg1 usingBlock:(id)arg2;
- (void)_setRemoteValue:(id)arg1 forKey:(id)arg2 inUserInfo:(BOOL)arg3;
- (id)_initWithValues:(id)arg1;
- (void)handleAcknowledgementByAppWithBundleIdentifier:(id)arg1 usingBlock:(id)arg2;
- (id)prioritizationHandler;
- (void)setPrioritizationHandler:(id)arg1;
- (BOOL)isPrioritizable;
- (void)setPrioritizable:(BOOL)arg1;
- (id)_publishingAppBundleIdentifier;
- (BOOL)isOld;
- (void)acknowledgeWithSuccess:(BOOL)arg1;
- (id)acknowledgementHandlerForAppBundleIdentifier:(id)arg1;
- (void)setAcknowledgementHandler:(id)arg1 forAppBundleIdentifier:(id)arg2;
- (void)unpublish;
- (void)publish;
- (id)pausingHandler;
- (BOOL)isPausable;
- (void)setPausable:(BOOL)arg1;
- (BOOL)isCancellable;
- (id)localizedAdditionalDescription;
- (void)setLocalizedAdditionalDescription:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (oneway void)appWithBundleID:(id)arg1 didAcknowledgeWithSuccess:(BOOL)arg2;
- (oneway void)stopProvidingValues;
- (oneway void)startProvidingValuesWithInitialAcceptor:(id)arg1;
- (id)_acknowledgementHandlerForAppBundleIdentifier:(id)arg1;
- (void)_setAcknowledgementHandler:(id)arg1 forAppBundleIdentifier:(id)arg2;
- (void)_unblockDisconnecting;
- (void)_setUserInfoValue:(id)arg1 forKey:(id)arg2;
- (void)_updateFractionCompletedFromOldFraction:(id)arg1 toNewFraction:(id)arg2;
- (void)_setValueForKeys:(id)arg1 settingBlock:(id)arg2;
- (void)_notifyRemoteObserversOfValueForKey:(id)arg1 inUserInfo:(BOOL)arg2;
- (void)_unblockUnpublishing;
- (void)__notifyRemoteObserversOfValueForKey:(id)arg1 inUserInfo:(BOOL)arg2;
- (void)_addChild:(id)arg1 toGroup:(id)arg2 isPaused:(BOOL*)arg3 isCancelled:(BOOL*)arg4;
- (id)ownedDictionaryObjectForKey:(id)arg1;
- (id)ownedDictionaryKeyEnumerator;
- (unsigned int)ownedDictionaryCount;
- (id)_indentedDescription:(unsigned int)arg1;
- (void)_removeGroup:(id)arg1 fraction:(id)arg2 portion:(long long)arg3;
- (void)_updateGroup:(id)arg1 oldFraction:(id)arg2 newFraction:(id)arg3 portion:(long long)arg4;
- (oneway void)prioritize;
- (void)_setGroup:(id)arg1;
- (void)_setCompletedUnitCount:(long long)arg1 totalUnitCount:(long long)arg2;
- (void)setPausingHandler:(id)arg1;
- (void)setTotalUnitCount:(long long)arg1;
- (void)resume;
- (id)_LSDescription;
- (void)setInstallPhase:(unsigned int)arg1;
- (unsigned int)installPhase;
- (id)initWithParent:(id)arg1 bundleID:(id)arg2 andPhase:(unsigned int)arg3;
- (unsigned int)installState;
- (void)setInstallState:(unsigned int)arg1;
- (void)_tsts_becomeCurrentWithPendingUnitCount:(long long)arg1;
- (void)brc_unpublish;
- (void)brc_publish;
- (void)sf_failedWithError:(id)arg1;
- (id)sf_initWithFileURL:(id)arg1;
- (id)sf_personRealName;
- (id)sf_publishingKey;
- (id)sf_initWithAppBundle:(id)arg1 sessionID:(id)arg2 andPersonRealName:(id)arg3;
- (id)sf_sessionID;
- (id)sf_bundleID;
- (void)setSf_transferState:(int)arg1;
- (id)sf_error;
- (int)sf_transferState;

@end