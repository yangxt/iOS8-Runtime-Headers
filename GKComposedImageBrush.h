/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@class UIImage;

@interface GKComposedImageBrush : GKImageBrush  {
    UIImage *_maskImage;
    UIImage *_backgroundImage;
    UIImage *_overlayImage;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _maskInsets;
}

@property(retain) UIImage * maskImage;
@property(retain) UIImage * backgroundImage;
@property(retain) UIImage * overlayImage;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } maskInsets;


- (void)setMaskInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })maskInsets;
- (void)setOverlayImage:(id)arg1;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withContext:(struct CGContext { }*)arg2 input:(id)arg3;
- (float)scaleForInput:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeForInput:(id)arg1;
- (void)setMaskImage:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (id)backgroundImage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)overlayImage;
- (id)maskImage;

@end