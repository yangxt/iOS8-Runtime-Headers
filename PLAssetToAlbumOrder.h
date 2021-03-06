/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLManagedAlbum, PLManagedAsset;

@interface PLAssetToAlbumOrder : NSManagedObject <PLOrderKeyObject> {
    BOOL _isSpecial;
}

@property long long orderValue;
@property(retain) PLManagedAsset * asset;
@property(retain) PLManagedAlbum * album;
@property BOOL isSpecial;

+ (id)newAssetOrderForAsset:(id)arg1 album:(id)arg2;

- (id)childManagedObject;
- (id)secondaryOrderSortKey;
- (BOOL)isSpecial;
- (void)setIsSpecial:(BOOL)arg1;
- (void)didSave;
- (id)description;

@end
