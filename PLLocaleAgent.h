/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@class PLNSNotificationOperatorComposition;

@interface PLLocaleAgent : PLAgent  {
    PLNSNotificationOperatorComposition *_timeNotifications;
}

@property(retain) PLNSNotificationOperatorComposition * timeNotifications;

+ (id)entryEventNoneDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)railDefinitions;
+ (void)load;

- (void)setTimeNotifications:(id)arg1;
- (id)timeNotifications;
- (void)logEventForwardTimeZone;
- (void)logEventForwardTimeZoneWithTrigger:(id)arg1;
- (void)initOperatorDependancies;
- (void).cxx_destruct;
- (void)log;
- (id)init;

@end