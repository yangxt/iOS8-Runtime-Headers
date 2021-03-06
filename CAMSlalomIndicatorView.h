/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class UILabel;

@interface CAMSlalomIndicatorView : UIView  {
    int _framesPerSecond;
    UILabel *__framerateLabel;
}

@property int framesPerSecond;
@property(readonly) UILabel * _framerateLabel;


- (id)_framerateLabel;
- (int)framesPerSecond;
- (void)setFramesPerSecond:(int)arg1;
- (void)_updateFramerateLabel;
- (void)_commonCAMSlalomIndicatorViewInitialization;
- (void).cxx_destruct;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;

@end
