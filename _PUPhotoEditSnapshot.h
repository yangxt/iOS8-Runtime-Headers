/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSData, PHAdjustmentData;

@interface _PUPhotoEditSnapshot : NSObject  {
    int _workImageVersion;
    PHAdjustmentData *_adjustmentData;
    NSData *_imageData;
    NSData *_baseImageData;
}

@property int workImageVersion;
@property(retain) PHAdjustmentData * adjustmentData;
@property(retain) NSData * imageData;
@property(retain) NSData * baseImageData;


- (id)adjustmentData;
- (void)setImageData:(id)arg1;
- (id)imageData;
- (void).cxx_destruct;
- (id)baseImageData;
- (void)setBaseImageData:(id)arg1;
- (void)setAdjustmentData:(id)arg1;
- (void)setWorkImageVersion:(int)arg1;
- (int)workImageVersion;

@end
