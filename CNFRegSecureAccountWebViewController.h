/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@class IMAccount;

@interface CNFRegSecureAccountWebViewController : CNFRegAuthorizedAccountWebViewController  {
    IMAccount *_account;
    BOOL _triedGettingNewCredentials;
    BOOL _gotNewCredential;
    unsigned int _signinFailureCount;
}

@property(retain) IMAccount * account;


- (void)_showRegistrationFailureWithError:(id)arg1;
- (void)_incrementSigninFailureCount;
- (void)_resetSigninFailureCount;
- (void)_launchForgotPasswordUrl;
- (void)_showBadPasswordAlert;
- (void)_showForgotPasswordAlert;
- (void)_showRequestPasswordAlert;
- (id)authTokenHeaderValue;
- (id)authIdHeaderValue;
- (void)doHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (id)initWithRegController:(id)arg1 account:(id)arg2;
- (void)_setupAccountHandlers;
- (void)setAccount:(id)arg1;
- (id)account;
- (void)_handleTimeout;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)dealloc;

@end
