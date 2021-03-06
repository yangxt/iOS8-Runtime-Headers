/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSQLSelectIntermediate, NSSQLOffsetIntermediate, NSMutableArray, NSMutableDictionary, NSSQLGroupByIntermediate, NSSQLHavingIntermediate;

@interface NSSQLFetchIntermediate : NSSQLStatementIntermediate  {
    NSSQLSelectIntermediate *_selectClause;
    NSSQLGroupByIntermediate *_groupByClause;
    NSSQLHavingIntermediate *_havingClause;
    NSSQLOffsetIntermediate *_offsetClause;
    NSMutableArray *_groupByKeypaths;
    BOOL _isDictionaryCountFetch;
    NSMutableArray *_joinIntermediates;
    NSMutableDictionary *_joinKeypaths;
}


- (void)dealloc;
- (void)selectDistinct;
- (id)joinIntermediates;
- (void)promoteToOuterJoinAtKeypathWithComponents:(id)arg1;
- (void)promoteToOuterJoinsAlongKeypathWithComponents:(id)arg1;
- (id)finalJoinForKeypathWithComponents:(id)arg1;
- (void)addJoinIntermediate:(id)arg1 atKeypathWithComponents:(id)arg2;
- (void)setOffsetIntermediate:(id)arg1;
- (void)setHavingIntermediate:(id)arg1;
- (id)havingIntermediate;
- (BOOL)groupByClauseContainsKeypath:(id)arg1;
- (void)addGroupByKeypath:(id)arg1;
- (void)setGroupByIntermediate:(id)arg1;
- (id)groupByIntermediate;
- (void)setSelectIntermediate:(id)arg1;
- (void)setDictionaryCountFetch:(BOOL)arg1;
- (BOOL)isDictionaryCountFetch;
- (id)fetchIntermediate;
- (id)fetchIntermediateForKeypathExpression:(id)arg1;
- (id)_generateJoinSQLStringInContext:(id)arg1;
- (BOOL)isFunctionScoped;
- (id)selectIntermediate;
- (id)generateSQLStringInContext:(id)arg1;
- (id)initWithScope:(id)arg1;

@end
