/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface BRContainersMonitor : NSObject  {
    NSMutableDictionary *_observersByContainerID;
    NSMutableDictionary *_notifyTokenByContainerID;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)containerIDFromPrimaryIdentifier:(id)arg1 secondaryIdentifier:(id)arg2;
+ (BOOL)isContainerID:(id)arg1;

- (void)removeObserver:(id)arg1 forContainerID:(id)arg2;
- (void)addObserver:(id)arg1 forContainerID:(id)arg2;
- (void)dealloc;
- (void)finalize;
- (id)init;

@end