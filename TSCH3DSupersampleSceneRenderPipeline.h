/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCH3DGLFramebuffer, TSCH3DFramebufferCopyPipeline, TSCH3DViewFrustumCullingDelegate, TSCH3DTileSceneRenderPipeline;

@interface TSCH3DSupersampleSceneRenderPipeline : TSCH3DSceneRenderPipeline <TSCH3DMultipassRenderPipeline> {
    TSCH3DFramebufferCopyPipeline *mCopyPipeline;
    TSCH3DTileSceneRenderPipeline *mTilePipeline;
    TSCH3DGLFramebuffer *mTileFBO;
    int mPass;
    int mNumTiles;
    unsigned int mTileSize;
    unsigned int mTileSamples;
    BOOL mEnableSinglePassRendering;
    TSCH3DViewFrustumCullingDelegate *mViewFrustumCullingDelegate;
    BOOL mDidProtectTargetFramebuffer;
}

@property unsigned int tileSize;
@property unsigned int tileSamples;
@property BOOL enableSinglePassRendering;


- (void)releaseResources;
- (unsigned int)tileSize;
- (void)setTileSize:(unsigned int)arg1;
- (BOOL)render;
- (void)dealloc;
- (void)setEnableSinglePassRendering:(BOOL)arg1;
- (void)setTileSamples:(unsigned int)arg1;
- (unsigned int)tileSamples;
- (BOOL)isActivePass;
- (BOOL)updatesTargetFramebuffer;
- (void)skipLowQualityPass;
- (BOOL)p_multipassRender;
- (BOOL)p_singlePassRender;
- (BOOL)multipassRenderingIsDone;
- (void)resetMultipassRendering;
- (BOOL)p_renderTilesUntilFailingConditionBlock:(id)arg1;
- (BOOL)enableSinglePassRendering;
- (void)setupTiling;
- (id)renderingFBOResource;
- (unsigned int)p_tilePixelSize;
- (id)cloneWithProcessor:(id)arg1 scene:(id)arg2;
- (id)p_targetFramebuffer;
- (id)initWithProcessor:(id)arg1 session:(id)arg2 scene:(id)arg3;

@end
