/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadarCompose.framework/RadarCompose
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UITextField, RCRadarCoordinator, UIProgressView, RCRadar, UIView, _RCDescriptionEditCell, RCSubmitter, NSObject<OS_dispatch_queue>, RCAttachmentViewController, RCActivityOverlay, RCReachability, NSString, NSMutableArray, RCManagedObjectContext;

@interface RCRadarComposeViewController : UITableViewController <UITextFieldDelegate, UITextViewDelegate, UIAlertViewDelegate, UIActionSheetDelegate, RCRadarCoordinatorDelegate> {
    NSObject<OS_dispatch_queue> *_attachmentsQueue;
    NSObject<OS_dispatch_queue> *_imagesQueue;
    BOOL _canEditCategory;
    UIView *_greyView;
    NSMutableArray *_attachmentGroups;
    NSMutableArray *_attachmentTypesGrouped;
    RCSubmitter *_submitter;
    UITextField *_titleTextField;
    BOOL _lockToComponent;
    BOOL _gatheringAttachments;
    UIProgressView *_progressView;
    BOOL _loadingRadar;
    BOOL _viewHasAppeared;
    BOOL _sending;
    RCActivityOverlay *_overlayController;
    BOOL _isDraft;
    BOOL _shouldLoadDrafts;
    BOOL _firstLaunch;
    BOOL _onWifi;
    RCRadar *_radar;
    RCRadarCoordinator *_coordinator;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    RCAttachmentViewController *_attachmentViewController;
    _RCDescriptionEditCell *_descriptionCell;
    unsigned int _accessGroup;
    NSString *_screenshotPath;
    NSString *_bundleID;
    RCManagedObjectContext *_context;
    RCReachability *_reachability;
}

@property(retain) RCRadar * radar;
@property(retain) RCRadarCoordinator * coordinator;
@property BOOL isDraft;
@property BOOL shouldLoadDrafts;
@property(copy) id completionHandler;
@property(retain) RCAttachmentViewController * attachmentViewController;
@property BOOL firstLaunch;
@property(retain) _RCDescriptionEditCell * descriptionCell;
@property unsigned int accessGroup;
@property(retain) NSString * screenshotPath;
@property(retain) NSString * bundleID;
@property(retain) RCManagedObjectContext * context;
@property BOOL onWifi;
@property(retain) RCReachability * reachability;


- (void)setDescriptionCell:(id)arg1;
- (void)setShouldLoadDrafts:(BOOL)arg1;
- (BOOL)shouldLoadDrafts;
- (void)textViewDidChangeContentHeight:(id)arg1;
- (void)showEditRadar:(id)arg1;
- (void)startANewRadar;
- (id)initWithRadar:(id)arg1 accessGroup:(unsigned int)arg2 andCompletionHandler:(id)arg3;
- (BOOL)rectVisible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)scrollToCursorForTextView:(id)arg1;
- (void)setAttachmentViewController:(id)arg1;
- (id)attachmentViewController;
- (void)updateAttachmentFieldWithAnimation:(int)arg1;
- (BOOL)canSend;
- (void)resetNavigationBar;
- (void)updateNavigationBarWithProgress:(float)arg1 animated:(BOOL)arg2;
- (BOOL)onWifi;
- (void)dismissViewControllerSaving:(BOOL)arg1 withError:(id)arg2;
- (void)updateButtonStates;
- (id)descriptionCell;
- (void)setFirstLaunch:(BOOL)arg1;
- (void)updateRadarFields;
- (BOOL)firstLaunch;
- (void)setOnWifi:(BOOL)arg1;
- (id)reachability;
- (void)setReachability:(id)arg1;
- (void)reachabilityChanged:(id)arg1;
- (void)_gatheringAttachments:(BOOL)arg1;
- (id)screenshotPath;
- (BOOL)isDraft;
- (void)setScreenshotPath:(id)arg1;
- (void)setIsDraft:(BOOL)arg1;
- (void)setCoordinator:(id)arg1;
- (void)_showOverlay;
- (void)coordinatorDidFinishGatheringAttachments;
- (void)coordinatorDidStartGatheringAttachments;
- (void)coordinatorDidFinishLoading;
- (void)coordinatorDidStartLoading;
- (void)setAccessGroup:(unsigned int)arg1;
- (void)setRadar:(id)arg1;
- (id)initWithBundleID:(id)arg1 screenshotPath:(id)arg2 accessGroup:(unsigned int)arg3 context:(id)arg4 andCompletionHandler:(id)arg5;
- (id)radar;
- (unsigned int)accessGroup;
- (id)coordinator;
- (void)cancel:(id)arg1;
- (void)setBundleID:(id)arg1;
- (id)bundleID;
- (BOOL)canSave;
- (void)setCompletionHandler:(id)arg1;
- (void).cxx_destruct;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (void)loadView;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)completionHandler;
- (id)initWithCompletionHandler:(id)arg1;
- (void)setContext:(id)arg1;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)context;
- (void)send:(id)arg1;

@end