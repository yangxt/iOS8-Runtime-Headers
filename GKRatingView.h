/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class UIImageView, NSLayoutConstraint;

@interface GKRatingView : UIView  {
    float _value;
    UIImageView *_backgroundImageView;
    UIImageView *_foregroundImageView;
    NSLayoutConstraint *_foregroundWidthConstraint;
}

@property float value;
@property(retain) UIImageView * backgroundImageView;
@property(retain) UIImageView * foregroundImageView;
@property(retain) NSLayoutConstraint * foregroundWidthConstraint;


- (void)setForegroundImageView:(id)arg1;
- (void)setBackgroundImageView:(id)arg1;
- (id)foregroundWidthConstraint;
- (id)foregroundImageView;
- (void)setForegroundWidthConstraint:(id)arg1;
- (void)commonSetup;
- (id)backgroundImageView;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (float)value;
- (void)awakeFromNib;
- (void)setValue:(float)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end