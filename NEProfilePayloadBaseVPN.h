/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@class NSString;

@interface NEProfilePayloadBaseVPN : NEProfilePayloadBase  {
    BOOL _userNameRequired;
    BOOL _passwordRequired;
    BOOL _proxyUserNameRequired;
    BOOL _proxyPasswordRequired;
    BOOL _sharedSecretRequired;
    BOOL _pinRequired;
    NSString *_userName;
    NSString *_password;
    NSString *_proxyUserName;
    NSString *_proxyPassword;
    NSString *_sharedSecret;
    NSString *_pin;
}

@property BOOL userNameRequired;
@property BOOL passwordRequired;
@property BOOL proxyUserNameRequired;
@property BOOL proxyPasswordRequired;
@property BOOL sharedSecretRequired;
@property BOOL pinRequired;
@property(copy) NSString * userName;
@property(copy) NSString * password;
@property(copy) NSString * proxyUserName;
@property(copy) NSString * proxyPassword;
@property(copy) NSString * sharedSecret;
@property(copy) NSString * pin;


- (void)setUserName:(id)arg1;
- (id)validatePayload;
- (void)setProxyPassword:(id)arg1;
- (void)setPasswordRequired:(BOOL)arg1;
- (BOOL)passwordRequired;
- (id)proxyPassword;
- (void)setPassword:(id)arg1;
- (id)pin;
- (id)initWithPayload:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setPin:(id)arg1;
- (void)setSharedSecret:(id)arg1;
- (void)setProxyUserName:(id)arg1;
- (void)setPinRequired:(BOOL)arg1;
- (BOOL)pinRequired;
- (void)setSharedSecretRequired:(BOOL)arg1;
- (BOOL)sharedSecretRequired;
- (void)setProxyPasswordRequired:(BOOL)arg1;
- (BOOL)proxyPasswordRequired;
- (void)setProxyUserNameRequired:(BOOL)arg1;
- (BOOL)proxyUserNameRequired;
- (void)setUserNameRequired:(BOOL)arg1;
- (BOOL)userNameRequired;
- (void)extractPayloadContents:(id)arg1;
- (void)extractPayloadContentsPIN:(id)arg1;
- (void)extractPayloadContentsSharedSecret:(id)arg1;
- (void)extractPayloadContentsUserNamePassword:(id)arg1;
- (void)extractPayloadContentsHTTPProxy:(id)arg1;
- (id)sharedSecret;
- (id)proxyUserName;
- (BOOL)setPostprocessedPayloadContents:(id)arg1;
- (id)getPreprocessedPayloadContents;
- (id)userName;
- (id)password;

@end
