/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSPDistributableFileManager, NSString, TSPDatabase;

@interface TSPDatabaseArchiverWriter : NSObject  {
    long long _dataStateIdentifier;
    NSString *_fileStateIdentifier;
    BOOL _hasDataState;
    BOOL _hasFileState;
    TSPDatabase *_database;
    TSPDistributableFileManager *_fileManager;
    NSString *_filenameHint;
    BOOL _forceFileStorage;
}

@property(readonly) BOOL hasDataState;
@property long long dataStateIdentifier;
@property(readonly) BOOL hasFileState;
@property(retain) NSString * fileStateIdentifier;
@property(retain) NSString * filenameHint;
@property BOOL forceFileStorage;


- (void).cxx_destruct;
- (void)setForceFileStorage:(BOOL)arg1;
- (BOOL)forceFileStorage;
- (void)setFilenameHint:(id)arg1;
- (id)filenameHint;
- (void)serializeDataFromStream:(id)arg1 length:(long long)arg2;
- (id)fileStateIdentifier;
- (long long)dataStateIdentifier;
- (BOOL)serializeArchive:(const struct Message { int (**x1)(); }*)arg1;
- (id)initWithDatabase:(id)arg1 fileManager:(id)arg2;
- (void)setFileStateIdentifier:(id)arg1;
- (void)setDataStateIdentifier:(long long)arg1;
- (void)_writeDataFromInputStreamToFile:(id)arg1 length:(long long)arg2;
- (void)_writeDataFromInputStreamToDatabase:(id)arg1 length:(int)arg2;
- (struct sqlite3_blob { }*)_openDatabaseBlobWithSize:(int)arg1;
- (BOOL)hasFileState;
- (BOOL)hasDataState;

@end