/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString, NSDate, NSNumber, NSURL;

@interface SACalendarEvent : SADomainObject  {
}

@property(copy) NSArray * alerts;
@property BOOL allDay;
@property(copy) NSArray * attendees;
@property(copy) NSURL * calendarId;
@property(copy) NSDate * endDate;
@property(copy) NSNumber * includeRecurrences;
@property(copy) NSString * location;
@property(copy) NSString * notes;
@property(copy) NSNumber * readOnly;
@property(copy) NSArray * recurrences;
@property(copy) NSDate * startDate;
@property(copy) NSString * timeZoneId;
@property(copy) NSString * title;

+ (id)eventWithDictionary:(id)arg1 context:(id)arg2;
+ (id)event;

- (void)setReadOnly:(id)arg1;
- (void)setLocation:(id)arg1;
- (id)endDate;
- (id)startDate;
- (void)setTimeZoneId:(id)arg1;
- (id)timeZoneId;
- (void)setRecurrences:(id)arg1;
- (void)setIncludeRecurrences:(id)arg1;
- (id)includeRecurrences;
- (void)setCalendarId:(id)arg1;
- (id)calendarId;
- (void)setAlerts:(id)arg1;
- (id)alerts;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)recurrences;
- (id)readOnly;
- (id)location;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)groupIdentifier;
- (BOOL)allDay;
- (void)setAttendees:(id)arg1;
- (void)setNotes:(id)arg1;
- (id)notes;
- (id)attendees;
- (void)setAllDay:(BOOL)arg1;

@end
