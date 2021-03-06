/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@class UIImageView, UILabel, UIView, UIImage, NSString;

@interface PTSImagePreviewCell : UITableViewCell  {
    UIImageView *_imageViewOnLight;
    UIImageView *_imageViewOnDark;
    UIView *_lightBackground;
    UIView *_darkBackground;
    UILabel *_imageNameLabel;
    UIImage *_previewImage;
}

@property(retain) UIImage * previewImage;
@property(retain) NSString * imageName;

+ (void)_getLeftFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 rightFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 forImage:(id)arg3 inBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;
+ (float)heightForImage:(id)arg1;

- (id)imageName;
- (void)setImageName:(id)arg1;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (void)setPreviewImage:(id)arg1;
- (id)previewImage;

@end
