/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface AVCaptureStillImageRequest_FigRecorder : NSObject <NSCopying> {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _sbufCompletionBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _iosurfaceCompletionBlock;

    int _stillImageOrientation;
    BOOL _stillImageMirrored;
    struct CGSize { 
        float width; 
        float height; 
    } _previewImageSize;
    unsigned long _imageDataFormatType;
    int _HDRMode;
    BOOL _noiseReductionEnabled;
    BOOL _suspendsVideoProcessing;
    unsigned long _shutterSoundID;
    BOOL _jpegQualitySpecified;
    float _jpegQuality;
}

@property(copy) id sbufCompletionBlock;
@property(copy) id iosurfaceCompletionBlock;
@property int stillImageOrientation;
@property(getter=isStillImageMirrored) BOOL stillImageMirrored;
@property struct CGSize { float x1; float x2; } previewImageSize;
@property unsigned long imageDataFormatType;
@property float jpegQuality;
@property BOOL jpegQualitySpecified;
@property int HDRMode;
@property BOOL noiseReductionEnabled;
@property BOOL suspendsVideoProcessing;
@property unsigned long shutterSoundID;

+ (id)request;

- (void)setHDRMode:(int)arg1;
- (int)HDRMode;
- (void)setNoiseReductionEnabled:(BOOL)arg1;
- (BOOL)noiseReductionEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)setSuspendsVideoProcessing:(BOOL)arg1;
- (BOOL)suspendsVideoProcessing;
- (void)setStillImageOrientation:(int)arg1;
- (int)stillImageOrientation;
- (void)setStillImageMirrored:(BOOL)arg1;
- (BOOL)isStillImageMirrored;
- (void)setJpegQualitySpecified:(BOOL)arg1;
- (void)setJpegQuality:(float)arg1;
- (void)setImageDataFormatType:(unsigned long)arg1;
- (void)setPreviewImageSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)jpegQualitySpecified;
- (float)jpegQuality;
- (unsigned long)imageDataFormatType;
- (struct CGSize { float x1; float x2; })previewImageSize;
- (void)setShutterSoundID:(unsigned long)arg1;
- (unsigned long)shutterSoundID;
- (void)setIosurfaceCompletionBlock:(id)arg1;
- (id)iosurfaceCompletionBlock;
- (void)setSbufCompletionBlock:(id)arg1;
- (id)sbufCompletionBlock;

@end
