/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSLock;

@interface SUScriptNotificationObserver : NSObject  {
    NSLock *_lock;
    struct __CFSet { } *_receivers;
}


- (void)_accessibilityPerformEscape;
- (void)_accessibilityPerformScrollRight;
- (void)_accessibilityPerformScrollLeft;
- (void)_accessibilityPerformScrollDown;
- (void)_accessibilityPerformScrollUp;
- (void)_enumerateReceiversUsingBlock:(id)arg1;
- (void)_softwareMapChangedNotification:(id)arg1;
- (void)_purchaseRequestDidSucceedNotification:(id)arg1;
- (void)_audioSessionsChangedNotification:(id)arg1;
- (void)_dispatchEventWithDictionary:(id)arg1 forName:(id)arg2;
- (void)_dispatchEvent:(id)arg1 forName:(id)arg2;
- (void)_beginObservingNotifications;
- (void)_endObservingNotifications;
- (void)removeEventReceiver:(id)arg1;
- (void)addEventReceiver:(id)arg1;
- (void)_memoryWarningNotification:(id)arg1;
- (void)_restrictionsChangedNotification:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_networkTypeChangedNotification:(id)arg1;

@end