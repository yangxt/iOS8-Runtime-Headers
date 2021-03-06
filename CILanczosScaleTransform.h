/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, NSNumber;

@interface CILanczosScaleTransform : CIFilter  {
    CIImage *inputImage;
    NSNumber *inputScale;
    NSNumber *inputAspectRatio;
}

@property(retain) CIImage * inputImage;
@property(retain) NSNumber * inputScale;
@property(retain) NSNumber * inputAspectRatio;

+ (id)customAttributes;

- (id)outputImage;
- (void)setInputScale:(id)arg1;
- (id)inputScale;
- (void)setDefaults;
- (id)inputImage;
- (id)inputAspectRatio;
- (void)setInputAspectRatio:(id)arg1;
- (BOOL)_isIdentity;
- (void)setInputImage:(id)arg1;

@end
