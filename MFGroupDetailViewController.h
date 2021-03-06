/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFRecentComposeRecipientGroup, <MFGroupDetailViewControllerDelegate>;

@interface MFGroupDetailViewController : UITableViewController <UIActionSheetDelegate> {
    <MFGroupDetailViewControllerDelegate> *_delegate;
    MFRecentComposeRecipientGroup *_group;
}

@property <MFGroupDetailViewControllerDelegate> * delegate;
@property(retain) MFRecentComposeRecipientGroup * group;


- (id)group;
- (void)setGroup:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)initWithStyle:(int)arg1;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)delegate;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)_removeButtonTapped:(id)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end
