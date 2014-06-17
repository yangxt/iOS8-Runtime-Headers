/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSManagedObjectID, NSPersistentStoreMap, NSString, NSMutableDictionary;

@interface NSStoreMapNode : NSObject  {
    NSPersistentStoreMap *_map;
    NSManagedObjectID *_objectID;
    NSMutableDictionary *_relatedNodes;
    NSString *_entityName;
    unsigned int _version;
}

+ (void)initialize;

- (id)initWithObjectID:(id)arg1;
- (id)entity;
- (id)objectID;
- (id)key;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)_relatedNodes;
- (id)destinationsForRelationship:(id)arg1;
- (void)setDestinations:(id)arg1 forRelationship:(id)arg2;
- (void)_setMap:(id)arg1;
- (void)_setVersionNumber:(unsigned int)arg1;
- (unsigned int)_versionNumber;
- (id)_snapshot_;
- (const id*)knownKeyValuesPointer;
- (id)configurationName;

@end