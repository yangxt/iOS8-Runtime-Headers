/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class ACAccount, NSString;

@interface AAAuthenticateRequest : AARequest  {
    NSString *_username;
    NSString *_password;
    NSString *_authToken;
    ACAccount *_account;
}

@property(copy) NSString * username;
@property(copy) NSString * password;
@property(copy) NSString * authToken;
@property(retain) ACAccount * account;

+ (Class)responseClass;

- (id)username;
- (id)initWithAccount:(id)arg1;
- (id)urlRequest;
- (id)initWithUsername:(id)arg1 password:(id)arg2;
- (void)setUsername:(id)arg1;
- (void)setPassword:(id)arg1;
- (id)authToken;
- (void)setAccount:(id)arg1;
- (id)account;
- (void)setAuthToken:(id)arg1;
- (id)initWithURLString:(id)arg1 username:(id)arg2 password:(id)arg3;
- (id)urlCredential;
- (id)urlString;
- (void).cxx_destruct;
- (id)password;

@end