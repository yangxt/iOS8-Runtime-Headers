/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSDate;

@interface SACalendarRecurrence : AceObject <SAAceSerializable> {
}

@property int endCount;
@property(copy) NSDate * endDate;
@property int frequency;
@property int interval;

+ (id)recurrenceWithDictionary:(id)arg1 context:(id)arg2;
+ (id)recurrence;

- (id)endDate;
- (void)setEndCount:(int)arg1;
- (int)endCount;
- (id)encodedClassName;
- (void)setEndDate:(id)arg1;
- (int)interval;
- (void)setInterval:(int)arg1;
- (void)setFrequency:(int)arg1;
- (int)frequency;
- (id)groupIdentifier;

@end
