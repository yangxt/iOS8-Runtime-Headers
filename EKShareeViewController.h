/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKSharee, <EKShareeViewControllerDelegate>, UIActionSheet;

@interface EKShareeViewController : UITableViewController <UIActionSheetDelegate> {
    UIActionSheet *_alertSheet;
    BOOL _allowEditing;
    BOOL _allowStopSharing;
    BOOL _allowResendInvitations;
    EKSharee *_sharee;
    <EKShareeViewControllerDelegate> *_delegate;
}

@property(retain) EKSharee * sharee;
@property BOOL allowEditing;
@property BOOL allowStopSharing;
@property BOOL allowResendInvitations;
@property <EKShareeViewControllerDelegate> * delegate;


- (void)_reloadTitle;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (struct CGSize { float x1; float x2; })preferredContentSize;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)delegate;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)setDelegate:(id)arg1;
- (BOOL)allowResendInvitations;
- (BOOL)allowStopSharing;
- (void)removeClicked:(id)arg1;
- (void)_allowEditingChanged:(id)arg1;
- (int)_subitemAtRow:(int)arg1;
- (BOOL)_shouldDisplayStopSharingButton;
- (BOOL)allowEditing;
- (BOOL)_shouldDisplayResendInvitationButton;
- (void)setAllowEditing:(BOOL)arg1;
- (void)setSharee:(id)arg1;
- (id)sharee;
- (void)setAllowResendInvitations:(BOOL)arg1;
- (void)setAllowStopSharing:(BOOL)arg1;
- (id)initWithSharee:(id)arg1;
- (int)_rowForSubitem:(int)arg1;

@end
