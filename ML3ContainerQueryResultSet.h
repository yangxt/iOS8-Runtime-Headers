/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class ML3QueryResultSet_BackingStore;

@interface ML3ContainerQueryResultSet : ML3QueryResultSet  {
    BOOL _needsSorting;
    BOOL _needsReversing;
    ML3QueryResultSet_BackingStore *_sortedBackingStore;
    long long _containerPID;
    unsigned int _entityLimit;
}


- (id)sortedBackingStoreForDisplayOrdering;
- (void)_loadCurrentFullResults;
- (BOOL)_updateToLibraryCurrentRevision;
- (unsigned int)entityLimit;
- (id)initWithQuery:(id)arg1;
- (long long)persistentIDAtIndex:(unsigned int)arg1;
- (void)enumerateSectionsUsingBlock:(id)arg1;
- (void)enumeratePersistentIDsUsingBlock:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end