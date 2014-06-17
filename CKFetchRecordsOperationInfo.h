/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSDictionary, NSSet, NSArray;

@interface CKFetchRecordsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    BOOL _isFetchCurrentUserOperation;
    BOOL _shouldFetchAssetContent;
    NSArray *_recordIDs;
    NSArray *_desiredKeys;
    NSDictionary *_recordIDsToVersionETags;
    NSDictionary *_desiredPackageFileIndices;
    NSDictionary *_signaturesOfAssetsByRecordIDAndKey;
    NSSet *_assetFieldNamesToPublishURLs;
    unsigned int _requestedTTL;
    unsigned int _URLOptions;
}

@property(retain) NSArray * recordIDs;
@property BOOL isFetchCurrentUserOperation;
@property(retain) NSArray * desiredKeys;
@property(retain) NSDictionary * recordIDsToVersionETags;
@property(retain) NSDictionary * desiredPackageFileIndices;
@property BOOL shouldFetchAssetContent;
@property(retain) NSDictionary * signaturesOfAssetsByRecordIDAndKey;
@property(retain) NSSet * assetFieldNamesToPublishURLs;
@property unsigned int requestedTTL;
@property unsigned int URLOptions;

+ (BOOL)supportsSecureCoding;

- (void)setSignaturesOfAssetsByRecordIDAndKey:(id)arg1;
- (id)signaturesOfAssetsByRecordIDAndKey;
- (id)desiredPackageFileIndices;
- (id)assetFieldNamesToPublishURLs;
- (id)recordIDsToVersionETags;
- (void)setURLOptions:(unsigned int)arg1;
- (void)setAssetFieldNamesToPublishURLs:(id)arg1;
- (unsigned int)URLOptions;
- (unsigned int)requestedTTL;
- (id)recordIDs;
- (BOOL)shouldFetchAssetContent;
- (void)setShouldFetchAssetContent:(BOOL)arg1;
- (id)desiredKeys;
- (void)setRecordIDs:(id)arg1;
- (BOOL)isFetchCurrentUserOperation;
- (void)setDesiredPackageFileIndices:(id)arg1;
- (void)setRequestedTTL:(unsigned int)arg1;
- (void)setDesiredKeys:(id)arg1;
- (void)setRecordIDsToVersionETags:(id)arg1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setIsFetchCurrentUserOperation:(BOOL)arg1;

@end