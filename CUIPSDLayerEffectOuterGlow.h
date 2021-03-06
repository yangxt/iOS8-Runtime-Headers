/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@class CUIColor;

@interface CUIPSDLayerEffectOuterGlow : CUIPSDLayerEffectComponent  {
    int _blendMode;
    float _opacity;
    CUIColor *_color;
    unsigned int _blurSize;
    unsigned int _spread;
}

@property int blendMode;
@property float opacity;
@property(retain) CUIColor * color;
@property unsigned int blurSize;
@property unsigned int spread;


- (unsigned int)effectType;
- (unsigned int)spread;
- (unsigned int)blurSize;
- (id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (BOOL)updateLayerEffectPreset:(id)arg1 error:(id*)arg2;
- (void)setSpread:(unsigned int)arg1;
- (void)setBlurSize:(unsigned int)arg1;
- (void)setColor:(id)arg1;
- (id)color;
- (void)setOpacity:(float)arg1;
- (float)opacity;
- (void)setBlendMode:(int)arg1;
- (int)blendMode;
- (void)dealloc;
- (id)init;

@end
