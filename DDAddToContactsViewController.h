/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@class <DDRemoteActionPresenter>, DDAction, ABUnknownPersonViewController;

@interface DDAddToContactsViewController : UINavigationController <ABUnknownPersonViewControllerDelegate, DDRemoteActionViewControllerConfiguration> {
    <DDRemoteActionPresenter> *_proxy;
    DDAction *_action;
    ABUnknownPersonViewController *_personViewController;
}

@property(retain) DDAction * action;

+ (id)_remoteViewControllerInterface;
+ (id)_exportedInterface;

- (void)cancelPressed:(id)arg1;
- (void)_augmentRecord:(void*)arg1 withResultsFromAction:(id)arg2;
- (void)prepareForAction:(id)arg1;
- (BOOL)unknownPersonViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void*)arg2;
- (void)setAction:(id)arg1;
- (id)action;
- (void)dealloc;
- (id)init;

@end
