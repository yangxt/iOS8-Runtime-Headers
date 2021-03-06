/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSMutableDictionary, NSLock;

@interface MFWeakDictionary : NSMutableDictionary  {
    unsigned long _gen;
    NSLock *_lock;
    NSMutableDictionary *_dictionary;
}


- (id)_copyDictionary;
- (id)allValues;
- (void)enumerateKeysAndObjectsUsingBlock:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)removeAllObjects;
- (id)allKeys;
- (id)initWithCapacity:(unsigned int)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (unsigned int)count;
- (void)dealloc;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned int)arg1 usingBlock:(id)arg2;

@end
