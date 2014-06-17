/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class UIView, UIImageView, UIImage;

@interface PUCroppingImageView : UIView  {
    UIImageView *_imageView;
    UIImage *_image;
    unsigned int _imageFillMode;
    UIView *_accessoryView;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _accessoryViewInsets;
}

@property(retain) UIImage * image;
@property unsigned int imageFillMode;
@property(retain) UIView * accessoryView;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } accessoryViewInsets;
@property BOOL antialiasEdges;


- (void).cxx_destruct;
- (id)accessoryView;
- (void)setAccessoryView:(id)arg1;
- (id)image;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (void)setImage:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })accessoryViewInsets;
- (unsigned int)imageFillMode;
- (void)setAntialiasEdges:(BOOL)arg1;
- (BOOL)antialiasEdges;
- (void)setAccessoryViewInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setImageFillMode:(unsigned int)arg1;
- (void)_updateLayout;
- (void)_configure;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end