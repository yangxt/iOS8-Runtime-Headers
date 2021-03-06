/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSArray, NSString, NSOrderedSet, NSDate, PLManagedAsset;

@interface PLSimpleAlbum : NSObject <PLAssetContainer> {
    NSString *_title;
    NSOrderedSet *_assets;
    PLManagedAsset *_keyAsset;
    PLManagedAsset *_secondaryKeyAsset;
    PLManagedAsset *_tertiaryKeyAsset;
}

@property(retain,readonly) NSString * uuid;
@property(retain,readonly) NSString * title;
@property(copy,readonly) NSString * localizedTitle;
@property(retain,readonly) NSOrderedSet * assets;
@property(readonly) unsigned int approximateCount;
@property(readonly) unsigned int assetsCount;
@property(readonly) unsigned int photosCount;
@property(readonly) unsigned int videosCount;
@property(readonly) BOOL isEmpty;
@property(retain) PLManagedAsset * keyAsset;
@property(retain) PLManagedAsset * secondaryKeyAsset;
@property(retain) PLManagedAsset * tertiaryKeyAsset;
@property(readonly) BOOL canShowComments;
@property(readonly) BOOL canShowAvalancheStacks;
@property(copy,readonly) NSArray * localizedLocationNames;
@property(retain,readonly) NSDate * startDate;
@property(retain,readonly) NSDate * endDate;


- (id)initWithTitle:(id)arg1 assets:(id)arg2;
- (int)_countOfAssetType:(short)arg1;
- (id)localizedLocationNames;
- (BOOL)canShowAvalancheStacks;
- (BOOL)canShowComments;
- (void)setTertiaryKeyAsset:(id)arg1;
- (id)tertiaryKeyAsset;
- (void)setSecondaryKeyAsset:(id)arg1;
- (id)secondaryKeyAsset;
- (void)setKeyAsset:(id)arg1;
- (id)keyAsset;
- (unsigned int)videosCount;
- (unsigned int)photosCount;
- (unsigned int)assetsCount;
- (unsigned int)approximateCount;
- (id)assets;
- (BOOL)canPerformEditOperation:(unsigned int)arg1;
- (id)localizedTitle;
- (id)uuid;
- (BOOL)isEmpty;
- (id)title;
- (void)dealloc;

@end
