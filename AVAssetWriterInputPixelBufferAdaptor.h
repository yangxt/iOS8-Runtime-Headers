/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetWriterInputPixelBufferAdaptorInternal, AVAssetWriterInput, NSDictionary;

@interface AVAssetWriterInputPixelBufferAdaptor : NSObject  {
    AVAssetWriterInputPixelBufferAdaptorInternal *_internal;
}

@property(readonly) AVAssetWriterInput * assetWriterInput;
@property(readonly) NSDictionary * sourcePixelBufferAttributes;
@property(readonly) struct __CVPixelBufferPool { }* pixelBufferPool;

+ (id)keyPathsForValuesAffectingPixelBufferPool;
+ (id)assetWriterInputPixelBufferAdaptorWithAssetWriterInput:(id)arg1 sourcePixelBufferAttributes:(id)arg2;

- (id)description;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)assetWriterInput;
- (id)initWithAssetWriterInput:(id)arg1 sourcePixelBufferAttributes:(id)arg2;
- (BOOL)appendPixelBuffer:(struct __CVBuffer { }*)arg1 withPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (struct __CVPixelBufferPool { }*)pixelBufferPool;
- (id)sourcePixelBufferAttributes;

@end
