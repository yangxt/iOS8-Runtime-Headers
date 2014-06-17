/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@class NSString, <NSCacheDelegate>;

@interface NSCache : NSObject  {
    id _delegate;
    void *_private[5];
    void *_reserved;
}

@property(copy) NSString * name;
@property <NSCacheDelegate> * delegate;
@property unsigned int totalCostLimit;
@property unsigned int countLimit;
@property BOOL evictsObjectsWithDiscardedContent;


- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned int)arg3;
- (void)setCountLimit:(unsigned int)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)delegate;
- (void)removeAllObjects;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)allObjects;
- (void)dealloc;
- (void)finalize;
- (void)setDelegate:(id)arg1;
- (id)init;
- (BOOL)evictsObjectsWhenApplicationEntersBackground;
- (void)setEvictsObjectsWithDiscardedContent:(BOOL)arg1;
- (unsigned int)countLimit;
- (unsigned int)totalCostLimit;
- (void)setTotalCostLimit:(unsigned int)arg1;
- (BOOL)evictsObjectsWithDiscardedContent;
- (void)setEvictsObjectsWhenApplicationEntersBackground:(BOOL)arg1;
- (id)CALobjectForKey:(id)arg1 calculatedWithBlock:(id)arg2;
- (void)tsp_performOperation:(unsigned char)arg1 forComponent:(id)arg2 usingBlock:(id)arg3;
- (id)tsp_currentComponent;
- (unsigned char)tsp_currentOperation;
- (void)tsp_cacheComponent:(id)arg1;
- (void)tsp_flushComponent:(id)arg1;

@end