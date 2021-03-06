/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKReminderInlineEditItemCell;

@interface EKReminderInlineEditItem : EKReminderEditItem <EKExpandingTextViewDelegate> {
    EKReminderInlineEditItemCell *_cell;
    BOOL _isListeningToHeightChanges;
}


- (void)textViewDidChangeContentHeight:(id)arg1;
- (int)cellStyle;
- (BOOL)isInline;
- (void).cxx_destruct;
- (void)_keyboardDidShow:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_applyStylesFromStyleProviderToTextView:(id)arg1;
- (id)textFromReminder;
- (id)newCell;
- (void)addStylingToCell:(id)arg1 forSubitemAtIndex:(unsigned int)arg2;
- (BOOL)shouldPinKeyboard;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 forWidth:(float)arg2;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;

@end
