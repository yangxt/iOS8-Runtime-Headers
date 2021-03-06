/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, <_UITouchPhaseChangeDelegate>, UIWindow, UIResponder, NSMutableArray, NSArray;

@interface UITouch : NSObject <_UIResponderForwardable> {
    float _movementMagnitudeSquared;
    double _timestamp;
    int _phase;
    int _savedPhase;
    unsigned int _tapCount;
    int _edgeType;
    UIWindow *_window;
    UIView *_view;
    UIView *_warpedIntoView;
    NSMutableArray *_gestureRecognizers;
    NSMutableArray *_forwardingRecord;
    struct CGPoint { 
        float x; 
        float y; 
    } _locationInWindow;
    struct CGPoint { 
        float x; 
        float y; 
    } _previousLocationInWindow;
    float _previousPressure;
    unsigned char _pathIndex;
    unsigned char _pathIdentity;
    float _pathMajorRadius;
    float _majorRadiusTolerance;
    float _pressure;
    struct { 
        unsigned int _firstTouchForView : 1; 
        unsigned int _isTap : 1; 
        unsigned int _isDelayed : 1; 
        unsigned int _sentTouchesEnded : 1; 
        unsigned int _abandonForwardingRecord : 1; 
    } _touchFlags;
    BOOL _eaten;
    <_UITouchPhaseChangeDelegate> *__phaseChangeDelegate;
    UIWindow *__windowServerHitTestWindow;
    struct CGSize { 
        float width; 
        float height; 
    } _displacement;
}

@property double timestamp;
@property int phase;
@property unsigned int tapCount;
@property BOOL isTap;
@property BOOL sentTouchesEnded;
@property float majorRadius;
@property float majorRadiusTolerance;
@property(retain) UIWindow * window;
@property(retain) UIView * view;
@property(retain) UIView * warpedIntoView;
@property(setter=_setForwardablePhase:) int _forwardablePhase;
@property(setter=_setResponder:,retain) UIResponder * _responder;
@property(readonly) double timestamp;
@property(readonly) int phase;
@property(readonly) unsigned int tapCount;
@property(readonly) float majorRadius;
@property(readonly) float majorRadiusTolerance;
@property(retain,readonly) UIWindow * window;
@property(retain,readonly) UIView * view;
@property(copy,readonly) NSArray * gestureRecognizers;
@property(setter=_setPathIndex:) unsigned char _pathIndex;
@property(setter=_setPathIdentity:) unsigned char _pathIdentity;
@property(readonly) float _pressure;
@property(setter=_setEdgeType:) int _edgeType;
@property(getter=_isEaten,setter=_setEaten:) BOOL _eaten;
@property(setter=_setDisplacement:) struct CGSize { float x1; float x2; } _displacement;
@property(setter=_setPhaseChangeDelegate:,retain) <_UITouchPhaseChangeDelegate> * _phaseChangeDelegate;
@property(setter=_setWindowServerHitTestWindow:,retain) UIWindow * _windowServerHitTestWindow;

+ (id)_createTouchesWithGSEvent:(struct __GSEvent { }*)arg1 phase:(int)arg2 view:(id)arg3;

- (float)_distanceFrom:(id)arg1 inView:(id)arg2;
- (BOOL)_isStationaryRelativeToTouches:(id)arg1;
- (int)_compareIndex:(id)arg1;
- (struct CGPoint { float x1; float x2; })_previousLocationInSceneReferenceSpace;
- (struct CGPoint { float x1; float x2; })_locationInSceneReferenceSpace;
- (void)_popPhase;
- (void)_pushPhase:(int)arg1;
- (struct CGPoint { float x1; float x2; })_previousLocationInWindow:(id)arg1;
- (struct CGPoint { float x1; float x2; })_locationInWindow:(id)arg1;
- (id)_phaseDescription;
- (void)_setPhaseChangeDelegate:(id)arg1;
- (id)_phaseChangeDelegate;
- (float)majorRadiusTolerance;
- (unsigned char)_pathIdentity;
- (float)_pathMajorRadius;
- (void)_loadStateFromTouch:(id)arg1;
- (void)setIsDelayed:(BOOL)arg1;
- (float)majorRadius;
- (void)_abandonForwardingRecord;
- (id)_mutableForwardingRecord;
- (BOOL)_isAbandoningForwardingRecord;
- (int)_forwardablePhase;
- (BOOL)_isFirstTouchForView;
- (void)_removeGestureRecognizer:(id)arg1;
- (int)info;
- (BOOL)_wantsForwardingFromResponder:(id)arg1 toNextResponder:(id)arg2 withEvent:(id)arg3;
- (SEL)_responderSelectorForPhase:(int)arg1;
- (id)_forwardingRecord;
- (unsigned int)tapCount;
- (struct CGPoint { float x1; float x2; })previousLocationInView:(id)arg1;
- (BOOL)isDelayed;
- (id)_gestureRecognizers;
- (int)_edgeType;
- (void)setSentTouchesEnded:(BOOL)arg1;
- (void)_addGestureRecognizer:(id)arg1;
- (void)_clearGestureRecognizers;
- (void)setMajorRadiusTolerance:(float)arg1;
- (void)setMajorRadius:(float)arg1;
- (void)_setPathIdentity:(unsigned char)arg1;
- (void)_setPathIndex:(unsigned char)arg1;
- (float)_pressure;
- (void)_updateMovementMagnitudeForLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)_setIsFirstTouchForView:(BOOL)arg1;
- (void)_setPressure:(float)arg1 resetPrevious:(BOOL)arg2;
- (void)_setLocationInWindow:(struct CGPoint { float x1; float x2; })arg1 resetPrevious:(BOOL)arg2;
- (void)setWarpedIntoView:(id)arg1;
- (id)warpedIntoView;
- (void)setView:(id)arg1;
- (void)_setEdgeType:(int)arg1;
- (void)_setWindowServerHitTestWindow:(id)arg1;
- (void)_setDisplacement:(struct CGSize { float x1; float x2; })arg1;
- (unsigned char)_pathIndex;
- (struct CGSize { float x1; float x2; })_displacement;
- (id)_windowServerHitTestWindow;
- (BOOL)sentTouchesEnded;
- (void)_setResponder:(id)arg1;
- (id)_responder;
- (void)_setForwardablePhase:(int)arg1;
- (void)setTimestamp:(double)arg1;
- (id)gestureRecognizers;
- (void)_setEaten:(BOOL)arg1;
- (void)setPhase:(int)arg1;
- (BOOL)_isEaten;
- (void)setTapCount:(unsigned int)arg1;
- (BOOL)isTap;
- (int)phase;
- (void)setIsTap:(BOOL)arg1;
- (void)setWindow:(id)arg1;
- (struct CGPoint { float x1; float x2; })locationInView:(id)arg1;
- (double)timestamp;
- (id)view;
- (id)window;
- (id)description;
- (void)dealloc;
- (struct CGPoint { float x1; float x2; })previousLocationInNode:(id)arg1;
- (struct CGPoint { float x1; float x2; })locationInNode:(id)arg1;

@end
