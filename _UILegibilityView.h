/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, UIImage, CAFilter, _UILegibilitySettings;

@interface _UILegibilityView : UIView  {
    BOOL _hidesImage;
    _UILegibilitySettings *_settings;
    UIImage *_image;
    UIImage *_shadowImage;
    float _strength;
    UIImageView *_imageView;
    UIImageView *_shadowImageView;
    CAFilter *_imageColorFilter;
    CAFilter *_shadowImageColorFilter;
    int _options;
}

@property(readonly) int style;
@property(retain) _UILegibilitySettings * settings;
@property(retain) UIImage * image;
@property(retain) UIImage * shadowImage;
@property float strength;
@property BOOL hidesImage;
@property(readonly) BOOL usesColorFilters;
@property(retain) UIImageView * imageView;
@property(retain) UIImageView * shadowImageView;
@property(retain) CAFilter * imageColorFilter;
@property(retain) CAFilter * shadowImageColorFilter;
@property int options;


- (BOOL)hidesImage;
- (void)updateForChangedSettings:(id)arg1;
- (void)setStyle:(int)arg1 image:(id)arg2 shadowImage:(id)arg3;
- (void)setHidesImage:(BOOL)arg1;
- (BOOL)usesSecondaryColor;
- (void)updateImage;
- (void)setShadowImageColorFilter:(id)arg1;
- (id)shadowImageColorFilter;
- (id)drawingColor;
- (void)setImageColorFilter:(id)arg1;
- (id)imageColorFilter;
- (BOOL)usesColorFilters;
- (void)setShadowImageView:(id)arg1;
- (id)shadowImageView;
- (void)setSettings:(id)arg1 image:(id)arg2 shadowImage:(id)arg3;
- (id)initWithSettings:(id)arg1 strength:(float)arg2 image:(id)arg3 shadowImage:(id)arg4 options:(int)arg5;
- (id)initWithStyle:(int)arg1 image:(id)arg2 shadowImage:(id)arg3;
- (void)setStrength:(float)arg1;
- (float)strength;
- (id)initWithStyle:(int)arg1 image:(id)arg2;
- (id)initWithSettings:(id)arg1 strength:(float)arg2 image:(id)arg3;
- (void)setOptions:(int)arg1;
- (void)setSettings:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setImage:(id)arg1 shadowImage:(id)arg2;
- (id)initWithSettings:(id)arg1 strength:(float)arg2 image:(id)arg3 shadowImage:(id)arg4;
- (id)imageView;
- (void)setShadowImage:(id)arg1;
- (id)shadowImage;
- (int)style;
- (id)image;
- (id)settings;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (void)setImage:(id)arg1;
- (int)options;
- (void)dealloc;

@end