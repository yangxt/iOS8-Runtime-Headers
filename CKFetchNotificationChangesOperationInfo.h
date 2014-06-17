/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class CKServerChangeToken;

@interface CKFetchNotificationChangesOperationInfo : CKOperationInfo <NSSecureCoding> {
    CKServerChangeToken *_previousServerChangeToken;
    unsigned int _resultsLimit;
}

@property(retain) CKServerChangeToken * previousServerChangeToken;
@property unsigned int resultsLimit;

+ (BOOL)supportsSecureCoding;

- (void)setPreviousServerChangeToken:(id)arg1;
- (id)previousServerChangeToken;
- (unsigned int)resultsLimit;
- (void)setResultsLimit:(unsigned int)arg1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end