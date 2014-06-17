/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class NSArray, MPMediaLibrary;

@interface _MPUSharedLibrariesViewController : UITableViewController  {
    MPMediaLibrary *_connectingMediaLibrary;
    NSArray *_sharedMediaLibraries;
    BOOL _showsLocalLibrary;
}

@property BOOL showsLocalLibrary;

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (void)_updateConnectionProgress;
- (void)_updateNavigationPrompt;
- (void)_updateConnectionProgressForCell:(id)arg1;
- (id)_sharedMediaLibraries;
- (void)_cancelConnectionAndDismiss;
- (void)_mediaLibraryConnectionProgressDidChangeNotification:(id)arg1;
- (void)_availableMediaLibrariesDidChangeNotification:(id)arg1;
- (void)_reloadSharedLibraries;
- (BOOL)showsLocalLibrary;
- (void)setShowsLocalLibrary:(BOOL)arg1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (unsigned int)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)dealloc;
- (void)_defaultMediaLibraryDidChangeNotification:(id)arg1;

@end