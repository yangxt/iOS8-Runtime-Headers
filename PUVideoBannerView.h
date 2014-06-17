/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class UIImageView, UIImage, NSString, UILabel;

@interface PUVideoBannerView : UIView  {
    UIImage *_badgeImage;
    NSString *_bannerText;
    UIImageView *_backgroundView;
    UIImageView *_badgeImageView;
    UILabel *_textLabel;
    BOOL _flattensSubviews;
    unsigned int _videoSubtypes;
    double _videoDuration;
}

@property(readonly) double videoDuration;
@property(readonly) unsigned int videoSubtypes;
@property BOOL flattensSubviews;


- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)flattensSubviews;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_badgeImageInsetsForVideoSubtypes:(unsigned int)arg1;
- (void)_updateFlattenSubviews;
- (void)_setBadgeImage:(id)arg1 bannerText:(id)arg2;
- (id)_badgeImageForVideoSubtype:(unsigned int)arg1;
- (unsigned int)videoSubtypes;
- (double)videoDuration;
- (void)setVideoDuration:(double)arg1 videoSubtypes:(unsigned int)arg2;
- (void)setFlattensSubviews:(BOOL)arg1;

@end