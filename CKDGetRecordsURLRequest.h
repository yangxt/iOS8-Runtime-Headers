/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSSet, NSDictionary, NSMutableDictionary;

@interface CKDGetRecordsURLRequest : CKDURLRequest  {
    NSSet *_assetFieldNamesToPublishURLs;
    unsigned int _requestedTTL;
    unsigned int _URLOptions;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _recordFetchedBlock;

    NSArray *_recordIDs;
    NSDictionary *_recordIDsToETags;
    NSDictionary *_recordIDsToVersionETags;
    unsigned int _recordCount;
    NSMutableDictionary *_recordIDByRequestID;
    NSSet *_desiredKeys;
}

@property(retain) NSSet * assetFieldNamesToPublishURLs;
@property unsigned int requestedTTL;
@property unsigned int URLOptions;
@property(copy) id recordFetchedBlock;
@property(retain) NSArray * recordIDs;
@property(retain) NSDictionary * recordIDsToETags;
@property(retain) NSDictionary * recordIDsToVersionETags;
@property unsigned int recordCount;
@property(retain) NSMutableDictionary * recordIDByRequestID;
@property(retain) NSSet * desiredKeys;


- (int)operationType;
- (void)setRecordIDByRequestID:(id)arg1;
- (void)setRecordIDsToETags:(id)arg1;
- (id)initWithRecordIDs:(id)arg1 recordIDsToEtags:(id)arg2 recordIDsToVersionETags:(id)arg3 desiredKeys:(id)arg4;
- (void)setRecordCount:(unsigned int)arg1;
- (unsigned int)recordCount;
- (id)recordIDByRequestID;
- (id)assetFieldNamesToPublishURLs;
- (id)recordIDsToETags;
- (id)recordIDsToVersionETags;
- (void)setURLOptions:(unsigned int)arg1;
- (void)setAssetFieldNamesToPublishURLs:(id)arg1;
- (unsigned int)URLOptions;
- (unsigned int)requestedTTL;
- (id)recordIDs;
- (BOOL)allowsAnonymousAccount;
- (id)requestOperationClasses;
- (int)partitionType;
- (int)serverType;
- (void)requestDidParseNodeFailure:(id)arg1;
- (void)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperations;
- (id)recordFetchedBlock;
- (id)desiredKeys;
- (void)setRecordIDs:(id)arg1;
- (void)setRecordFetchedBlock:(id)arg1;
- (void)setRequestedTTL:(unsigned int)arg1;
- (void)setDesiredKeys:(id)arg1;
- (void)setRecordIDsToVersionETags:(id)arg1;
- (void).cxx_destruct;

@end