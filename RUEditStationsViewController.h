/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class RUCreateStationViewController, UIAlertView, RUParallelScrollView, NSIndexPath, RUProxyTableView, <RUCreateStationViewControllerDelegate><RUEditStationsViewControllerDelegate>, _UIBackdropView, NSArray;

@interface RUEditStationsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    _UIBackdropView *_backdropView;
    RUParallelScrollView *_containerScrollView;
    RUCreateStationViewController *_createStationViewController;
    UIAlertView *_deletionAlertView;
    unsigned int _ignoreReloadDataCount;
    NSIndexPath *_indexPathToDelete;
    BOOL _isEditing;
    BOOL _needsReloadAfterEndIgnoring;
    NSArray *_stations;
    RUProxyTableView *_tableView;
    <RUCreateStationViewControllerDelegate><RUEditStationsViewControllerDelegate> *_delegate;
}

@property <RUCreateStationViewControllerDelegate><RUEditStationsViewControllerDelegate> * delegate;


- (void)_editAction:(id)arg1;
- (void)_updateBarButtonItemsAnimated:(BOOL)arg1;
- (void)_beginIgnoringReloadData;
- (void)_commitDeletingStationWithCompletionHandler:(id)arg1;
- (void)_endIgnoringReloadData;
- (void)_didReceiveRadioAccountDidDeauthenticateNotification:(id)arg1;
- (void)_updateTableViewRowHeight;
- (void)_updateViewForTraitCollectionChange;
- (void)_updateViewForHorizontalSizeClassChangeAllowingTableReload:(BOOL)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)contentScrollView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (unsigned int)supportedInterfaceOrientations;
- (id)delegate;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)reloadData;
- (void)_doneAction:(id)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)init;
- (void)_radioModelDidChangeNotification:(id)arg1;

@end
