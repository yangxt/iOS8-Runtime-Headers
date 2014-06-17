/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface MFProgressFilterDataConsumer : MFBaseFilterDataConsumer  {
    unsigned int _expectedSize;
    unsigned int _currentBytes;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _progressBlock;

}

@property(copy) id progressBlock;
@property(readonly) unsigned int expectedSize;


- (void)setProgressBlock:(id)arg1;
- (id)progressBlock;
- (id)initWithConsumers:(id)arg1 expectedSize:(unsigned int)arg2;
- (id)initWithConsumer:(id)arg1 expectedSize:(unsigned int)arg2;
- (unsigned int)expectedSize;
- (int)appendData:(id)arg1;
- (void)dealloc;

@end