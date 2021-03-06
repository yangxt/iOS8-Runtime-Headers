/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSArray, NSString, NSObject<OS_dispatch_queue>, PLSearchIndexQuery, NSMutableArray, <PUSuggestedSearchDelegate>;

@interface PUSuggestedSearch : NSObject <PUSearchResult> {
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_uuids;
    NSMutableArray *_uncommittedUUIDs;
    NSString *_displaySubtitle;
    BOOL _hasPendingChanges;
    BOOL _isFinished;
    PLSearchIndexQuery *_query;
    unsigned int _taskId;
    NSString *_displayTitle;
    id _albumUUID;
    NSString *_searchString;
    <PUSuggestedSearchDelegate> *_delegate;
    unsigned int __approximateCount;
}

@property(copy) NSString * displayTitle;
@property(copy,readonly) NSString * displaySubtitle;
@property(readonly) NSArray * uuids;
@property(retain) id albumUUID;
@property(copy) NSString * searchString;
@property(readonly) BOOL isFinished;
@property <PUSuggestedSearchDelegate> * delegate;
@property(readonly) BOOL isEmpty;
@property(setter=_setApproximateCount:) unsigned int _approximateCount;


- (id)uuids;
- (id)albumUUID;
- (BOOL)isFinished;
- (void).cxx_destruct;
- (id)searchString;
- (id)displayTitle;
- (BOOL)isEmpty;
- (id)delegate;
- (void)cancel;
- (void)restart;
- (void)_setSearchString:(id)arg1;
- (void)_setDisplayTitle:(id)arg1;
- (void)executeSearch;
- (void)_inqAddAssetUUIDsFromFetchRequest:(id)arg1;
- (id)initWithDisplayTitle:(id)arg1;
- (BOOL)_inqIsCancelledWithTaskId:(unsigned int)arg1;
- (unsigned int)_inqTaskId;
- (void)_inqRestart;
- (id)initWithDisplayTitle:(id)arg1 uuids:(id)arg2;
- (BOOL)hasPendingChanges;
- (unsigned int)_approximateCount;
- (void)_setAlbumUUID:(id)arg1;
- (id)displaySubtitle;
- (void)_mergePendingChanges;
- (void)_setApproximateCount:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (id)init;

@end
