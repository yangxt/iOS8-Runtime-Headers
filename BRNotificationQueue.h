/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@class NSMutableArray, NSMutableDictionary;

@interface BRNotificationQueue : NSObject <NSFastEnumeration> {
    NSMutableArray *_array;
    NSMutableArray *_callbacks;
    NSMutableDictionary *_index;
    unsigned int _dequeued;
}

@property(readonly) unsigned int count;


- (void)dequeue:(unsigned int)arg1 block:(id)arg2;
- (void)addDequeueCallback:(id)arg1;
- (void)addNotification:(id)arg1 asDead:(BOOL)arg2;
- (void)_processCallBacks;
- (void)_filterIndex:(id)arg1;
- (void)removeAllObjects;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (id)description;
- (unsigned int)count;
- (void)dealloc;
- (id)init;

@end
