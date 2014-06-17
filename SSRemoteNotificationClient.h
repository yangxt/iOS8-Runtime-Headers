/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSObject<OS_dispatch_queue>;

@interface SSRemoteNotificationClient : NSObject  {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    int _notifyToken;
}

+ (id)sharedClient;

- (id)popQueuedNotifications;
- (void)unregisterForRemoteNotifications;
- (void)registerForRemoteNotifications;
- (void)dealloc;
- (id)init;

@end