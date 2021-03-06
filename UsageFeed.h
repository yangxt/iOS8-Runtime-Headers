/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomPresentationFeed.framework/SymptomPresentationFeed
 */

@class UsageAnalytics, AnalyticsWorkspace, NSArray;

@interface UsageFeed : NSObject  {
    AnalyticsWorkspace *workspace;
    UsageAnalytics *handleAnalytics;
    id _delegate;
    NSArray *_processFeedData;
}

@property id delegate;
@property(retain) NSArray * processFeedData;


- (void)setProcessFeedData:(id)arg1;
- (id)processFeedData;
- (bool)resetUsageDataFor:(id)arg1 nameKind:(id)arg2 reply:(id)arg3;
- (bool)calendarUsageFor:(id)arg1 nameKind:(id)arg2 dayResolution:(id)arg3 daySlot:(unsigned short)arg4 weekSlot:(unsigned short)arg5 reply:(id)arg6;
- (bool)typicalUsageFor:(id)arg1 nameKind:(id)arg2 intervalKind:(unsigned int)arg3 reply:(id)arg4;
- (void)prepProcessDataFractionWithTag:(unsigned int)arg1 from:(id)arg2 until:(id)arg3 pollInterval:(float)arg4;
- (id)_calendarUsagePresentation:(id)arg1 nameKind:(id)arg2 source:(id)arg3;
- (id)_typicalUsagePresentation:(id)arg1 nameKind:(id)arg2 source:(id)arg3;
- (id)_usagePresentation:(id)arg1 nameKind:(id)arg2 altName:(id)arg3 altNameKind:(id)arg4 source:(double*)arg5 since:(id)arg6;
- (id)_composePredicateLineWithName:(id)arg1 keyPath:(id)arg2 isSweep:(bool*)arg3 wantGeneric:(bool)arg4 gotGeneric:(bool*)arg5;
- (id)_performRollUp:(unsigned int)arg1 andMetadata:(unsigned int)arg2 from:(id)arg3 until:(id)arg4;
- (void)prepProcessDataFractionWithTag:(unsigned int)arg1 andMetadata:(unsigned int)arg2 from:(id)arg3 until:(id)arg4 pollInterval:(float)arg5;
- (void)_rollValuesFrom:(id)arg1 toDict:(id)arg2;
- (bool)_rollUsageValuesFromDict:(id)arg1 toDict:(id)arg2 forKey:(id)arg3;
- (bool)setUsageOption:(id)arg1 reply:(id)arg2;
- (bool)usageToDateWithOptionsFor:(id)arg1 nameKind:(id)arg2 options:(id)arg3 reply:(id)arg4;
- (id)initWithWorkspace:(id)arg1;
- (bool)usageToDateFor:(id)arg1 nameKind:(id)arg2 reply:(id)arg3;
- (void).cxx_destruct;
- (id)delegate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end
