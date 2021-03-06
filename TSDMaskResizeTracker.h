/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDImageRep, <TSDRepTrackerDelegate>;

@interface TSDMaskResizeTracker : NSObject <TSDRepTracker, TSDLayoutManipulatingTracker> {
    TSDImageRep *mImageRep;
    float mSliderValue;
    struct CGPoint { 
        float x; 
        float y; 
    } mCenterInParentSpace;
    <TSDRepTrackerDelegate> *mDelegate;
}

@property float sliderValue;
@property BOOL isInspectorDrivenTracking;


- (void)dealloc;
- (void)setSliderValue:(float)arg1;
- (float)sliderValue;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformForImageKnobPosition;
- (id)initWithImageRep:(id)arg1;
- (void)willBeginDynamicOperationForReps:(id)arg1;
- (BOOL)operationShouldBeDynamic;
- (BOOL)supportsAlignmentGuides;
- (void)commitChangesForReps:(id)arg1;
- (void)setIsInspectorDrivenTracking:(BOOL)arg1;
- (BOOL)isInspectorDrivenTracking;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })p_currentResizeTransform;
- (BOOL)shouldOpenCommandGroupToCommitChangesForReps:(id)arg1;
- (void)changeDynamicLayoutsForReps:(id)arg1;

@end
