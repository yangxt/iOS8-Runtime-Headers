/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSPredicate, NSArray;

@interface CRSearchQuery : NSObject <NSSecureCoding> {
    NSPredicate *_predicate;
    NSArray *_domains;
    unsigned int _implicitGroupThreshold;
    unsigned int _options;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _weightDecayer;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _comparator;

}

@property(retain) NSPredicate * predicate;
@property(copy) NSArray * domains;
@property unsigned int implicitGroupThreshold;
@property unsigned int options;
@property(copy) id weightDecayer;
@property(copy) id comparator;

+ (id)rankedFrecencyComparatorWithPreferredSources:(id)arg1;
+ (id)searchQueryForSearchTerm:(id)arg1 preferredKinds:(id)arg2 sendingAddress:(id)arg3 recentsDomain:(id)arg4;
+ (BOOL)supportsSecureCoding;
+ (id)frecencyComparatorForSearch:(id)arg1 preferredKinds:(id)arg2 sendingAddress:(id)arg3 queryOptions:(unsigned int)arg4;
+ (id)frecencyComparator;

- (id)domains;
- (void)setWeightDecayer:(id)arg1;
- (id)weightDecayer;
- (unsigned int)implicitGroupThreshold;
- (id)predicate;
- (void)setOptions:(unsigned int)arg1;
- (void)setPredicate:(id)arg1;
- (void)setImplicitGroupThreshold:(unsigned int)arg1;
- (void)setComparator:(id)arg1;
- (void)setDomains:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)options;
- (void)dealloc;
- (id)comparator;

@end