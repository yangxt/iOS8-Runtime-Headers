/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface CKMultiDict : NSObject  {
    NSObject<OS_dispatch_queue> *_lockQueue;
    unsigned int _count;
    NSMutableDictionary *_dictionary;
}

@property(retain) NSObject<OS_dispatch_queue> * lockQueue;
@property(retain) NSMutableDictionary * dictionary;


- (void)setDictionary:(id)arg1;
- (void)setLockQueue:(id)arg1;
- (id)lockQueue;
- (void)removeObjectsForKey:(id)arg1;
- (id)dequeueObjectForKey:(id)arg1;
- (id)headObjectForKey:(id)arg1;
- (void)enqueueObject:(id)arg1 forKey:(id)arg2;
- (id)popObjectForKey:(id)arg1;
- (id)objectsForKey:(id)arg1;
- (id)peekObjectForKey:(id)arg1;
- (void)pushObject:(id)arg1 forKey:(id)arg2;
- (void)removeAllObjects;
- (id)allKeys;
- (id)dictionary;
- (id)description;
- (unsigned int)count;
- (void)dealloc;
- (id)init;

@end
