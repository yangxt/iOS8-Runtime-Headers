/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@class ACDDatabase, NSString, NSXPCConnection, NSNumber, NSMutableDictionary;

@interface ACDClient : NSObject  {
    NSXPCConnection *_connection;
    ACDDatabase *_database;
    struct __CFBundle { } *_bundle;
    NSString *_bundleID;
    BOOL _didManuallySetBundleID;
    NSNumber *_pid;
    NSString *_localizedAppName;
    NSString *_name;
    NSMutableDictionary *_entitlementChecks;
}

@property(retain) NSString * bundleID;
@property(readonly) struct __CFBundle { }* bundle;
@property(readonly) NSString * localizedAppName;
@property(readonly) NSString * adamOrDisplayID;
@property(readonly) NSString * name;
@property(readonly) NSNumber * pid;
@property(readonly) NSXPCConnection * connection;
@property(readonly) ACDDatabase * database;

+ (id)bundleForPID:(int)arg1;
+ (id)clientWithBundleID:(id)arg1;

- (id)initWithConnection:(id)arg1;
- (id)pid;
- (void)setBundleID:(id)arg1;
- (id)bundleID;
- (id)database;
- (id)longDebugDescription;
- (id)shortDebugDescription;
- (id)localizedAppName;
- (id)_displayNameFromBundleInfoDictionaryForPID:(int)arg1;
- (id)_displayNameFromSpringBoardForPID:(int)arg1;
- (id)adamOrDisplayID;
- (BOOL)hasEntitlement:(id)arg1;
- (id)connection;
- (void).cxx_destruct;
- (struct __CFBundle { }*)bundle;
- (id)debugDescription;
- (id)initWithConnection:(id)arg1 database:(id)arg2;
- (id)name;
- (id)description;
- (void)dealloc;

@end
