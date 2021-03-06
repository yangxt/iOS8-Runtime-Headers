/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@class NSMutableSet, NSObject<OS_dispatch_queue>, NSMutableArray, NSMutableDictionary;

@interface ATStatusMonitor : NSObject  {
    NSObject<OS_dispatch_queue> *_statusQueue;
    NSMutableArray *_statusObservers;
    NSMutableSet *_statuses;
    NSMutableDictionary *_statusDictionary;
}

+ (id)sharedMonitor;

- (void)updateStatusValuesWithDictionary:(id)arg1;
- (void)updateStatus:(id)arg1;
- (void)updateStatusWithValue:(id)arg1 forKey:(id)arg2;
- (id)allStatus;
- (void)addObserver:(id)arg1;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (id)init;

@end
