/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSEntityDescription, NSArray, NSString, NSData, NSDictionary, NSMutableDictionary;

@interface NSPropertyDescription : NSObject <NSCoding, NSCopying> {
    NSString *_versionHashModifier;
    id _underlyingProperty;
    NSData *_versionHash;
    NSEntityDescription *_entity;
    NSString *_name;
    NSArray *_validationPredicates;
    NSArray *_validationWarnings;
    struct __propertyDescriptionFlags { 
        unsigned int _isReadOnly : 1; 
        unsigned int _isTransient : 1; 
        unsigned int _isOptional : 1; 
        unsigned int _isIndexed : 1; 
        unsigned int _skipValidation : 1; 
        unsigned int _isIndexedBySpotlight : 1; 
        unsigned int _isStoredInExternalRecord : 1; 
        unsigned int _extraIvarsAreInDataBlob : 1; 
        unsigned int _isOrdered : 1; 
        unsigned int _reservedPropertyDescription : 23; 
    } _propertyDescriptionFlags;
    void *_extraIvars;
    NSMutableDictionary *_userInfo;
    long _entitysReferenceIDForProperty;
    BOOL _indexedBySpotlight;
    BOOL _storedInExternalRecord;
}

@property(readonly) NSEntityDescription * entity;
@property(copy) NSString * name;
@property(getter=isOptional) BOOL optional;
@property(getter=isTransient) BOOL transient;
@property(readonly) NSArray * validationPredicates;
@property(readonly) NSArray * validationWarnings;
@property(retain) NSDictionary * userInfo;
@property(getter=isIndexed) BOOL indexed;
@property(copy,readonly) NSData * versionHash;
@property(copy) NSString * versionHashModifier;
@property(getter=isIndexedBySpotlight) BOOL indexedBySpotlight;
@property(getter=isStoredInExternalRecord) BOOL storedInExternalRecord;
@property(copy) NSString * renamingIdentifier;

+ (void)initialize;

- (void)setReadOnly:(BOOL)arg1;
- (id)entity;
- (BOOL)isReadOnly;
- (BOOL)isTransient;
- (id)userInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setUserInfo:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)setStoredInTruth:(BOOL)arg1;
- (BOOL)isStoredInTruth;
- (void)setStoredInTruthFile:(BOOL)arg1;
- (BOOL)isStoredInTruthFile;
- (void)setSpotlightIndexed:(BOOL)arg1;
- (BOOL)isSpotlightIndexed;
- (void)_setOrdered:(BOOL)arg1;
- (void)setStoredInExternalRecord:(BOOL)arg1;
- (void)setStoredInExternalRecord:(BOOL)arg1;
- (void)setIndexedBySpotlight:(BOOL)arg1;
- (void)setIndexedBySpotlight:(BOOL)arg1;
- (void)setValidationPredicates:(id)arg1 withValidationWarnings:(id)arg2;
- (void)setTransient:(BOOL)arg1;
- (void)setOptional:(BOOL)arg1;
- (void)_initializeExtraIVars;
- (BOOL)_isOrdered;
- (BOOL)_isToManyRelationship;
- (BOOL)_skipValidation;
- (void)_restoreValidation;
- (void)_stripForMigration;
- (void)_setEntitysReferenceID:(long)arg1;
- (BOOL)isStoredInExternalRecord;
- (BOOL)isStoredInExternalRecord;
- (BOOL)isIndexedBySpotlight;
- (BOOL)isIndexedBySpotlight;
- (BOOL)_isEditable;
- (id)elementID;
- (void)setElementID:(id)arg1;
- (void)setVersionHashModifier:(id)arg1;
- (void)_setEntity:(id)arg1;
- (void)setRenamingIdentifier:(id)arg1;
- (id)versionHashModifier;
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7;
- (void)_appendPropertyFieldsToData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6;
- (void)_versionHash:(char *)arg1 inStyle:(unsigned int)arg2;
- (BOOL)_nonPredicateValidateValue:(id*)arg1 forKey:(id)arg2 inObject:(id)arg3 error:(id*)arg4;
- (void)_replaceValidationPredicates:(id)arg1 andWarnings:(id)arg2;
- (void)_createCachesAndOptimizeState;
- (BOOL)_comparePredicatesAndWarnings:(id)arg1;
- (id)_rawValidationWarnings;
- (id)_rawValidationPredicates;
- (id)_initWithName:(id)arg1;
- (id)validationWarnings;
- (id)validationPredicates;
- (void)_throwIfNotEditable;
- (struct _NSExtraPropertyIVars { id x1; long long x2; long long x3; }*)_extraIVars;
- (void)setIndexed:(BOOL)arg1;
- (BOOL)isIndexed;
- (BOOL)isOptional;
- (id)versionHash;
- (id)renamingIdentifier;
- (long)_entitysReferenceID;
- (BOOL)_isRelationship;
- (unsigned int)_propertyType;

@end
