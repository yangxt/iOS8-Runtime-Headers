/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSMutableOrderedSet, NSMutableSet, NSOrderedSet, NSObject<OS_dispatch_queue>, <PUSearchResultDelegate>;

@interface PUSearchResultDataSource : NSObject <PLAssetContainerList> {
    NSObject<OS_dispatch_queue> *_queue;
    unsigned int _taskId;
    NSMutableSet *_unfilteredContainerUUIDs;
    NSOrderedSet *_uncommittedFilteredContainers;
    NSOrderedSet *_uncommittedUnfilteredContainers;
    NSMutableOrderedSet *_uncommittedContainers;
    NSOrderedSet *_filteredContainers;
    NSOrderedSet *_unfilteredContainers;
    NSMutableOrderedSet *_containers;
    BOOL _hasPendingChanges;
    BOOL _finished;
    <PUSearchResultDelegate> *_delegate;
}

@property <PUSearchResultDelegate> * delegate;
@property(getter=isFinished,readonly) BOOL finished;
@property(readonly) unsigned int containersCount;


- (unsigned int)containersCount;
- (id)containersRelationshipName;
- (BOOL)canEditContainers;
- (id)containers;
- (id)photoLibrary;
- (BOOL)isFinished;
- (id)managedObjectContext;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)delegate;
- (void)setAssetContainerFiltered:(BOOL)arg1 atIndex:(unsigned int)arg2;
- (BOOL)isAssetContainerFilteredAtIndex:(unsigned int)arg1;
- (BOOL)hasFilterForAssetContainerAtIndex:(unsigned int)arg1;
- (BOOL)_inqIsAssetContainerFilteredAtIndex:(unsigned int)arg1;
- (void)_inqClearPendingChanges;
- (BOOL)_isCancelledWithTaskId:(unsigned int)arg1;
- (void)updateAssetUUIDs:(id)arg1 completion:(id)arg2;
- (BOOL)_inqIsCancelledWithTaskId:(unsigned int)arg1;
- (void)mergePendingChanges;
- (void)setDelegate:(id)arg1;
- (id)init;

@end
