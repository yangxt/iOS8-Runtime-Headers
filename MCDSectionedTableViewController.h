/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDSectionedTableViewController : MCD_OLD_TableViewController  {
    unsigned int *_offsetOfSection;
}

@property(readonly) BOOL isSectioning;
@property(readonly) unsigned int countOfActions;


- (unsigned int)rowAtIndexPath:(id)arg1;
- (unsigned int)countOfActions;
- (BOOL)isSectioning;
- (id)initWithQuery:(id)arg1 player:(id)arg2 serviceProvider:(id)arg3;
- (int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)dealloc;

@end
