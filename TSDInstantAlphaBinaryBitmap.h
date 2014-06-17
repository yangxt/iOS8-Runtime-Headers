/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDInstantAlphaBinaryBitmap : NSObject  {
    int mWidth;
    int mHeight;
    int mRowBytes;
    char *mData;
}

@property(readonly) int width;
@property(readonly) int rowBytes;
@property(readonly) int height;
@property(readonly) char * data;


- (id)initWithWidth:(int)arg1 height:(int)arg2;
- (int)height;
- (int)width;
- (char *)data;
- (void)dealloc;
- (int)rowBytes;
- (id)medianBitmap;
- (void)unionWithBitmap:(id)arg1;
- (id)initWithWidth:(int)arg1 height:(int)arg2 rowBytes:(int)arg3;

@end