/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSData;

@interface OISFUMemoryInputStream : NSObject <OISFUBufferedInputStream> {
    NSData *mData;
    const char *mStart;
    const char *mCurrent;
    const char *mEnd;
}


- (BOOL)canSeek;
- (unsigned long)readToOwnBuffer:(const char **)arg1 size:(unsigned long)arg2;
- (id)closeLocalStream;
- (void)enableSystemCaching;
- (void)disableSystemCaching;
- (unsigned long)readToBuffer:(char *)arg1 size:(unsigned long)arg2;
- (void)seekToOffset:(long long)arg1;
- (BOOL)seekWithinBufferToOffset:(long long)arg1;
- (id)initWithData:(id)arg1 offset:(unsigned long)arg2 length:(unsigned long)arg3;
- (void)close;
- (long long)offset;
- (id)initWithData:(id)arg1;
- (void)dealloc;

@end
