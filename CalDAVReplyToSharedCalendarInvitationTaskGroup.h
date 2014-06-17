/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSURL, CalDAVCalendarServerInviteNotificationItem, <CoreDAVTaskGroupDelegate>;

@interface CalDAVReplyToSharedCalendarInvitationTaskGroup : CoreDAVTaskGroup <CoreDAVPostTaskDelegate> {
    CalDAVCalendarServerInviteNotificationItem *_invitation;
    BOOL _acceptInvitation;
    NSURL *_calendarHomeURL;
    NSURL *_sharedAs;
}

@property <CoreDAVTaskGroupDelegate> * delegate;
@property(retain) NSURL * sharedAs;
@property(retain) CalDAVCalendarServerInviteNotificationItem * invitation;
@property BOOL acceptInvitation;
@property(retain) NSURL * calendarHomeURL;


- (BOOL)acceptInvitation;
- (void)setCalendarHomeURL:(id)arg1;
- (id)calendarHomeURL;
- (void)startTaskGroup;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (id)invitation;
- (void)setInvitation:(id)arg1;
- (id)sharedAs;
- (id)initWithInvitation:(id)arg1 acceptInvitation:(BOOL)arg2 atCalendarHomeURL:(id)arg3 accountInfoProvider:(id)arg4 taskManager:(id)arg5;
- (id)generateReply;
- (void)setSharedAs:(id)arg1;
- (void)setAcceptInvitation:(BOOL)arg1;
- (id)description;
- (void)dealloc;

@end