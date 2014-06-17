/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSArray, NSOperationQueue, NSDictionary, NSPredicate, <NSMetadataQueryDelegate>;

@interface NSMetadataQuery : NSObject  {
    unsigned int _flags;
    double _interval;
    id _private[11];
    void *_reserved;
}

@property <NSMetadataQueryDelegate> * delegate;
@property(copy) NSPredicate * predicate;
@property(copy) NSArray * sortDescriptors;
@property(copy) NSArray * valueListAttributes;
@property(copy) NSArray * groupingAttributes;
@property double notificationBatchingInterval;
@property(copy) NSArray * searchScopes;
@property(copy) NSArray * searchItems;
@property(retain) NSOperationQueue * operationQueue;
@property(getter=isStarted,readonly) BOOL started;
@property(getter=isGathering,readonly) BOOL gathering;
@property(getter=isStopped,readonly) BOOL stopped;
@property(readonly) unsigned int resultCount;
@property(copy,readonly) NSArray * results;
@property(copy,readonly) NSDictionary * valueLists;
@property(copy,readonly) NSArray * groupedResults;

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)willBeginPossibleCreationOfItemAtURL:(id)arg1;
+ (id)willBeginPossibleDeletionOfItemAtURL:(id)arg1;
+ (id)willBeginPossibleMoveOfItemAtURL:(id)arg1 toURL:(id)arg2;
+ (Class)_stitchingClass;
+ (void)didEndPossibleFileOperation:(id)arg1;

- (id)operationQueue;
- (id)predicate;
- (BOOL)isStarted;
- (id)sortDescriptors;
- (void)setSortDescriptors:(id)arg1;
- (id)results;
- (void)stopQuery;
- (BOOL)startQuery;
- (void)setPredicate:(id)arg1;
- (void)setSearchScopes:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)_update;
- (id)delegate;
- (void)dealloc;
- (void)finalize;
- (void)setDelegate:(id)arg1;
- (id)init;
- (id)groupedResults;
- (id)valueLists;
- (unsigned int)indexOfResult:(id)arg1;
- (void)_zapResultArrayIfIdenticalTo:(id)arg1;
- (void)enumerateResultsUsingBlock:(id)arg1;
- (id)resultAtIndex:(unsigned int)arg1;
- (BOOL)isStopped;
- (BOOL)isGathering;
- (id)_queryString;
- (void)_setExternalDocumentsBundleIdentifier:(id)arg1;
- (void)setSearchItemURLs:(id)arg1;
- (id)searchItemURLs;
- (id)searchScopes;
- (void)setNotificationBatchingInterval:(double)arg1;
- (double)notificationBatchingInterval;
- (id)_allAttributes;
- (void)setGroupingAttributes:(id)arg1;
- (void)setValueListAttributes:(id)arg1;
- (id)valueOfAttribute:(id)arg1 forResultAtIndex:(unsigned int)arg2;
- (void)_enableAutoUpdates;
- (void)enableUpdates;
- (void)disableUpdates;
- (void)enumerateResultsWithOptions:(unsigned int)arg1 usingBlock:(id)arg2;
- (unsigned int)resultCount;
- (void)_noteNote5:(id)arg1;
- (void)_noteNote4:(id)arg1;
- (void)_noteNote3:(id)arg1;
- (void)_noteNote2:(id)arg1;
- (void)_noteNote1:(id)arg1;
- (id)searchItems;
- (void)_resetQueryState;
- (void)_disableAutoUpdates;
- (void)_postNotificationName:(id)arg1 userInfo:(id)arg2;
- (id)_externalDocumentsBundleIdentifier;
- (void)setSearchItems:(id)arg1;
- (void)_setBatchingParams;
- (id)_sortingAttributes;
- (id)groupingAttributes;
- (id)valueListAttributes;
- (void)_recreateQuery;
- (void)_validatePredicate:(id)arg1 withScopes:(id)arg2;
- (BOOL)br_setupForMonitoringChildrenOfItemAtURL:(id)arg1;
- (void)br_setupForMonitoringChildrenOfFolderAtURL:(id)arg1;

@end