/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDGLBloomEffect, TSDGLTextureInfo, KNAnimParameterGroup, TSDGLShader, TSDGLFrameBuffer, TSDGLDataBuffer, NSArray;

@interface KNBuildFireworks : KNAnimationEffect <KNFrameBuildAnimator, KNAnimationPluginArchiving> {
    KNAnimParameterGroup *_parameterGroup;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _drawableFrame;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _frameRect;
    struct CATransform3D { 
        float m11; 
        float m12; 
        float m13; 
        float m14; 
        float m21; 
        float m22; 
        float m23; 
        float m24; 
        float m31; 
        float m32; 
        float m33; 
        float m34; 
        float m41; 
        float m42; 
        float m43; 
        float m44; 
    } _baseOrthoTransform;
    struct CATransform3D { 
        float m11; 
        float m12; 
        float m13; 
        float m14; 
        float m21; 
        float m22; 
        float m23; 
        float m24; 
        float m31; 
        float m32; 
        float m33; 
        float m34; 
        float m41; 
        float m42; 
        float m43; 
        float m44; 
    } _baseTransform;
    int _oldViewportRect[4];
    NSArray *_fireworksSystems;
    TSDGLShader *_fireworksShader;
    TSDGLShader *_objectShader;
    TSDGLDataBuffer *_objectDataBuffer;
    TSDGLShader *_centerBurstShader;
    TSDGLDataBuffer *_centerBurstDataBuffer;
    TSDGLTextureInfo *_centerBurstTextureInfo;
    TSDGLTextureInfo *_particleTextureInfo;
    TSDGLFrameBuffer *_framebuffer;
    TSDGLShader *_fboShader;
    TSDGLDataBuffer *_fboDataBuffer;
    TSDGLBloomEffect *_bloomEffect;
    float _previousPercent;
    BOOL _shouldApplyBloomEffect;
}

+ (id)animationName;
+ (id)defaultAttributes;
+ (BOOL)requiresSingleTexturePerStage;
+ (void)downgradeAttributes:(id*)arg1 animationName:(id*)arg2 warning:(id*)arg3 type:(int)arg4 isToClassic:(BOOL)arg5 version:(unsigned long long)arg6;
+ (void)upgradeAttributes:(id*)arg1 animationName:(id)arg2 warning:(id*)arg3 type:(int)arg4 isFromClassic:(BOOL)arg5 version:(unsigned long long)arg6;
+ (id)thumbnailImageNameForType:(int)arg1;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (unsigned int)directionType;
+ (id)localizedMenuString:(int)arg1;
+ (id)supportedTypes;
+ (int)animationCategory;
+ (id)animationFilter;

- (void)dealloc;
- (void)p_drawParticleSystemsWithPercent:(float)arg1 sparkles:(BOOL)arg2 particleSystemOpacity:(float)arg3 context:(id)arg4;
- (void)p_drawObject:(id)arg1 withContext:(id)arg2;
- (id)p_fireworksSystemsForTR:(id)arg1 build:(id)arg2 context:(id)arg3;
- (void)animationDidEndForTextures:(id)arg1 forBuild:(id)arg2;
- (void)p_setupFBOWithSize:(struct CGSize { float x1; float x2; })arg1;
- (void)p_setupParticleTexture;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameOfEffectWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 context:(id)arg2;
- (void)renderFrameWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (id)initWithAnimationContext:(id)arg1;

@end
