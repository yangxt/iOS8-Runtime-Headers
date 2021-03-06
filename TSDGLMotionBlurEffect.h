/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDGLShader, TSDGLFrameBuffer, TSDGLDataBuffer;

@interface TSDGLMotionBlurEffect : NSObject  {
    struct CGSize { 
        float width; 
        float height; 
    } _framebufferSize;
    struct CGSize { 
        float width; 
        float height; 
    } _slideSize;
    TSDGLFrameBuffer *_combinedFramebuffer;
    TSDGLShader *_velocityVisualizerShader;
    TSDGLShader *_velocityCollectionShader;
    TSDGLFrameBuffer *_velocityFramebuffer;
    TSDGLShader *_defaultTextureShader;
    TSDGLFrameBuffer *_colorFramebuffer;
    TSDGLDataBuffer *_colorFBODataBuffer;
    TSDGLDataBuffer *_velocityFBODataBuffer;
    TSDGLDataBuffer *_velocitySquashedFBODataBuffer;
    TSDGLDataBuffer *_FBODataBuffer;
    TSDGLShader *_velocityTileMaxVerticalShader;
    TSDGLShader *_velocityTileMaxHorizontalShader;
    TSDGLShader *_velocityNeighborMaxHorizontalShader;
    TSDGLShader *_velocityNeighborMaxVerticalShader;
    int _originalViewport[4];
    BOOL _isSingleObject;
    float _motionBlurStrength;
    int _debugDrawMode;
    float _framebufferScale;
}

@property BOOL isSingleObject;
@property float motionBlurStrength;
@property int debugDrawMode;
@property float framebufferScale;


- (void)teardown;
- (id)description;
- (void)dealloc;
- (void)setFramebufferScale:(float)arg1;
- (float)framebufferScale;
- (void)setDebugDrawMode:(int)arg1;
- (void)setIsSingleObject:(BOOL)arg1;
- (void)drawResultWithCurrentGLFramebuffer:(int)arg1;
- (void)bindVelocityFramebuffer;
- (void)bindColorFramebuffer;
- (void)bindColorAndVelocityFramebuffer;
- (void)updateVelocityScaleInShader:(id)arg1;
- (void)setMotionBlurStrength:(float)arg1;
- (id)initWithFramebufferSize:(struct CGSize { float x1; float x2; })arg1 slideSize:(struct CGSize { float x1; float x2; })arg2;
- (struct CGSize { float x1; float x2; })p_velocityFramebufferTextureScale;
- (BOOL)isSingleObject;
- (void)p_setupVelocityFramebufferIfNecessary;
- (void)p_setupShaders;
- (struct CGSize { float x1; float x2; })p_squashedVelocityFramebufferSize;
- (struct CGSize { float x1; float x2; })p_velocityFramebufferSize;
- (void)p_dilateVelocityBufferWithCurrentGLFramebuffer:(int)arg1;
- (void)p_blitIntoColorFramebufferWithCurrentGLFramebuffer:(int)arg1;
- (void)p_blitIntoVelocityFramebufferWithCurrentGLFramebuffer:(int)arg1;
- (int)debugDrawMode;
- (void)unbindFramebufferAndBindGLFramebuffer:(int)arg1;
- (void)setupMotionBlurEffectIfNecessary;
- (float)motionBlurStrength;
- (struct CGSize { float x1; float x2; })velocityScaleForColorFBO:(BOOL)arg1;
- (void)p_updateMaxVelocityInShadersWithScale:(float)arg1 isColorFBO:(BOOL)arg2;

@end
