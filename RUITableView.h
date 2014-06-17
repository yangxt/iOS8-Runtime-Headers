/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class NSIndexPath, _UIBackdropView, RUITableHeaderView, RUIPhotoPicker, UITableView, RUIObjectModel<RUITableViewDelegate>, NSDate, UIDatePicker, NSDictionary, UIPickerView, RUIBarButtonItem, NSString, RUITableViewRow, NSMutableArray;

@interface RUITableView : RUIElement <UITableViewDataSource, UITableViewDelegate, UIWebViewDelegate, RUITableViewRowDelegate, RUITableViewSectionDelegate> {
    NSMutableArray *_sections;
    UITableView *_tableView;
    UIPickerView *_selectPicker;
    BOOL _showSelectPicker;
    UIDatePicker *_datePicker;
    RUIPhotoPicker *_photoPicker;
    BOOL _showDatePicker;
    _UIBackdropView *_pickerBackdrop;
    NSIndexPath *_pickerRowIndexPath;
    NSIndexPath *_embeddedPickerRowIndexPath;
    RUITableViewRow *_defaultFirstResponderRow;
    BOOL _registeredForNotifications;
    float _lastLayoutWidth;
    float _fullscreenCellHeight;
    BOOL _showingPickerNavBarButtons;
    RUIBarButtonItem *_oldLeftBarButtonItemForPicker;
    RUIBarButtonItem *_oldRightBarButtonItemForPicker;
    NSDate *_oldPickerDate;
    RUIObjectModel<RUITableViewDelegate> *_objectModel;
    RUITableHeaderView *_headerView;
    NSDictionary *_headerViewAttributes;
    NSDictionary *_footerViewAttributes;
}

@property(getter=isShowingPicker,readonly) BOOL showingPicker;
@property(readonly) NSMutableArray * sections;
@property(retain) RUITableViewRow * defaultFirstResponderRow;
@property RUIObjectModel<RUITableViewDelegate> * objectModel;
@property(readonly) RUITableHeaderView * headerView;
@property(retain) NSDictionary * headerViewAttributes;
@property(retain) NSDictionary * footerViewAttributes;
@property(retain) NSString * headerTitle;


- (void)_textChanged:(id)arg1;
- (id)footerViewAttributes;
- (id)headerViewAttributes;
- (void)rowActivatedLink:(id)arg1 attributes:(id)arg2;
- (void)_setBottomInset:(float)arg1;
- (BOOL)_becomeFirstResponderAtIndexPath:(id)arg1;
- (void)_enumerateRowsUsingBlock:(id)arg1;
- (void)showPickerViewForRow:(id)arg1 animated:(BOOL)arg2;
- (void)_showDatePickerNavBarButtonsIfNeededForRow:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_selectPickerFrame;
- (void)_hideDatePickerNavBarButtonsIfNeeded;
- (void)datePickerDone:(id)arg1;
- (void)datePickerCancel:(id)arg1;
- (void)_handleLinkPress:(id)arg1 attributes:(id)arg2;
- (void)hidePickerViewAnimated:(BOOL)arg1;
- (void)_datePickerRevert;
- (void)_clearPickers;
- (void)setDefaultFirstResponderRow:(id)arg1;
- (void)activateRowAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (id)indexPathForRow:(id)arg1;
- (id)defaultFirstResponderRow;
- (id)_objectModelIndexPathForIndexPath:(id)arg1;
- (void)_registerForNotifications:(BOOL)arg1;
- (void)automaticKeyboardDidHide:(id)arg1;
- (void)automaticKeyboardDidShow:(id)arg1;
- (id)sourceURLForRUITableViewSection;
- (void)sectionActivatedLink:(id)arg1 attributes:(id)arg2 completion:(id)arg3;
- (void)rowActivatedLink:(id)arg1 attributes:(id)arg2 completion:(id)arg3;
- (id)sourceURLForRUITableViewRow;
- (id)textFieldRow:(id)arg1 changeCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementString:(id)arg3;
- (void)rowDidEndEditing:(id)arg1;
- (void)rowDidChange:(id)arg1;
- (void)rowIsFirstResponder:(id)arg1;
- (void)textFieldStartedEditing:(id)arg1;
- (Class)tableCellClassForTableViewRow:(id)arg1;
- (void)setFooterViewAttributes:(id)arg1;
- (void)setHeaderViewAttributes:(id)arg1;
- (id)objectModelRowForIndexPath:(id)arg1;
- (void)viewDidLayout;
- (void)setObjectModel:(id)arg1;
- (id)subElementsWithName:(id)arg1;
- (id)objectModel;
- (BOOL)isShowingPicker;
- (void)populatePostbackDictionary:(id)arg1;
- (void)setAttributes:(id)arg1;
- (id)sections;
- (void)setHeaderTitle:(id)arg1;
- (id)headerTitle;
- (void).cxx_destruct;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (id)tableView;
- (id)headerView;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(int)arg2;
- (int)tableView:(id)arg1 titleAlignmentForFooterInSection:(int)arg2;
- (int)tableView:(id)arg1 titleAlignmentForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)sourceURL;

@end