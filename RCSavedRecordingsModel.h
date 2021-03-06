/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class NSArray, NSFetchedResultsController, NSManagedObjectContext, NSFetchRequest, NSManagedObjectModel;

@interface RCSavedRecordingsModel : NSObject <NSFetchedResultsControllerDelegate> {
    int _notifyToken;
    NSManagedObjectModel *_model;
    NSManagedObjectContext *_context;
    NSFetchRequest *_savedRecordingsFetchRequest;
    NSFetchedResultsController *_fetchController;
    BOOL _valid;
    int _isSavingDisabledCount;
}

@property(readonly) unsigned int count;
@property(readonly) NSArray * recordings;
@property(readonly) long long currentEntityRevision;
@property BOOL valid;
@property int isSavingDisabledCount;

+ (id)creationDateFromStandardRecordingURL:(id)arg1;
+ (id)standardURLForRecordingWithCreationDate:(id)arg1;
+ (void)_insertRecordingWithImportableAudioURL:(id)arg1 name:(id)arg2 date:(id)arg3 completionHandler:(id)arg4;
+ (id)_copyFileIntoRecordingsDirectory:(id)arg1;
+ (id)sharedModelForQueue:(id)arg1;
+ (id)savedRecordingsDirectory;
+ (void)importRecordingWithSourceAudioURL:(id)arg1 name:(id)arg2 date:(id)arg3 completionHandler:(id)arg4;
+ (void)initialize;
+ (id)sharedModel;

- (void)setIsSavingDisabledCount:(int)arg1;
- (int)isSavingDisabledCount;
- (id)recordingsForSpotlightSearch:(id)arg1;
- (BOOL)hasExistingRecordingForAudioFile:(id)arg1;
- (void)enumerateExistingRecordingsSinceEntityRevision:(long long)arg1 withBlock:(id)arg2;
- (id)recordingWithITunesPersistentID:(long long)arg1;
- (id)indexPathForRecording:(id)arg1;
- (id)recordingAtIndex:(unsigned int)arg1;
- (id)recordings;
- (void)_postRecordingsModelDidChangeForNotificationName:(id)arg1;
- (void)_deleteRecordingsWithDurationLessThan:(double)arg1 passingTest:(id)arg2;
- (void)deleteRecording:(id)arg1;
- (id)recordingWithURIRepresentation:(id)arg1;
- (void)_deleteOrphanedEntityRevisionsAndSave:(BOOL)arg1;
- (void)enumerateExistingRecordingsWithBlock:(id)arg1;
- (BOOL)setValue:(id)arg1 forDatabaseProperty:(id)arg2 save:(BOOL)arg3;
- (void)_setNextEntityRevisionID:(long long)arg1 save:(BOOL)arg2;
- (void)_enumerateSavedRecordingsAndEntityRevisionInArrayOfManagedObjects:(id)arg1 createIfNeeded:(BOOL)arg2 block:(id)arg3;
- (id)_entityRevisionWithRecordingID:(long long)arg1;
- (id)_labelPresetsForQuery:(id)arg1;
- (id)entityRevisionsForRecording:(id)arg1;
- (void)performWithSavingDisabled:(id)arg1;
- (id)insertRecordingWithAudioFile:(id)arg1 duration:(double)arg2 date:(id)arg3;
- (BOOL)saveManagedObjectContext:(id*)arg1;
- (void)_setNextRecordingID:(long long)arg1 save:(BOOL)arg2;
- (long long)_nextRecordingID;
- (id)nextRecordingDefaultLabelWithCustomLabelBase:(id)arg1;
- (id)insertRecordingWithAudioFile:(id)arg1 duration:(double)arg2 date:(id)arg3 customLabelBase:(id)arg4;
- (id)_allCustomLabels;
- (void)saveIfNecessary;
- (id)fetchSavedRecordingIDs;
- (id)_recordingWithRecordingID:(long long)arg1;
- (long long)_nextEntityRevisionID;
- (id)recordingWithID:(id)arg1;
- (void)_scheduleAutomaticRecordingDeletions;
- (id)_initWithManagedObjectContext:(id)arg1;
- (void)_handleInternalModelDidSaveNotification:(id)arg1;
- (void)_handleExternalModelDidSaveNotification:(id)arg1;
- (void)_migrateDatabaseIfNecessary;
- (BOOL)deleteDatabaseProperty:(id)arg1;
- (BOOL)setValue:(id)arg1 forDatabaseProperty:(id)arg2;
- (id)valueForDatabaseProperty:(id)arg1;
- (void)setValid:(BOOL)arg1;
- (void)performBlockAndWait:(id)arg1;
- (void).cxx_destruct;
- (void)save;
- (BOOL)valid;
- (unsigned int)count;
- (void)dealloc;
- (id)init;
- (long long)currentEntityRevision;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned int)arg4 newIndexPath:(id)arg5;

@end
