/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class CKServerChangeToken, NSArray, CKRecordZoneID;

@interface CKFetchRecordChangesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    BOOL _shouldFetchAssetContents;
    CKRecordZoneID *_recordZoneID;
    CKServerChangeToken *_previousServerChangeToken;
    NSArray *_desiredKeys;
    unsigned int _resultsLimit;
}

@property(retain) CKRecordZoneID * recordZoneID;
@property(retain) CKServerChangeToken * previousServerChangeToken;
@property(retain) NSArray * desiredKeys;
@property BOOL shouldFetchAssetContents;
@property unsigned int resultsLimit;

+ (BOOL)supportsSecureCoding;

- (BOOL)shouldFetchAssetContents;
- (id)recordZoneID;
- (void)setRecordZoneID:(id)arg1;
- (void)setPreviousServerChangeToken:(id)arg1;
- (id)previousServerChangeToken;
- (unsigned int)resultsLimit;
- (id)desiredKeys;
- (void)setResultsLimit:(unsigned int)arg1;
- (void)setDesiredKeys:(id)arg1;
- (void)setShouldFetchAssetContents:(BOOL)arg1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end