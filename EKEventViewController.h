/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKEvent, _UIAccessDeniedView, SingleToolbarItemContainerView, UITableView, <EKEventViewDelegate>, EKEventDetailItem, UIView, EKUIEventStatusButtonsView, EKUIRecurrenceAlertController, NSArray;

@interface EKEventViewController : UIViewController <EKEventTitleDetailItemDelegate, EKUIEventStatusButtonsViewDelegate, UIAlertViewDelegate> {
    BOOL _ignoreDBChanges;
    int _lastAuthorizationStatus;
    _UIAccessDeniedView *_accessDeniedView;
    EKEventDetailItem *_selectedEditItem;
    int _disclosedTableSection;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _disclosedTableRange;
    int _pendingStatus;
    id _editor;
    EKUIRecurrenceAlertController *_recurrenceAlertController;
    EKUIEventStatusButtonsView *_statusButtonsView;
    SingleToolbarItemContainerView *_statusButtonsContainerView;
    float _statusButtonsViewCachedFontSize;
    int _lastOrientation;
    EKEventDetailItem *_currentEditItem;
    UITableView *_tableView;
    BOOL _didAppear;
    BOOL _autoPop;
    BOOL _allowsSubitems;
    BOOL _showsPreview;
    BOOL _forcePreview;
    BOOL _trustsStatus;
    BOOL _allowsInviteResponses;
    BOOL _showsAddToCalendar;
    BOOL _ICSPreview;
    BOOL _needsReload;
    BOOL _showsDoneButton;
    BOOL _showsOutOfDateMessage;
    BOOL _showsDelegatorMessage;
    BOOL _showsDelegateMessage;
    BOOL _dead;
    BOOL _tableIsBeingEdited;
    NSArray *_items;
    NSArray *_currentSections;
    int _scrollToSection;
    UIView *_blankFooterView;
    BOOL _showingBlankFooterView;
    BOOL _allowsEditing;
    BOOL _hideNavigationBar;
    BOOL _leaveNavBarHidden;
    BOOL _minimalMode;
    <EKEventViewDelegate> *_delegate;
    EKEvent *_event;
    int _editorShowTransition;
    int _editorHideTransition;
    float _leftInset;
    float _rightInset;
    int _interfaceOrientationStartingModalEditingSession;
}

@property <EKEventViewDelegate> * delegate;
@property(retain) EKEvent * event;
@property BOOL allowsEditing;
@property BOOL allowsCalendarPreview;
@property BOOL alwaysShowsCalendarPreview;
@property int scrollToSection;
@property(getter=isICSPreview) BOOL ICSPreview;
@property BOOL showsAddToCalendar;
@property BOOL allowsSubitems;
@property BOOL showsDoneButton;
@property BOOL showsOutOfDateMessage;
@property BOOL showsDelegatorMessage;
@property BOOL showsDelegateMessage;
@property BOOL hideNavigationBar;
@property BOOL leaveNavBarHidden;
@property BOOL minimalMode;
@property int editorShowTransition;
@property int editorHideTransition;
@property float topInset;
@property float leftInset;
@property float rightInset;
@property int interfaceOrientationStartingModalEditingSession;

+ (void)adjustLayoutForCell:(id)arg1 tableViewWidth:(float)arg2 numRowsInSection:(unsigned int)arg3 cellRow:(unsigned int)arg4;
+ (void)setDefaultDatesForEvent:(id)arg1;

- (void)setRightInset:(float)arg1;
- (void)setTopInset:(float)arg1;
- (void)setLeftInset:(float)arg1;
- (float)rightInset;
- (float)leftInset;
- (float)topInset;
- (id)getCurrentContext;
- (BOOL)allowContextProvider:(id)arg1;
- (void).cxx_destruct;
- (id)event;
- (void)setEvent:(id)arg1;
- (void)setAllowsEditing:(BOOL)arg1;
- (BOOL)allowsEditing;
- (id)tableView;
- (id)_items;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize { float x1; float x2; })preferredContentSize;
- (void)viewWillLayoutSubviews;
- (unsigned int)supportedInterfaceOrientations;
- (id)delegate;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)setLeaveNavBarHidden:(BOOL)arg1;
- (void)setHideNavigationBar:(BOOL)arg1;
- (BOOL)hideNavigationBar;
- (BOOL)showsDoneButton;
- (void)detailItem:(id)arg1 wantsIndexPathsScrolledToVisible:(id)arg2;
- (void)detailItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3 rowReloads:(id)arg4;
- (void)detailItem:(id)arg1 wantsRowReload:(id)arg2;
- (void)detailItem:(id)arg1 performActionsOnCellAtIndexPath:(id)arg2 actions:(id)arg3;
- (void)_layoutStatusButtonsForInterfaceOrientation:(int)arg1;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (id)viewControllerForEventItem:(id)arg1;
- (void)eventItemDidEndEditing:(id)arg1;
- (void)eventItemDidCommit:(id)arg1;
- (void)eventItemDidStartEditing:(id)arg1;
- (void)_presentValidationAlert:(id)arg1;
- (void)resumeEventEditing;
- (int)scrollToSection;
- (void)setScrollToSection:(int)arg1;
- (void)setMinimalMode:(BOOL)arg1;
- (void)setShowsDelegateMessage:(BOOL)arg1;
- (void)setShowsDelegatorMessage:(BOOL)arg1;
- (void)setShowsOutOfDateMessage:(BOOL)arg1;
- (void)setShowsAddToCalendar:(BOOL)arg1;
- (void)setICSPreview:(BOOL)arg1;
- (void)setAlwaysShowsCalendarPreview:(BOOL)arg1;
- (BOOL)alwaysShowsCalendarPreview;
- (void)setAllowsCalendarPreview:(BOOL)arg1;
- (BOOL)allowsCalendarPreview;
- (void)openAttendeesDetailItem;
- (void)editButtonPressed;
- (BOOL)shouldShowEditButtonInline;
- (unsigned int)_sectionForDetailItem:(id)arg1;
- (BOOL)allowsSubitems;
- (void)invokeAction:(int)arg1;
- (BOOL)_isDisplayingDeletableEvent;
- (id)_statusButtonsContainerView;
- (BOOL)_shouldDisplayStatusButtons;
- (void)_performDelete:(int)arg1;
- (void)_deleteClicked:(id)arg1;
- (id)_statusButtonsView;
- (void)_saveStatus:(int)arg1;
- (int)interfaceOrientationStartingModalEditingSession;
- (int)editorHideTransition;
- (void)_saveStatus:(int)arg1 span:(int)arg2;
- (struct CGSize { float x1; float x2; })_idealSize;
- (int)editorShowTransition;
- (void)setInterfaceOrientationStartingModalEditingSession:(int)arg1;
- (BOOL)_performSave:(int)arg1 animated:(BOOL)arg2;
- (void)_presentDetachSheet;
- (BOOL)_isDisplayingInvitation;
- (id)_statusButtons;
- (void)_prepareEventForEdit;
- (id)_footerLabelContainingText:(id)arg1;
- (void)_addToCalendarClicked:(id)arg1;
- (BOOL)showsDelegateMessage;
- (BOOL)showsDelegatorMessage;
- (BOOL)showsOutOfDateMessage;
- (BOOL)isICSPreview;
- (BOOL)showsAddToCalendar;
- (void)_setUpAttendeesWithAcceptedItem:(id)arg1 declinedItem:(id)arg2 maybeItem:(id)arg3 noReplyItem:(id)arg4;
- (void)_refreshEventAndReload;
- (void)completeWithAction:(int)arg1;
- (void)_updateFrameForInsets;
- (void)_pop;
- (void)_dismissEditor:(BOOL)arg1 deleted:(BOOL)arg2;
- (void)_configureItemsForStoreConstraintsGivenCalendar:(id)arg1;
- (void)_setUpForEvent;
- (void)_reloadIfNeeded;
- (void)doneButtonPressed;
- (BOOL)_shouldDisplayDoneButton;
- (void)editEvent;
- (BOOL)_shouldShowEditButton;
- (void)_setNeedsReload;
- (id)_indexPathForAttendeesDetailItem;
- (BOOL)leaveNavBarHidden;
- (void)_keyboardWasHidden:(id)arg1;
- (void)_keyboardWasShown:(id)arg1;
- (void)_storeChanged:(id)arg1;
- (void)_localeChanged;
- (void)_updateTableContentForSizeCategoryChange:(id)arg1;
- (void)_updateTableContentInsetForKeyboard:(id)arg1;
- (id)_indexPathForSection:(int)arg1;
- (BOOL)_hidesNavBar;
- (void)_updateFooterIfNeeded;
- (void)_updateNavBarAnimated:(BOOL)arg1;
- (void)_updateResponse;
- (void)_updateResponseVisibility;
- (BOOL)minimalMode;
- (void)_teardownTableView;
- (void)setEditorHideTransition:(int)arg1;
- (void)setEditorShowTransition:(int)arg1;
- (void)setShowsDoneButton:(BOOL)arg1;
- (void)setAllowsSubitems:(BOOL)arg1;
- (void)eventStatusButtonsView:(id)arg1 calculatedFontSizeToFit:(float)arg2;
- (float)eventStatusButtonsViewButtonFontSize:(id)arg1;
- (void)eventStatusButtonsView:(id)arg1 didSelectAction:(int)arg2;
- (id)initWithEvent:(id)arg1;
- (id)accessDeniedView;

@end
