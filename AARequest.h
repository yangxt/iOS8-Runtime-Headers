/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSURLRequest, NSString;

@interface AARequest : NSObject  {
    NSString *_urlString;
    BOOL _flushCache;
    struct OpaqueCFHTTPCookieStorage { } *_cookieStorage;
    NSString *_oneTimePassword;
    NSString *_machineId;
}

@property(readonly) NSURLRequest * urlRequest;
@property BOOL flushCache;

+ (id)protocolVersion;
+ (Class)responseClass;

- (void)performRequestWithHandler:(id)arg1;
- (id)bodyDictionary;
- (id)urlRequest;
- (id)initWithURLString:(id)arg1;
- (BOOL)flushCache;
- (id)_redactedHeadersFromHTTPHeaders:(id)arg1;
- (id)urlCredential;
- (id)redactedBodyStringWithPropertyList:(id)arg1;
- (void)setCookieStorage:(struct OpaqueCFHTTPCookieStorage { }*)arg1;
- (void)setDeviceProvisioningOneTimePassword:(id)arg1;
- (void)setDeviceProvisioningMachineId:(id)arg1;
- (void)setFlushCache:(BOOL)arg1;
- (id)urlString;
- (void).cxx_destruct;
- (void)dealloc;

@end