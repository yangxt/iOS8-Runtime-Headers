/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSURL, SFUCryptoKey;

@interface TSPTemporaryDataStorage : TSPFileDataStorage  {
    NSURL *_URL;
    SFUCryptoKey *_decryptionKey;
    BOOL _gilligan_isRemote;
    BOOL _isMissingData;
}

@property BOOL isMissingData;


- (void).cxx_destruct;
- (id)initWithURL:(id)arg1;
- (void)dealloc;
- (BOOL)isMissingData;
- (void)performReadWithAccessor:(id)arg1;
- (BOOL)writeData:(id)arg1 toBundleWriter:(id)arg2 preferredFilename:(id)arg3 filename:(id*)arg4 didCopyDataToBundle:(BOOL*)arg5;
- (void)setIsMissingData:(BOOL)arg1;
- (void)setGilligan_isRemote:(BOOL)arg1;
- (id)initWithURL:(id)arg1 decryptionKey:(id)arg2;
- (BOOL)gilligan_isRemote;
- (void)performIOChannelReadWithAccessor:(id)arg1;

@end
