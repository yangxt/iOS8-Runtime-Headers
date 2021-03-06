/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CKQueryCursor, CKQuery, NSSet, CKRecordZoneID;

@interface CKDQueryOperation : CKDDatabaseOperation  {
    BOOL _shouldFetchAssetContent;
    CKQuery *_query;
    CKQueryCursor *_cursor;
    unsigned int _resultsLimit;
    CKQueryCursor *_resultsCursor;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _recordFetchedBlock;

    NSSet *_desiredKeySet;
    CKRecordZoneID *_zoneID;
}

@property(readonly) CKQuery * query;
@property(readonly) CKQueryCursor * cursor;
@property(readonly) unsigned int resultsLimit;
@property(retain) CKQueryCursor * resultsCursor;
@property(copy) id recordFetchedBlock;
@property(retain) NSSet * desiredKeySet;
@property BOOL shouldFetchAssetContent;
@property(retain) CKRecordZoneID * zoneID;


- (void)setZoneID:(id)arg1;
- (void)setDesiredKeySet:(id)arg1;
- (void)_handleQueryRequestFinished:(id)arg1;
- (id)desiredKeySet;
- (void)setResultsCursor:(id)arg1;
- (id)resultsCursor;
- (BOOL)shouldFetchAssetContent;
- (unsigned int)resultsLimit;
- (id)recordFetchedBlock;
- (void)setShouldFetchAssetContent:(BOOL)arg1;
- (void)fillOutOperationResult:(id)arg1;
- (Class)operationResultClass;
- (void)setRecordFetchedBlock:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (id)zoneID;
- (void).cxx_destruct;
- (void)main;
- (id)cursor;
- (id)query;
- (void)finishWithError:(id)arg1;

@end
