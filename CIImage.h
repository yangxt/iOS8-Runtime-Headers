/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIImage : NSObject <NSCoding, NSCopying> {
    void *_priv;
}

+ (id)imageWithData:(id)arg1;
+ (id)imageWithContentsOfFile:(id)arg1;
+ (id)imageWithCGImage:(struct CGImage { }*)arg1;
+ (id)imageWithCGImage:(struct CGImage { }*)arg1 options:(id)arg2;
+ (id)imageWithContentsOfURL:(id)arg1;
+ (id)imageWithData:(id)arg1 options:(id)arg2;
+ (id)noiseImagePadded;
+ (id)noiseImage;
+ (id)imageWithColor:(id)arg1;
+ (id)imageWithCVPixelBuffer:(struct __CVBuffer { }*)arg1;
+ (id)imageWithTexture:(unsigned int)arg1 size:(struct CGSize { float x1; float x2; })arg2 options:(id)arg3;
+ (id)imageWithTexture:(unsigned int)arg1 size:(struct CGSize { float x1; float x2; })arg2 flipped:(BOOL)arg3 colorSpace:(struct CGColorSpace { }*)arg4;
+ (id)imageWithBitmapData:(id)arg1 bytesPerRow:(unsigned long)arg2 size:(struct CGSize { float x1; float x2; })arg3 format:(int)arg4 options:(id)arg5;
+ (id)imageWithIOSurface:(struct __IOSurface { }*)arg1;
+ (id)emptyImage;
+ (id)imageWithContentsOfFile:(id)arg1 options:(id)arg2;
+ (id)imageWithContentsOfURL:(id)arg1 options:(id)arg2;
+ (id)imageWithCVPixelBuffer:(struct __CVBuffer { }*)arg1 options:(id)arg2;
+ (id)imageWithIOSurface:(struct __IOSurface { }*)arg1 options:(id)arg2;
+ (id)imageWithInternalRepresentation:(void*)arg1;
+ (id)imageWithBitmapData:(id)arg1 bytesPerRow:(unsigned long)arg2 size:(struct CGSize { float x1; float x2; })arg3 format:(int)arg4 colorSpace:(struct CGColorSpace { }*)arg5;
+ (float)pu_angleFromOrientation:(int)arg1;
+ (int)pu_orientationFromAngle:(float)arg1;

- (id)smartColorAdjustmentsForValue:(double)arg1 andStatistics:(id)arg2;
- (id)smartColorStatistics;
- (id)smartToneAdjustmentsForValue:(double)arg1 andStatistics:(id)arg2;
- (id)smartToneStatistics;
- (id)imageByCroppingToRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)imageByApplyingTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (id)TIFFRepresentation;
- (id)initWithContentsOfURL:(id)arg1;
- (id)properties;
- (id)initWithData:(id)arg1 options:(id)arg2;
- (id)initWithColor:(id)arg1;
- (id)initWithCGImage:(struct CGImage { }*)arg1 options:(id)arg2;
- (id)initWithIOSurface:(struct __IOSurface { }*)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })extent;
- (id)initWithCGImage:(struct CGImage { }*)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithTexture:(unsigned int)arg1 size:(struct CGSize { float x1; float x2; })arg2 flipped:(BOOL)arg3 colorSpace:(struct CGColorSpace { }*)arg4;
- (id)imageByApplyingOrientation:(int)arg1;
- (id)autoAdjustmentFiltersWithOptions:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (struct CGPoint { float x1; float x2; })calcIntersection:(struct CGPoint { float x1; float x2; })arg1 slope1:(struct CGPoint { float x1; float x2; })arg2 pt2:(struct CGPoint { float x1; float x2; })arg3 slope2:(struct CGPoint { float x1; float x2; })arg4;
- (id)autoRotateFilterFFT:(id)arg1 image:(struct CGImage { }*)arg2 inputRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (id)smartBlackAndWhiteAdjustmentsForValue:(double)arg1 andStatistics:(id)arg2;
- (id)smartBlackAndWhiteStatistics;
- (id)autoRedEyeFilterWithFeatures:(id)arg1 options:(id)arg2;
- (id)autoRedEyeFilterWithFeatures:(id)arg1 imageProperties:(id)arg2 options:(id)arg3;
- (id)autoAdjustmentFilters;
- (id)_dictForFeature:(id)arg1 scale:(float)arg2 imageHeight:(float)arg3;
- (id)autoAdjustmentFiltersWithImageProperties:(id)arg1 options:(id)arg2;
- (void)getAutocropRect:(id)arg1 rotateXfrm:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2 inputImageRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 clipRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg4;
- (id)getAutoRotateFilter:(id)arg1 ciImage:(id)arg2 rgbRows:(id)arg3 inputRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 rotateCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg5;
- (id)_scaleImageToMaxDimension:(unsigned int)arg1;
- (id)_autoRedEyeFilterWithFeatures:(id)arg1 imageProperties:(id)arg2 context:(id)arg3 options:(id)arg4;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })regionOfInterestForImage:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)imageByApplyingFilter:(id)arg1 withInputParameters:(id)arg2;
- (id)_imageByMatchingColorSpaceWorkingSpace:(struct CGColorSpace { }*)arg1;
- (id)_imageByMatchingWorkingSpaceToColorSpace:(struct CGColorSpace { }*)arg1;
- (id)_imageByApplyingBlur:(double)arg1;
- (id)_imageByApplyingGamma:(double)arg1;
- (id)_imageByUnpremultiplying;
- (id)_imageByPremultiplying;
- (id)imageByClampingToExtent;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { }*)arg1;
- (id)initWithContentsOfFile:(id)arg1 options:(id)arg2;
- (id)initWithContentsOfURL:(id)arg1 options:(id)arg2;
- (id)initWithCGImageSource:(struct CGImageSource { }*)arg1 index:(unsigned long)arg2 options:(id)arg3;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })imageTransformForOrientation:(int)arg1;
- (id)initWithColorR:(float)arg1 G:(float)arg2 B:(float)arg3 A:(float)arg4;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { }*)arg1 options:(id)arg2;
- (id)initWithTexture:(unsigned int)arg1 size:(struct CGSize { float x1; float x2; })arg2 options:(id)arg3;
- (id)_initWithBitmapData:(id)arg1 bytesPerRow:(unsigned long)arg2 size:(struct CGSize { float x1; float x2; })arg3 format:(int)arg4 options:(id)arg5;
- (id)initWithBitmapData:(id)arg1 bytesPerRow:(unsigned long)arg2 size:(struct CGSize { float x1; float x2; })arg3 format:(int)arg4 colorSpace:(struct CGColorSpace { }*)arg5;
- (id)initWithBitmapData:(id)arg1 bytesPerRow:(unsigned long)arg2 size:(struct CGSize { float x1; float x2; })arg3 format:(int)arg4 options:(id)arg5;
- (id)_initNaiveWithCGImage:(struct CGImage { }*)arg1 options:(id)arg2;
- (id)_initWithIOSurface:(struct __IOSurface { }*)arg1 options:(id)arg2;
- (id)initWithIOSurface:(struct __IOSurface { }*)arg1 options:(id)arg2;
- (id)_initWithInternalRepresentation:(void*)arg1;
- (void*)_internalRepresentation;
- (id)filteredImage:(id)arg1 keysAndValues:(id)arg2;
- (id)initWithImage:(id)arg1 options:(id)arg2;
- (id)initWithImage:(id)arg1;
- (id)imageToAlphaChannel;
- (id)imageFromAlphaChannel;
- (id)moveBlueToAlpha;
- (id)moveAlphaToBlue;
- (BOOL)pu_getSuggestionForCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 straightenAngle:(float*)arg2 orientation:(int)arg3;
- (id)pu_loadAdjustments:(id)arg1 orientation:(int)arg2;

@end
