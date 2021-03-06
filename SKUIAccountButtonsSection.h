/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIAccountButtonsViewController, SKUIAccountButtonsComponent;

@interface SKUIAccountButtonsSection : SKUIStorePageSection <SKUIAccountButtonsDelegate> {
    SKUIAccountButtonsViewController *_accountButtonsViewController;
}

@property(retain) SKUIAccountButtonsComponent * pageComponent;


- (id)_accountButtonsViewController;
- (void)accountButtonsViewControllerDidSignOut:(id)arg1;
- (void)accountButtonsViewControllerDidSignIn:(id)arg1;
- (id)backgroundColorForIndexPath:(id)arg1;
- (int)numberOfCells;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { float x1; float x2; })cellSizeForIndexPath:(id)arg1;
- (void)willAppearInContext:(id)arg1;
- (id)initWithPageComponent:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;

@end
