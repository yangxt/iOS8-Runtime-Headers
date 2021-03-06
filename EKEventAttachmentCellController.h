/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKEventAttachmentCell, EKAttachment, <EKEventAttachmentCellControllerDelegate>;

@interface EKEventAttachmentCellController : NSObject <UIDocumentInteractionControllerDelegate> {
    id _downloadID;
    EKEventAttachmentCell *_cell;
    BOOL _sourceIsManaged;
    EKAttachment *_attachment;
    <EKEventAttachmentCellControllerDelegate> *_delegate;
}

@property(readonly) EKEventAttachmentCell * cell;
@property(retain) EKAttachment * attachment;
@property <EKEventAttachmentCellControllerDelegate> * delegate;
@property BOOL sourceIsManaged;

+ (BOOL)_attachmentIsViewable:(id)arg1;
+ (id)cellControllersForAttachments:(id)arg1 givenExistingControllers:(id)arg2;

- (id)attachment;
- (void)setAttachment:(id)arg1;
- (void)setSourceIsManaged:(BOOL)arg1;
- (id)documentInteractionControllerViewForPreview:(id)arg1;
- (id)documentInteractionControllerViewControllerForPreview:(id)arg1;
- (void)documentInteractionControllerWillEndPreview:(id)arg1;
- (BOOL)sourceIsManaged;
- (void).cxx_destruct;
- (id)cell;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)_presentPreviewOnMainThreadWithInfo:(id)arg1;
- (id)_downloadProgressStringWithDownloadedBytes:(id)arg1 outOfTotalBytes:(id)arg2;
- (void)_presentPreviewWithURL:(id)arg1 filename:(id)arg2;
- (void)_clearDownloadID;
- (id)initWithAttachment:(id)arg1;
- (void)cellSelected;
- (void)tearDown;

@end
