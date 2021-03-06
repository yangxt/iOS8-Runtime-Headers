/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_data>;

@interface __NSCFLocalStreamTask : __NSCFLocalSessionTask <NSURLSessionStreamTaskSubclass> {
    struct __CFWriteStream { } *_sinkForResponseBytes;
    NSObject<OS_dispatch_data> *_buffer;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _streamCompletion;

}

@property(copy) id streamCompletion;

+ (id)rawRequestForHost:(id)arg1 port:(int)arg2 tls:(bool)arg3;

- (void)_onqueue_createBoundStreams;
- (void)_onqueue_newStreams;
- (id)streamCompletion;
- (void)_onqueue_issueWrite;
- (void)_onqueue_adjustPriority;
- (void)_task_onqueue_didReceiveDispatchData:(id)arg1 completionHandler:(id)arg2;
- (void)_onqueue_cancel;
- (void)_task_onqueue_didFinish;
- (void)_onqueue_resume;
- (id)initWithTask:(id)arg1;
- (void)_onqueue_suspend;
- (void)setStreamCompletion:(id)arg1;

@end
