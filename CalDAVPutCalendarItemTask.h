/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSString, <CalDAVPutCalendarItemTaskDelegate>;

@interface CalDAVPutCalendarItemTask : CoreDAVPutTask  {
    NSString *_previousScheduleTag;
}

@property <CalDAVPutCalendarItemTaskDelegate> * delegate;
@property(retain) NSString * previousScheduleTag;


- (id)initWithDataPayload:(id)arg1 dataContentType:(id)arg2 atURL:(id)arg3 previousETag:(id)arg4;
- (id)additionalHeaderValues;
- (id)previousScheduleTag;
- (void)setPreviousScheduleTag:(id)arg1;
- (id)description;
- (void)dealloc;

@end
