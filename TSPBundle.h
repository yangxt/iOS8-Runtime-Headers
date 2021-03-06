/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSHashTable, TSPDocumentProperties, TSUZipFileArchive, NSObject<OS_dispatch_queue>, <TSPFileCoordinatorDelegate>, SFUCryptoKey;

@interface TSPBundle : NSObject <TSPPackage> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    TSUZipFileArchive *_objectArchive;
    SFUCryptoKey *_decryptionKey;
    <TSPFileCoordinatorDelegate> *_fileCoordinatorDelegate;
    NSHashTable *_packageDatas;
    unsigned char _packageIdentifier;
    BOOL _isClosed;
    TSPDocumentProperties *_documentProperties;
    unsigned long long _fileFormatVersion;
}

@property(readonly) unsigned char packageIdentifier;
@property(readonly) <TSPFileCoordinatorDelegate> * fileCoordinatorDelegate;
@property(readonly) TSPDocumentProperties * documentProperties;
@property(readonly) SFUCryptoKey * decryptionKey;
@property(readonly) BOOL isClosed;
@property(readonly) unsigned long long fileFormatVersion;

+ (id)objectArchiveEntryPathForPackageLocator:(id)arg1;
+ (id)componentFileURLForPackageURL:(id)arg1 packageLocator:(id)arg2;
+ (id)objectArchiveURLForPackageURL:(id)arg1;
+ (BOOL)isBundleFormatURL:(id)arg1;

- (BOOL)isClosed;
- (void).cxx_destruct;
- (id)init;
- (void)setObjectArchive:(id)arg1 decryptionKey:(id)arg2;
- (id)fileCoordinatorDelegate;
- (void)didReadFileFormatVersion:(unsigned long long)arg1;
- (void)copyComponent:(id)arg1 toPackageURL:(id)arg2 packageLocator:(id)arg3 zipFileWriter:(id)arg4 encryptionKey:(id)arg5 completion:(id)arg6;
- (id)newReadChannelForComponent:(id)arg1;
- (id)newDataStorageForFilename:(id)arg1 decryptionKey:(id)arg2;
- (id)objectArchive;
- (id)newObjectArchiveFromURL:(id)arg1;
- (id)initWithPackageIdentifier:(unsigned char)arg1 documentProperties:(id)arg2 fileFormatVersion:(unsigned long long)arg3 fileCoordinatorDelegate:(id)arg4;
- (void)didReferenceData:(id)arg1;
- (id)newDataStorageForFilename:(id)arg1;
- (void)prepareForDocumentReplacementWithSuccess:(BOOL)arg1 forSafeSave:(BOOL)arg2 originalURL:(id)arg3;
- (BOOL)containsData:(id)arg1;
- (void)enumerateDatasUsingBlock:(id)arg1;
- (unsigned char)packageIdentifier;
- (id)decryptionKey;
- (unsigned long long)fileFormatVersion;
- (id)documentProperties;
- (void)didCloseDocument;
- (id)initWithURL:(id)arg1 packageIdentifier:(unsigned char)arg2 documentProperties:(id)arg3 decryptionKey:(id)arg4 fileCoordinatorDelegate:(id)arg5;

@end
