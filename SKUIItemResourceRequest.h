/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, NSString, <SKUIItemRequestDelegate>;

@interface SKUIItemResourceRequest : SKUIResourceRequest <NSCopying> {
    <SKUIItemRequestDelegate> *_delegate;
    NSString *_imageProfile;
    NSArray *_itemIdentifiers;
    NSString *_keyProfile;
}

@property <SKUIItemRequestDelegate> * delegate;
@property(copy) NSString * imageProfile;
@property(copy) NSString * keyProfile;
@property(copy) NSArray * itemIdentifiers;


- (id)itemIdentifiers;
- (id)keyProfile;
- (void)setImageProfile:(id)arg1;
- (id)imageProfile;
- (id)newLoadOperation;
- (void)finishWithResource:(id)arg1;
- (void)setItemIdentifiers:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setKeyProfile:(id)arg1;

@end
