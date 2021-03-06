/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSOperationQueue, CKDOperation, NSString;

@interface CKDPlaceholderOperation : NSOperation  {
    BOOL _isFinished;
    BOOL _isExecuting;
    CKDOperation *_realOperation;
    NSOperationQueue *_targetOperationQueue;
}

@property(readonly) NSString * operationID;
@property(readonly) CKDOperation * realOperation;
@property(readonly) NSOperationQueue * targetOperationQueue;
@property BOOL isExecuting;
@property BOOL isFinished;


- (void)setIsExecuting:(BOOL)arg1;
- (id)targetOperationQueue;
- (id)realOperation;
- (id)ckShortDescription;
- (id)CKPropertiesDescription;
- (id)operationID;
- (id)initWithOperation:(id)arg1 targetOperationQueue:(id)arg2;
- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void).cxx_destruct;
- (void)main;
- (void)cancel;
- (void)start;
- (id)description;
- (void)setIsFinished:(BOOL)arg1;

@end
