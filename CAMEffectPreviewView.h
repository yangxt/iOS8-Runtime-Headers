/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class UIView, NSString, UILabel;

@interface CAMEffectPreviewView : UICollectionViewCell  {
    UILabel *_nameLabel;
    UIView *_thumbnailView;
    UIView *_dimmingView;
    struct CGSize { 
        float width; 
        float height; 
    } _thumbnailSize;
}

@property struct CGSize { float x1; float x2; } thumbnailSize;
@property(retain) UIView * thumbnailView;
@property(copy) NSString * text;

+ (float)defaultSpacing;
+ (struct CGSize { float x1; float x2; })sizeForImageSize:(struct CGSize { float x1; float x2; })arg1;
+ (struct CGSize { float x1; float x2; })thumbnailSizeForImageSize:(struct CGSize { float x1; float x2; })arg1;

- (void)setThumbnailSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })thumbnailSize;
- (void)_updateAppearance;
- (void).cxx_destruct;
- (id)thumbnailView;
- (void)setThumbnailView:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
