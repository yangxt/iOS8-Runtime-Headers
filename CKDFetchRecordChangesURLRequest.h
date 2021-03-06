/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSArray, NSData, NSMutableArray, CKRecordZoneID;

@interface CKDFetchRecordChangesURLRequest : CKDURLRequest  {
    NSMutableArray *_resultChangedRecords;
    NSMutableArray *_resultDeletedRecordIdentifiers;
    unsigned int _resultsLimit;
    NSData *_resultServerChangeTokenData;
    NSData *_resultClientChangeTokenData;
    int _status;
    CKRecordZoneID *_recordZoneID;
    NSData *_serverChangeTokenData;
    NSArray *_requestedFields;
}

@property unsigned int resultsLimit;
@property(retain) NSData * resultServerChangeTokenData;
@property(retain) NSData * resultClientChangeTokenData;
@property(readonly) NSArray * resultChangedRecords;
@property(readonly) NSArray * resultDeletedRecordIdentifiers;
@property int status;
@property(retain) CKRecordZoneID * recordZoneID;
@property(retain) NSData * serverChangeTokenData;
@property(retain) NSArray * requestedFields;


- (int)operationType;
- (id)resultClientChangeTokenData;
- (id)resultDeletedRecordIdentifiers;
- (id)resultChangedRecords;
- (id)initWithRecordZoneID:(id)arg1 serverChangeTokenData:(id)arg2 requestedFields:(id)arg3;
- (void)setResultClientChangeTokenData:(id)arg1;
- (id)recordZoneID;
- (void)setRecordZoneID:(id)arg1;
- (void)setServerChangeTokenData:(id)arg1;
- (void)setResultServerChangeTokenData:(id)arg1;
- (id)serverChangeTokenData;
- (id)resultServerChangeTokenData;
- (id)requestOperationClasses;
- (int)partitionType;
- (int)serverType;
- (void)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperations;
- (unsigned int)resultsLimit;
- (id)requestedFields;
- (void)setRequestedFields:(id)arg1;
- (void)setResultsLimit:(unsigned int)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (void).cxx_destruct;

@end
