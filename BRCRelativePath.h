/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class BRCRelativePath, NSURL, NSDirectoryEnumerator, BRCAccountSession, BRCGenerationID, NSDictionary, NSString, BRCBookmark, BRCLocalContainer, NSNumber;

@interface BRCRelativePath : NSObject <NSSecureCoding> {
    NSString *_absolutePath;
    NSString *_relativePath;
    BRCRelativePath *_basePath;
    NSNumber *_volumeID;
    NSDictionary *_faultDict;
    NSString *_faultName;
    BRCBookmark *_bookmark;
    NSString *_symlinkContent;
    BRCGenerationID *_generationID;
    int _deviceID;
    BRCLocalContainer *_container;
    unsigned int _componentsCountToRoot;
    unsigned char _finderInfo[32];
    unsigned long long _fileID;
    unsigned short _mode;
    unsigned int _nlink;
    struct timespec { 
        int tv_sec; 
        long tv_nsec; 
    } _birthtime;
    struct timespec { 
        int tv_sec; 
        long tv_nsec; 
    } _mtime;
    long long _size;
    unsigned long long _parentFileID;
    unsigned int _documentID;
    unsigned int _fsGenerationID;
    unsigned int _flags;
    unsigned int _isExcluded : 1;
    unsigned int _isInPackage : 1;
    unsigned int _isPackageRoot : 1;
    unsigned int _readFault : 1;
    unsigned int _hasFinderTags : 1;
    unsigned int _isBusy : 1;
    unsigned int _isAlias : 1;
    int _fd;
    unsigned int _openRefCount;
    struct { int x1; long x2; long x3; char *x4; int x5; long x6; long x7; int x8; struct _opaque_pthread_mutex_t { long x_9_1_1; BOOL x_9_1_2[40]; } x9; struct _telldir {} *x10; } *_dir;
    NSDirectoryEnumerator *_descendantsEnumerator;
    BRCAccountSession *_accountSession;
}

@property(readonly) BOOL isDocument;
@property(readonly) BOOL isFault;
@property(readonly) BOOL isFile;
@property(readonly) BOOL isPackageRoot;
@property(readonly) BOOL isInPackage;
@property(readonly) BOOL isRoot;
@property(readonly) BOOL isContainer;
@property(readonly) BOOL isParentedToContainer;
@property(readonly) BOOL isUnixDir;
@property(readonly) BOOL exists;
@property(readonly) BOOL isWritable;
@property(readonly) BOOL isExecutable;
@property(readonly) BOOL isHiddenExtension;
@property(readonly) BOOL isHiddenFile;
@property(readonly) BOOL isBusy;
@property(readonly) BOOL isSymLink;
@property(readonly) BOOL isExcluded;
@property(readonly) BOOL hasFinderTags;
@property(readonly) BOOL isAlias;
@property(readonly) unsigned long fileType;
@property(readonly) unsigned long long fileID;
@property(readonly) unsigned long long parentFileID;
@property(readonly) unsigned int hardlinkCount;
@property(readonly) unsigned int documentID;
@property(readonly) NSNumber * fileObjectID;
@property(readonly) int deviceID;
@property(readonly) NSNumber * volumeID;
@property(readonly) long long size;
@property(readonly) long modificationTime;
@property(readonly) long birthTime;
@property(readonly) unsigned int fsGenerationID;
@property(readonly) BRCGenerationID * generationID;
@property(readonly) BRCAccountSession * accountSession;
@property(readonly) BRCLocalContainer * container;
@property(readonly) NSString * absolutePath;
@property(readonly) NSString * pathRelativeToRoot;
@property(readonly) NSString * pathRelativeToContainer;
@property(readonly) NSString * pathRelativeToPackageRoot;
@property(readonly) NSString * filename;
@property(readonly) NSString * symlinkContent;
@property(readonly) BRCRelativePath * root;
@property(readonly) NSURL * url;
@property(readonly) NSDictionary * faultDict;
@property(readonly) NSString * faultDisplayName;
@property(readonly) BRCBookmark * bookmark;
@property(readonly) unsigned int hash;
@property(readonly) unsigned int parentHash;

+ (int)locateByFileID:(unsigned long long)arg1 inContainer:(id)arg2;
+ (BOOL)supportsSecureCoding;

- (id)root;
- (BOOL)isBusy;
- (BOOL)isFault;
- (id)filename;
- (unsigned int)parentHash;
- (id)bookmark;
- (id)faultDict;
- (BOOL)isSubpathOfRelativePath:(id)arg1;
- (void)closeDirectoryScan;
- (id)nextDescendant;
- (BOOL)openDirectoryForRecursiveScan;
- (id)nextChild;
- (BOOL)openDirectoryForScanWithError:(int*)arg1;
- (BOOL)performOnOpenParentFileDescriptor:(id)arg1 error:(int*)arg2;
- (BOOL)flock:(int)arg1;
- (BOOL)hasFinderTags;
- (BOOL)isHiddenFile;
- (BOOL)isHiddenExtension;
- (id)generationID;
- (unsigned int)fsGenerationID;
- (long)birthTime;
- (unsigned int)hardlinkCount;
- (id)pathRelativeToContainer;
- (BOOL)isExcluded;
- (BOOL)isParentedToContainer;
- (id)logicalURLWithLogicalName:(id)arg1;
- (id)pathOfParent;
- (id)initWithPath:(id)arg1 inContainer:(id)arg2;
- (id)initWithRootPath:(id)arg1 accountSession:(id)arg2;
- (void)_resolveFaultInfo;
- (BOOL)isEqualToRelativePath:(id)arg1;
- (BOOL)performOnOpenFileDescriptor:(id)arg1 error:(int*)arg2;
- (int)_resolveSymlinkRelativeTo:(int)arg1 path:(id)arg2;
- (id)pathRelativeToPackageRoot;
- (void)_close;
- (int)_resolveWhenDoesntExist;
- (int)_resolveWhenExists;
- (int)resolveBasePath;
- (BOOL)_shouldKeepBasePathOpen;
- (int)_resolveContainer;
- (BOOL)_fixupRelativePath;
- (id)volumeID;
- (BOOL)isSymLink;
- (id)pathRelativeToRoot;
- (BOOL)isPackageRoot;
- (BOOL)isUnixDir;
- (BOOL)resolveMustExist:(BOOL)arg1 error:(int*)arg2;
- (BOOL)isResolved;
- (id)symlinkContent;
- (BOOL)isWritable;
- (BOOL)isExecutable;
- (id)refreshFromPathMustExist:(BOOL)arg1;
- (BOOL)isContainer;
- (id)_initWithPath:(id)arg1 relativeToRoot:(id)arg2;
- (id)pathWithChildAtPath:(id)arg1;
- (BOOL)resolveAndKeepOpenMustExist:(BOOL)arg1 error:(int*)arg2;
- (id)initWithFileID:(unsigned long long)arg1 inContainer:(id)arg2;
- (unsigned int)documentID;
- (unsigned long long)fileID;
- (id)pathOfPackageRoot;
- (BOOL)isInPackage;
- (BOOL)isRoot;
- (unsigned long long)parentFileID;
- (int)deviceID;
- (BOOL)isAlias;
- (long)modificationTime;
- (BOOL)isFile;
- (id)fileObjectID;
- (id)absolutePath;
- (id)faultDisplayName;
- (BOOL)isDocument;
- (BOOL)exists;
- (id)accountSession;
- (unsigned long)fileType;
- (void).cxx_destruct;
- (void)close;
- (id)container;
- (id)url;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (long long)size;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;

@end