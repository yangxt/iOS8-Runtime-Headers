/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, GKEventEmitter<GKLockStatusObserver>;

@interface GKDevice : NSObject  {
    NSString *_udid;
    NSString *_deviceName;
    NSString *_osVersion;
    NSString *_buildVersion;
    NSString *_gameKitVersion;
    GKEventEmitter<GKLockStatusObserver> *_emitter;
}

@property(readonly) NSString * udid;
@property(readonly) NSString * deviceName;
@property(readonly) NSString * osVersion;
@property(readonly) NSString * buildVersion;
@property(readonly) NSString * gameKitVersion;
@property(retain) GKEventEmitter<GKLockStatusObserver> * emitter;

+ (id)currentDevice;

- (id)udid;
- (id)osVersion;
- (id)emitter;
- (void)removeLockStatusObserver:(id)arg1;
- (void)addLockStatusObserver:(id)arg1;
- (id)buildVersionHeader;
- (id)protocolVersionHeader;
- (id)storeUserAgent;
- (id)gameKitVersion;
- (id)processNameHeader;
- (id)userAgentWithProcessName:(id)arg1 protocolVersion:(id)arg2;
- (void)stopObservingKeyBagStatus;
- (id)_platformUDID;
- (void)beginObservingKeyBagStatusWithCallback:(int (*)())arg1;
- (void)setEmitter:(id)arg1;
- (void)_initPlatform;
- (id)buildVersion;
- (id)deviceName;
- (void)dealloc;
- (id)init;
- (id)userAgent;

@end
