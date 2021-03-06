/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLAggregateAlbumList, PLAssetContainerListChangeNotification;

@interface PLAggregateAlbumListChangeNotification : PLAssetContainerListChangeNotification  {
    PLAggregateAlbumList *_albumList;
    PLAssetContainerListChangeNotification *_note;
    unsigned int _indexOffet;
}

+ (id)notificationForAggregateAlbumList:(id)arg1 fromAlbumListChangeNotification:(id)arg2 indexOffset:(unsigned int)arg3;

- (id)initWithAggregateAlbumList:(id)arg1 fromAlbumListChangeNotification:(id)arg2 indexOffset:(unsigned int)arg3;
- (unsigned int)snapshotIndexForContainedObject:(id)arg1;
- (id)changedObjects;
- (id)changedIndexesRelativeToSnapshot;
- (BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2;
- (id)changedIndexes;
- (void)enumerateMovesWithBlock:(id)arg1;
- (id)insertedIndexes;
- (id)deletedIndexes;
- (BOOL)shouldReload;
- (id)deletedObjects;
- (id)insertedObjects;
- (struct NSObject { Class x1; }*)albumList;
- (id)object;
- (void)dealloc;

@end
