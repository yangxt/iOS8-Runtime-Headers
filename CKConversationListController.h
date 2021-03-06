/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UIToolbar, CKConversationList, UITableView, CKMessagesController, NSIndexPath, UIBarButtonItem, CKScheduledUpdater, CKConversationSearcher;

@interface CKConversationListController : UIViewController <UITableViewDataSource, UITableViewDelegate, CKConversationSearcherDelegate, UIActionSheetDelegate> {
    UITableView *_table;
    NSIndexPath *_previouslySelectedIndexPath;
    UIToolbar *_buttonBar;
    unsigned int _willBeMarkedReadCount;
    unsigned int _isVisible : 1;
    unsigned int _willRotate : 1;
    CKMessagesController *_messagesController;
    CKConversationList *_conversationList;
    CKConversationSearcher *_searcher;
    BOOL _isInitialLoad;
    BOOL _isShowingSwipeDeleteConfirmation;
    UIBarButtonItem *_currentEditButtonItem;
    CKScheduledUpdater *_updater;
}

@property CKConversationList * conversationList;
@property CKMessagesController * messagesController;
@property(retain) NSIndexPath * previouslySelectedIndexPath;
@property(retain) UIBarButtonItem * currentEditButtonItem;
@property BOOL isShowingSwipeDeleteConfirmation;
@property(readonly) BOOL shouldShowPendingCell;
@property(retain) CKScheduledUpdater * updater;


- (void)scrollToTop;
- (void)setMessagesController:(id)arg1;
- (void)setConversationList:(id)arg1;
- (void)selectDefaultConversationAnimated:(BOOL)arg1;
- (void)conversationWillBeMarkedRead:(id)arg1;
- (void)_groupsChanged:(id)arg1;
- (void)_conversationMessageWasSent:(id)arg1;
- (void)searcher:(id)arg1 willHideSearchResultsTableView:(id)arg2;
- (void)searcher:(id)arg1 didShowSearchResultsTableView:(id)arg2;
- (void)searcherWillEndSearch:(id)arg1;
- (void)searcher:(id)arg1 userDidSelectChatGUID:(id)arg2 messageGUID:(id)arg3;
- (id)searcher:(id)arg1 conversationForChatGUID:(id)arg2;
- (id)searcherContentsController:(id)arg1;
- (unsigned int)_indexOfConverationClosestToDeletedIndex:(unsigned int)arg1;
- (void)_selectConversationAtIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (unsigned int)_indexOfDefaultConversation;
- (void)deleteButtonTappedForIndexPath:(id)arg1;
- (void)selectConversationClosestToDeletedIndex:(unsigned int)arg1;
- (void)setIsShowingSwipeDeleteConfirmation:(BOOL)arg1;
- (void)markAsReadButtonTappedForIndexPath:(id)arg1;
- (id)previouslySelectedIndexPath;
- (void)_updateToolbarItems;
- (void)batchDeleteButtonTapped:(id)arg1;
- (void)markAsReadButtonTapped:(id)arg1;
- (void)hideSearchUI;
- (BOOL)_shouldKeepSelection;
- (void)endHoldingConversationListUpdatesForKey:(id)arg1;
- (void)updateNavigationItems;
- (void)setPreviouslySelectedIndexPath:(id)arg1;
- (BOOL)shouldShowPendingCell;
- (id)messagesController;
- (id)conversationList;
- (BOOL)isShowingSwipeDeleteConfirmation;
- (void)setCurrentEditButtonItem:(id)arg1;
- (void)editButtonTapped:(id)arg1;
- (void)updateCurrentEditButton;
- (void)composeButtonClicked:(id)arg1;
- (id)currentEditButtonItem;
- (id)updater;
- (void)noteUnreadCountsChanged;
- (void)updateConversationSelection;
- (void)_conversationMuteDidChangeNotification:(id)arg1;
- (void)_conversationDisplayNameChangedNotification:(id)arg1;
- (void)_chatParticipantsChangedNotification:(id)arg1;
- (void)_conversationListDidChange:(id)arg1;
- (void)_conversationListDidFinishLoadingConversations:(id)arg1;
- (void)_chatItemsDidChange:(id)arg1;
- (void)beginHoldingConversationListUpdatesForKey:(id)arg1;
- (void)setUpdater:(id)arg1;
- (void)updateConversationList;
- (void)prepareForSuspend;
- (void)prepareForResume;
- (void)_chatUnreadCountDidChange:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)parentControllerDidResume:(BOOL)arg1 animating:(BOOL)arg2;
- (void)_keyboardWillShowOrHide:(id)arg1;
- (id)inputAccessoryView;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; int x6; }*)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)accessibilityLargeTextDidChange;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)tableView:(id)arg1 swipeAccessoryButtonPushedForRowAtIndexPath:(id)arg2;
- (id)viewForHeaderInTableView:(id)arg1;
- (float)heightForHeaderInTableView:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (id)tableView:(id)arg1 backgroundColorForSwipeAccessoryButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForSwipeAccessoryButtonForRowAtIndexPath:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)significantTimeChange;
- (unsigned int)supportedInterfaceOrientations;
- (void)applicationWillSuspend;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)updateTitle;
- (void)dealloc;
- (id)init;

@end
