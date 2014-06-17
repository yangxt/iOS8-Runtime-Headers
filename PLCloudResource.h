/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLAdditionalAssetAttributes, NSString, NSManagedObject;

@interface PLCloudResource : NSManagedObject  {
}

@property(retain) NSString * filePath;
@property long long fileSize;
@property(retain) NSString * fingerprint;
@property int height;
@property BOOL isAvailable;
@property BOOL isFlattened;
@property BOOL isLocallyAvailable;
@property int type;
@property(retain) NSString * uniformTypeIdentifier;
@property int width;
@property(retain) PLAdditionalAssetAttributes * assetAttributes;
@property(retain) NSManagedObject * cloudMaster;

+ (id)allCloudResourcesInManagedObjectContext:(id)arg1;
+ (id)insertIntoPhotoLibrary:(id)arg1 forAsset:(id)arg2 withCPLResource:(id)arg3;
+ (id)localPathForCPLResourceType:(unsigned int)arg1 forAsset:(id)arg2;
+ (id)entityName;
+ (id)entityInManagedObjectContext:(id)arg1;

- (void)applyPropertiesFromCloudResource:(id)arg1 forAsset:(id)arg2;
- (id)cplResourceWithItemIdentifier:(id)arg1;
- (id)description;

@end