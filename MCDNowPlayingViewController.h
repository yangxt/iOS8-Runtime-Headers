/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@class UITapGestureRecognizer, <MCDNowPlayingViewControllerDelegate>, <MCDNowPlayingViewControllerDataSource>, MCDPlayModeControlView, MCDNowPlayingView, _MCDNowPlayingHostView, UIViewController, UIColor, MCDTransportControlView;

@interface MCDNowPlayingViewController : UIViewController  {
    BOOL _isScrubbing;
    int _heldAction;
    UIViewController *_transportViewController;
    UIViewController *_playModeViewController;
    BOOL _highTouchMode;
    UIColor *_navbarColor;
    BOOL _navbarHidesShadow;
    _MCDNowPlayingHostView *_viewForSelectingAFirstResponderForKnobSupport;
    MCDTransportControlView *_transportControlView;
    <MCDNowPlayingViewControllerDelegate> *_delegate;
    <MCDNowPlayingViewControllerDataSource> *_dataSource;
    MCDNowPlayingView *_nowPlayingView;
    MCDPlayModeControlView *_playModeControlView;
    UITapGestureRecognizer *_knobPressRecognizer;
    UITapGestureRecognizer *_backPressRecognizer;
}

@property(readonly) MCDTransportControlView * transportControlView;
@property <MCDNowPlayingViewControllerDelegate> * delegate;
@property <MCDNowPlayingViewControllerDataSource> * dataSource;
@property(readonly) MCDNowPlayingView * nowPlayingView;
@property(readonly) MCDPlayModeControlView * playModeControlView;
@property(readonly) UITapGestureRecognizer * knobPressRecognizer;
@property(readonly) UITapGestureRecognizer * backPressRecognizer;


- (id)backPressRecognizer;
- (id)knobPressRecognizer;
- (id)playModeControlView;
- (id)nowPlayingView;
- (void)_fastForwardButtonTouchUp:(id)arg1;
- (void)_fastForwardButtonTouchDown:(id)arg1;
- (void)_leftButtonTouchUp:(id)arg1;
- (void)_leftButtonTouchDown:(id)arg1;
- (void)_playPauseButtonTouchUp:(id)arg1;
- (void)_sendHeldAction;
- (void)_respondToHeldAction;
- (void)_sendAction:(int)arg1 withState:(int)arg2;
- (void)_updateRepeatStateWithType:(unsigned int)arg1;
- (void)_updateShuffleStateWithType:(unsigned int)arg1;
- (void)_updatePlayModesState;
- (void)_updateTransportControl:(id)arg1 withDefaultImage:(id)arg2 actionType:(int)arg3;
- (void)_geniusButtonTouchUp:(id)arg1;
- (void)_shuffleButtonTouchUp:(id)arg1;
- (void)_repeatButtonTouchUp:(id)arg1;
- (void)_initializeTransportControls;
- (void)attemptFirstResponderThing;
- (id)transportControlView;
- (void)updatePlayControls;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)delegate;
- (id)dataSource;
- (void)reloadData;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
