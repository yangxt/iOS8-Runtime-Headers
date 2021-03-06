/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSDictionary, NSString, PUAirplayRouteTableViewDataSource, MPMediaItemCollection, PUAirplayRoute;

@interface PUSlideshowSettingsViewController : UITableViewController <MPMediaPickerControllerDelegate> {
    PUAirplayRouteTableViewDataSource *_airplayDataSource;
    PUAirplayRoute *_markedRoute;
    MPMediaItemCollection *_musicCollection;
    NSString *_selectedTransitionKey;
    NSDictionary *_transitions;
    BOOL _showingAirplayRoutes;
    BOOL _showingMusic;
    BOOL _shouldShowCancelButton;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

}

@property BOOL shouldShowCancelButton;
@property(copy) id completionHandler;


- (void)setCompletionHandler:(id)arg1;
- (void).cxx_destruct;
- (id)initWithSettings:(id)arg1;
- (id)completionHandler;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)shouldShowCancelButton;
- (void)mediaPickerDidCancel:(id)arg1;
- (void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2;
- (void)_presentMusicControllerWithPresentationCompletion:(id)arg1;
- (void)_presentTransitionsController;
- (void)_presentAirplayController;
- (void)_updateSelectedTransition:(id)arg1;
- (id)_startSlideshowCellForTableView:(id)arg1;
- (id)_mainSectionCellForTableView:(id)arg1 atRow:(int)arg2;
- (id)_airplaySectionCellForTableView:(id)arg1 atRow:(int)arg2;
- (void)_slideshowSetupComplete:(id)arg1;
- (void)_updateMusicCollectionCell:(id)arg1;
- (void)_toggleMusic:(id)arg1;
- (void)_updateShouldPlayMusicCell:(id)arg1;
- (id)_disclosureCellForTableView:(id)arg1;
- (int)_effectiveSectionFromTableViewSection:(int)arg1;
- (id)_localTransitions;
- (void)_updateTransitions:(id)arg1 fromRoute:(id)arg2;
- (void)_updateTransitionCell:(id)arg1;
- (id)_defaultTransitions;
- (void)_updateToMarkedRoute:(id)arg1 updateToDefaultSettings:(BOOL)arg2;
- (void)_updateTransitionsForRoute:(id)arg1;
- (void)_updateShouldPlayMusic:(BOOL)arg1;
- (void)_updateAirplayCell:(id)arg1;
- (id)_indexPathForItem:(int)arg1 inSection:(int)arg2;
- (void)_slideshowSetupCancelled:(id)arg1;
- (void)setMarkedRoute:(id)arg1 updateToDefaultSettings:(BOOL)arg2;
- (void)setMarkedRoute:(id)arg1;
- (void)_updateRoutes;
- (void)setShouldShowCancelButton:(BOOL)arg1;
- (void)dealloc;
- (id)init;

@end
