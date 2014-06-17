/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class UISearchBar, <RUAddSeedViewControllerDelegate>, UISearchDisplayController, RUSearchViewController;

@interface RUAddSeedViewController : UIViewController <RUSearchViewControllerDelegate> {
    UISearchBar *_searchBar;
    UISearchDisplayController *_searchDisplayController;
    RUSearchViewController *_searchViewController;
    <RUAddSeedViewControllerDelegate> *_delegate;
}

@property <RUAddSeedViewControllerDelegate> * delegate;


- (id)_newSearchBar;
- (void)searchViewControllerDidEndSearching:(id)arg1;
- (void)searchViewController:(id)arg1 didSelectStation:(id)arg2;
- (id)metricsPageTypeForSearchViewController:(id)arg1;
- (id)metricsPageDescriptionForSearchViewController:(id)arg1;
- (id)_newSearchDisplayControllerWithSearchBar:(id)arg1 searchViewController:(id)arg2;
- (void)removeAddingIndicator;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)contentScrollView;
- (void)viewWillAppear:(BOOL)arg1;
- (id)delegate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end