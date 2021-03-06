/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray, NSObject<OS_dispatch_queue>;

@interface MPUserNotification : NSObject  {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackInvocationQueue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _willShowNotificationHandler;

    id strongSelf;
    BOOL _isShowing;
    struct __CFRunLoopSource { } *_runLoopSource;
    NSMutableArray *_showingCompletionHandlers;
    struct __CFUserNotification { } *_cfUserNotification;
}

@property(readonly) struct __CFUserNotification { }* cfUserNotification;
@property(copy) id willShowNotificationHandler;

+ (id)_userNotificationForCFUserNotification:(struct __CFUserNotification { }*)arg1;
+ (id)_userNotificationConversionAccessQueue;
+ (void)_setUserNotification:(id)arg1 forCFUserNotification:(struct __CFUserNotification { }*)arg2;

- (void).cxx_destruct;
- (void)cancel;
- (void)showWithCompletionHandler:(id)arg1;
- (void)dealloc;
- (id)init;
- (struct __CFUserNotification { }*)cfUserNotification;
- (void)_didReceiveResponseWithFlags:(unsigned long)arg1;
- (void)setWillShowNotificationHandler:(id)arg1;
- (id)willShowNotificationHandler;
- (void)_cancelSynchronously:(BOOL)arg1;
- (id)initWithCFUserNotification:(struct __CFUserNotification { }*)arg1;

@end
