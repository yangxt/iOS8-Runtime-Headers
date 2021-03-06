/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableArray, CALayer;

@interface TSDTilingLayer : CALayer  {
    int mTilingMode;
    struct CGSize { 
        float width; 
        float height; 
    } mTileSize;
    struct { 
        unsigned int tiled : 1; 
        unsigned int hasCustomContents : 1; 
        unsigned int drawsInBackground : 1; 
        unsigned int needsTileLayout : 1; 
        unsigned int needsTileDisplay : 1; 
        unsigned int needsSelfDisplay : 1; 
    } mFlags;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mLastVisibleBounds;
    struct CGSize { 
        float width; 
        float height; 
    } mLastBoundsSize;
    CALayer *mProviderContentLayer;
    NSMutableArray *mDirtyTiles;
    BOOL mHasEverHadTileLayout;
}

@property int tilingMode;
@property BOOL drawsInBackground;

+ (struct CGImage { }*)p_newGeneratedCheckerboardImage;
+ (struct CGImage { }*)p_newCheckerboardImage;

- (int)tilingMode;
- (void)setTilingMode:(int)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)display;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)layoutSublayers;
- (void)dealloc;
- (void)setNeedsLayout;
- (void)setContents:(id)arg1;
- (void)setContentsScale:(float)arg1;
- (id)init;
- (void)i_drawTileInBackground:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)i_drawTile:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)i_drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2 inBackground:(BOOL)arg3;
- (id)p_tileAndContentLayers;
- (id)p_nonTileAndContentLayers;
- (void)i_setNeedsTileDisplayForTile:(id)arg1;
- (void)setTileContents:(id)arg1;
- (BOOL)drawsInBackground;
- (BOOL)p_updateTileSizeWithLayerSize:(struct CGSize { float x1; float x2; })arg1;
- (id)p_tileLayers;
- (BOOL)tilingSafeHasContents;
- (void)cancelLayoutForTilingLayers;
- (void)tilingSafeSetSublayers:(id)arg1;
- (void)setDrawsInBackground:(BOOL)arg1;
- (void)setNeedsLayoutForTilingLayers;

@end
