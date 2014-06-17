/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@class NSLayoutConstraint, UILabel, UIButton, UIView, AVScrubber, NSString, AVLoadingIndicatorView, NSMutableArray, NSArray;

@interface AVEmbeddedPlaybackControlsViewController : AVPlaybackControlsViewController  {
    unsigned int _showsLoadingIndicator : 1;
    unsigned int _playing : 1;
    unsigned int _scrubberEnabled : 1;
    NSArray *_scrubberLoadedTimeRanges;
    unsigned int _playPauseButtonEnabled : 1;
    unsigned int _showsStreamingControls : 1;
    unsigned int _showsMediaSelectionButton : 1;
    NSString *_elapsedTimeLabelText;
    float _scrubberMinimumValue;
    float _scrubberValue;
    float _scrubberMaximumValue;
    NSString *_remainingTimeLabelText;
    UIView *_lowerControlsSubContainerView;
    UIButton *_playPauseButton;
    UILabel *_elapsedTimeLabel;
    AVScrubber *_scrubber;
    UILabel *_remainingTimeLabel;
    UIButton *_mediaSelectionButton;
    UIButton *_fullScreenButton;
    UILabel *_liveStreamingLabel;
    AVLoadingIndicatorView *_loadingIndicatorView;
    UILabel *_scrubInstructionsTitleLabel;
    UILabel *_scrubInstructionsSubtitleLabel;
    NSMutableArray *_layoutConstraints;
    NSLayoutConstraint *_controlsContainerViewHeightLayoutConstraint;
    unsigned int _showsScrubInstructions : 1;
}


- (void)setPlaying:(BOOL)arg1;
- (BOOL)isPlaying;
- (float)scrubberWidth;
- (void).cxx_destruct;
- (void)updateViewConstraints;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)dealloc;
- (void)_hideScrubInstructions;
- (void)_showScrubInstructions;
- (void)_scrubberEndTracking:(id)arg1;
- (void)_scrubberBeginTracking:(id)arg1;
- (void)_manageControlsVisibility;
- (BOOL)showsMediaSelectionButton;
- (void)setShowsLoadingIndicator:(BOOL)arg1;
- (BOOL)showsLoadingIndicator;
- (BOOL)showsStreamingControls;
- (BOOL)isPlayPauseButtonEnabled;
- (id)scrubberLoadedTimeRanges;
- (BOOL)isScrubberEnabled;
- (void)updateScrubberValue:(float)arg1;
- (void)updateRemainingTimeLabel:(id)arg1;
- (void)updateElapsedTimeLabel:(id)arg1;
- (void)setShowsMediaSelectionButton:(BOOL)arg1;
- (void)setShowsStreamingControls:(BOOL)arg1;
- (void)setPlayPauseButtonEnabled:(BOOL)arg1;
- (void)setScrubberLoadedTimeRanges:(id)arg1;
- (void)updateScrubberMaximumValue:(float)arg1;
- (void)updateScrubberMinimumValue:(float)arg1;
- (void)setScrubberEnabled:(BOOL)arg1;

@end