/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <_MFSearchResultsConsumer>;

@interface _MFSearchProcessResultsOperation : NSOperation  {
    <_MFSearchResultsConsumer> *_consumer;
    unsigned int _type;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionBlock;

}

+ (id)operationWithResultsOfType:(unsigned int)arg1 completion:(id)arg2 consumer:(id)arg3;

- (void)main;
- (void)dealloc;

@end
