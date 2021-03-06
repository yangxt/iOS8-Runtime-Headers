/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@class NSDate, PLEntryNotificationOperatorComposition;

@interface PLAWDAudio : PLAWDAuxMetrics  {
    PLEntryNotificationOperatorComposition *_audioRailCallback;
    NSDate *_startTime;
}

@property(retain) PLEntryNotificationOperatorComposition * audioRailCallback;
@property(retain) NSDate * startTime;

+ (id)entryAggregateDefinitions;
+ (id)getSharedObjWithOperator:(id)arg1;
+ (id)entryAggregateDefinitionAwdAudio;

- (id)audioRailCallback;
- (BOOL)submitDataToAWDServer:(id)arg1 withAwdConn:(id)arg2;
- (void)stopMetricCollection:(id)arg1;
- (void)startMetricCollection:(id)arg1;
- (void)finalizeAudioTable;
- (void)setAudioRailCallback:(id)arg1;
- (void)handleAudioRailCallback:(id)arg1;
- (void)resetAudioTable;
- (id)startTime;
- (void).cxx_destruct;
- (void)setStartTime:(id)arg1;

@end
