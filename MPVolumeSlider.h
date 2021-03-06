/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAVRoutingController, MPVolumeController, UIImageView, UILabel, NSTimer, UIView, UIImage, NSString, MPAVController;

@interface MPVolumeSlider : UISlider <MPVolumeControllerDelegate> {
    MPVolumeController *_volumeController;
    NSTimer *_commitTimer;
    UILabel *_routeNameLabel;
    int _style;
    UIImageView *_thumbImageView;
    UIImageView *_thumbMaskImageView;
    BOOL _isOffScreen;
    BOOL _forcingOffscreenVisibility;
    BOOL _thumbIsDefault;
    UIView *_volumeWarningView;
    BOOL _volumeWarningBlinking;
    UIImage *_volumeWarningTrackImage;
    MPAVRoutingController *_routingController;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _hitRectInsets;
}

@property(readonly) int style;
@property(retain) MPAVController * player;
@property(copy) NSString * volumeAudioCategory;
@property(retain) UIImage * volumeWarningTrackImage;
@property(setter=_setIsOffScreen:) BOOL _isOffScreen;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } hitRectInsets;


- (id)player;
- (void).cxx_destruct;
- (void)setThumbImage:(id)arg1 forState:(unsigned int)arg2;
- (void)setValue:(float)arg1 animated:(BOOL)arg2;
- (float)maximumValue;
- (float)minimumValue;
- (id)createThumbView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })thumbRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 trackRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 value:(float)arg3;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;
- (void)didMoveToSuperview;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })hitRect;
- (int)style;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)setAlpha:(float)arg1;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setPlayer:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)dealloc;
- (id)volumeWarningTrackImage;
- (BOOL)_isOffScreen;
- (void)setVolumeWarningTrackImage:(id)arg1;
- (void)volumeController:(id)arg1 EUVolumeLimitEnforcedDidChange:(BOOL)arg2;
- (void)volumeController:(id)arg1 EUVolumeLimitDidChange:(float)arg2;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
- (void)_blinkWarningView;
- (id)_newVolumeWarningView;
- (void)_routeNameLabelAnimationDidEnd;
- (id)_thumbImageForStyle:(int)arg1;
- (void)_beginBlinkingWarningView;
- (void)setVolumeAudioCategory:(id)arg1;
- (id)volumeAudioCategory;
- (void)_availableRoutesDidChangeNotification:(id)arg1;
- (void)_layoutForAvailableRoutes;
- (void)_endTracking;
- (void)_commitVolumeChange;
- (void)_layoutVolumeWarningView;
- (void)_endBlinkingWarningView;
- (id)_maxTrackImageForStyle:(int)arg1;
- (id)_minTrackImageForStyle:(int)arg1;
- (void)_resetThumbImageForState:(unsigned int)arg1;
- (void)_setIsOffScreen:(BOOL)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })hitRectInsets;
- (void)setHitRectInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_isExternalPlaybackActiveDidChangeNotification:(id)arg1;

@end
