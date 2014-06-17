/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UILabel, UIImageView, UIView;

@interface PLPhotoTileBadgeView : UIView  {
    int _style;
    int _numberOfPhotos;
    UIView *__backgroundView;
    UIImageView *__badgeImageView;
    UILabel *__textLabel;
}

@property int style;
@property int numberOfPhotos;
@property(readonly) UIView * _backgroundView;
@property(readonly) UIImageView * _badgeImageView;
@property(readonly) UILabel * _textLabel;


- (id)_badgeImageView;
- (void)setNumberOfPhotos:(int)arg1;
- (void)_commonPLPhotoTileBadgeViewInitialization;
- (void)_updateBadgeText;
- (int)numberOfPhotos;
- (id)_textLabel;
- (void)setStyle:(int)arg1;
- (int)style;
- (id)_backgroundView;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (void)setAlpha:(float)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end