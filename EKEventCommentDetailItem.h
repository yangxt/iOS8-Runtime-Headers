/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKEventDetailCommentCell;

@interface EKEventCommentDetailItem : EKEventDetailItem <UITextFieldDelegate> {
    EKEventDetailCommentCell *_cell;
}


- (void).cxx_destruct;
- (void)reset;
- (void)textFieldDidEndEditing:(id)arg1;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 forWidth:(float)arg2;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2;

@end
