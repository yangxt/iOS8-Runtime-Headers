/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSOperationQueue, NSString, AASigningSession, ACAccount, NSDate;

@interface AASetupAssistantService : NSObject  {
    NSOperationQueue *_requesterQueue;
    NSString *_appleID;
    NSString *_password;
    NSString *_emailChoice;
    ACAccount *_account;
    struct OpaqueCFHTTPCookieStorage { } *_cookieStorage;
    AASigningSession *_signingSession;
    NSDate *_signingSessionCreationDate;
}

@property(copy) NSString * appleID;
@property(copy) NSString * password;
@property(copy) NSString * emailChoice;

+ (void)resetURLConfiguration;
+ (id)urlConfiguration;

- (void)setAppleID:(id)arg1;
- (id)initWithAccount:(id)arg1;
- (id)appleID;
- (void)setPassword:(id)arg1;
- (void)setEmailChoice:(id)arg1;
- (void)shouldPresentUpgradeFlowWithCompletion:(id)arg1;
- (void)upgradeiCloudTermsIfNecessaryWithHandler:(id)arg1;
- (void)loginDelegatesWithParameters:(id)arg1 completion:(id)arg2;
- (void)setupDelegateAccountsWithParameters:(id)arg1 handler:(id)arg2;
- (void)updateAppleIDWithParameters:(id)arg1 handler:(id)arg2;
- (void)createAppleIDWithParameters:(id)arg1 handler:(id)arg2;
- (void)authenticateWithHandler:(id)arg1;
- (void)downloadURLConfiguration:(id)arg1;
- (id)initWithAppleID:(id)arg1 password:(id)arg2;
- (id)emailChoice;
- (void)_doHSADeviceReprovisioningWithDSID:(id)arg1;
- (void)_doHSADeviceProvisioningSynchronizationWithDSID:(id)arg1 data:(id)arg2;
- (void)_doHSADeviceProvisioningWithDSID:(id)arg1 data:(id)arg2;
- (id)_signingSession;
- (void)setCookieStorage:(struct OpaqueCFHTTPCookieStorage { }*)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)password;

@end