/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UITextField;

@interface ABPropertySimpleEditingCell : ABPropertyEditingCell <UITextFieldDelegate> {
    UITextField *_textField;
}

@property(readonly) UITextField * textField;


- (id)textField;
- (void)prepareForReuse;
- (void)dealloc;
- (void)updateValueWithPropertyItem:(id)arg1;
- (void)textFieldChanged:(id)arg1;
- (id)valueView;
- (id)firstResponderItem;
- (id)variableConstraints;
- (id)constantConstraints;

@end