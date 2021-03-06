/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSMutableSet, PLMomentAnalyzer, NSObject<OS_dispatch_queue>, <PLMomentGenerationDataManagement>, NSMutableDictionary;

@interface PLMomentGeneration : NSObject  {
    NSMutableSet *_pendingInsertsAndUpdates;
    NSMutableDictionary *_pendingDeletes;
    NSObject<OS_dispatch_queue> *_pendingIsolation;
    PLMomentAnalyzer *_pairedAnalyzer;
    <PLMomentGenerationDataManagement> *_momentGenerationDataManager;
    PLMomentAnalyzer *_analyzer;
}

@property <PLMomentGenerationDataManagement> * momentGenerationDataManager;
@property PLMomentAnalyzer * analyzer;

+ (id)generateSplitCustomMomentUUID;
+ (id)generateMergeCustomMomentUUID;
+ (void)_updateMoment:(id)arg1 fromCluster:(id)arg2 inManager:(id)arg3;
+ (BOOL)_rebuildAllMomentListsWithDataManager:(id)arg1 error:(id*)arg2;
+ (id)_insertYearMomentListsForMoments:(id)arg1 earliestDate:(id)arg2 latestDate:(id)arg3 inMomentDataManager:(id)arg4;
+ (id)_insertMegaMomentListsForMoments:(id)arg1 inMomentDataManager:(id)arg2;
+ (id)_insertMomentsForAssets:(id)arg1 inManager:(id)arg2;

- (void)clearUserInfluencedMoments;
- (id)allMomentsMetadataWriteToFile:(id)arg1;
- (id)allAssetMetadataWriteToFile:(id)arg1;
- (void)rebuildAllMomentLists:(id)arg1;
- (void)rebuildAllMomentsIncremental:(BOOL)arg1 completionHandler:(id)arg2;
- (id)_detailsForMoment:(id)arg1;
- (id)_nameForMomentGenerationType:(short)arg1;
- (BOOL)_writeDetails:(id)arg1 toFilepath:(id)arg2 withDefaultFilename:(id)arg3;
- (id)_detailsForAsset:(id)arg1;
- (BOOL)_rebuildAllMomentsInManager:(id)arg1 shouldAnalyze:(BOOL)arg2 error:(id*)arg3;
- (void)generateWithAssetInsertsAndUpdates:(id)arg1 andDeletes:(id)arg2 completionHandler:(id)arg3;
- (BOOL)_deleteAllMomentDataInManager:(id)arg1 incremental:(BOOL)arg2 error:(id*)arg3;
- (id)_insertYearMomentListsForMoments:(id)arg1 earliestDate:(id)arg2 latestDate:(id)arg3 inMomentDataManager:(id)arg4;
- (id)_insertMegaMomentListsForMoments:(id)arg1 inMomentDataManager:(id)arg2;
- (id)_insertMomentsForAssets:(id)arg1 inManager:(id)arg2;
- (id)affectedMomentsForAssetDateCreated:(id)arg1 inManager:(id)arg2;
- (BOOL)_isAsset:(id)arg1 identicalToAssetForMoments:(id)arg2;
- (id)_newPublicGlobalUUIDsToAssetsMappingWithAssets:(id)arg1;
- (id)momentGenerationDataManager;
- (void)setAnalyzer:(id)arg1;
- (void)setMomentGenerationDataManager:(id)arg1;
- (BOOL)rebuildAllMomentsWithManager:(id)arg1 error:(id*)arg2;
- (void)generateWithIncrementalDataCompletionHandler:(id)arg1;
- (void)saveChangesForAssetInsertsAndUpdates:(id)arg1 andDeletes:(id)arg2;
- (id)analyzer;
- (void)dealloc;
- (id)init;

@end
