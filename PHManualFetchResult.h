/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@class NSOrderedSet, NSString, NSArray;

@interface PHManualFetchResult : PHFetchResult  {
    NSArray *_objects;
    NSOrderedSet *_objectIDs;
    NSString *_identifier;
}

@property(readonly) NSArray * objects;
@property(readonly) NSOrderedSet * objectIDs;
@property(readonly) NSString * identifier;


- (id)fetchRequest;
- (id)photoLibrary;
- (id)objectIDAtIndex:(unsigned int)arg1;
- (id)initWithObjects:(id)arg1 identifier:(id)arg2 registerIfNeeded:(BOOL)arg3;
- (id)containerIdentifier;
- (void).cxx_destruct;
- (id)initWithObjects:(id)arg1;
- (id)identifier;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)fetchUpdatedObjects;
- (void)updateRegistrationForChangeNotificationDeltas;
- (id)fetchResultWithChangeHandlingValue:(id)arg1;
- (BOOL)interestedInChange:(id)arg1;
- (id)changeHandlingValue;
- (id)changeHandlingKey;
- (int)collectionFetchType;
- (id)objectIDs;
- (id)fetchedObjectIDs;
- (id)description;
- (id)objects;
- (id)fetchedObjects;

@end
