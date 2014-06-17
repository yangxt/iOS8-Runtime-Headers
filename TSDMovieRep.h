/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDFrameRep, NSObject<TSKMediaPlayerController>, TSDButtonKnob, CALayer, TSDMovieInfo, AVAsset;

@interface TSDMovieRep : TSDMediaRep <TSKMediaPlayerControllerDelegate> {
    NSObject<TSKMediaPlayerController> *mPlayerController;
    BOOL mCurrentlyObservingPlayerLayer;
    BOOL mPlayerLayerShouldBeDisplayed;
    CALayer *mPlayerLayer;
    CALayer *mLayerToStroke;
    CALayer *mMovieReflectionLayer;
    CALayer *mMovieReflectionMaskLayer;
    CALayer *mReflectionPlayerLayer;
    CALayer *mReflectionPlayerStrokeMaskLayer;
    BOOL mPreventDisposeOfPlayerLayer;
    CALayer *mPlayerStrokeLayer;
    CALayer *mReflectionPlayerStrokeLayer;
    TSDFrameRep *mReflectionFrameRep;
    CALayer *mReflectionFrameMaskLayer;
    AVAsset *mAssetForPlayability;
    BOOL mDidCheckPlayability;
    BOOL mIsPlayable;
    TSDButtonKnob *mPlayButtonKnob;
    BOOL mPlayButtonKnobVisible;
    BOOL mDidCancelUpdatingPlayButtonVisibility;
    BOOL mInReadMode;
    struct CGImage { } *mAlternatePosterImage;
    unsigned int mIsChangingDynamicVisibleTimeCount;
    float mDynamicVolume;
    BOOL mIsChangingDynamicVolume;
    BOOL mNeedsTeardownPlayerController;
}

@property(readonly) TSDMovieInfo * movieInfo;
@property(getter=isPlayable,readonly) BOOL playable;
@property(getter=isPlaying,readonly) BOOL playing;
@property(readonly) NSObject<TSKMediaPlayerController> * playerController;
@property(readonly) BOOL shouldSingleTapPlay;
@property struct CGImage { }* alternatePosterImage;
@property(readonly) double visibleTime;
@property(readonly) float volume;
@property(readonly) TSDButtonKnob * p_playButtonKnob;
@property(readonly) BOOL p_playButtonFitsInFrame;

+ (float)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2;

- (BOOL)isPlaying;
- (BOOL)isDraggable;
- (id)movieInfo;
- (float)volume;
- (id)playerController;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)dealloc;
- (BOOL)isPlayable;
- (void)dynamicVolumeChangeDidEnd;
- (void)dynamicVolumeUpdateToValue:(float)arg1;
- (void)dynamicVolumeChangeDidBegin;
- (void)dynamicVisibleTimeChangeDidEnd;
- (void)dynamicVisibleTimeUpdateToValue:(double)arg1 withTolerance:(double)arg2 completionHandler:(id)arg3;
- (void)dynamicVisibleTimeChangeDidBegin;
- (double)visibleTime;
- (void)setAlternatePosterImage:(struct CGImage { }*)arg1;
- (void)p_togglePlaying;
- (void)setShapeReflectionPlayerStrokeLayer:(id)arg1;
- (id)p_tilingLayerForReflectionStroke;
- (id)p_tilingLayerForPlayerStroke;
- (void)playbackDidStopForPlayerController:(id)arg1;
- (void)playerController:(id)arg1 playbackDidFailWithError:(id)arg2;
- (void)p_showReflectionLayer;
- (void)p_hideReflectionLayer;
- (BOOL)canResetMediaSize;
- (void)p_setupPlayerLayerIfNecessary;
- (void)p_teardownPlayerController;
- (void)p_cancelUpdatingUIStateForMoviePlayability;
- (void)p_playForKnob;
- (void)p_addPlayButtonToKnobs:(id)arg1;
- (id)p_playButtonKnob;
- (BOOL)shouldSingleTapPlay;
- (BOOL)p_playButtonFitsInFrame;
- (void)p_setupPlayerControllerIfNecessary;
- (BOOL)p_shouldPlayerControllerExistThroughoutSelection;
- (void)p_updateEndTime;
- (void)p_updateStartTime;
- (void)p_updateVolume;
- (void)p_updateRepeatMode;
- (void)p_updateUIStateForMoviePlayability;
- (void)p_stopUpdatingUIStateForMoviePlayability;
- (void)p_setNeedsTeardownPlayerControllerOnUpdateLayer;
- (void)p_drawPosterImageInContext:(struct CGContext { }*)arg1;
- (void)p_drawReflectionGradientIntoMovieReflectionLayer:(struct CGContext { }*)arg1 reflectionSize:(struct CGSize { float x1; float x2; })arg2;
- (id)p_shapeLayerForReflectionStroke;
- (void)p_applyBasicStrokeToLayer:(id)arg1 layer:(id)arg2 bounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (id)p_shapeLayerForPlayerStroke;
- (void)p_commonDrawStrokeInContext:(struct CGContext { }*)arg1;
- (void)p_drawInContext:(struct CGContext { }*)arg1 withContent:(BOOL)arg2 withStroke:(BOOL)arg3 withOpacity:(float)arg4 withMask:(BOOL)arg5 forShadowOrHitTest:(BOOL)arg6;
- (void)p_updateReflectionFrameRep;
- (void)p_updatePlayButtonVisibility;
- (void)p_placeReflectionPlayerLayer:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 transform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })p_strokeFrameForLayerFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)p_setPositionAndBoundsIfDifferent:(id)arg1 position:(struct CGPoint { float x1; float x2; })arg2 bounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (id)movieLayout;
- (struct CGImage { }*)alternatePosterImage;
- (void)p_updateMovieReflectionMaskLayer;
- (void)p_teardownPlayerControllerIfNeeded;
- (void)p_setupStrokeLayers:(BOOL)arg1 needsMaskLayer:(BOOL)arg2 isFrame:(BOOL)arg3;
- (BOOL)p_needsTilingLayerForStroke:(id)arg1;
- (void)p_arrangeLayerVisibility:(id)arg1;
- (id)reflectionPlayerStrokeLayer;
- (id)playerStrokeLayer;
- (void)p_setupPlayerStrokeLayers:(BOOL)arg1;
- (void)p_checkAndsyncTilingLayerState:(BOOL)arg1;
- (void)p_createReflectionPlayerStrokeMaskLayer;
- (void)p_setupTilingReflectionPlayerStrokeLayer;
- (void)p_setupTilingPlayerStrokeLayer;
- (void)p_setupShapeReflectionPlayerStrokeLayer;
- (void)p_setupShapePlayerStrokeLayer;
- (void)p_drawStrokeInContext:(struct CGContext { }*)arg1;
- (void)p_drawReflectionStrokeInContext:(struct CGContext { }*)arg1;
- (void)p_setupReflectionPlayerLayerIfNecessary;
- (void)createReflectionLayer;
- (void)disposeReflectionLayer;
- (void)p_disposeReflectionStrokeLayers;
- (BOOL)shouldShowReflection;
- (void)p_updateStrokeLayerForStroke:(id)arg1 repLayer:(id)arg2;
- (void)p_createMaskLayerForLayer:(id)arg1;
- (BOOL)shouldShowMediaReplaceUI;
- (void)i_updateFrameRep;
- (void)p_disposeMaskLayer;
- (void)p_disposeStrokeLayer;
- (void)drawInContextWithoutEffects:(struct CGContext { }*)arg1 withContent:(BOOL)arg2 withStroke:(BOOL)arg3 withOpacity:(BOOL)arg4 forAlphaOnly:(BOOL)arg5 drawChildren:(BOOL)arg6;
- (void)dynamicRotateDidEndWithTracker:(id)arg1;
- (void)dynamicRotateDidBegin;
- (unsigned long long)enabledKnobMask;
- (id)additionalLayersOverLayer;
- (id)additionalLayersUnderLayer;
- (void)updateLayerGeometryFromLayout:(id)arg1;
- (void)screenScaleDidChange;
- (BOOL)handleSingleTapAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)wantsToHandleTapsWhenLocked;
- (void)willEndReadMode;
- (void)willBeginReadMode;
- (BOOL)directlyManagesVisibilityOfKnob:(id)arg1;
- (void)drawInLayerContext:(struct CGContext { }*)arg1;
- (void)processChangedProperty:(int)arg1;
- (void)addKnobsToArray:(id)arg1;
- (void)updateFromLayout;
- (BOOL)directlyManagesLayerContent;
- (id)newTrackerForKnob:(id)arg1;
- (void)dynamicResizeDidEndWithTracker:(id)arg1;
- (id)dynamicResizeDidBegin;
- (void)becameNotSelected;
- (void)becameSelected;
- (void)didUpdateLayer:(id)arg1;
- (void)willUpdateLayer:(id)arg1;
- (void)willBeRemoved;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

@end