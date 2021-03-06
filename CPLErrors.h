/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLErrors : NSObject  {
}

+ (id)missingError;
+ (id)cplErrorWithCode:(int)arg1 underlyingError:(id)arg2 userInfo:(id)arg3 description:(id)arg4;
+ (id)invalidDaemonErrorWithConnectionError:(id)arg1;
+ (id)invalidCloudCacheError;
+ (id)libraryClosedError;
+ (id)transportErrorFromTransportError:(id)arg1;
+ (id)notImplementedError;
+ (id)versionMismatchError;
+ (id)underlyingErrorWithReason:(id)arg1;
+ (id)cplErrorWithCode:(int)arg1 underlyingError:(id)arg2 description:(id)arg3 arguments:(void*)arg4;
+ (id)cplErrorWithCode:(int)arg1 underlyingError:(id)arg2 userInfo:(id)arg3 description:(id)arg4 arguments:(void*)arg5;
+ (id)cplErrorWithCode:(int)arg1 description:(id)arg2 arguments:(void*)arg3;
+ (id)cplErrorWithCode:(int)arg1 description:(id)arg2;
+ (id)incorrectParametersErrorForParameter:(id)arg1;
+ (id)invalidClientCacheError;
+ (id)posixErrorForURL:(id)arg1;
+ (id)operationCancelledError;
+ (id)cplErrorWithCode:(int)arg1 underlyingError:(id)arg2 description:(id)arg3;
+ (id)incorrectMachineStateErrorWithReason:(id)arg1;
+ (id)unknownError;


@end
