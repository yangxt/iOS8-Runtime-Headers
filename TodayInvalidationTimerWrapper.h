/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSTimer;

@interface TodayInvalidationTimerWrapper : NSObject  {
    NSTimer *_tzSupportDayRolloverTimer;
}


- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)invalidateTodayAndNotifyIfChanged;
- (void)_killTimeZoneTimer;
- (void)_setupTimeZoneTimer;
- (BOOL)todayChangedAfterInvalidation;

@end