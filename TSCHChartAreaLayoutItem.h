/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCHChartAxisLayoutItem;

@interface TSCHChartAreaLayoutItem : TSCH2DChartAbstractAreaLayoutItem  {
    TSCHChartAxisLayoutItem *mTopHorizontalAxis;
    TSCHChartAxisLayoutItem *mBottomHorizontalAxis;
    TSCHChartAxisLayoutItem *mLeftVerticalAxis;
    TSCHChartAxisLayoutItem *mRightVerticalAxis;
    unsigned int mRelayoutDepth;
    BOOL mInOutwardLayout;
}


- (void)dealloc;
- (void)p_updateMinHitSizes;
- (void)p_arrangeSizedChildren;
- (Class)p_axisLayoutItemClassForAxisID:(id)arg1;
- (float)p_dataSetNameLabelPadding;
- (void)protected_iterateHitChartElements:(struct CGPoint { float x1; float x2; })arg1 withBlock:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })i_currentBufferAreaUnitRect;
- (void)buildSubTree;
- (id)renderersWithRep:(id)arg1;
- (void)p_layoutOutward;
- (void)p_layoutInward;

@end
