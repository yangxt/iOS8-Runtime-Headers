/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadarCompose.framework/RadarCompose
 */

@class UILabel, UIImageView, UIActivityIndicatorView;

@interface RCImageViewCell : UICollectionViewCell  {
    UIActivityIndicatorView *_spinner;
    UILabel *_label;
    UIImageView *_imageView;
}

@property(retain) UILabel * label;
@property(retain) UIImageView * imageView;


- (void)setIdle;
- (void)setBusy;
- (void).cxx_destruct;
- (void)setImageView:(id)arg1;
- (void)setLabel:(id)arg1;
- (id)imageView;
- (id)label;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end