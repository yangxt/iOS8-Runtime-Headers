/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <SFUBufferedInputStream>;

@interface SFUZipRecordInputStream : NSObject  {
    <SFUBufferedInputStream> *mInput;
    const char *mBuffer;
    long long mBufferStart;
    long long mBufferEnd;
}


- (const char *)dataAtOffset:(long long)arg1 size:(unsigned long)arg2 end:(long long)arg3;
- (id)initWithDataRepresentation:(id)arg1;
- (void)dealloc;

@end