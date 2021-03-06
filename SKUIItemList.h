/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, NSString, NSSet, NSMutableArray, NSMutableDictionary;

@interface SKUIItemList : NSObject <SKUICacheCoding, NSCopying> {
    NSMutableArray *_items;
    NSString *_seeAllTitle;
    NSString *_seeAllURLString;
    NSString *_title;
    NSSet *_unavailableItemIdentifiers;
}

@property(copy) NSArray * items;
@property(copy) NSString * seeAllTitle;
@property(copy) NSString * seeAllURLString;
@property(copy) NSString * title;
@property(copy) NSSet * unavailableItemIdentifiers;
@property(readonly) NSMutableDictionary * cacheRepresentation;


- (void)setSeeAllURLString:(id)arg1;
- (void)removeItemsAtIndexes:(id)arg1;
- (void)setSeeAllTitle:(id)arg1;
- (id)seeAllURLString;
- (id)seeAllTitle;
- (id)unavailableItemIdentifiers;
- (void)setUnavailableItemIdentifiers:(id)arg1;
- (BOOL)isUnavailableItemIdentifier:(id)arg1;
- (id)cacheRepresentation;
- (id)initWithCacheRepresentation:(id)arg1;
- (void).cxx_destruct;
- (void)addItems:(id)arg1;
- (void)addItem:(id)arg1;
- (void)setItems:(id)arg1;
- (id)items;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)title;
- (void)setTitle:(id)arg1;

@end
