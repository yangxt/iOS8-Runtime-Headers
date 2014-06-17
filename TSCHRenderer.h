/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCHChartLayoutItem, <TSCHSupportsRendering>, TSCHChartModel, TSCHChartInfo;

@interface TSCHRenderer : NSObject <TSCHSupportsTextEditing> {
    <TSCHSupportsRendering> *mChartRep;
    TSCHChartLayoutItem *mChartLayoutItem;
}

@property(readonly) TSCHChartInfo * chartInfo;
@property(readonly) TSCHChartModel * model;
@property(readonly) <TSCHSupportsRendering> * chartRep;
@property(readonly) TSCHChartLayoutItem * layoutItem;
@property(readonly) float viewScale;
@property(readonly) BOOL supportsSeparateLabelsRenderPass;
@property(readonly) BOOL debugLayout;
@property(readonly) struct CGColor { }* debugColor;


- (id)model;
- (void)dealloc;
- (id)textEditorForSelectionPath:(id)arg1 chartEditor:(id)arg2;
- (void)strokeRectInContext:(struct CGContext { }*)arg1 rect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 color:(struct CGColor { }*)arg3;
- (struct CGColor { }*)debugColor;
- (void)p_debugLayoutInContext:(struct CGContext { }*)arg1;
- (BOOL)debugLayout;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })chartLayoutSpaceRenderingRect;
- (BOOL)supportsSeparateLabelsRenderPass;
- (void)drawTrendLinesInContext:(struct CGContext { }*)arg1 chartVertical:(BOOL)arg2 elementRenderClass:(Class)arg3;
- (void)drawErrorBarsInContext:(struct CGContext { }*)arg1 chartVertical:(BOOL)arg2 elementRenderClass:(Class)arg3;
- (void)useEditedString:(id)arg1;
- (BOOL)isCompositeRenderer;
- (int)textDrawingFlagForSelectionPath:(id)arg1;
- (void)p_renderIntoContext:(struct CGContext { }*)arg1 visible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })tLayerRectForContext:(struct CGContext { }*)arg1;
- (id)layoutItem;
- (id)chartRep;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForEditingTextForSelectionPath:(id)arg1;
- (BOOL)canEditTextForSelectionPath:(id)arg1;
- (void)addSelection:(id)arg1 toCGPath:(struct CGPath { }*)arg2;
- (void)renderIntoContext:(struct CGContext { }*)arg1 selection:(id)arg2;
- (BOOL)canRenderSelectionPath:(id)arg1;
- (void)renderIntoContext:(struct CGContext { }*)arg1 visible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (int)chunkPlane;
- (id)initWithChartRep:(id)arg1 layoutItem:(id)arg2;
- (id)chartInfo;
- (float)viewScale;

@end