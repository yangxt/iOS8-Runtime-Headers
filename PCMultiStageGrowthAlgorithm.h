/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@class NSDate, NSString, NSDictionary;

@interface PCMultiStageGrowthAlgorithm : NSObject <PCGrowthAlgorithm> {
    double _currentKeepAliveInterval;
    double _minimumKeepAliveInterval;
    double _maximumKeepAliveInterval;
    double _lastKeepAliveInterval;
    int _growthStage;
    double _highWatermark;
    double _initialGrowthStageHighWatermark;
    double _initialGrowthStageLastAttempt;
    NSDate *_leaveSteadyStateDate;
    NSString *_loggingIdentifier;
    NSString *_algorithmName;
    unsigned int _countOfGrowthActions;
}

@property(readonly) NSString * loggingIdentifier;
@property(readonly) double currentKeepAliveInterval;
@property double minimumKeepAliveInterval;
@property double maximumKeepAliveInterval;
@property(readonly) unsigned int countOfGrowthActions;
@property(copy,readonly) NSDictionary * cacheInfo;

+ (void)_loadDefaultValue:(double*)arg1 forKey:(struct __CFString { }*)arg2;
+ (void)_loadDefaults;

- (id)cacheInfo;
- (unsigned int)countOfGrowthActions;
- (BOOL)useIntervalIfImprovement:(double)arg1;
- (id)initWithCacheInfo:(id)arg1 loggingIdentifier:(id)arg2 algorithmName:(id)arg3;
- (double)_steadyStateTimeout;
- (void)processNextAction:(int)arg1;
- (void)_processBackoffAction:(int)arg1;
- (void)_processSteadyStateAction:(int)arg1;
- (void)_processRefinedGrowthAction:(int)arg1;
- (void)_processInitialGrowthAction:(int)arg1;
- (id)_stringForAction:(int)arg1;
- (id)_stringForStage:(int)arg1;
- (double)maximumKeepAliveInterval;
- (void)_setCurrentKeepAliveInterval:(double)arg1;
- (double)minimumKeepAliveInterval;
- (void)_resetAlgorithmToInterval:(double)arg1;
- (void)_resetAlgorithmToInterval:(double)arg1 stage:(int)arg2;
- (id)loggingIdentifier;
- (double)currentKeepAliveInterval;
- (void)setMaximumKeepAliveInterval:(double)arg1;
- (void)setMinimumKeepAliveInterval:(double)arg1;
- (id)description;
- (void)dealloc;

@end