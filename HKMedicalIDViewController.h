/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@class HKHealthStore, NSArray, HKEmergencyCardGroupTableItem, <HKMedicalIDViewControllerDelegate>, _HKMedicalIDData;

@interface HKMedicalIDViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate, HKMedicalIDViewControllerDelegate, HKEmergencyCardEnabledDelegate, HKEmergencyCardDeletionDelegate> {
    NSArray *_tableItems;
    NSArray *_presentableTableItems;
    HKEmergencyCardGroupTableItem *_groupItem;
    BOOL _inEditMode;
    BOOL _allowsEditing;
    BOOL _showsDismissButton;
    BOOL _showsDeleteButton;
    _HKMedicalIDData *_medicalID;
    HKHealthStore *_healthStore;
    <HKMedicalIDViewControllerDelegate> *_delegate;
}

@property(retain) _HKMedicalIDData * medicalID;
@property BOOL allowsEditing;
@property BOOL showsDismissButton;
@property BOOL showsDeleteButton;
@property(retain) HKHealthStore * healthStore;
@property <HKMedicalIDViewControllerDelegate> * delegate;

+ (BOOL)isSupportedOnThisDevice;

- (BOOL)showsDeleteButton;
- (void)setShowsDeleteButton:(BOOL)arg1;
- (void)setShowsDismissButton:(BOOL)arg1;
- (BOOL)showsDismissButton;
- (id)_fetchMedicalIDDataSynchronously:(BOOL*)arg1;
- (void)deletionTableItemDidTapDelete:(id)arg1;
- (void)enabledTableItem:(id)arg1 stateDidChange:(BOOL)arg2;
- (void)medicalIDViewControllerDidDelete:(id)arg1;
- (void)setMedicalID:(id)arg1;
- (id)medicalID;
- (id)initInEditMode:(BOOL)arg1;
- (void)medicalIDViewControllerDidSave:(id)arg1;
- (void)medicalIDViewControllerDidCancel:(id)arg1;
- (void)_buildPresentableTableItems;
- (void)_editTapped:(id)arg1;
- (void)_doneEditingTapped:(id)arg1;
- (void)_cancelEditingTapped:(id)arg1;
- (void)_buildTableItems;
- (void).cxx_destruct;
- (void)setAllowsEditing:(BOOL)arg1;
- (BOOL)allowsEditing;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (id)delegate;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)healthStore;
- (void)setHealthStore:(id)arg1;
- (void)_doneTapped:(id)arg1;

@end