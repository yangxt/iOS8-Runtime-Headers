/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CMGestureManager;

@interface CKRaiseGesture : NSObject  {
    BOOL _enabled;
    BOOL _gestureState;
    BOOL _proximityState;
    id _target;
    SEL _action;
    CMGestureManager *_gestureManager;
}

@property(getter=isEnabled) BOOL enabled;
@property(getter=isRecognized,readonly) BOOL recognized;
@property id target;
@property SEL action;
@property(retain) CMGestureManager * gestureManager;
@property BOOL gestureState;
@property BOOL proximityState;

+ (BOOL)isRaiseGestureSupported;

- (id)gestureManager;
- (void)setProximityState:(BOOL)arg1;
- (BOOL)gestureState;
- (void)setGestureManager:(id)arg1;
- (void)setGestureState:(BOOL)arg1;
- (void)proximityStateDidChange:(id)arg1;
- (BOOL)isRecognized;
- (BOOL)proximityState;
- (void)setAction:(SEL)arg1;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)arg1;
- (id)target;
- (SEL)action;
- (void)setTarget:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)dealloc;

@end