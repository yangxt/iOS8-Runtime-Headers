/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFGenericAttachmentStore, MFConditionLock;

@interface _MFAttachmentScalingDataConsumer : MFCountingDataConsumer  {
    MFGenericAttachmentStore *_store;
    MFConditionLock *_lock;
}

@property MFGenericAttachmentStore * store;
@property MFConditionLock * lock;


- (void)setLock:(id)arg1;
- (int)appendData:(id)arg1;
- (id)lock;
- (id)store;
- (void)setStore:(id)arg1;

@end