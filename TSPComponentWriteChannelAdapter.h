/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class TSUFileIOChannel, NSError, NSObject<OS_dispatch_queue>;

@interface TSPComponentWriteChannelAdapter : NSObject <TSPComponentWriteChannel> {
    NSObject<OS_dispatch_queue> *_queue;
    TSUFileIOChannel *_channel;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _handler;

    NSError *_error;
}


- (void)setError:(id)arg1;
- (void)writeData:(id)arg1;
- (void).cxx_destruct;
- (void)close;
- (id)initWithQueue:(id)arg1 channel:(id)arg2 handler:(id)arg3;

@end
