/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@class DDAction, DDActionController;

@interface DDRemoteActionViewController : _UIRemoteViewController  {
    BOOL _proxyConfigured;
    DDAction *_action;
    DDActionController *_actionController;
    BOOL _waitingForRemoteConfiguration;
}

@property(retain) DDAction * action;
@property DDActionController * actionController;

+ (id)prepareViewController:(id)arg1 forAction:(id)arg2 actionController:(id)arg3;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)_prepareForAction:(id)arg1 inActionController:(id)arg2;
- (void)viewControllerReadyAndIsModal:(BOOL)arg1;
- (void)setActionController:(id)arg1;
- (id)actionController;
- (void)actionDidFinish;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)setAction:(id)arg1;
- (id)action;

@end