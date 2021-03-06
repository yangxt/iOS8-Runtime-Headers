/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FaceCore.framework/FaceCore
 */

@interface FCRImage : NSObject  {
    unsigned int width;
    unsigned int height;
    unsigned int bytesPerRow;
    char *rawDataBuffer;
    char *alignedDataBuffer;
    BOOL freeBufferWhenDone;
}

@property unsigned int width;
@property unsigned int height;
@property unsigned int bytesPerRow;


- (char *)getAlignedImageData;
- (id)initWithWidth:(unsigned int)arg1 height:(unsigned int)arg2 bytesPerRow:(unsigned int)arg3 buffer:(char *)arg4 freeBufferWhenDone:(BOOL)arg5;
- (void)setHeight:(unsigned int)arg1;
- (void)setWidth:(unsigned int)arg1;
- (unsigned int)height;
- (unsigned int)width;
- (unsigned int)bytesPerRow;
- (void)dealloc;
- (void)setBytesPerRow:(unsigned int)arg1;

@end
