/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSSQLiteDatabase;

@interface SSSQLiteEntity : NSObject <SSSQLiteEntity> {
    SSSQLiteDatabase *_database;
    long long _persistentID;
}

@property(readonly) SSSQLiteDatabase * database;
@property(readonly) long long persistentID;
@property(readonly) BOOL existsInDatabase;

+ (id)minValueForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3;
+ (id)countForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3;
+ (id)queryWithDatabase:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3;
+ (id)_aggregateValueForProperty:(id)arg1 function:(id)arg2 predicate:(id)arg3 database:(id)arg4;
+ (Class)memoryEntityClass;
+ (id)copyDatabaseDictionaryToSetClientDictionary:(id)arg1;
+ (id)foreignDatabaseColumnForProperty:(id)arg1;
+ (id)foreignKeyColumnForTable:(id)arg1;
+ (id)foreignDatabaseTablesToDelete;
+ (id)databasePropertyToGetClientProperty:(id)arg1;
+ (id)joinClauseForProperty:(id)arg1;
+ (id)databaseValueForProperty:(id)arg1 clientValue:(id)arg2;
+ (id)databasePropertyToSetClientProperty:(id)arg1;
+ (BOOL)_insertValues:(id)arg1 intoTable:(id)arg2 withPersistentID:(long long)arg3 database:(id)arg4;
+ (id)maxValueForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3;
+ (id)anyInDatabase:(id)arg1 predicate:(id)arg2;
+ (id)queryWithDatabase:(id)arg1 predicate:(id)arg2;
+ (id)disambiguatedSQLForProperty:(id)arg1;
+ (id)foreignDatabaseTableForProperty:(id)arg1;
+ (id)databaseTable;

- (BOOL)setValue:(id)arg1 forProperty:(id)arg2;
- (BOOL)existsInDatabase;
- (id)copyXPCEncodedValuesForClientProperties:(id)arg1;
- (id)copyValuesForClientProperties:(id)arg1;
- (BOOL)_deleteRowFromTable:(id)arg1 usingColumn:(id)arg2;
- (id)_copyTableClusteredValuesWithValues:(id)arg1;
- (BOOL)deleteFromDatabase;
- (BOOL)setValuesWithDictionary:(id)arg1;
- (id)initWithPersistentID:(long long)arg1 inDatabase:(id)arg2;
- (id)initWithPropertyValues:(id)arg1 inDatabase:(id)arg2;
- (void)getValues:(id*)arg1 forProperties:(const id*)arg2 count:(unsigned int)arg3;
- (long long)persistentID;
- (id)database;
- (id)valueForProperty:(id)arg1;

@end