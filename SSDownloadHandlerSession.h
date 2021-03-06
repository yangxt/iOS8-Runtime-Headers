/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSNumber, NSString;

@interface SSDownloadHandlerSession : SSDownloadSession  {
    NSString *_downloadPhase;
    NSNumber *_duetTimeoutInterval;
}

@property(readonly) NSString * downloadPhase;
@property(readonly) NSNumber * duetTimeoutInterval;
@property BOOL blocksOtherDownloads;
@property BOOL canBePaused;
@property BOOL needsPowerAssertion;


- (id)duetTimeoutInterval;
- (void)setNeedsPowerAssertion:(BOOL)arg1;
- (void)setBlocksOtherDownloads:(BOOL)arg1;
- (BOOL)needsPowerAssertion;
- (void)disavowSessionWithError:(id)arg1;
- (BOOL)canBePaused;
- (BOOL)blocksOtherDownloads;
- (void)_setBool:(BOOL)arg1 forSessionProperty:(const char *)arg2;
- (void)_finishWithType:(int)arg1 error:(id)arg2;
- (id)_initWithMessage:(id)arg1 controlConnection:(id)arg2;
- (void)setPercentComplete:(float)arg1;
- (void)dealloc;
- (void)finishSessionWithSuccess:(BOOL)arg1 error:(id)arg2;
- (void)setStatusDescription:(id)arg1;
- (void)setCanBePaused:(BOOL)arg1;
- (void)releaseSessionControl;
- (id)downloadPhase;

@end
