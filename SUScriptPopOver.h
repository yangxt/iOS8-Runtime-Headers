/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIPopoverController, UIViewController, SUScriptViewController;

@interface SUScriptPopOver : SUScriptObject  {
    BOOL _ignoreDismiss;
}

@property(readonly) UIViewController * activeViewController;
@property(retain) UIPopoverController * nativePopoverController;
@property int backgroundStyle;
@property float contentHeight;
@property float contentWidth;
@property(readonly) SUScriptViewController * presentingViewController;
@property(retain) SUScriptViewController * viewController;
@property(readonly) int backgroundStyleBlack;
@property(readonly) int backgroundStyleClear;
@property(readonly) int backgroundStyleCream;
@property(readonly) int backgroundStyleDefault;
@property(readonly) int backgroundStyleShare;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;

- (void)_setIgnoresDismiss:(BOOL)arg1;
- (int)backgroundStyleShare;
- (int)backgroundStyleDefault;
- (int)backgroundStyleCream;
- (int)backgroundStyleClear;
- (int)backgroundStyleBlack;
- (void)setContentWidth:(float)arg1;
- (void)setContentHeight:(float)arg1;
- (float)contentHeight;
- (BOOL)showFromNavigationItem:(id)arg1;
- (BOOL)showFromElement:(id)arg1;
- (void)setContentWidth:(float)arg1 height:(float)arg2 animated:(BOOL)arg3;
- (void)setNativePopoverController:(id)arg1;
- (id)nativePopoverController;
- (id)activeViewController;
- (void)_setNativeViewController:(id)arg1;
- (id)_nativeViewController;
- (void)_showAsModalViewController;
- (BOOL)_isViewControllerVisible;
- (id)_popOverController;
- (BOOL)_shouldDisplayAsPopover;
- (void)_dismissAnimated:(BOOL)arg1;
- (void)_viewControllerDidDismiss:(id)arg1;
- (void)_overlayWillShowNotification:(id)arg1;
- (void)tearDownUserInterface;
- (id)attributeKeys;
- (id)_className;
- (id)scriptAttributeKeys;
- (int)backgroundStyle;
- (void)setBackgroundStyle:(int)arg1;
- (float)contentWidth;
- (void)dismissAnimated:(id)arg1;
- (BOOL)isVisible;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)presentingViewController;
- (void)dealloc;
- (id)init;

@end
