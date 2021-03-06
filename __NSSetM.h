/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __NSSetM : NSMutableSet  {
    unsigned int _used : 26;
    unsigned int _size;
    unsigned long _mutations;
    id *_objs;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)__new:(const id*)arg1 :(unsigned int)arg2 :(BOOL)arg3;

- (id)member:(id)arg1;
- (void)enumerateObjectsWithOptions:(unsigned int)arg1 usingBlock:(id)arg2;
- (id)objectEnumerator;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (unsigned int)count;
- (void)dealloc;
- (void)finalize;
- (void)addObject:(id)arg1;
- (double)clumpingInterestingThreshold;
- (double)clumpingFactor;
- (void)getObjects:(id*)arg1 count:(unsigned int)arg2;
- (void)_mutate;

@end
