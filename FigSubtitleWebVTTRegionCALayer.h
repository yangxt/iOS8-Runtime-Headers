/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigSubtitleWebVTTRegionCALayer : CALayer  {
    struct OpaqueFigSubtitleWebVTTRegionCALayerInternal { id x1; id x2; struct OpaqueFigSubtitleRenderer {} *x3; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_4_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_4_1_2; } x4; struct __CFDictionary {} *x5; struct __CFArray {} *x6; unsigned int x7; } *layerInternal;
}


- (void)handleNeedsLayoutNotification;
- (void)setReLayout;
- (void)setRenderer:(struct OpaqueFigSubtitleRenderer { }*)arg1;
- (void)setContent:(struct __CFDictionary { }*)arg1;
- (struct __CFString { }*)getContentID;
- (void)setViewport:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setNeedsDisplay;
- (void)layoutSublayers;
- (void)dealloc;
- (void)finalize;
- (id)init;

@end
