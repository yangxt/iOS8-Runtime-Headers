/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKModalTranscriptController;

@interface CKSMSComposeViewServiceController : UINavigationController <CKTranscriptComposeDelegate, CKSMSComposeViewServiceProtocol> {
    BOOL _canEditRecipients;
    BOOL _supportsAttachments;
    BOOL _supportsMessageInspection;
    BOOL _forceMMS;
    BOOL _disableCameraAttachments;
    CKModalTranscriptController *_modalTranscriptController;
}

@property(retain) CKModalTranscriptController * modalTranscriptController;
@property id delegate;
@property BOOL canEditRecipients;

+ (id)_remoteViewControllerInterface;
+ (id)_exportedInterface;

- (void)forceCancelComposition;
- (void)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 options:(id)arg4;
- (void)insertAttachmentWithURL:(id)arg1 andDescription:(id)arg2;
- (void)setUICustomizationData:(id)arg1;
- (void)setText:(id)arg1 subject:(id)arg2 addresses:(id)arg3;
- (BOOL)supportsMessageInspection;
- (void)setTextEntryContentsVisible:(BOOL)arg1;
- (void)setPendingAddresses:(id)arg1;
- (void)_forceMMSIfNecessary;
- (void)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
- (void)insertFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3;
- (id)modalTranscriptController;
- (void)setModalTranscriptController:(id)arg1;
- (void)setCanEditRecipients:(BOOL)arg1;
- (void)disableCameraAttachments;
- (BOOL)supportsAttachments;
- (void)transcriptController:(id)arg1 didSelectNewConversation:(id)arg2;
- (void)transcriptController:(id)arg1 willSendComposition:(id)arg2 inConversation:(id)arg3;
- (void)transcriptController:(id)arg1 didSendMessageInConversation:(id)arg2;
- (void)showNewMessageCompositionForComposition:(id)arg1;
- (void)didCancelComposition:(id)arg1;
- (BOOL)canEditRecipients;
- (void)forceMMS;
- (void)_willAppearInRemoteViewController;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
- (void)dealloc;
- (id)init;

@end
