/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class CKQueryCursor, CKQuery, NSArray, CKRecordZoneID;

@interface CKQueryOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    BOOL _shouldFetchAssetContent;
    CKQuery *_query;
    CKRecordZoneID *_zoneID;
    CKQueryCursor *_cursor;
    unsigned int _resultsLimit;
    NSArray *_desiredKeys;
}

@property(retain) CKQuery * query;
@property(retain) CKRecordZoneID * zoneID;
@property(retain) CKQueryCursor * cursor;
@property unsigned int resultsLimit;
@property(retain) NSArray * desiredKeys;
@property BOOL shouldFetchAssetContent;

+ (BOOL)supportsSecureCoding;

- (void)setZoneID:(id)arg1;
- (BOOL)shouldFetchAssetContent;
- (unsigned int)resultsLimit;
- (void)setShouldFetchAssetContent:(BOOL)arg1;
- (id)desiredKeys;
- (void)setResultsLimit:(unsigned int)arg1;
- (void)setDesiredKeys:(id)arg1;
- (id)zoneID;
- (void).cxx_destruct;
- (void)setCursor:(id)arg1;
- (id)cursor;
- (void)setQuery:(id)arg1;
- (id)query;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
