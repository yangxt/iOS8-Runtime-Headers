/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCHChartAxisAnalysis;

@interface TSCHChartStackedPercentValueAxis : TSCHChartValueAxis  {
    TSCHChartAxisAnalysis *mInProgressAnalysisForErrorBarData;
}


- (id)userMax;
- (id)userMin;
- (void)updateModelMinMaxForErrorBarsOnSeries:(id)arg1 axisID:(id)arg2 analysis:(id)arg3;
- (double)totalForGroup:(unsigned int)arg1;
- (id)valueForFormattedString:(id)arg1;
- (BOOL)editableFormatForValueStrings;
- (double)unitSpaceValueForDataSpaceValue:(double)arg1 series:(id)arg2 index:(unsigned int)arg3;
- (id)dataFormatter;
- (double*)unitSpaceValuesForSeries:(id)arg1 indexes:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 min:(double)arg3 max:(double)arg4;
- (double)unitSpaceValueForSeries:(id)arg1 index:(unsigned int)arg2 min:(double)arg3 max:(double)arg4;
- (void)adjustMinMaxForDataRangeInAnalysis:(id)arg1;
- (void)updateModelMinMaxInAnalysis:(id)arg1;
- (double)doubleAxisToModelValue:(double)arg1;
- (void)updateGridValueTypeInterceptInAnalysis:(id)arg1;
- (id)formattedStringForAxisValue:(id)arg1;
- (id)formattedStringForSeries:(id)arg1 index:(unsigned int)arg2;
- (double)doubleModelToAxisValue:(double)arg1 forSeries:(id)arg2;
- (double)interceptForAxis:(id)arg1;

@end