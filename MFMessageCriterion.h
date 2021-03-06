/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSIndexSet, NSString, NSArray;

@interface MFMessageCriterion : NSObject  {
    NSString *_uniqueId;
    NSString *_criterionIdentifier;
    NSString *_expression;
    int _qualifier;
    NSArray *_criteria;
    int _dateUnitType;
    NSString *_name;
    unsigned int _allCriteriaMustBeSatisfied : 1;
    unsigned int _dateIsRelative : 1;
    unsigned int _includeRelatedMessages : 1;
    int _type;
    NSArray *_requiredHeaders;
    BOOL _useFlaggedForUnreadCount;
    BOOL _expressionIsSanitized;
    NSIndexSet *_libraryIdentifiers;
}

@property(retain) NSIndexSet * libraryIdentifiers;
@property BOOL useFlaggedForUnreadCount;
@property BOOL includeRelatedMessages;
@property BOOL expressionIsSanitized;

+ (id)orCompoundCriterionWithCriteria:(id)arg1;
+ (id)todayMessageCriterion;
+ (id)hasAttachmentsCriterion;
+ (id)includesMeCriterion;
+ (id)unreadMessageCriterion;
+ (id)flaggedMessageCriterion;
+ (id)ThreadNotifyMessageCriterion;
+ (id)VIPSenderMessageCriterion;
+ (void)_updateAddressComments:(id)arg1;
+ (id)defaultsArrayFromCriteria:(id)arg1;
+ (id)criteriaFromDefaultsArray:(id)arg1;
+ (id)stringForCriterionType:(int)arg1;
+ (int)criterionTypeForString:(id)arg1;
+ (id)criteriaFromDefaultsArray:(id)arg1 removingRecognizedKeys:(BOOL)arg2;
+ (id)andCompoundCriterionWithCriteria:(id)arg1;
+ (id)messageIsServerSearchResultCriterion:(BOOL)arg1;
+ (id)messageIsDeletedCriterion:(BOOL)arg1;
+ (id)criterionForMailboxURL:(id)arg1;

- (void)setExpression:(id)arg1;
- (void)setLibraryIdentifiers:(id)arg1;
- (id)libraryIdentifiers;
- (BOOL)hasNonFullTextSearchableCriterion;
- (id)extractedUnreadCriterion;
- (id)extractedDateCriterion;
- (id)SQLExpressionWithTables:(unsigned int*)arg1 baseTable:(unsigned int)arg2 protectedDataAvailable:(BOOL)arg3 contentIndex:(id)arg4 mailboxIDs:(id)arg5;
- (id)criterionForSQL;
- (id)criteriaSatisfyingPredicate:(int (*)())arg1;
- (id)criterionByApplyingTransform:(id)arg1;
- (BOOL)includesCriterionSatisfyingPredicate:(int (*)())arg1 restrictive:(BOOL)arg2;
- (void)_addCriteriaSatisfyingPredicate:(int (*)())arg1 toCollector:(id)arg2;
- (unsigned int)bestBaseTable;
- (id)SQLExpressionWithContext:(struct { id x1; id x2; unsigned int x3; unsigned int x4; BOOL x5; BOOL x6; BOOL x7; }*)arg1 depth:(unsigned int)arg2;
- (BOOL)hasLibraryIDCriterion;
- (id)_collapsedMessageNumberCriterion:(id)arg1 allMustBeSatisfied:(BOOL)arg2 collapsedIndexes:(id*)arg3;
- (id)_resolveWithIndex:(id)arg1 mailboxIDs:(id)arg2;
- (id)_evaluateFTSCriterionWithIndex:(id)arg1 mailboxIDs:(id)arg2;
- (BOOL)isFullTextSearchableCriterion;
- (id)_criterionForSQL;
- (id)fixOnce;
- (void)setExpressionIsSanitized:(BOOL)arg1;
- (BOOL)expressionIsSanitized;
- (void)setIncludeRelatedMessages:(BOOL)arg1;
- (BOOL)includeRelatedMessages;
- (BOOL)useFlaggedForUnreadCount;
- (id)emailAddressesForGroupCriterion;
- (BOOL)dateIsRelative;
- (int)dateUnits;
- (BOOL)_evaluateIsEncryptedCriterion:(id)arg1;
- (BOOL)_evaluateIsDigitallySignedCriterion:(id)arg1;
- (void)setDateIsRelative:(BOOL)arg1;
- (void)setDateUnits:(int)arg1;
- (void)setUseFlaggedForUnreadCount:(BOOL)arg1;
- (id)simplifyOnce;
- (id)simplifiedCriterion;
- (BOOL)_evaluateAttachmentCriterion:(id)arg1;
- (BOOL)_evaluatePriorityIsLowCriterion:(id)arg1;
- (BOOL)_evaluatePriorityIsHighCriterion:(id)arg1;
- (BOOL)_evaluatePriorityIsNormalCriterion:(id)arg1;
- (BOOL)_evaluateFullNameCriterion:(id)arg1;
- (BOOL)_evaluateAddressHistoryCriterion:(id)arg1;
- (BOOL)_evaluateDateCriterion:(id)arg1;
- (BOOL)_evaluateAccountCriterion:(id)arg1;
- (BOOL)_evaluateSenderHeaderCriterion:(id)arg1;
- (BOOL)_evaluateHeaderCriterion:(id)arg1;
- (BOOL)_evaluateAddressBookCriterion:(id)arg1;
- (BOOL)_evaluateFlagCriterion:(id)arg1;
- (BOOL)_evaluateCompoundCriterion:(id)arg1;
- (id)_headersRequiredForEvaluation;
- (BOOL)doesMessageSatisfyCriterion:(id)arg1;
- (id)stringForMessageRuleQualifier:(int)arg1;
- (id)_qualifierString;
- (id)descriptionWithDepth:(unsigned int)arg1;
- (int)qualifier;
- (id)criterionIdentifier;
- (int)messageRuleQualifierForString:(id)arg1;
- (id)initWithCriterion:(id)arg1 expression:(id)arg2;
- (void)setQualifier:(int)arg1;
- (void)setCriterionType:(int)arg1;
- (id)initWithDictionary:(id)arg1 andRemoveRecognizedKeysIfMutable:(BOOL)arg2;
- (void)setAllCriteriaMustBeSatisfied:(BOOL)arg1;
- (void)setCriterionIdentifier:(id)arg1;
- (id)initWithType:(int)arg1 qualifier:(int)arg2 expression:(id)arg3;
- (BOOL)allCriteriaMustBeSatisfied;
- (int)criterionType;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)setCriteria:(id)arg1;
- (id)criteria;
- (id)expression;

@end
