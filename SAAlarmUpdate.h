/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString, NSNumber, NSURL;

@interface SAAlarmUpdate : SADomainCommand  {
}

@property(copy) NSArray * addedFrequency;
@property(copy) NSURL * alarmId;
@property(copy) NSNumber * enabled;
@property(copy) NSNumber * hour;
@property(copy) NSString * label;
@property(copy) NSNumber * minute;
@property(copy) NSArray * modifications;
@property(copy) NSArray * removedFrequency;

+ (id)updateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)update;

- (void)setRemovedFrequency:(id)arg1;
- (id)removedFrequency;
- (void)setModifications:(id)arg1;
- (id)modifications;
- (void)setAddedFrequency:(id)arg1;
- (id)addedFrequency;
- (void)setAlarmId:(id)arg1;
- (id)alarmId;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setMinute:(id)arg1;
- (id)minute;
- (id)hour;
- (void)setHour:(id)arg1;
- (void)setLabel:(id)arg1;
- (id)label;
- (void)setEnabled:(id)arg1;
- (id)enabled;
- (id)groupIdentifier;

@end