/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKAttachmentItem, UIImageView, NSObject<CKAttachmentCellDelegate>;

@interface CKAttachmentCell : UICollectionViewCell  {
    BOOL _editing;
    UIImageView *_checkmarkView;
    NSObject<CKAttachmentCellDelegate> *_delegate;
    CKAttachmentItem *_representedObject;
}

@property(retain) UIImageView * checkmarkView;
@property NSObject<CKAttachmentCellDelegate> * delegate;
@property(retain) CKAttachmentItem * representedObject;
@property(getter=isEditing) BOOL editing;


- (void)saveAttachment:(id)arg1;
- (void)more:(id)arg1;
- (void)setCheckmarkView:(id)arg1;
- (void)setRepresentedObject:(id)arg1;
- (id)representedObject;
- (id)checkmarkView;
- (void)delete:(id)arg1;
- (void)copy:(id)arg1;
- (void)setEditing:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (BOOL)isEditing;
- (id)delegate;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end