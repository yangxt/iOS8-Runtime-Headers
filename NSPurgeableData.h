/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPurgeableData : NSMutableData <NSDiscardableContent> {
    unsigned int _length;
    int _accessCount;
    unsigned char _private[32];
    void *_reserved;
}


- (void*)mutableBytes;
- (BOOL)isContentDiscarded;
- (void)discardContentIfPossible;
- (void)endContentAccess;
- (BOOL)beginContentAccess;
- (void)setLength:(unsigned int)arg1;
- (const void*)bytes;
- (unsigned int)length;
- (id)initWithCapacity:(unsigned int)arg1;
- (id)description;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (void)_destroyMemory;
- (id)initWithBytes:(void*)arg1 length:(unsigned int)arg2 copy:(BOOL)arg3 deallocator:(id)arg4;

@end