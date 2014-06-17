/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSError, NSMutableDictionary, NSArray;

@interface CKFetchRecordZonesOperation : CKDatabaseOperation  {
    BOOL _isFetchAllRecordZonesOperation;
    BOOL _ignorePCSFailures;
    NSArray *_recordZoneIDs;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _fetchRecordZonesCompletionBlock;

    NSArray *_recordZones;
    NSMutableDictionary *_recordZonesByZoneID;
    NSMutableDictionary *_recordZoneErrors;
    NSError *_fetchAllRecordZonesError;
}

@property(copy) NSArray * recordZoneIDs;
@property(copy) id fetchRecordZonesCompletionBlock;
@property(retain) NSArray * recordZones;
@property(retain) NSMutableDictionary * recordZonesByZoneID;
@property(retain) NSMutableDictionary * recordZoneErrors;
@property(retain) NSError * fetchAllRecordZonesError;
@property BOOL isFetchAllRecordZonesOperation;
@property BOOL ignorePCSFailures;

+ (id)fetchAllRecordZonesOperation;

- (id)recordZones;
- (BOOL)ignorePCSFailures;
- (BOOL)isFetchAllRecordZonesOperation;
- (id)initWithRecordZoneIDs:(id)arg1;
- (id)recordZoneIDs;
- (void)setIgnorePCSFailures:(BOOL)arg1;
- (void)setIsFetchAllRecordZonesOperation:(BOOL)arg1;
- (void)setRecordZonesByZoneID:(id)arg1;
- (id)recordZonesByZoneID;
- (void)setRecordZoneIDs:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (void)setRecordZones:(id)arg1;
- (void)setFetchRecordZonesCompletionBlock:(id)arg1;
- (id)fetchAllRecordZonesError;
- (void)setFetchAllRecordZonesError:(id)arg1;
- (id)fetchRecordZonesCompletionBlock;
- (void)setRecordZoneErrors:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (BOOL)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)recordZoneErrors;
- (void)fillOutOperationInfo:(id)arg1;

@end