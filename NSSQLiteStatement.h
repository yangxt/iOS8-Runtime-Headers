/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLiteStatement : NSSQLStatement  {
    struct sqlite3_stmt { } *_cachedSQLiteStatement;
}


- (void)clearCaches;
- (void)dealloc;
- (void)finalize;
- (void)setCachedSQLiteStatement:(struct sqlite3_stmt { }*)arg1;
- (struct sqlite3_stmt { }*)cachedSQLiteStatement;

@end
