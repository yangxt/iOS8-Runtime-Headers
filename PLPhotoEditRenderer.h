/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class CIImage, NSObject<OS_dispatch_queue>, CIContext, PLPhotoEditModel, NSDictionary, CIFilter, EAGLContext;

@interface PLPhotoEditRenderer : NSObject  {
    NSObject<OS_dispatch_queue> *__renderingQueue;
    CIContext *_generatingCIContext;
    CIContext *_drawingCIContext;
    EAGLContext *_lastUsedEAGLContext;
    CIFilter *_effectFilter;
    CIFilter *_smartToneFilter;
    CIFilter *_smartColorFilter;
    CIFilter *_redEyeFilter;
    CIImage *_cachedEditedImage;
    PLPhotoEditModel *_photoEditModelInCachedEditedImage;
    NSDictionary *__smartToneAdjustments;
    float _smartToneLevelInCachedAdjustments;
    NSDictionary *_smartToneStatisticsICachedAdjustments;
    NSDictionary *__smartColorAdjustments;
    float _smartColorLevelInCachedAdjustments;
    NSDictionary *_smartColorStatisticsICachedAdjustments;
    CIImage *_originalImage;
    PLPhotoEditModel *_photoEditModel;
    unsigned int _renderMode;
}

@property(retain) CIImage * originalImage;
@property(retain) PLPhotoEditModel * photoEditModel;
@property unsigned int renderMode;
@property(retain,readonly) CIImage * outputImage;
@property(readonly) struct CGSize { float x1; float x2; } outputImageSize;
@property(readonly) double smartToneBaseBrightness;
@property(readonly) double smartToneBaseContrast;
@property(readonly) double smartToneBaseExposure;
@property(readonly) double smartToneBaseHighlights;
@property(readonly) double smartToneBaseShadows;
@property(readonly) double smartColorBaseContrast;
@property(readonly) double smartColorBaseVibrancy;


- (unsigned int)renderMode;
- (id)photoEditModel;
- (double)smartColorBaseVibrancy;
- (double)smartColorBaseContrast;
- (double)smartToneBaseShadows;
- (double)smartToneBaseHighlights;
- (double)smartToneBaseExposure;
- (double)smartToneBaseContrast;
- (double)smartToneBaseBrightness;
- (struct CGSize { float x1; float x2; })outputImageSize;
- (void)setRenderMode:(unsigned int)arg1;
- (void)setPhotoEditModel:(id)arg1;
- (void)drawEditedImageInContext:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 viewportWidth:(int)arg3 viewportHeight:(int)arg4;
- (void)generateEditedImageWithCompletion:(id)arg1;
- (id)_renderingQueue;
- (id)_editedImage;
- (id)_smartColorAdjustments;
- (id)_smartToneAdjustments;
- (id)outputImage;
- (void)_invalidateCachedFilters;
- (id)originalImage;
- (void)setOriginalImage:(id)arg1;
- (void)dealloc;
- (id)init;

@end
