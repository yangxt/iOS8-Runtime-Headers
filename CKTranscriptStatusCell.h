/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSAttributedString, UIButton, UILabel;

@interface CKTranscriptStatusCell : CKTranscriptLabelCell  {
    UIButton *_statusButton;
    float _prevBalloonWidth;
}

@property(retain,readonly) UILabel * label;
@property(copy) NSAttributedString * attributedButtonText;
@property(retain) UIButton * statusButton;
@property float prevBalloonWidth;


- (void)setStatusButton:(id)arg1;
- (id)attributedButtonText;
- (float)prevBalloonWidth;
- (void)setAttributedButtonText:(id)arg1;
- (void)startZoomInAnimation;
- (void)setPrevBalloonWidth:(float)arg1;
- (id)statusButton;
- (void)layoutSubviewsForAlignmentContents;
- (void)configureForChatItem:(id)arg1;
- (void)dealloc;

@end