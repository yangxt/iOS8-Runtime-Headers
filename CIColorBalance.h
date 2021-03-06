/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIColor, NSNumber;

@interface CIColorBalance : CIFilter  {
    CIImage *inputImage;
    CIColor *inputColor;
    NSNumber *inputStrength;
    NSNumber *inputWarmth;
    NSNumber *inputDamping;
}

@property(retain) CIImage * inputImage;
@property(retain) CIColor * inputColor;
@property(retain) NSNumber * inputStrength;
@property(retain) NSNumber * inputWarmth;
@property(retain) NSNumber * inputDamping;

+ (id)customAttributes;

- (id)outputImage;
- (void)setDefaults;
- (id)inputImage;
- (id)inputDamping;
- (void)setInputDamping:(id)arg1;
- (id)inputWarmth;
- (void)setInputWarmth:(id)arg1;
- (void)setInputStrength:(id)arg1;
- (id)inputStrength;
- (id)inputColor;
- (void)setInputColor:(id)arg1;
- (id)_kernel;
- (void)setInputImage:(id)arg1;

@end
