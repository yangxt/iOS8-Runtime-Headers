/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class AASigningSession, ACAccount, NSDictionary;

@interface AASetupAssistantSetupDelegatesRequest : AARequest  {
    NSDictionary *setupParameters;
    AASigningSession *signingSession;
    ACAccount *_account;
}

+ (Class)responseClass;

- (id)urlRequest;
- (id)initWithAccount:(id)arg1 withSetupParameters:(id)arg2 signingSession:(id)arg3;
- (id)urlString;
- (void).cxx_destruct;

@end
