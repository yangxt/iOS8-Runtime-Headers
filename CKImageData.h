/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UIImage, NSData, NSString;

@interface CKImageData : NSObject  {
    struct CGImageSource { } *_imageSource;
    unsigned int _count;
    int _orientation;
    NSData *_data;
}

@property(retain) NSData * data;
@property(readonly) struct CGSize { float x1; float x2; } ptSize;
@property(readonly) struct CGSize { float x1; float x2; } pxSize;
@property(copy,readonly) NSString * UTIType;
@property(copy,readonly) NSString * MIMEType;
@property(readonly) int orientation;
@property(retain,readonly) UIImage * image;
@property(readonly) unsigned int count;

+ (id)UTITypeForData:(id)arg1;

- (id)thumbnailsFitToSize:(struct CGSize { float x1; float x2; })arg1 maxCount:(unsigned int)arg2;
- (id)thumbnailFitToSize:(struct CGSize { float x1; float x2; })arg1;
- (id)_thumbnailFillToSize:(struct CGSize { float x1; float x2; })arg1 atIndex:(unsigned int)arg2;
- (id)_thumbnailFitToSize:(struct CGSize { float x1; float x2; })arg1 atIndex:(unsigned int)arg2;
- (id)thumbnailsFillToSize:(struct CGSize { float x1; float x2; })arg1 maxCount:(unsigned int)arg2;
- (id)durationsWithMaxCount:(unsigned int)arg1;
- (id)thumbnailFillToSizeCropping:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })pxSize;
- (id)thumbnailFillToSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })ptSize;
- (id)UTIType;
- (id)MIMEType;
- (id)image;
- (id)initWithData:(id)arg1;
- (void)setData:(id)arg1;
- (int)orientation;
- (id)data;
- (unsigned int)count;
- (void)dealloc;

@end
