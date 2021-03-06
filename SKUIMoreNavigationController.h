/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UINavigationController, UIViewController, <SKUIMoreNavigationControllerDelegate>;

@interface SKUIMoreNavigationController : UIMoreNavigationController  {
    UINavigationController *_displayedViewController;
    UIViewController *_firstActualViewController;
    <SKUIMoreNavigationControllerDelegate> *_storeKitDelegate;
}

@property <SKUIMoreNavigationControllerDelegate> * storeKitDelegate;

+ (Class)_moreListControllerClass;

- (void)setStoreKitDelegate:(id)arg1;
- (id)storeKitDelegate;
- (void).cxx_destruct;
- (void)setDisplayedViewController:(id)arg1;
- (id)displayedViewController;
- (void)didShowViewController:(id)arg1 animated:(BOOL)arg2;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;

@end
