/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDCapabilities, KNAnimationRegistryWithFallbacks, CALayer;

@interface KNAnimationContext : NSObject  {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mSlideRect;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mUnscaledSlideRect;
    float mViewScale;
    CALayer *mBaseLayer;
    float mFOVInRadians;
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
    } mSlideProjectionMatrix;
    float mPixelAspectRatio;
    KNAnimationRegistryWithFallbacks *mRegistry;
    TSDCapabilities *mCapabilities;
    BOOL mBaseLayerVisible;
    struct CGColorSpace { } *mColorSpace;
}

@property(readonly) KNAnimationRegistryWithFallbacks * registry;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } slideRect;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } unscaledSlideRect;
@property(readonly) CALayer * baseLayer;
@property(getter=isBaseLayerVisible,readonly) BOOL baseLayerVisible;
@property(readonly) float fieldOfViewInRadians;
@property(readonly) struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; } slideProjectionMatrix;
@property float pixelAspectRatio;
@property(readonly) float viewScale;
@property(readonly) float showScale;
@property(readonly) TSDCapabilities * capabilities;
@property struct CGColorSpace { }* colorSpace;


- (struct CGColorSpace { }*)colorSpace;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })slideRect;
- (id)capabilities;
- (float)pixelAspectRatio;
- (void)setColorSpace:(struct CGColorSpace { }*)arg1;
- (void)dealloc;
- (void)setPixelAspectRatio:(float)arg1;
- (BOOL)isBaseLayerVisible;
- (void)updateGeometryToFitBaseLayerAtViewScale:(float)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })unscaledSlideRect;
- (float)showScale;
- (id)initWithShowSize:(struct CGSize { float x1; float x2; })arg1 viewScale:(float)arg2 baseLayer:(id)arg3 isBaseLayerVisible:(BOOL)arg4;
- (id)registry;
- (id)baseLayer;
- (float)fieldOfViewInRadians;
- (struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })slideProjectionMatrix;
- (float)viewScale;

@end