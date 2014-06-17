/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class UIView, NSTimer, MPVolumeController, UISlider;

@interface MPUMediaControlsVolumeView : UIView <MPVolumeControllerDelegate> {
    UIView *_warningView;
    BOOL _warningIndicatorBlinking;
    NSTimer *_warningBlinkTimer;
    NSTimer *_volumeCommitTimer;
    double _timeStoppedTracking;
    int _style;
    UISlider *_slider;
    MPVolumeController *_volumeController;
}

@property(readonly) int style;
@property(readonly) UISlider * slider;
@property(readonly) MPVolumeController * volumeController;


- (id)volumeController;
- (id)_warningTrackImage;
- (void)_commitCurrentVolumeValue;
- (void)_removeVolumeSliderInertia;
- (BOOL)_volumeSliderDynamicsEnabled;
- (void)_beginVolumeCommitTimer;
- (BOOL)_shouldStartBlinkingVolumeWarningIndicator;
- (void)_stopVolumeCommitTimer;
- (void)_stopBlinkingWarningView;
- (void)updateSystemVolumeLevel;
- (void)_volumeSliderStoppedChanging:(id)arg1;
- (void)_volumeSliderValueChanged:(id)arg1;
- (void)_volumeSliderBeganChanging:(id)arg1;
- (id)_createVolumeSliderView;
- (id)slider;
- (void).cxx_destruct;
- (id)initWithStyle:(int)arg1;
- (int)style;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)volumeController:(id)arg1 EUVolumeLimitEnforcedDidChange:(BOOL)arg2;
- (void)volumeController:(id)arg1 EUVolumeLimitDidChange:(float)arg2;
- (void)volumeController:(id)arg1 volumeWarningStateDidChange:(int)arg2;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
- (void)_blinkWarningView;
- (void)_beginBlinkingWarningView;
- (void)_layoutVolumeWarningView;

@end