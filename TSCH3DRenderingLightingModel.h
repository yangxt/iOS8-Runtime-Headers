/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSNumber, TSCH3DLightingModel;

@interface TSCH3DRenderingLightingModel : NSObject  {
    TSCH3DLightingModel *mLightingModel;
    NSNumber *mPercentage;
    BOOL mHasTransparency;
}

@property(readonly) TSCH3DLightingModel * lightingModel;
@property(readonly) BOOL hasTransparency;

+ (id)p_lightingModelFromFill:(id)arg1 lightings:(id)arg2 returningTransparency:(BOOL*)arg3;
+ (id)renderingLightingModelWithLightingModel:(id)arg1 percentage:(id)arg2 hasTransparency:(BOOL)arg3;
+ (id)renderingLightingModelWithFill:(id)arg1 lightings:(id)arg2;

- (void)dealloc;
- (id)initWithLightingModel:(id)arg1 percentage:(id)arg2 hasTransparency:(BOOL)arg3;
- (id)lightingModel;
- (void)affect:(id)arg1 states:(id)arg2 scene:(id)arg3 texturePool:(id)arg4;
- (BOOL)hasTransparency;

@end