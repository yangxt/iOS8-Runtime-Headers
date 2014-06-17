/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class NSMutableDictionary, NSString;

@interface BBObjectCache : NSObject  {
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } _cacheMutex;
    NSMutableDictionary *_cache;
    NSString *_identifier;
}

@property(copy) NSString * identifier;

+ (id)objectCacheForIdentifier:(id)arg1;
+ (id)description;

- (id)_descriptionForObject:(id)arg1 uniqueID:(id)arg2;
- (id)cachedObjectForUniqueID:(id)arg1;
- (void)removeCachedObject:(id)arg1;
- (id)cacheObject:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)debugDescription;
- (id)description;
- (void)dealloc;
- (id)init;

@end