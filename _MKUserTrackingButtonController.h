/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class UIImageView, UIButton, <MKUserTrackingView>, <MKUserTrackingButtonTarget>, UIActivityIndicatorView;

@interface _MKUserTrackingButtonController : NSObject  {
    <MKUserTrackingButtonTarget> *_target;
    <MKUserTrackingView> *_userTrackingView;
    int _state;
    UIImageView *_imageView;
    UIButton *_button;
    UIActivityIndicatorView *_activityIndicatorView;
}

@property(retain) <MKUserTrackingView> * userTrackingView;
@property(readonly) UIImageView * imageView;
@property int state;


- (void).cxx_destruct;
- (void)_updateState;
- (id)imageView;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)setState:(int)arg1;
- (int)state;
- (void)dealloc;
- (id)_activityIndicatorView;
- (id)_expandAnimation;
- (void)_reloadState;
- (id)_contentAnimation;
- (id)_shrinkAnimation;
- (BOOL)_shouldAnimateFromState:(int)arg1 toState:(int)arg2;
- (void)_authorizationStatusChanged:(id)arg1;
- (void)setUserTrackingView:(id)arg1;
- (id)userTrackingView;
- (id)_imageForState:(int)arg1 controlState:(unsigned int)arg2;
- (id)initWithTarget:(id)arg1 userTrackingView:(id)arg2 imageView:(id)arg3 button:(id)arg4;
- (void)_goToNextMode:(id)arg1;

@end