/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <ServiceInterface>, NSString, NSPersistentStoreCoordinator, NSManagedObjectContext, NSManagedObjectModel;

@interface AnalyticsWorkspace : NSObject <NSCopying> {
    NSString *backingStore;
    BOOL readOnly;
    BOOL pathKnownToFail;
    NSString *revision;
    NSString *storeKind;
    NSString *storeProt;
    NSPersistentStoreCoordinator *__persistentStoreCoordinator;
    NSManagedObjectContext *__mainObjectContext;
    NSManagedObjectModel *__objectModel;
    <ServiceInterface> *__service;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id __resetCompletionBlock;

}

@property(retain,readonly) NSManagedObjectModel * objectModel;
@property(retain,readonly) NSManagedObjectContext * mainObjectContext;
@property(retain,readonly) NSPersistentStoreCoordinator * persistentStoreCoordinator;
@property(retain,readonly) <ServiceInterface> * service;
@property(copy) id resetCompletionBlock;

+ (id)workspaceWithName:(id)arg1 atPath:(id)arg2 useReadOnly:(BOOL)arg3;
+ (id)defaultWorkspace;

- (id)mainObjectContext;
- (void)setResetCompletionBlock:(id)arg1;
- (id)initWorkspaceWithName:(id)arg1 atPath:(id)arg2 useReadOnly:(BOOL)arg3;
- (id)resetCompletionBlock;
- (id)createNewContext;
- (BOOL)_primePath:(id)arg1;
- (id)_initWithName:(id)arg1 useReadOnly:(BOOL)arg2;
- (id)objectModel;
- (id)initWorkspaceWithService:(id)arg1;
- (id)persistentStoreCoordinator;
- (void).cxx_destruct;
- (void)reset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)save;
- (id)service;

@end
