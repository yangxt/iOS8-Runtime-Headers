/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class ACAccount, NSString;

@interface AAUpdateProvisioningRequest : AARequest  {
    ACAccount *_account;
    NSString *_authToken;
}

@property(retain) ACAccount * account;
@property(copy) NSString * authToken;

+ (Class)responseClass;

- (id)initWithAccount:(id)arg1;
- (id)urlRequest;
- (id)authToken;
- (void)setAccount:(id)arg1;
- (id)account;
- (void)setAuthToken:(id)arg1;
- (id)initWithAccount:(id)arg1 token:(id)arg2;
- (id)initWithURLString:(id)arg1 account:(id)arg2;
- (id)urlCredential;
- (id)urlString;
- (void).cxx_destruct;

@end
