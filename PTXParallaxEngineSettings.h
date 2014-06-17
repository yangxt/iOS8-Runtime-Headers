/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTXParallaxEngineSettings : _UISettings  {
    BOOL _shiftEnabled;
    BOOL _showIdleIndicator;
    BOOL _jumpEnabled;
    BOOL _playJumpSound;
    BOOL _directionalLockEnabled;
    BOOL _showDirectionalLockIndicators;
    unsigned int _frameInterval;
    float _inputSmoothing;
    float _sigmoidDegree;
    float _shiftSpeed;
    float _shiftDistanceDependence;
    float _idleLeeway;
    float _delayBeforeIdle;
    float _jumpThreshold;
    float _directionalLockThreshold;
    float _directionalLockStickiness;
    float _directionalLockSharpness;
}

@property unsigned int frameInterval;
@property float inputSmoothing;
@property float sigmoidDegree;
@property BOOL shiftEnabled;
@property float shiftSpeed;
@property float shiftDistanceDependence;
@property float idleLeeway;
@property float delayBeforeIdle;
@property BOOL showIdleIndicator;
@property BOOL jumpEnabled;
@property float jumpThreshold;
@property BOOL playJumpSound;
@property BOOL directionalLockEnabled;
@property float directionalLockThreshold;
@property float directionalLockStickiness;
@property float directionalLockSharpness;
@property BOOL showDirectionalLockIndicators;

+ (id)settingsControllerModule;

- (float)shiftDistanceDependence;
- (float)shiftSpeed;
- (BOOL)shiftEnabled;
- (float)sigmoidDegree;
- (float)inputSmoothing;
- (void)setShiftDistanceDependence:(float)arg1;
- (void)setShiftSpeed:(float)arg1;
- (void)setShiftEnabled:(BOOL)arg1;
- (void)setSigmoidDegree:(float)arg1;
- (void)setInputSmoothing:(float)arg1;
- (BOOL)showDirectionalLockIndicators;
- (float)directionalLockSharpness;
- (float)directionalLockStickiness;
- (float)directionalLockThreshold;
- (BOOL)directionalLockEnabled;
- (BOOL)playJumpSound;
- (float)jumpThreshold;
- (BOOL)jumpEnabled;
- (BOOL)showIdleIndicator;
- (float)delayBeforeIdle;
- (float)idleLeeway;
- (void)setShowDirectionalLockIndicators:(BOOL)arg1;
- (void)setDirectionalLockSharpness:(float)arg1;
- (void)setDirectionalLockStickiness:(float)arg1;
- (void)setDirectionalLockThreshold:(float)arg1;
- (void)setPlayJumpSound:(BOOL)arg1;
- (void)setJumpThreshold:(float)arg1;
- (void)setJumpEnabled:(BOOL)arg1;
- (void)setShowIdleIndicator:(BOOL)arg1;
- (void)setDelayBeforeIdle:(float)arg1;
- (void)setIdleLeeway:(float)arg1;
- (void)setDefaultValues;
- (unsigned int)frameInterval;
- (void)setDirectionalLockEnabled:(BOOL)arg1;
- (void)setFrameInterval:(unsigned int)arg1;

@end