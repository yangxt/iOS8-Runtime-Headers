/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@class YahooAccount, NSData;

@interface _MFXYMPKIAuthenticator : MFSASLAuthenticator  {
    BOOL sentInitialResponse;
    YahooAccount *_yahooAccount;
    NSData *_cachedSignature;
    BOOL _usedCachedSignature;
}


- (BOOL)couldRetry;
- (id)responseForServerData:(id)arg1;
- (void)setAuthenticationState:(int)arg1;
- (BOOL)base64EncodeResponseData;
- (id)saslName;
- (struct __CFData { }*)_copyDevicePrivateKey;
- (struct __CFData { }*)_copyDeviceCertificate;
- (id)_XYMPKISignatureData;
- (void)dealloc;

@end
