/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSMutableSet, NSMutableArray, PLCLoudPhotoLibraryBatchContainer;

@interface PLCloudPhotoLibraryBatchManager : NSObject  {
    NSMutableArray *_batches;
    PLCLoudPhotoLibraryBatchContainer *_currentBatch;
    BOOL _wasDrained;
    NSMutableSet *_masterHistory;
}


- (id)drainBatches;
- (int)currentBatchCount;
- (BOOL)canAddMasterAssetPairToCurrentBatch;
- (void)reset;
- (void)addRecord:(id)arg1;
- (void)dealloc;
- (id)init;

@end