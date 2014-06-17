/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface OCCDecryptor : NSObject  {
    NSString *mOutputFilename;
    NSString *mBaseStringForOutputFilename;
    struct OCCStreamer { int (**x1)(); struct OCCCryptoKey {} *x2; char *x3; } *mStreamer;
}

@property(readonly) NSString * outputFilename;

+ (id)agilePasswordKeyEncryptorNamespace;
+ (id)agileDescriptorNamespace;
+ (id)allocTempFileWithBase:(id)arg1 outFilename:(id*)arg2;

- (id)outputFilename;
- (id)initWithStreamer:(struct OCCStreamer { int (**x1)(); struct OCCCryptoKey {} *x2; char *x3; }*)arg1;
- (BOOL)decrypt;
- (BOOL)decryptIntoOutputFile;
- (void)deleteOutputFile;
- (BOOL)verifyPassphrase:(id)arg1;
- (BOOL)isReadProtectedUsingDefaultPassphrase;
- (void)dealloc;

@end