/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDRep, <TSDRepTrackerDelegate>, CAShapeLayer;

@interface TSDRepRotateTracker : NSObject <TSDDecorator, TSDLayoutManipulatingTracker, TSDRepTracker> {
    TSDRep *mRep;
    BOOL mDidBeginRotation;
    BOOL mMovedMinimumDistance;
    struct CGPoint { 
        float x; 
        float y; 
    } mCenterForRotation;
    float mSnapThreshold;
    float mRotateDeltaInRadians;
    float mCurrentLogicalAngleInDegrees;
    float mCurrentPhysicalAngleInDegrees;
    float mPreviousSnap;
    float mOriginalAngleInDegrees;
    float mOriginalAngleForRotationInDegrees;
    CAShapeLayer *mGuideLayer;
    BOOL mHaveSproingedHUD;
    BOOL mShouldShowHUD;
    <TSDRepTrackerDelegate> *mDelegate;
    BOOL mDelegateRespondsToContinuedDragging;
    TSDRep *mOriginalNonFloatingRep;
    BOOL mIsInspectorDrivenTracking;
}

@property(retain) TSDRep * rep;
@property BOOL shouldShowHUD;
@property struct CGPoint { float x1; float x2; } centerForRotation;
@property(readonly) float currentLogicalAngleInDegrees;
@property(readonly) float originalAngleInDegrees;
@property float snapThreshold;
@property BOOL isInspectorDrivenTracking;


- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)dealloc;
- (void)setSnapThreshold:(float)arg1;
- (float)snapThreshold;
- (float)originalAngleInDegrees;
- (float)currentLogicalAngleInDegrees;
- (void)setCenterForRotation:(struct CGPoint { float x1; float x2; })arg1;
- (void)setShouldShowHUD:(BOOL)arg1;
- (void)addRotateDelta:(float)arg1;
- (BOOL)shouldShowHUD;
- (BOOL)p_shouldApplyRotateToSiblingsOfRep;
- (void)p_begin;
- (void)p_updateGuideLayerWithAngle:(float)arg1 didSnap:(BOOL)arg2;
- (void)p_sproingHUD;
- (void)p_updateHUDWithAngle:(float)arg1;
- (void)p_hideGuideLayer;
- (void)p_makeSiblingRepsPerformBlock:(id)arg1;
- (void)setRep:(id)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })rotateTransform;
- (id)decoratorOverlayLayers;
- (BOOL)operationShouldBeDynamic;
- (BOOL)supportsAlignmentGuides;
- (void)commitChangesForReps:(id)arg1;
- (void)setIsInspectorDrivenTracking:(BOOL)arg1;
- (BOOL)isInspectorDrivenTracking;
- (void)p_hideHUD;
- (struct CGPoint { float x1; float x2; })centerForRotation;
- (BOOL)shouldOpenCommandGroupToCommitChangesForReps:(id)arg1;
- (void)changeDynamicLayoutsForReps:(id)arg1;
- (id)rep;
- (id)initWithRep:(id)arg1;

@end