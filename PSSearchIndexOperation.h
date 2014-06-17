/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class PSSearchEntry, <PSSearchIndexOperationDelegate>;

@interface PSSearchIndexOperation : NSOperation  {
    PSSearchEntry *_searchEntry;
    <PSSearchIndexOperationDelegate> *_delegate;
}

@property(readonly) PSSearchEntry * searchEntry;
@property <PSSearchIndexOperationDelegate> * delegate;

+ (id)_loadSearchEntriesFromPlistForEntry:(id)arg1 bundle:(id)arg2;
+ (id)_loadThirdPartySearchEntriesForEntry:(id)arg1 bundle:(id)arg2;
+ (id)_bundleForSearchEntry:(id)arg1 thirdPartyApp:(BOOL*)arg2 checkManifest:(BOOL*)arg3;

- (void)_finishedIndexingWithEntries:(id)arg1 cancelled:(BOOL)arg2;
- (id)searchEntry;
- (id)initWithSearchEntry:(id)arg1 delegate:(id)arg2;
- (void)_cancel;
- (void)main;
- (id)delegate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end