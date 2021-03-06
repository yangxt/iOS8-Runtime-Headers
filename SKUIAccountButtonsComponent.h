/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUILink, SKUIAccountButtonsViewElement;

@interface SKUIAccountButtonsComponent : SKUIPageComponent  {
    SKUILink *_ecommerceLink;
    BOOL _hidesTermsAndConditions;
}

@property(readonly) SKUIAccountButtonsViewElement * viewElement;
@property(retain) SKUILink * ECommerceLink;
@property BOOL hidesTermsAndConditions;


- (void)setHidesTermsAndConditions:(BOOL)arg1;
- (BOOL)hidesTermsAndConditions;
- (id)ECommerceLink;
- (void)setECommerceLink:(id)arg1;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(int)arg2;
- (int)componentType;
- (id)initWithViewElement:(id)arg1;
- (id)initWithCustomPageContext:(id)arg1;
- (void).cxx_destruct;

@end
