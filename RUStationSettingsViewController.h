/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class UIImage, UITextField, RUAddSeedViewController, UIAlertView, _RUStationSettingsTableView, RUStationTuningView, UIView, RadioStation, NSArray, RUMetricsController, UITableViewCell, RUParallelScrollView, NSMutableArray;

@interface RUStationSettingsViewController : UIViewController <RUAddSeedViewControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    UIImage *_addLikeBanImage;
    RUAddSeedViewController *_addSeedViewController;
    BOOL _addingForLike;
    NSArray *_bannedItems;
    RUParallelScrollView *_containerScrollView;
    UIView *_deleteTintView;
    UIAlertView *_deletionAlertView;
    BOOL _isEditing;
    NSArray *_likedItems;
    RUMetricsController *_metricsController;
    NSMutableArray *_orderedSections;
    NSMutableArray *_queuedMetricsOperations;
    int _sharingRow;
    RadioStation *_station;
    UITableViewCell *_stationNameCell;
    UITextField *_stationNameTextField;
    UITableViewCell *_stationTuningCell;
    RUStationTuningView *_stationTuningView;
    _RUStationSettingsTableView *_tableView;
    int _tuningRow;
}


- (id)_newTextField;
- (void)_toggleEditAction:(id)arg1;
- (void)addSeedViewControllerDidCancel:(id)arg1;
- (void)addSeedViewController:(id)arg1 didSelectStation:(id)arg2;
- (void)_stationNameTextFieldEditingDidBeginAction:(id)arg1;
- (void)_stationNameTextFieldValueDidEndEditingAction:(id)arg1;
- (id)_nameTextFieldFont;
- (id)_sectionHeaderTitleLabelFont;
- (id)_newSectionHeaderWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 title:(id)arg2;
- (id)_newShadowViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)_nameTextFieldHeight;
- (float)_sectionHeaderHeight;
- (id)_titleForSettingsSection:(int)arg1;
- (void)_presentAddSeedController;
- (int)_tableViewSectionForSettingsSection:(int)arg1;
- (void)_updateStationNameTextFieldFrame;
- (id)_addLikeBanImage;
- (int)_settingsSectionForTableViewSection:(int)arg1;
- (BOOL)_isDeletableRowAtIndexPath:(id)arg1;
- (int)_countOfSettingsSections;
- (void)_didSelectLikeBanStation:(id)arg1;
- (void)_updateLikesAndBans;
- (void)_updateViewForHorizontalSizeClassChangeAllowingTableReload:(BOOL)arg1;
- (void)_addMetricsControllerOperationBlock:(id)arg1;
- (id)_newPageEvent;
- (void)_updateEditingStateAnimated:(BOOL)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)contentScrollView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(int)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)dealloc;
- (id)initWithStation:(id)arg1;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;

@end