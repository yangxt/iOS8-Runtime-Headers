/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;

@interface OISFUGZipFileOutputStream : NSObject <SFUOutputStream> {
    void *_file;
    long long _offset;
    NSString *_path;
}

+ (id)gzipExtension;

- (BOOL)canSeek;
- (void)writeBuffer:(const char *)arg1 size:(unsigned long)arg2;
- (id)closeLocalStream;
- (BOOL)canCreateInputStream;
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;
- (id)inputStream;
- (id)initWithPath:(id)arg1;
- (void)close;
- (long long)offset;
- (id)path;
- (void)dealloc;

@end