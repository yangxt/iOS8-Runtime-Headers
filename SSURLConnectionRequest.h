/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class <SSURLConnectionRequestDelegate>, SSAuthenticationContext, NSURLRequest, SSVURLDataConsumer, SSURLRequestProperties;

@interface SSURLConnectionRequest : SSRequest <SSXPCCoding> {
    SSURLRequestProperties *_requestProperties;
    SSAuthenticationContext *_authenticationContext;
    SSVURLDataConsumer *_dataConsumer;
    BOOL _runsInProcess;
    BOOL _sendsResponseForHTTPFailures;
    BOOL _shouldMescalSign;
}

@property(readonly) NSURLRequest * URLRequest;
@property(readonly) SSURLRequestProperties * requestProperties;
@property BOOL shouldMescalSign;
@property <SSURLConnectionRequestDelegate> * delegate;
@property(copy) SSAuthenticationContext * authenticationContext;
@property(retain) SSVURLDataConsumer * dataConsumer;
@property BOOL runsInProcess;
@property BOOL sendsResponseForHTTPFailures;

+ (id)newRadioRequestWithRequestProperties:(id)arg1;

- (id)authenticationContext;
- (void)setRunsInProcess:(BOOL)arg1;
- (void)setSendsResponseForHTTPFailures:(BOOL)arg1;
- (BOOL)shouldMescalSign;
- (BOOL)sendsResponseForHTTPFailures;
- (BOOL)runsInProcess;
- (BOOL)_canRunInProcess;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)dataConsumer;
- (void)setDataConsumer:(id)arg1;
- (id)requestProperties;
- (BOOL)start;
- (void)dealloc;
- (id)init;
- (id)initWithURLRequest:(id)arg1;
- (id)URLRequest;
- (void)startWithConnectionResponseBlock:(id)arg1;
- (void)startWithCompletionBlock:(id)arg1;
- (void)setAuthenticationContext:(id)arg1;
- (void)setShouldMescalSign:(BOOL)arg1;
- (id)initWithRequestProperties:(id)arg1;

@end
