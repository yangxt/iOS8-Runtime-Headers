/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class <CKRecipientSearchListControllerDelegate>, IMAccount, IDSBatchIDQueryController, NSMutableDictionary, CKContactsSearchManager, NSDate, NSArray;

@interface CKRecipientSearchListController : UITableViewController <IDSBatchIDQueryControllerDelegate, CKContactsSearchManagerDelegate> {
    BOOL _smsEnabled;
    BOOL _shouldUsePopovers;
    <CKRecipientSearchListControllerDelegate> *_delegate;
    NSArray *_enteredRecipients;
    NSArray *_prefilteredRecipients;
    CKContactsSearchManager *_searchManager;
    NSMutableDictionary *_searchIDSStatuses;
    IDSBatchIDQueryController *_statusQueryController;
    IMAccount *_defaultiMessageAccount;
    NSDate *_idsQueryStartTime;
}

@property <CKRecipientSearchListControllerDelegate> * delegate;
@property(retain) NSArray * enteredRecipients;
@property(retain) NSArray * prefilteredRecipients;
@property BOOL smsEnabled;
@property BOOL suppressGroupSuggestions;
@property BOOL shouldUsePopovers;
@property(retain) CKContactsSearchManager * searchManager;
@property(retain) NSMutableDictionary * searchIDSStatuses;
@property(retain) IDSBatchIDQueryController * statusQueryController;
@property(retain) IMAccount * defaultiMessageAccount;
@property(retain) NSDate * idsQueryStartTime;


- (void)cancelSearch;
- (void)setStatusQueryController:(id)arg1;
- (id)statusQueryController;
- (void)setShouldUsePopovers:(BOOL)arg1;
- (void)setSmsEnabled:(BOOL)arg1;
- (void)setPrefilteredRecipients:(id)arg1;
- (void)removeRecipientFromSearchResults:(id)arg1;
- (void)invalidateSearchManager;
- (void)invalidateOutstandingIDStatusRequests;
- (BOOL)hasSearchResults;
- (void)contactsSearchManager:(id)arg1 finishedSearchingWithResults:(id)arg2;
- (id)defaultiMessageAccount;
- (BOOL)smsEnabled;
- (void)setSuppressGroupSuggestions:(BOOL)arg1;
- (BOOL)suppressGroupSuggestions;
- (void)setSearchManager:(id)arg1;
- (void)searchWithText:(id)arg1;
- (void)setEnteredRecipients:(id)arg1;
- (id)prefilteredRecipients;
- (id)enteredRecipients;
- (id)idsQueryStartTime;
- (id)searchIDSStatuses;
- (void)setIdsQueryStartTime:(id)arg1;
- (id)_statusQueryController;
- (BOOL)isSearchResultsHidden;
- (BOOL)_serviceColorForRecipients:(id)arg1;
- (id)searchManager;
- (void)setSearchIDSStatuses:(id)arg1;
- (void)setDefaultiMessageAccount:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithStyle:(int)arg1;
- (void)loadView;
- (id)delegate;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)idStatusUpdatedForDestinations:(id)arg1;
- (BOOL)shouldUsePopovers;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end
