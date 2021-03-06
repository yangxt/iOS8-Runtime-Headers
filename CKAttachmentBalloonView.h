/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKMediaObject, CKAttachmentView;

@interface CKAttachmentBalloonView : CKColoredBalloonView  {
    CKMediaObject *_mediaObject;
    CKAttachmentView *_attachmentView;
}

@property(retain) CKMediaObject * mediaObject;
@property(retain) CKAttachmentView * attachmentView;


- (id)attachmentView;
- (void)transferUpdated:(id)arg1;
- (void)updateViews;
- (void)setAttachmentView:(id)arg1;
- (id)mediaObject;
- (void)configureForMessagePart:(id)arg1;
- (void)setMediaObject:(id)arg1;
- (void)configureForMediaObject:(id)arg1 previewWidth:(float)arg2 orientation:(BOOL)arg3;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1 textAlignmentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg2;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)description;
- (void)dealloc;

@end
