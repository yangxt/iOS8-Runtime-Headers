/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableSet, NSString, NSTimer, TSDCanvasView;

@interface TSDHUDViewController : UIViewController  {
    double mLastTimeUpdated;
    NSString *mLastStringSet;
    NSTimer *mStringTimer;
    NSMutableSet *mObjectsShowingHUD;
    TSDCanvasView *mCanvasView;
    struct CGPoint { 
        float x; 
        float y; 
    } mTouchPoint;
    struct CGPoint { 
        float x; 
        float y; 
    } mHUDPoint;
    int mHUDOffset;
}

+ (id)sharedHUDViewController;

- (void)setLabelText:(id)arg1;
- (void)dealloc;
- (void)showHUDForKey:(id)arg1 forTouchPoint:(struct CGPoint { float x1; float x2; })arg2 inCanvasView:(id)arg3 withUpwardsNudge:(float)arg4 size:(int)arg5;
- (void)p_labelTextTimerFired;
- (void)showHUDForKey:(id)arg1 forTouchPoint:(struct CGPoint { float x1; float x2; })arg2 inCanvasView:(id)arg3 withUpwardsNudge:(float)arg4;
- (void)hideHUDForKey:(id)arg1;
- (void)showHUDForKey:(id)arg1 forTouchPoint:(struct CGPoint { float x1; float x2; })arg2 inCanvasView:(id)arg3 withNudge:(struct CGSize { float x1; float x2; })arg4 size:(int)arg5;

@end