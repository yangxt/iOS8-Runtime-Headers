/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@class NSMutableDictionary;

@interface ACDQueueDictionary : NSObject  {
    NSMutableDictionary *_allQueuesByID;
}


- (id)keyForRandomQueue;
- (id)dequeueAllObjectsInQueueForKey:(id)arg1;
- (id)firstObjectInQueueForKey:(id)arg1;
- (id)dequeueFirstObjectInQueueForKey:(id)arg1;
- (void)addObject:(id)arg1 toQueueForKey:(id)arg2;
- (BOOL)isQueueEmptyForKey:(id)arg1;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)description;
- (id)init;

@end
