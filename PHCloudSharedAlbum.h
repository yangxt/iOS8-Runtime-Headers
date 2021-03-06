/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@class NSNumber, NSString;

@interface PHCloudSharedAlbum : PHAssetCollection  {
    BOOL _owned;
    BOOL _cloudMultipleContributorsEnabled;
    short _cloudAlbumSubtype;
    NSString *_cloudOwnerFirstName;
    NSString *_cloudOwnerLastName;
    NSString *_cloudOwnerFullName;
    NSNumber *_cloudOwnerEmailKey;
}

@property(getter=isOwned,readonly) BOOL owned;
@property(getter=isCloudMultipleContributorsEnabled,readonly) BOOL cloudMultipleContributorsEnabled;
@property(readonly) short cloudAlbumSubtype;
@property(retain,readonly) NSString * cloudOwnerFirstName;
@property(retain,readonly) NSString * cloudOwnerLastName;
@property(retain,readonly) NSString * cloudOwnerFullName;
@property(retain,readonly) NSNumber * cloudOwnerEmailKey;

+ (id)identifierCode;
+ (id)propertiesToFetchWithHint:(unsigned int)arg1;
+ (id)managedEntityName;

- (short)cloudAlbumSubtype;
- (BOOL)isOwned;
- (id)cloudOwnerEmailKey;
- (BOOL)canPerformEditOperation:(unsigned int)arg1;
- (BOOL)isOwnedCloudSharedAlbum;
- (id)cloudOwnerFullName;
- (id)cloudOwnerLastName;
- (id)cloudOwnerFirstName;
- (id)localizedSharedByLabelAllowsEmail:(BOOL)arg1;
- (void).cxx_destruct;
- (BOOL)collectionHasFixedOrder;
- (BOOL)isCloudMultipleContributorsEnabled;
- (Class)changeRequestClass;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned int)arg2 photoLibrary:(id)arg3;
- (id)description;

@end
