/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMFlipButton : UIButton  {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _tappableEdgeInsets;
}

@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } tappableEdgeInsets;

+ (id)flipButton;

- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })tappableEdgeInsets;
- (void)_commonCAMFlipButtonInitialization;
- (id)_flipImage;
- (void)setTappableEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;

@end
