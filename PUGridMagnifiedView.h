/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class UIImage, UIImageView, NSIndexPath;

@interface PUGridMagnifiedView : UIView  {
    UIImageView *_imageView;
    NSIndexPath *_itemIndexPath;
    UIImage *_itemImage;
    struct CGSize { 
        float width; 
        float height; 
    } _magnifiedImageSize;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _magnifiedDragEdgeInsets;
}

@property struct CGSize { float x1; float x2; } magnifiedImageSize;
@property(retain) NSIndexPath * itemIndexPath;
@property(retain) UIImage * itemImage;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } magnifiedDragEdgeInsets;
@property(retain) UIImageView * imageView;


- (void).cxx_destruct;
- (void)setShadowRadius:(float)arg1;
- (void)setShadowOpacity:(float)arg1;
- (void)setImageView:(id)arg1;
- (id)imageView;
- (void)setShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setMagnifiedDragEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setItemImage:(id)arg1;
- (void)setMagnifiedImageSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageWindFrame;
- (void)hideAnimate:(BOOL)arg1;
- (void)setImageAnimate:(BOOL)arg1;
- (void)moveToLocation:(struct CGPoint { float x1; float x2; })arg1 animate:(BOOL)arg2;
- (void)magnifyFromImageFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toLocation:(struct CGPoint { float x1; float x2; })arg2 animate:(BOOL)arg3;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })magnifiedDragEdgeInsets;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })pinFrameToParentFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })magnifiedImageSize;
- (id)itemImage;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })magnifiedFrameForParentLocation:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })viewFrameForPhotoFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })photoFrameForViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)itemIndexPath;
- (void)setItemIndexPath:(id)arg1;

@end
