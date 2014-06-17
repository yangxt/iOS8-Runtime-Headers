/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSIndexPath, NSArray, NSString, <ABPickerControllerDelegate>, UITableViewController;

@interface ABPickerController : UINavigationController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {
    BOOL _allowsCustomItems;
    NSString *_selectedItem;
    NSArray *_builtinItems;
    NSArray *_customItems;
    NSString *_itemLocalizationKey;
    UITableViewController *_tableViewController;
    NSIndexPath *_selectedIndexPath;
}

@property(retain) NSString * selectedItem;
@property <ABPickerControllerDelegate> * delegate;
@property(copy) NSArray * builtinItems;
@property(copy) NSArray * customItems;
@property BOOL allowsCustomItems;
@property(copy) NSString * itemLocalizationKey;
@property(retain) UITableViewController * tableViewController;
@property(retain) NSIndexPath * selectedIndexPath;


- (id)selectedItem;
- (void)setSelectedItem:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)dealloc;
- (id)selectedIndexPath;
- (void)setItemLocalizationKey:(id)arg1;
- (void)customLabelUpdated:(id)arg1;
- (void)donePicker:(id)arg1;
- (void)setSelectedIndexPath:(id)arg1;
- (id)builtinItems;
- (id)customItems;
- (BOOL)allowsCustomItems;
- (id)itemLocalizationKey;
- (void)removeCustomItem:(id)arg1;
- (void)setAllowsCustomItems:(BOOL)arg1;
- (void)setCustomItems:(id)arg1;
- (id)titleForAddCustomItem;
- (id)titleForPickerItem:(id)arg1;
- (void)setBuiltinItems:(id)arg1;
- (void)setTableViewController:(id)arg1;
- (void)cancelPicker:(id)arg1;
- (id)tableViewController;
- (id)_itemAtIndexPath:(id)arg1;

@end