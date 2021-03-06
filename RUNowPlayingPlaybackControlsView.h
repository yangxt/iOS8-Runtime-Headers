/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class UIButton, <RUNowPlayingPlaybackControlsViewDelegate><MPTransportControlsTarget>;

@interface RUNowPlayingPlaybackControlsView : MPUNowPlayingPlaybackControlsView  {
    UIButton *_infoButton;
    BOOL _isWide;
}

@property <RUNowPlayingPlaybackControlsViewDelegate><MPTransportControlsTarget> * delegate;
@property(readonly) UIButton * infoButton;


- (BOOL)_shouldAddBottomGap;
- (Class)_transportControlsClass;
- (void)_updateForItemDidChangeAnimated:(BOOL)arg1;
- (void)_updateSizeClass;
- (float)_volumeBottomVerticalInsetPhone;
- (void)_destroyInfoButtonAnimated:(BOOL)arg1;
- (BOOL)_isRadioItem;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_boundsForCenteringCreateActivityIndicatorView;
- (void)setShowingCreateLoadingIndicator:(BOOL)arg1;
- (void)_infoButtonAction:(id)arg1;
- (id)infoButton;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)newProgressIndicator;

@end
