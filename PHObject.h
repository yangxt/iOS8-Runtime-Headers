/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@class PHPhotoLibrary, NSString, NSManagedObjectID;

@interface PHObject : NSObject <NSCopying> {
    BOOL _deleted;
    NSString *_uuid;
    NSManagedObjectID *_objectID;
    PHPhotoLibrary *_photoLibrary;
    unsigned int _propertyHint;
}

@property(copy,readonly) NSString * localIdentifier;
@property(readonly) NSString * uuid;
@property(readonly) NSManagedObjectID * objectID;
@property(readonly) PHPhotoLibrary * photoLibrary;
@property(getter=isTransient,readonly) BOOL transient;
@property(getter=isDeleted,readonly) BOOL deleted;
@property unsigned int propertyHint;

+ (id)uuidFromLocalIdentifier:(id)arg1;
+ (id)localIdentifierWithUUID:(id)arg1;
+ (id)entityKeyForPropertyKey:(id)arg1;
+ (BOOL)managedObjectSupportsBursts;
+ (id)identifierCode;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)propertiesToFetchWithHint:(unsigned int)arg1;
+ (id)managedEntityName;

- (BOOL)isDeleted;
- (id)objectID;
- (id)photoLibrary;
- (id)uuid;
- (BOOL)isTransient;
- (void).cxx_destruct;
- (id)_identifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)localIdentifier;
- (id)_shortObjectIDURI;
- (unsigned int)propertyHint;
- (void)setPropertyHint:(unsigned int)arg1;
- (Class)changeRequestClass;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned int)arg2 photoLibrary:(id)arg3;
- (id)description;

@end