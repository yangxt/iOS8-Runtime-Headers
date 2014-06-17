/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <EKPickerTableViewDelegate>, UIDatePicker, UITableView;

@interface EKPickerTableView : UIView  {
    UIDatePicker *_datePicker;
    UITableView *_tableView;
    BOOL _showsDatePicker;
    BOOL _usesKeyboard;
    <EKPickerTableViewDelegate> *_delegate;
}

@property(readonly) UIDatePicker * datePicker;
@property(readonly) UITableView * tableView;
@property <EKPickerTableViewDelegate> * delegate;
@property BOOL showsDatePicker;
@property BOOL usesKeyboard;
@property BOOL usesBlackDatePicker;


- (id)datePicker;
- (void).cxx_destruct;
- (id)tableView;
- (id)inputView;
- (BOOL)canBecomeFirstResponder;
- (id)delegate;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (BOOL)usesKeyboard;
- (BOOL)showsDatePicker;
- (float)heightWithDatePickerAndTableHeight:(float)arg1;
- (void)setShowsDatePicker:(BOOL)arg1;
- (void)_updateTableContentInset;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForDatePicker;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 tableViewController:(id)arg2;
- (float)_heightForDatePicker;
- (void)setShowsDatePicker:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setUsesBlackDatePicker:(BOOL)arg1;
- (BOOL)usesBlackDatePicker;
- (void)setUsesKeyboard:(BOOL)arg1;
- (void)_datePickerDoubleTapped:(id)arg1;
- (void)_updateTableContentInsetForKeyboard:(id)arg1;

@end