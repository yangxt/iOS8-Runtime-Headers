/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@class NSError, NSString;

@interface SBKResponseStatus : NSObject  {
    BOOL _isRecoverable;
    BOOL _isError;
    BOOL _shouldFileRadar;
    BOOL _isPuntedError;
    int _statusCode;
    NSString *_consoleDescription;
}

@property(readonly) int statusCode;
@property(copy,readonly) NSString * consoleDescription;
@property(readonly) NSError * requestError;
@property(readonly) BOOL isSuccess;
@property(readonly) BOOL isRecoverable;
@property(readonly) BOOL isError;
@property(readonly) BOOL shouldFileRadar;
@property(readonly) BOOL isGenericError;
@property(readonly) BOOL isUnsupportedClient;
@property(readonly) BOOL isAuthenticationError;
@property(readonly) BOOL isValidationError;
@property(readonly) BOOL isPuntedError;

+ (id)responseStatusForStatusCodeNumber:(id)arg1;

- (id)initWithStatus:(int)arg1 isRecoverable:(BOOL)arg2 isError:(BOOL)arg3 consoleDescription:(id)arg4 shouldFileRadar:(BOOL)arg5;
- (BOOL)shouldFileRadar;
- (BOOL)isError;
- (BOOL)isRecoverable;
- (id)consoleDescription;
- (BOOL)isPuntedError;
- (BOOL)isAuthenticationError;
- (BOOL)isValidationError;
- (BOOL)isGenericError;
- (BOOL)isUnsupportedClient;
- (BOOL)isSuccess;
- (void).cxx_destruct;
- (int)statusCode;
- (id)requestError;

@end
