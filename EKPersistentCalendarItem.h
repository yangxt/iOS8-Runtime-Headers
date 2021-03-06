/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class EKPersistentOrganizer, NSSet, NSTimeZone, EKPersistentCalendarItem, EKPersistentCalendar, EKPersistentAttendee, EKPersistentLocation, NSString, NSURL, NSDate, NSData;

@interface EKPersistentCalendarItem : EKPersistentObject  {
}

@property(readonly) NSString * UUID;
@property(retain) EKPersistentCalendar * calendar;
@property(copy) NSString * title;
@property(copy) EKPersistentLocation * location;
@property(copy) EKPersistentLocation * startLocation;
@property(copy) NSString * notes;
@property(copy) NSDate * lastModifiedDate;
@property(copy) NSDate * creationDate;
@property(copy) NSDate * startDate;
@property(copy) NSTimeZone * timeZone;
@property(copy) NSTimeZone * startTimeZone;
@property(copy) NSTimeZone * endTimeZone;
@property(copy) NSString * calendarScale;
@property(getter=isAllDay) BOOL allDay;
@property int priority;
@property int sequence;
@property(copy) NSURL * URL;
@property(copy) NSURL * action;
@property(copy) NSString * externalID;
@property(copy) NSData * externalData;
@property(copy) NSString * uniqueID;
@property(retain) EKPersistentOrganizer * organizer;
@property(readonly) BOOL hasAlarms;
@property(readonly) BOOL hasRecurrenceRules;
@property(readonly) BOOL hasAttendees;
@property(readonly) BOOL hasNotes;
@property(readonly) int selfParticipantStatus;
@property(copy) NSSet * alarms;
@property(getter=isDefaultAlarmRemoved) BOOL defaultAlarmRemoved;
@property(copy) NSSet * recurrenceRules;
@property(copy) NSSet * attendees;
@property(retain) EKPersistentAttendee * selfAttendee;
@property(copy) NSDate * participationStatusModifiedDate;
@property(copy) NSSet * exceptionDates;
@property(copy) NSSet * attachments;
@property(copy) NSString * sharedItemCreatedByDisplayName;
@property(copy) NSString * sharedItemCreatedByEmailAddress;
@property(copy) NSString * sharedItemCreatedByFirstName;
@property(copy) NSString * sharedItemCreatedByLastName;
@property(copy) NSDate * sharedItemCreatedDate;
@property(copy) NSTimeZone * sharedItemCreatedTimeZone;
@property(copy) NSString * sharedItemModifiedByDisplayName;
@property(copy) NSString * sharedItemModifiedByEmailAddress;
@property(copy) NSString * sharedItemModifiedByFirstName;
@property(copy) NSString * sharedItemModifiedByLastName;
@property(copy) NSDate * sharedItemModifiedDate;
@property(copy) NSTimeZone * sharedItemModifiedTimeZone;
@property(getter=isDetached,readonly) BOOL detached;
@property(retain) EKPersistentCalendarItem * originalItem;
@property(copy) NSSet * detachedItems;

+ (id)relations;
+ (id)defaultPropertiesToLoad;

- (void)setLocation:(id)arg1;
- (id)lastModifiedDate;
- (id)startDate;
- (id)uniqueID;
- (void)setStartDate:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (id)creationDate;
- (void)setExternalData:(id)arg1;
- (id)externalData;
- (BOOL)validate:(id*)arg1;
- (void)addAttachment:(id)arg1;
- (id)attachments;
- (void)setAttachments:(id)arg1;
- (void)setPriority:(int)arg1;
- (int)priority;
- (id)calendar;
- (id)timeZone;
- (void)setCalendar:(id)arg1;
- (void)setURL:(id)arg1;
- (id)location;
- (void)setStartLocation:(id)arg1;
- (void)setAction:(id)arg1;
- (id)UUID;
- (void)setTimeZone:(id)arg1;
- (id)action;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)URL;
- (id)init;
- (int)sequence;
- (void)setSequence:(int)arg1;
- (void)setSharedItemCreatedByEmailAddress:(id)arg1;
- (BOOL)hasAttachments;
- (int)attendeeCount;
- (void)itemDidReplicateInNewCalendar:(id)arg1;
- (id)moveToCalendar:(id)arg1 skipItem:(id)arg2;
- (void)removeDetachedItem:(id)arg1;
- (void)removeExceptionDate:(id)arg1;
- (void)setParticipationStatusModifiedDate:(id)arg1;
- (void)primitiveValueChangedForKey:(id)arg1;
- (void)setSharedItemModifiedTimeZone:(id)arg1;
- (id)sharedItemModifiedTimeZone;
- (void)setSharedItemModifiedDate:(id)arg1;
- (id)sharedItemModifiedDate;
- (void)setSharedItemModifiedByLastName:(id)arg1;
- (void)setSharedItemModifiedByFirstName:(id)arg1;
- (void)setSharedItemModifiedByEmailAddress:(id)arg1;
- (id)sharedItemModifiedByEmailAddress;
- (void)setSharedItemModifiedByDisplayName:(id)arg1;
- (id)sharedItemModifiedByDisplayName;
- (void)setSharedItemCreatedTimeZone:(id)arg1;
- (id)sharedItemCreatedTimeZone;
- (void)setSharedItemCreatedDate:(id)arg1;
- (id)sharedItemCreatedDate;
- (void)setSharedItemCreatedByLastName:(id)arg1;
- (void)setSharedItemCreatedByFirstName:(id)arg1;
- (id)sharedItemCreatedByEmailAddress;
- (void)setSharedItemCreatedByDisplayName:(id)arg1;
- (id)sharedItemCreatedByDisplayName;
- (void)removeAttendee:(id)arg1;
- (void)setAttendees:(id)arg1;
- (void)setAlarms:(id)arg1;
- (BOOL)hasAlarms;
- (void)setDefaultAlarmRemoved:(BOOL)arg1;
- (BOOL)isDefaultAlarmRemoved;
- (void)setEndTimeZone:(id)arg1;
- (void)setStartTimeZone:(id)arg1;
- (void)setLastModifiedDate:(id)arg1;
- (void)setNotes:(id)arg1;
- (void)removeAttachment:(id)arg1;
- (id)sharedItemModifiedByLastName;
- (id)sharedItemModifiedByFirstName;
- (id)sharedItemCreatedByLastName;
- (id)sharedItemCreatedByFirstName;
- (int)selfParticipantStatus;
- (id)endTimeZone;
- (id)startTimeZone;
- (void)setCalendarScale:(id)arg1;
- (BOOL)hasNotes;
- (id)notes;
- (void)addDetachedItem:(id)arg1;
- (void)removeAlarm:(id)arg1;
- (void)setUniqueID:(id)arg1;
- (void)setOriginalItem:(id)arg1;
- (void)addRecurrenceRule:(id)arg1;
- (void)setSelfAttendee:(id)arg1;
- (void)addAttendee:(id)arg1;
- (void)setOrganizer:(id)arg1;
- (void)removeRecurrenceRule:(id)arg1;
- (id)exceptionDates;
- (void)deleteSelfAndDetached;
- (void)addExceptionDate:(id)arg1;
- (id)organizer;
- (id)detachedItems;
- (id)alarms;
- (void)setDetachedItems:(id)arg1;
- (void)setExceptionDates:(id)arg1;
- (id)moveToCalendar:(id)arg1;
- (BOOL)hasAttendees;
- (void)addAlarm:(id)arg1;
- (id)attendees;
- (id)participationStatusModifiedDate;
- (BOOL)isDetached;
- (id)startLocation;
- (void)setRecurrenceRules:(id)arg1;
- (id)recurrenceRules;
- (BOOL)hasRecurrenceRules;
- (id)originalItem;
- (id)selfAttendee;
- (void)setAllDay:(BOOL)arg1;
- (id)calendarScale;
- (void)setExternalModificationTag:(id)arg1;
- (id)externalModificationTag;
- (BOOL)isAllDay;
- (id)externalID;
- (void)setExternalID:(id)arg1;

@end
