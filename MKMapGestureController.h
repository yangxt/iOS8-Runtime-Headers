/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKBasicMapView, UIRotationGestureRecognizer, UIPinchGestureRecognizer, MKTiltGestureRecognizer, UILongPressGestureRecognizer, _UIDynamicAnimationGroup, MKVariableDelayTapRecognizer, _MKUserInteractionGestureRecognizer, UITapGestureRecognizer, <MKMapGestureControllerDelegate>, UIPanGestureRecognizer, _UIDynamicValueAnimation;

@interface MKMapGestureController : NSObject <MKVariableDelayTapRecognizerDelegate, _MKUserInteractionGestureRecognizerTouchObserver, UIGestureRecognizerDelegate> {
    MKBasicMapView *_mapView;
    <MKMapGestureControllerDelegate> *_delegate;
    MKVariableDelayTapRecognizer *_doubleTapGestureRecognizer;
    UITapGestureRecognizer *_twoFingerTapGestureRecognizer;
    UILongPressGestureRecognizer *_twoFingerLongPressGestureRecognizer;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    double _lastScale;
    _UIDynamicValueAnimation *_pinchDecelerationAnimation;
    _UIDynamicAnimationGroup *_panDecelerationAnimationGroup;
    int _gestureCount;
    BOOL _panWithMomentum;
    _MKUserInteractionGestureRecognizer *_touchGestureRecognizer;
    UIRotationGestureRecognizer *_rotationGestureRecognizer;
    _UIDynamicValueAnimation *_rotationDecelerationAnimation;
    MKTiltGestureRecognizer *_tiltGestureRecognizer;
    _UIDynamicValueAnimation *_tiltDecelerationAnimation;
}

@property(readonly) MKBasicMapView * mapView;
@property <MKMapGestureControllerDelegate> * delegate;
@property(getter=isZoomEnabled) BOOL zoomEnabled;
@property(getter=isScrollEnabled) BOOL scrollEnabled;
@property(getter=isRotationEnabled) BOOL rotationEnabled;
@property(getter=isTiltEnabled) BOOL tiltEnabled;
@property BOOL panWithMomentum;
@property(readonly) UITapGestureRecognizer * doubleTapGestureRecognizer;
@property(readonly) UITapGestureRecognizer * twoFingerTapGestureRecognizer;
@property(readonly) UILongPressGestureRecognizer * twoFingerLongPressGestureRecognizer;
@property(readonly) UIPinchGestureRecognizer * pinchGestureRecognizer;
@property(readonly) UIPanGestureRecognizer * panGestureRecognizer;


- (id)doubleTapGestureRecognizer;
- (void).cxx_destruct;
- (id)pinchGestureRecognizer;
- (id)panGestureRecognizer;
- (BOOL)isZoomEnabled;
- (void)setZoomEnabled:(BOOL)arg1;
- (void)handlePinch:(id)arg1;
- (void)handlePan:(id)arg1;
- (BOOL)isScrollEnabled;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)delegate;
- (void)setScrollEnabled:(BOOL)arg1;
- (id)mapView;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)twoFingerLongPressGestureRecognizer;
- (BOOL)isTiltEnabled;
- (BOOL)isRotationEnabled;
- (id)initWithMapView:(id)arg1 gestureTargetView:(id)arg2;
- (void)gestureRecognizerTouchesCanceled:(id)arg1;
- (void)gestureRecognizerTouchesEnded:(id)arg1;
- (void)gestureRecognizerTouchesBegan:(id)arg1;
- (void)_clearGesture:(id)arg1;
- (void)endGesturing;
- (void)beginGesturing;
- (void)handleTilt:(id)arg1;
- (void)handleRotation:(id)arg1;
- (void)handleTouch:(id)arg1;
- (void)handleTwoFingerLongPress:(id)arg1;
- (void)handleTwoFingerTap:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (double)variableDelayTapRecognizer:(id)arg1 shouldWaitForNextTapForDuration:(double)arg2 afterTouch:(id)arg3;
- (void)setTiltEnabled:(BOOL)arg1;
- (void)setRotationEnabled:(BOOL)arg1;
- (void)clearGestureRecognizersInFlight;
- (void)startUserInteractionFromExternalGesture;
- (void)stopUserInteractionFromExternalGesture;
- (id)twoFingerTapGestureRecognizer;
- (id)initWithMapView:(id)arg1 gestureTargetView:(id)arg2 doubleTapTargetView:(id)arg3;
- (void)stopDynamicAnimations;
- (void)setPanWithMomentum:(BOOL)arg1;
- (BOOL)panWithMomentum;

@end
