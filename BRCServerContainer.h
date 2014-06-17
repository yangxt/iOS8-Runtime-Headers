/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class CKServerChangeToken, NSArray, PQLNameInjection, PQLConnection, BRCAccountSession, CKDatabase, NSDictionary, CKContainer, NSString, BRCLocalContainer, NSDate;

@interface BRCServerContainer : NSObject <BRCContainer> {
    BRCAccountSession *_session;
    unsigned int _schemaVersion;
    PQLConnection *_db;
    CKContainer *_container;
    BOOL _needsSave;
    BOOL _hasRegisteredPushTopics;
    NSString *_containerID;
    NSDate *_lastSyncDownDate;
    CKServerChangeToken *_changeToken;
    CKServerChangeToken *_pendingChangeToken;
    NSString *_containerMetadataEtag;
    BRCLocalContainer *_localContainer;
    NSString *_subscriptionID;
    PQLNameInjection *_itemsTable;
    PQLNameInjection *_pendingFetchesTable;
    NSArray *_tableNames;
    unsigned long long _clientRequestID;
}

@property(retain) NSDate * lastSyncDownDate;
@property(readonly) CKServerChangeToken * changeToken;
@property(readonly) CKServerChangeToken * pendingChangeToken;
@property(readonly) NSString * containerMetadataEtag;
@property(readonly) unsigned long long clientRequestID;
@property(readonly) NSString * subscriptionID;
@property BRCLocalContainer * localContainer;
@property(readonly) PQLNameInjection * itemsTable;
@property(readonly) PQLNameInjection * pendingFetchesTable;
@property(readonly) PQLConnection * db;
@property(retain) BRCAccountSession * accountSession;
@property(readonly) CKContainer * container;
@property(readonly) CKDatabase * cloudDatabase;
@property(readonly) NSString * containerIdentifier;
@property(readonly) NSString * prefixedContainerID;
@property(readonly) NSString * pushTopic;
@property BOOL hasRegisteredPushTopics;
@property(retain) NSString * containerID;
@property(readonly) BOOL needsSave;
@property(readonly) NSString * zoneName;
@property(readonly) NSDictionary * plist;
@property(readonly) NSArray * tableNames;

+ (BOOL)_sql_upgrade_to_version1:(id)arg1;
+ (struct PQLResultSet { Class x1; }*)containersEnumerator:(id)arg1;
+ (id)containerByID:(id)arg1 withDB:(id)arg2;

- (id)pendingFetchesTable;
- (void)setHasRegisteredPushTopics:(BOOL)arg1;
- (BOOL)hasRegisteredPushTopics;
- (unsigned long long)clientRequestID;
- (void)setLocalContainer:(id)arg1;
- (id)pendingChangeToken;
- (id)changeToken;
- (void)setContainerID:(id)arg1;
- (unsigned long long)allocateRanksWithUnappliedRanks:(id)arg1 andKilledItems:(id)arg2;
- (id)versionByItemID:(id)arg1;
- (BOOL)deletePendingFetchRecords;
- (BOOL)savePendingFetchStructureRecordsToServerTruth;
- (BOOL)savePendingFetchContentRecordsToServerTruth;
- (void)didSyncDownRequestID:(unsigned long long)arg1 serverChangeToken:(id)arg2 stateIsInconsistent:(BOOL)arg3;
- (id)prefixedContainerID;
- (id)tableNames;
- (struct PQLResultSet { Class x1; }*)itemsEnumeratorWithDB:(id)arg1;
- (void)_checkResultSetIsEmpty:(id)arg1 logToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg2 reason:(id)arg3 result:(BOOL*)arg4;
- (BOOL)_dumpChildrenOfDirectory:(id)arg1 toContext:(id)arg2 visitedItems:(id)arg3 depth:(int)arg4 error:(id*)arg5;
- (unsigned long long)_allocateRanksWithUnappliedRanks:(id)arg1 andKilledItems:(id)arg2 nextRank:(unsigned long long)arg3;
- (struct PQLResultSet { Class x1; }*)_enumeratePendingFetchDeletedRecordIDs;
- (struct PQLResultSet { Class x1; }*)_enumeratePendingFetchRecords;
- (void)updateWithPlist:(id)arg1;
- (void)setupTableName;
- (id)initWithDB:(id)arg1;
- (void)setLastSyncDownDate:(id)arg1;
- (id)plist;
- (id)lastSyncDownDate;
- (void)didSaveSubscription:(id)arg1 containerMetadataSubscriptionID:(id)arg2;
- (id)subscriptionID;
- (id)zoneName;
- (id)pushTopic;
- (id)containerMetadataEtag;
- (id)_initWithContainerID:(id)arg1 db:(id)arg2 accountSession:(id)arg3;
- (BOOL)upgradeTables;
- (void)resetTruthWithIsFullReset:(BOOL)arg1;
- (id)initFromPQLResultSet:(id)arg1 error:(id*)arg2;
- (BOOL)validateStructureLoggingToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 withDB:(id)arg2;
- (BOOL)validateItemsLoggingToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 withDB:(id)arg2;
- (id)localContainer;
- (id)itemByParentID:(id)arg1 andName:(id)arg2;
- (BOOL)dumpTablesToContext:(id)arg1 error:(id*)arg2;
- (id)db;
- (BOOL)saveToDB;
- (BOOL)needsSave;
- (id)itemsTable;
- (id)itemByItemID:(id)arg1;
- (void)setAccountSession:(id)arg1;
- (id)containerID;
- (id)accountSession;
- (id)cloudDatabase;
- (id)containerIdentifier;
- (void).cxx_destruct;
- (id)container;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end