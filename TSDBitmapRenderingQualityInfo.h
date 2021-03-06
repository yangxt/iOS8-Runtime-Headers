/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableDictionary;

@interface TSDBitmapRenderingQualityInfo : NSObject  {
    int mQuality;
    float mCanvasScale;
    NSMutableDictionary *mImageMap;
}

@property(readonly) int quality;


- (int)quality;
- (void)dealloc;
- (struct CGImage { }*)degradedImageRefForProvider:(id)arg1 ofSize:(struct CGSize { float x1; float x2; })arg2;
- (void)cacheProvider:(id)arg1 ofSize:(struct CGSize { float x1; float x2; })arg2;
- (id)initWithQuality:(int)arg1 canvasScale:(float)arg2;

@end
