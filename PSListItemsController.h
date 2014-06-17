/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class PSSpecifier;

@interface PSListItemsController : PSListController  {
    int _rowToSelect;
    BOOL _deferItemSelection;
    BOOL _restrictionList;
    PSSpecifier *_lastSelectedSpecifier;
}


- (void)setIsRestrictionList:(BOOL)arg1;
- (BOOL)isRestrictionList;
- (id)itemsFromDataSource;
- (id)itemsFromParent;
- (void)_addStaticText:(id)arg1;
- (void)listItemSelected:(id)arg1;
- (void)setRowToSelect;
- (void)setValueForSpecifier:(id)arg1 defaultValue:(id)arg2;
- (void)scrollToSelectedCell;
- (void)didLock;
- (void)prepareSpecifiersMetadata;
- (id)specifiers;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)suspend;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)dealloc;

@end