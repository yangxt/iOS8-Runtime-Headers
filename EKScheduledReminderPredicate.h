/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSDate;

@interface EKScheduledReminderPredicate : EKPredicate  {
    NSDate *_day;
}

@property(retain) NSDate * day;

+ (BOOL)supportsSecureCoding;
+ (id)predicateForScheduledRemindersInCalendars:(id)arg1 onDay:(id)arg2;

- (id)day;
- (void)setDay:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
