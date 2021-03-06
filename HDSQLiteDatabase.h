/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@class NSMutableDictionary;

@interface HDSQLiteDatabase : NSObject  {
    struct sqlite3 { } *_db;
    BOOL _isInTransaction;
    int _transactionType;
    struct __CFDictionary { } *_statementCache;
    NSMutableDictionary *_attachedDatabaseURLsByName;
}

+ (BOOL)statementDidFinishAfterStepping:(struct sqlite3_stmt { }*)arg1;
+ (BOOL)statementHasRowAfterStepping:(struct sqlite3_stmt { }*)arg1;
+ (BOOL)deleteDatabaseAtPath:(id)arg1;
+ (void)_stepStatement:(struct sqlite3_stmt { }*)arg1 hasRow:(BOOL*)arg2 didFinish:(BOOL*)arg3;
+ (id)virtualFilesystemModule;

- (void)accessDatabaseUsingBlock:(id)arg1;
- (struct sqlite3_stmt { }*)_statementForSQL:(id)arg1 cache:(BOOL)arg2;
- (void)prepareStatementForSQL:(id)arg1 cache:(BOOL)arg2 usingBlock:(id)arg3;
- (id)initWithDatabaseURL:(id)arg1;
- (BOOL)dropTable:(id)arg1;
- (void)detachDatabaseWithName:(id)arg1;
- (BOOL)attachDatabaseWithName:(id)arg1 fileURL:(id)arg2 error:(id*)arg3;
- (BOOL)insertColumns:(id)arg1 fromTableNamed:(id)arg2 toTableNamed:(id)arg3;
- (BOOL)renameTable:(id)arg1 newName:(id)arg2;
- (BOOL)renameColumnInTable:(id)arg1 oldName:(id)arg2 newName:(id)arg3;
- (BOOL)removeColumnInTable:(id)arg1 name:(id)arg2;
- (BOOL)addColumnInTable:(id)arg1 columnSQL:(id)arg2;
- (int)userVersionWithDatabaseName:(id)arg1;
- (BOOL)setUserVersion:(int)arg1 withDatabaseName:(id)arg2;
- (BOOL)isDatabaseWithNameAttached:(id)arg1;
- (BOOL)alterTable:(id)arg1 removeColumns:(id)arg2 renameColumns:(id)arg3;
- (BOOL)executeSQL:(id)arg1 error:(id*)arg2;
- (void)_deleteDatabaseWithPath:(id)arg1;
- (int)_openWithPath:(id)arg1;
- (void)performTransactionWithType:(int)arg1 usingBlock:(id)arg2;
- (BOOL)executeSQL:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;

@end
