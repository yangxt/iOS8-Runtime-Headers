/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@class CUIPSDLayerRef;

@interface CUIPSDLayerMaskRef : NSObject  {
    CUIPSDLayerRef *_layerRef;
    BOOL _isVectorMask;
}


- (struct CGImage { }*)createCGImageMask;
- (struct CGPath { }*)newBezierPath;
- (BOOL)isInvertedWhenBlending;
- (BOOL)isLinked;
- (id)layerRef;
- (struct CGPath { }*)newBezierPathAtScale:(float)arg1;
- (id)initVectorMaskWithLayerRef:(id)arg1;
- (id)initLayerMaskWithLayerRef:(id)arg1;
- (BOOL)isEnabled;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (void)dealloc;

@end
