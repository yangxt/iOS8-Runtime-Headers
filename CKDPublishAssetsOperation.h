/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableDictionary, NSArray, NSDictionary, NSOperation;

@interface CKDPublishAssetsOperation : CKDDatabaseOperation  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _assetPublishedBlock;

    NSArray *_recordIDs;
    NSDictionary *_fileNamesByAssetFieldNames;
    unsigned int _requestedTTL;
    unsigned int _URLOptions;
    NSOperation *_fetchRecordsOperation;
    NSMutableDictionary *_fetchedRecordsByID;
}

@property(copy) id assetPublishedBlock;
@property(retain) NSArray * recordIDs;
@property(retain) NSDictionary * fileNamesByAssetFieldNames;
@property unsigned int requestedTTL;
@property unsigned int URLOptions;
@property(retain) NSOperation * fetchRecordsOperation;
@property(retain) NSMutableDictionary * fetchedRecordsByID;


- (void)setFetchedRecordsByID:(id)arg1;
- (id)fetchRecordsOperation;
- (void)setFetchRecordsOperation:(id)arg1;
- (void)setURLOptions:(unsigned int)arg1;
- (void)_dispatchAssetURLsForRecord:(id)arg1 recordID:(id)arg2 pcs:(struct _OpaquePCSShareProtection { }*)arg3 error:(id)arg4;
- (id)fetchedRecordsByID;
- (id)_expandTemplateURL:(id)arg1 fieldValues:(id)arg2;
- (id)assetPublishedBlock;
- (void)_fetchPCSForRecords;
- (void)_fetchRecords;
- (unsigned int)URLOptions;
- (unsigned int)requestedTTL;
- (id)fileNamesByAssetFieldNames;
- (id)recordIDs;
- (void)setRecordIDs:(id)arg1;
- (BOOL)makeStateTransition;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)setAssetPublishedBlock:(id)arg1;
- (void)setRequestedTTL:(unsigned int)arg1;
- (void)setFileNamesByAssetFieldNames:(id)arg1;
- (void).cxx_destruct;
- (void)main;
- (void)cancel;
- (void)finishWithError:(id)arg1;

@end
