/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureMetadataInputInternal;

@interface AVCaptureMetadataInput : AVCaptureInput  {
    AVCaptureMetadataInputInternal *_internal;
}

+ (id)metadataInputWithFormatDescription:(struct opaqueCMFormatDescription { }*)arg1 clock:(struct OpaqueCMClock { }*)arg2;

- (id)sourceID;
- (id)initWithFormatDescription:(struct opaqueCMFormatDescription { }*)arg1 clock:(struct OpaqueCMClock { }*)arg2;
- (struct OpaqueCMClock { }*)clock;
- (void)dealloc;
- (id)init;
- (BOOL)appendTimedMetadataGroup:(id)arg1 error:(id*)arg2;
- (id)ports;

@end