/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
 */

@class PLEntryNotificationOperatorComposition;

@interface PLSyslogAgent : PLAgent  {
    int kq;
    unsigned int lastMessageID;
    unsigned int syslogdPid;
    struct __CFRunLoopSource { } *fileDescriptorSource;
    PLEntryNotificationOperatorComposition *_batteryLevelChanged;
}

@property(retain) PLEntryNotificationOperatorComposition * batteryLevelChanged;

+ (id)entryAggregateDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)railDefinitions;
+ (id)defaults;
+ (void)load;

- (id)batteryLevelChanged;
- (void)setBatteryLevelChanged:(id)arg1;
- (void)initOperatorDependancies;
- (void)resetMessageIndex;
- (void)listenForSyslogDeath;
- (void)logEventPointLogLine;
- (void)enumerateResultsOfASLQuery:(struct __asl_object_s { }*)arg1 usingBlock:(id)arg2;
- (void).cxx_destruct;
- (void)log;
- (id)init;

@end