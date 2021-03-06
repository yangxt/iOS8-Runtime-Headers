/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDShadow, TSDMutableReflection, CALayer, TSDReflection;

@interface TSDStyledRep : TSDRep  {
    CALayer *mShadowLayer;
    CALayer *mReflectionLayer;
    struct CGPoint { 
        float x; 
        float y; 
    } mOriginalReflectionLayerPositionInScaledCanvas;
    BOOL mIsUpdatingReflectionOpacity;
    TSDMutableReflection *mDynamicReflection;
    BOOL mIsUpdatingShadow;
    TSDShadow *mDynamicShadow;
    struct { 
        unsigned int shadowInvalid : 1; 
    } mFlags;
}

@property(readonly) CALayer * shadowLayer;
@property(readonly) CALayer * reflectionLayer;
@property(readonly) TSDReflection * reflection;
@property(readonly) float opacity;
@property(readonly) TSDShadow * shadow;


- (id)reflection;
- (BOOL)isInvisible;
- (id)shadow;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (float)opacity;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })clipRect;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)description;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)setNeedsDisplay;
- (void)dealloc;
- (void)dynamicShadowChangeDidEnd;
- (void)dynamicShadowUpdateToValue:(id)arg1;
- (void)dynamicShadowChangeDidBegin;
- (void)dynamicReflectionOpacityChangeDidEnd;
- (void)dynamicReflectionOpacityUpdateToValue:(float)arg1;
- (void)dynamicReflectionOpacityChangeDidBegin;
- (void)drawInContextWithoutEffectsOrChildren:(struct CGContext { }*)arg1;
- (void)drawInContextWithoutEffects:(struct CGContext { }*)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })reflectionLayerFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })p_clipRectInRootForTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)didUpdateEffectLayersForLayer:(id)arg1;
- (void)willUpdateEffectLayersForLayer:(id)arg1;
- (void)drawReflectionInContext:(struct CGContext { }*)arg1 drawChildren:(BOOL)arg2;
- (void)drawShadowInContext:(struct CGContext { }*)arg1 withChildren:(BOOL)arg2 withDrawableOpacity:(BOOL)arg3;
- (void)drawReflectionInContext:(struct CGContext { }*)arg1 withTransparencyLayer:(BOOL)arg2 applyingOpacity:(BOOL)arg3 shouldClipGradient:(BOOL)arg4 withBlock:(id)arg5;
- (struct CGImage { }*)p_newReflectionImageWithSize:(struct CGSize { float x1; float x2; })arg1 applyOpacity:(BOOL)arg2 viewScale:(float)arg3 withBlock:(id)arg4;
- (void)p_drawReflectionIntoReflectionFrameInContext:(struct CGContext { }*)arg1 withTransparencyLayer:(BOOL)arg2 applyingOpacity:(BOOL)arg3 shouldClipGradient:(BOOL)arg4 withBlock:(id)arg5;
- (struct CGImage { }*)newShadowImageWithSize:(struct CGSize { float x1; float x2; })arg1 shadow:(id)arg2 drawSelector:(SEL)arg3 unflipped:(BOOL)arg4;
- (void)drawInContextWithoutEffectsOrChildrenForAlphaOnly:(struct CGContext { }*)arg1;
- (void)drawInContextWithoutEffectsForAlphaOnly:(struct CGContext { }*)arg1;
- (struct CGImage { }*)newShadowImageWithSize:(struct CGSize { float x1; float x2; })arg1 unflipped:(BOOL)arg2 withChildren:(BOOL)arg3;
- (void)positionShadowLayer:(id)arg1 forShadow:(id)arg2 withNaturalBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)p_drawReflectionInContext:(struct CGContext { }*)arg1;
- (void)drawReflectionIntoReflectionFrameInContext:(struct CGContext { }*)arg1 withTransparencyLayer:(BOOL)arg2 applyingOpacity:(BOOL)arg3 drawChildren:(BOOL)arg4;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })reflectionLayerFrameInRoot;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })p_rectWithEffectsAppliedToRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 additionalTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectWithEffectsAppliedToRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })clipRectWithoutEffects;
- (id)styledInfo;
- (void)drawGradientWithAlphaOverReflection:(struct CGContext { }*)arg1 applyingOpacity:(BOOL)arg2 reflectionSize:(struct CGSize { float x1; float x2; })arg3;
- (void)createReflectionLayer;
- (void)disposeReflectionLayer;
- (id)shadowLayer;
- (void)calculateTextureClipBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 andOffset:(struct CGPoint { float x1; float x2; }*)arg2 withTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg3 textureContext:(id)arg4 isUsingImageTexture:(BOOL)arg5;
- (BOOL)shouldShowReflection;
- (void)setMagicMoveTextureAttributes:(id)arg1;
- (BOOL)canDrawShadowInOneStepWithChildren:(BOOL)arg1;
- (id)pathSourceForSelectionHighlightBehavior;
- (void)drawInContextWithoutEffects:(struct CGContext { }*)arg1 withContent:(BOOL)arg2 withStroke:(BOOL)arg3 withOpacity:(BOOL)arg4 forAlphaOnly:(BOOL)arg5 drawChildren:(BOOL)arg6;
- (BOOL)shouldShowShadow;
- (id)magicMoveAttributesWithShapeAttributes:(BOOL)arg1;
- (void)invalidateShadowLayer;
- (BOOL)shouldHideSelectionHighlightDueToRectangularPath;
- (id)reflectionLayer;
- (id)styledLayout;
- (id)additionalLayersUnderLayer;
- (void)processChangedProperty:(int)arg1;
- (id)textureForContext:(id)arg1;
- (void)viewScaleDidChange;
- (void)dynamicDragDidBegin;
- (BOOL)shouldShowSelectionHighlight;
- (void)didUpdateLayer:(id)arg1;
- (void)willUpdateLayer:(id)arg1;

@end
