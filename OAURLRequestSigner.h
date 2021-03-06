/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OAuth.framework/OAuth
 */

@class OACredential;

@interface OAURLRequestSigner : NSObject  {
    OACredential *_credential;
    int _signatureMethod;
}

@property int signatureMethod;


- (void)setSignatureMethod:(int)arg1;
- (id)oauthAuthorizationHeaderWithSignature:(id)arg1 nonce:(id)arg2 timestamp:(id)arg3;
- (id)oauthParametersWithNonce:(id)arg1 timeStamp:(id)arg2;
- (id)timestamp:(id)arg1;
- (id)oauthNonce;
- (id)applyApplicationID:(id)arg1 toRequest:(id)arg2 containsMultiPartData:(BOOL)arg3;
- (id)signatureMethodString;
- (int)signatureMethod;
- (id)signedURLRequestWithRequest:(id)arg1 applicationID:(id)arg2 timestamp:(id)arg3;
- (void)dealloc;
- (id)initWithCredential:(id)arg1;
- (id)signedURLRequestWithRequest:(id)arg1;
- (Class)signer;

@end
