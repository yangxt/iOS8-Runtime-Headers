/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UILabel;

@interface EKCurrentTimeMarkerView : UIView  {
    BOOL _showsThumb;
    BOOL _showsLine;
    UILabel *_currentTimeLabel;
}

@property BOOL showsThumb;
@property BOOL showsLine;
@property(readonly) float markerWidth;
@property(readonly) float markerMidHeight;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } currentTimeFrame;
@property(retain) UILabel * currentTimeLabel;

+ (float)_spacingAdjustmentFontSize;
+ (id)timeMarkerFont;

- (void)updateTime;
- (float)markerWidth;
- (void).cxx_destruct;
- (void)tintColorDidChange;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)showsLine;
- (void)setShowsThumb:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })currentTimeFrame;
- (void)invalidateFonts;
- (void)setShowsLine:(BOOL)arg1;
- (float)markerMidHeight;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_lineFrame;
- (BOOL)showsThumb;
- (void)_updateTimeLabelColor;
- (void)_updateTimeWithForce:(BOOL)arg1;
- (id)currentTimeLabel;
- (void)setCurrentTimeLabel:(id)arg1;

@end
