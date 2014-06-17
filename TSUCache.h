/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString, NSMutableDictionary;

@interface TSUCache : TSUFlushableObject  {
    NSString *mCacheName;
    NSMutableDictionary *mCache;
}


- (id)p_objectsForKeys:(id)arg1 notFoundMarker:(id)arg2;
- (void)p_addEntriesFromDictionary:(id)arg1;
- (id)p_objectForKey:(id)arg1;
- (BOOL)hasFlushableContent;
- (void)unload;
- (id)initWithName:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)description;
- (unsigned int)count;
- (void)dealloc;
- (id)init;

@end