/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class NSString;

@interface CIQRCodeGenerator : CICodeGenerator  {
    NSString *inputCorrectionLevel;
}

@property(copy) NSString * inputCorrectionLevel;

+ (id)customAttributes;

- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)inputCorrectionLevel;
- (void)setInputCorrectionLevel:(id)arg1;
- (struct CGImage { }*)outputCGImage;

@end