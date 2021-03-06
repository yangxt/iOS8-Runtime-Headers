/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSWPParagraphStyle, TSDStroke, TSDShadow, TSCHChartValueAxis, TSCHChartSeries, TSCHChartAxis;

@interface TSCHLineAreaSeriesModelCache : NSObject  {
    unsigned int mSeriesIndex;
    TSCHChartSeries *mSeries;
    TSCHChartValueAxis *mValueAxis;
    TSCHChartAxis *mGroupAxis;
    TSWPParagraphStyle *mParagraphStyle;
    unsigned int mLabelPosition;
    BOOL mShowLabelsInFront;
    int mSymbolType;
    TSDStroke *mSymbolStroke;
    TSDStroke *mSeriesStroke;
    TSDShadow *mSeriesShadow;
    float mDataPointSize;
    float mOpacity;
    int mLineType;
    id mSeriesFill;
    id mSymbolFill;
    BOOL mShowValueLabels;
    struct CGPath { } *mUnitSymbolPath;
}

@property(readonly) unsigned int seriesIndex;
@property(readonly) TSCHChartSeries * series;
@property(readonly) TSCHChartValueAxis * valueAxis;
@property(readonly) TSCHChartAxis * groupAxis;
@property(readonly) TSWPParagraphStyle * paragraphStyle;
@property(readonly) unsigned int labelPosition;
@property(readonly) BOOL showLabelsInFront;
@property(readonly) int symbolType;
@property(readonly) TSDStroke * symbolStroke;
@property(readonly) id symbolFill;
@property(readonly) TSDStroke * seriesStroke;
@property(readonly) id seriesFill;
@property(readonly) float dataPointSize;
@property(readonly) float opacity;
@property(readonly) int lineType;
@property(readonly) BOOL showValueLabels;
@property(readonly) TSDShadow * seriesShadow;
@property(readonly) struct CGPath { }* unitSymbolPath;


- (int)symbolType;
- (unsigned int)seriesIndex;
- (unsigned int)labelPosition;
- (id)series;
- (float)opacity;
- (void)dealloc;
- (id)initWithChartModel:(id)arg1 forSeries:(unsigned int)arg2;
- (float)dataPointSize;
- (id)symbolFill;
- (int)lineType;
- (id)seriesStroke;
- (BOOL)showLabelsInFront;
- (id)seriesShadow;
- (struct CGPath { }*)unitSymbolPath;
- (id)symbolStroke;
- (id)seriesFill;
- (id)groupAxis;
- (id)valueAxis;
- (BOOL)showValueLabels;
- (id)paragraphStyle;

@end
