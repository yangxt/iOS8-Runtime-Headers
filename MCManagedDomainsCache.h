/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSMutableArray, NSObject<OS_dispatch_queue>;

@interface MCManagedDomainsCache : NSObject  {
    NSObject<OS_dispatch_queue> *_memberQueue;
    NSMutableArray *_memberQueueCache;
}

@property(retain) NSObject<OS_dispatch_queue> * memberQueue;
@property(retain) NSMutableArray * memberQueueCache;

+ (id)sharedCache;

- (void)setMemberQueueCache:(id)arg1;
- (BOOL)isURLManaged:(id)arg1;
- (id)memberQueueCache;
- (void)memberQueueRereadCache;
- (void)rereadCache;
- (void).cxx_destruct;
- (void)setMemberQueue:(id)arg1;
- (id)memberQueue;
- (id)init;

@end
