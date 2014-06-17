/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class MPURatingControl, NSString;

@interface MusicFlipsidePlaylistTrackTableViewCell : MusicSongListTableViewCell  {
    BOOL _showsRatingControl;
    MPURatingControl *_ratingControl;
}

@property(copy) NSString * durationText;
@property float maximumDurationWidth;
@property BOOL showsRatingControl;
@property(copy) NSString * trackNumberText;
@property(readonly) MPURatingControl * ratingControl;

+ (Class)contentViewClass;
+ (struct CGSize { float x1; float x2; })sizeForDuration:(double)arg1;

- (id)_flipsidePlaylistTrackCellContentView;
- (BOOL)showsRatingControl;
- (void)setContentBoundsEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (id)trackNumberText;
- (id)durationText;
- (void)setTrackNumberText:(id)arg1;
- (void)setMaximumDurationWidth:(float)arg1;
- (void)setDurationText:(id)arg1;
- (float)maximumDurationWidth;
- (void)setShowsRatingControl:(BOOL)arg1 animated:(BOOL)arg2;
- (id)ratingControl;
- (void)setShowsRatingControl:(BOOL)arg1;
- (void).cxx_destruct;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;

@end