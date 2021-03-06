/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3Track : ML3Entity  {
}

+ (id)_albumArtistProtocolItemWithTrackProperties:(id)arg1 inLibrary:(id)arg2;
+ (id)_seriesProtocolItemWithTrackProperties:(id)arg1 inLibrary:(id)arg2;
+ (id)_playbackInfoProtocolItemWithTrackProperties:(id)arg1 inLibrary:(id)arg2;
+ (id)_genreProtocolItemWithTrackProperties:(id)arg1 inLibrary:(id)arg2;
+ (id)_composerProtocolItemWithTrackProperties:(id)arg1 inLibrary:(id)arg2;
+ (id)_artistProtocolItemWithTrackProperties:(id)arg1 inLibrary:(id)arg2;
+ (id)_albumProtocolItemWithTrackProperties:(id)arg1 inLibrary:(id)arg2;
+ (id)_podcastProtocolItemWithProperties:(id)arg1 inLibrary:(id)arg2;
+ (id)_movieProtocolItemWithProperties:(id)arg1 inLibrary:(id)arg2;
+ (id)_tvShowProtocolItemWithProperties:(id)arg1 inLibrary:(id)arg2;
+ (id)_songProtocolItemWithProperties:(id)arg1 inLibrary:(id)arg2;
+ (id)protocolItemWithProperties:(id)arg1 inLibrary:(id)arg2;
+ (id)importChaptersByParsingAsset:(id)arg1;
+ (id)flattenedChapterDataFromDAAPInfoDictionary:(id)arg1 trackPersistentID:(long long)arg2;
+ (id)flattenedChapterDataFromSyncInfoDictionaries:(id)arg1 trackPersistentID:(long long)arg2;
+ (id)flattenedChapterDataWithImportChapters:(id)arg1 library:(id)arg2 trackPersistentID:(long long)arg3;
+ (id)_normalizedImportChapters:(id)arg1 trackPersistentID:(long long)arg2;
+ (id)containerQueryWithContainer:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3;
+ (id)containerQueryWithContainer:(id)arg1 predicate:(id)arg2;
+ (id)orderingTermsForITTGTrackOrder:(unsigned long)arg1 descending:(BOOL)arg2;
+ (void)updateAllBookmarkableStoreBookmarkMetadataIdentifiersOnConnection:(id)arg1;
+ (BOOL)trackValueAreInTheCloud:(id)arg1;
+ (BOOL)trackWithPersistentID:(long long)arg1 visibleInLibrary:(id)arg2;
+ (BOOL)trackWithPersistentID:(long long)arg1 existsInLibrary:(id)arg2;
+ (id)TVShowEpisodesDefaultOrderingTerms;
+ (id)podcastsEpisodesDefaultOrderingTerms;
+ (id)composersDefaultOrderingTerms;
+ (id)albumAndArtistDefaultOrderingTerms;
+ (id)albumAllArtistsDefaultOrderingTerms;
+ (id)artistsDefaultOrderingTerms;
+ (id)artistAllAlbumsDefaultOrderingTerms;
+ (id)podcastsDefaultOrderingTerms;
+ (id)genresDefaultOrderingTerms;
+ (id)albumsDefaultOrderingTerms;
+ (BOOL)clearLocationFromLibrary:(id)arg1 persistentIDs:(id)arg2;
+ (BOOL)unlinkRedownloadableAssetsFromLibrary:(id)arg1 persistentIDs:(id)arg2 deletedFileSize:(long long*)arg3;
+ (void)populateSortOrdersOfPropertyValues:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3;
+ (void)enumeratePathsToDeleteFromLibrary:(id)arg1 persistentIDs:(id)arg2 usingBlock:(id)arg3;
+ (BOOL)registerBookmarkMetadataIdentifierFunctionOnConnection:(id)arg1;
+ (BOOL)unlinkRedownloadableAssetsFromLibrary:(id)arg1 persistentIDs:(id)arg2;
+ (id)containerQueryWithContainer:(id)arg1;
+ (id)sectionPropertyForProperty:(id)arg1;
+ (id)defaultOrderingTerms;
+ (id)subselectPropertyForProperty:(id)arg1;
+ (id)subselectStatementForProperty:(id)arg1;
+ (id)predisambiguatedProperties;
+ (BOOL)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long*)arg3 count:(unsigned int)arg4;
+ (id)extraTablesToDelete;
+ (id)collectionClassesToUpdateBeforeDelete;
+ (BOOL)libraryDynamicChangeForProperty:(id)arg1;
+ (BOOL)libraryContentsChangeForProperty:(id)arg1;
+ (id)predicateByOptimizingComparisonPredicate:(id)arg1;
+ (id)allProperties;
+ (id)extraTablesToInsert;
+ (id)foreignColumnForProperty:(id)arg1;
+ (id)foreignDatabaseTableForProperty:(id)arg1;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)unsettableProperties;
+ (BOOL)trackWithPersistentID:(long long)arg1 existsInLibraryWithConnection:(id)arg2;
+ (id)persistentIDColumnForTable:(id)arg1;
+ (int)revisionTrackingCode;
+ (id)databaseTable;
+ (void)initialize;
+ (id)propertyForMPMediaEntityProperty:(id)arg1;

- (id)protocolItem;
- (id)multiverseIdentifier;
- (BOOL)populateArtworkCacheWithArtworkData:(id)arg1;
- (void)populateLocationPropertiesWithPath:(id)arg1;
- (void)populateChapterDataWithImportChapters:(id)arg1;
- (void)updateStoreBookmarkMetadataIdentifier;
- (id)computeSHA256OfAudioPacketDataInLocalAsset;
- (void)updateCollectionCloudStatus;
- (id)artworkTokenAtPlaybackTime:(double)arg1;
- (id)rawIntegrity;
- (BOOL)updateIntegrity;
- (id)absoluteFilePath;
- (id)chapterTOC;
- (id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3;
- (void)createVideoSnapshotAtTime:(double)arg1;
- (BOOL)needsVideoSnapshot;
- (id)_screenshotArtworkDataStoredAsItemArtwork;
- (void)_createVideoSnapshotAtTime:(double)arg1 withCompletionBlock:(id)arg2;

@end
