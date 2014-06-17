/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CKRecord;

@interface BRCUploadRecordOperation : BRCMultiplexableOperation  {
    CKRecord *_record;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _uploadCompletionBlock;

}

@property(retain) CKRecord * record;
@property(copy) id uploadCompletionBlock;


- (void)setUploadCompletionBlock:(id)arg1;
- (id)uploadCompletionBlock;
- (id)initWithMultiplexer:(id)arg1;
- (void)setRecord:(id)arg1;
- (id)record;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void).cxx_destruct;

@end