/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUNoCopyDictionary : NSMutableDictionary  {
    struct __CFDictionary { } *mDictionary;
}


- (void)setObject:(id)arg1 forUncopiedKey:(id)arg2;
- (id)initWithCFDictionary:(struct __CFDictionary { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)keyEnumerator;
- (id)allValues;
- (id)objectEnumerator;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)removeAllObjects;
- (id)allKeys;
- (id)initWithCapacity:(unsigned int)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (unsigned int)count;
- (void)dealloc;
- (id)init;
- (void)getObjects:(id*)arg1 andKeys:(id*)arg2;

@end
