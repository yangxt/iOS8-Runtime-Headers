/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSWPParagraphStyle, TSDShadow, TSDStroke, TSCHChartValueAxis, TSCHChartSeries, TSCHChartAxis;

@interface TSCHBarSeriesModelCache : NSObject  {
    TSCHChartSeries *mSeries;
    TSCHChartValueAxis *mValueAxis;
    TSCHChartAxis *mGroupAxis;
    TSWPParagraphStyle *mParagraphStyle;
    unsigned int mSeriesIndex;
    BOOL mValueLabelsOn;
    float mBarWidthRatio;
    float mBarGroupGapRatio;
    float mBarGapRatio;
    double mUnitSpaceIntercept;
    unsigned int mLabelPosition;
    TSDShadow *mShadow;
    TSDStroke *mStroke;
    id mFill;
    float mOpacity;
}

@property(readonly) TSCHChartSeries * series;
@property(readonly) TSCHChartValueAxis * valueAxis;
@property(readonly) TSCHChartAxis * groupAxis;
@property(readonly) TSWPParagraphStyle * paragraphStyle;
@property(readonly) unsigned int seriesIndex;
@property(readonly) BOOL valueLabelsOn;
@property(readonly) double unitSpaceIntercept;
@property(readonly) unsigned int labelPosition;
@property(readonly) float barWidthRatio;
@property(readonly) float barGroupGapRatio;
@property(readonly) float barGapRatio;
@property(readonly) TSDShadow * shadow;
@property(readonly) TSDStroke * stroke;
@property(readonly) id fill;
@property(readonly) float opacity;


- (unsigned int)seriesIndex;
- (unsigned int)labelPosition;
- (id)series;
- (id)shadow;
- (float)opacity;
- (id)stroke;
- (id)fill;
- (void)dealloc;
- (id)initWithChartModel:(id)arg1 forSeries:(unsigned int)arg2;
- (float)barGapRatio;
- (float)barGroupGapRatio;
- (float)barWidthRatio;
- (BOOL)valueLabelsOn;
- (id)groupAxis;
- (id)valueAxis;
- (double)unitSpaceIntercept;
- (id)paragraphStyle;

@end