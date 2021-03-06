/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class <SFUInputStream>, NSString, OISFUCryptoKey;

@interface OISFUFileDataRepresentation : OISFUDataRepresentation  {
    NSString *mPath;
    int mSharedFd;
    long long mFileLength;
    unsigned long mFileType;
    BOOL mHasFileAttributes;
    long long mPlaintextDataLength;
    OISFUCryptoKey *mCryptoKey;
    <SFUInputStream> *mInputStream;
    BOOL mDeleteFileWhenDone;
}


- (long long)dataLength;
- (BOOL)isEncrypted;
- (long long)encodedLength;
- (BOOL)hasSameLocationAs:(id)arg1;
- (id)initWithPath:(id)arg1 sharedFileDescriptor:(int)arg2;
- (id)initWithCopyOfData:(id)arg1 path:(id)arg2;
- (void)deleteFileWhenDone;
- (id)initWithInputStream:(id)arg1 cryptoKey:(id)arg2 dataLength:(long long)arg3;
- (void)readFileAttributes;
- (id)initWithPath:(id)arg1 cryptoKey:(id)arg2 dataLength:(long long)arg3;
- (BOOL)isCryptoKeyIdenticalToKey:(id)arg1;
- (id)initWithCopyOfData:(id)arg1 path:(id)arg2 cryptoKey:(id)arg3;
- (id)initWithPath:(id)arg1 sharedFileDescriptor:(int)arg2 cryptoKey:(id)arg3 dataLength:(long long)arg4;
- (id)inputStream;
- (void)setFileType:(unsigned long)arg1;
- (unsigned long)fileType;
- (id)initWithPath:(id)arg1;
- (id)path;
- (id)description;
- (void)dealloc;
- (BOOL)isReadable;

@end
