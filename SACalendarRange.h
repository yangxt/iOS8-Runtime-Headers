/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SACalendar;

@interface SACalendarRange : AceObject <SAAceSerializable> {
}

@property(retain) SACalendar * end;
@property(retain) SACalendar * start;

+ (id)calendarRangeWithDictionary:(id)arg1 context:(id)arg2;
+ (id)calendarRange;

- (id)encodedClassName;
- (void)setEnd:(id)arg1;
- (void)setStart:(id)arg1;
- (id)end;
- (id)start;
- (id)groupIdentifier;

@end