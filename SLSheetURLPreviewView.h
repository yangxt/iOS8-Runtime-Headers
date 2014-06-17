/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@class SLURLPreviewGenerator, CALayer, UIImage;

@interface SLSheetURLPreviewView : SLSheetImagePreviewView  {
    UIImage *_shadowImage;
    SLURLPreviewGenerator *_webPreviewGenerator;
    CALayer *_backgroundLayer;
}


- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)generateAutomaticPreviewForURL:(id)arg1;
- (id)init;

@end