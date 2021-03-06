/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@class CUIPSDGradient;

@interface CUIPSDLayerEffectGradientOverlay : CUIPSDLayerEffectComponent  {
    CUIPSDGradient *_gradient;
}

@property(retain) CUIPSDGradient * gradient;


- (unsigned int)effectType;
- (id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (BOOL)updateLayerEffectPreset:(id)arg1 error:(id*)arg2;
- (id)gradient;
- (void)setGradient:(id)arg1;
- (void)dealloc;
- (id)init;

@end
