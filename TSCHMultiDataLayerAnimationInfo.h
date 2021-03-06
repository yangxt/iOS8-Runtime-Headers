/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class CAMediaTimingFunction, NSMutableArray, NSArray;

@interface TSCHMultiDataLayerAnimationInfo : NSObject <NSCopying> {
    BOOL mShouldAnimate;
    BOOL mAboveIntercept;
    BOOL mCrossesIntercept;
    NSArray *mKeyTimes;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mInterceptRect;
    BOOL mHorizontalChart;
    float mDuration;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mChartBodyFrameInRepElementSpace;
    NSMutableArray *mLayerAnimationValues;
    CAMediaTimingFunction *mTimingFunction;
    BOOL mElementUndefined;
    BOOL mAtIntercept;
    BOOL mCurrentAtIntercept;
    BOOL mCurrentAboveIntercept;
}

@property BOOL shouldAnimate;
@property BOOL aboveIntercept;
@property BOOL crossesIntercept;
@property(copy) NSArray * keyTimes;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } interceptRect;
@property BOOL horizontalChart;
@property float duration;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } chartBodyFrameInRepElementSpace;
@property(readonly) NSArray * layerAnimationValues;
@property(retain) CAMediaTimingFunction * timingFunction;
@property BOOL elementUndefined;
@property BOOL atIntercept;
@property BOOL currentAtIntercept;
@property BOOL currentAboveIntercept;

+ (id)animationInfo;

- (BOOL)shouldAnimate;
- (id).cxx_construct;
- (id)keyTimes;
- (id)timingFunction;
- (void)setKeyTimes:(id)arg1;
- (void)setTimingFunction:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)duration;
- (void)setDuration:(float)arg1;
- (void)dealloc;
- (id)init;
- (void)setShouldAnimate:(BOOL)arg1;
- (void)setCurrentAboveIntercept:(BOOL)arg1;
- (BOOL)currentAboveIntercept;
- (void)setAtIntercept:(BOOL)arg1;
- (BOOL)atIntercept;
- (void)setCurrentAtIntercept:(BOOL)arg1;
- (BOOL)currentAtIntercept;
- (void)setChartBodyFrameInRepElementSpace:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })chartBodyFrameInRepElementSpace;
- (BOOL)horizontalChart;
- (void)setInterceptRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCrossesIntercept:(BOOL)arg1;
- (void)setAboveIntercept:(BOOL)arg1;
- (BOOL)aboveIntercept;
- (id)layerAnimationValues;
- (void)setHorizontalChart:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })interceptRect;
- (BOOL)crossesIntercept;
- (void)addAnimationForLayer:(id)arg1 key:(id)arg2 values:(id)arg3 keyTimes:(id)arg4 needPresentationLayerValues:(BOOL)arg5;
- (void)addImageContentsAnimationForLayer:(id)arg1 fromImage:(id)arg2 toImage:(id)arg3 keyTimes:(id)arg4;
- (void)setElementUndefined:(BOOL)arg1;
- (BOOL)elementUndefined;
- (void)addAnimationForLayer:(id)arg1 key:(id)arg2 values:(id)arg3 keyTimes:(id)arg4;

@end
