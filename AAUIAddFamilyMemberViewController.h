/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@class NSOperationQueue, RemoteUIController, NSMutableURLRequest, ACAccountStore, <AAUIAddFamilyMemberDelegate><UINavigationControllerDelegate>, ACAccount, AAGrandSlamSigner;

@interface AAUIAddFamilyMemberViewController : UINavigationController <RemoteUIControllerDelegate, AAUIPickInviteeDelegate> {
    ACAccount *_appleAccount;
    ACAccountStore *_accountStore;
    AAGrandSlamSigner *_grandSlamSigner;
    NSOperationQueue *_networkingQueue;
    RemoteUIController *_remoteUIController;
    NSMutableURLRequest *_startRemoteUIRequest;
}

@property <AAUIAddFamilyMemberDelegate><UINavigationControllerDelegate> * delegate;


- (void)pickInviteeViewController:(id)arg1 didCompleteWithSuccess:(BOOL)arg2;
- (void)remoteUIControllerDidDismiss:(id)arg1;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)remoteUIController:(id)arg1 willLoadRequest:(id)arg2;
- (id)initWithGrandSlamSigner:(id)arg1;
- (void).cxx_destruct;
- (BOOL)shouldAutorotate;
- (void)dealloc;

@end
