/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIModalItemSBViewController, _UIModalItemHostingWindow, _UIModalItemAppViewController, NSMapTable;

@interface _UIModalItemsCoordinator : NSObject  {
    NSMapTable *_presentingSessionsMapTable;
    NSMapTable *_sessionForItemMapTable;
    _UIModalItemSBViewController *__viewControllerForSBAlerts;
    _UIModalItemHostingWindow *__hostingWindowForSBAlerts;
    _UIModalItemAppViewController *__viewControllerForAlerts;
    _UIModalItemHostingWindow *__hostingWindowForAlerts;
}

@property(retain) NSMapTable * presentingSessionsMapTable;
@property(retain) NSMapTable * sessionForItemMapTable;
@property(retain) _UIModalItemSBViewController * _viewControllerForSBAlerts;
@property(retain) _UIModalItemHostingWindow * _hostingWindowForSBAlerts;
@property(retain) _UIModalItemAppViewController * _viewControllerForAlerts;
@property(retain) _UIModalItemHostingWindow * _hostingWindowForAlerts;

+ (void)_desaturateUIForSB;
+ (void)_resaturateUIForSB;
+ (void)_getRidOfViewControllerForAlerts;
+ (void)_getRidOfViewControllerForSBAlerts;
+ (id)sharedModalItemsCoordinator;
+ (void)noteOrientationChangingTo:(int)arg1 animated:(BOOL)arg2;

- (void)showAfterSpringBoardAlert:(BOOL)arg1;
- (void)hideForSpringBoardAlert:(BOOL)arg1;
- (void)_hidePresentingSessionForModalItem:(id)arg1 keepDimmingView:(BOOL)arg2 animated:(BOOL)arg3;
- (id)hostingViewControllerForViewController:(id)arg1 andModalItem:(id)arg2 create:(BOOL)arg3;
- (id)_rootViewControllerForModalItem:(id)arg1;
- (id)_presentingSessionForViewController:(id)arg1 ofItemsType:(int)arg2;
- (void)setSessionForItemMapTable:(id)arg1;
- (void)setPresentingSessionsMapTable:(id)arg1;
- (void)_notifyDissmissedItem:(id)arg1;
- (void)_showNextModalItemIfNecessaryAfterHidingItem:(id)arg1 showingItem:(id)arg2 animate:(BOOL)arg3;
- (id)presentingSessionsMapTable;
- (id)sessionForItemMapTable;
- (id)_hostingWindowForAlerts;
- (void)set_hostingWindowForAlerts:(id)arg1;
- (void)set_viewControllerForAlerts:(id)arg1;
- (id)_viewControllerForAlerts;
- (id)_hostingWindowForSBAlerts;
- (void)set_hostingWindowForSBAlerts:(id)arg1;
- (void)set_viewControllerForSBAlerts:(id)arg1;
- (id)_viewControllerForSBAlerts;
- (void)_hideModalItemsForType:(int)arg1 presentingViewController:(id)arg2 dimSpotlightView:(BOOL)arg3 animated:(BOOL)arg4;
- (void)_showModalItemsForType:(int)arg1 presentingViewController:(id)arg2 undimSpotlightView:(BOOL)arg3 animated:(BOOL)arg4;
- (id)_presentingViewControllerForAlertCompatibilityCreateIfNeeded:(BOOL)arg1;
- (id)_presentingViewControllerForAlertCompatibility;
- (id)_presentingViewControllerForSBCompatibility;
- (void)_getRidOfViewControllerForAlerts;
- (void)_getRidOfViewControllerForSBAlerts;
- (void)_presentItem:(id)arg1 replacingItem:(id)arg2 inViewController:(id)arg3 animated:(BOOL)arg4;
- (void)_addItemToStack:(id)arg1 replacingItem:(id)arg2 forPresentingViewController:(id)arg3;
- (id)presentingViewControllerForItem:(id)arg1 create:(BOOL)arg2;
- (void)_updateItem:(id)arg1 animated:(BOOL)arg2;
- (void)_notifyDelegateDidPresentItem:(id)arg1;
- (void)_notifyDelegateWillPresentItem:(id)arg1;
- (void)_notifyDelegateDidDismissItem:(id)arg1 withIndex:(int)arg2;
- (void)_notifyDelegateWillDismissItem:(id)arg1 withIndex:(int)arg2;
- (void)_dismissItem:(id)arg1 withTappedButtonIndex:(int)arg2 animated:(BOOL)arg3 notifyDelegate:(BOOL)arg4;
- (BOOL)_notifyDelegateModalItem:(id)arg1 tappedButtonAtIndex:(int)arg2;
- (void)noteOrientationChangingTo:(int)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (id)init;

@end
