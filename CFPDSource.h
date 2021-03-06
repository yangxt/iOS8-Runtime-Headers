/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@class CFPDDataBuffer, NSObject<OS_dispatch_queue>;

@interface CFPDSource : NSObject  {
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _inode;
    CFPDDataBuffer *_plist;
    struct __CFArray { } *_pendingChangesQueue;
    struct __CFString { } *_containerPath;
    struct __CFString { } *_userName;
    struct __CFString { } *_domain;
    const char *_actualPath;
    const char *_pathToTemporaryFileToWriteTo;
    unsigned int _lastEuid;
    unsigned int _lastEgid;
    unsigned short _mode;
    int _owner;
    short _generationShmemIndex;
    unsigned int _dirty : 1;
    unsigned int _byHost : 1;
    unsigned int _managed : 1;
    unsigned int _waitingForDeviceUnlock : 1;
}

+ (void)withSourceForDomain:(struct __CFString { }*)arg1 forRemoteClient:(id)arg2 inContainer:(struct __CFString { }*)arg3 user:(struct __CFString { }*)arg4 byHost:(BOOL)arg5 managed:(BOOL)arg6 perform:(id)arg7;
+ (void)synchronousWithSourceCache:(id)arg1;
+ (void)withSourceCache:(id)arg1;

- (int)cacheSize;
- (void)clearCache;
- (struct __CFString { }*)container;
- (struct __CFString { }*)domain;
- (id)description;
- (void)dealloc;
- (BOOL)acceptLocalMessage:(struct __CFDictionary { }*)arg1 withReply:(struct __CFDictionary { }*)arg2;
- (BOOL)clearCacheIfStale;
- (unsigned char)_backingPlistChangedSinceLastSync;
- (id)acceptMessage:(id)arg1;
- (BOOL)validateReadAccessToken:(int)arg1;
- (short)shmemIndex;
- (BOOL)byHost;
- (void)removeOwner:(int)arg1;
- (BOOL)managed;
- (void)enqueueNewKey:(struct __CFString { }*)arg1 value:(void*)arg2;
- (int)validateMessage:(id)arg1 withNewKey:(struct __CFString { }*)arg2 newValue:(void*)arg3 currentPlistData:(id)arg4 containerPath:(const char *)arg5 diagnosticMessage:(const char **)arg6;
- (void)cacheActualAndTemporaryPathsWithEUID:(unsigned int)arg1 egid:(unsigned int)arg2;
- (BOOL)validateSandboxForRead:(id)arg1 containerPath:(const char *)arg2;
- (BOOL)validateSandboxForWrite:(id)arg1 containerPath:(const char *)arg2 targetingContainer:(BOOL*)arg3;
- (void)setPlist:(id)arg1;
- (id)propertyListWithoutDrainingPendingChanges;
- (void)updateShmemEntry;
- (void)autosync:(BOOL)arg1;
- (void)cacheActualPath;
- (struct __CFString { }*)user;
- (void)setDirty:(BOOL)arg1;
- (void)drainPendingChanges;
- (struct __CFString { }*)debugDump;
- (void)transitionToMultiOwner;
- (BOOL)hasEverHadMultipleOwners;
- (void)lockedSync:(id)arg1;
- (void)lockedAsync:(id)arg1;
- (void)noteAccessed;
- (void)addOwner:(id)arg1;
- (id)initWithDomain:(struct __CFString { }*)arg1 userName:(struct __CFString { }*)arg2 container:(struct __CFString { }*)arg3 byHost:(BOOL)arg4 managed:(BOOL)arg5 shmemIndex:(short)arg6;
- (BOOL)getUncanonicalizedPath:(char *)arg1;
- (void)cacheActualPathCreatingIfNecessary:(BOOL)arg1 euid:(unsigned int)arg2 egid:(unsigned int)arg3;
- (void)writeToDisk:(BOOL)arg1;
- (id)propertyList;

@end
