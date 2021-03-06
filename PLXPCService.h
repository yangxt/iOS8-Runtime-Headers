/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@class PLNSNotificationOperatorComposition, NSArray, NSObject<OS_xpc_object>, NSDictionary, NSMutableDictionary;

@interface PLXPCService : PLService  {
    NSObject<OS_xpc_object> *_xpcConnection;
    NSMutableDictionary *_registeredListeners;
    NSMutableDictionary *_registeredResponders;
    NSDictionary *_permissionCache;
    PLNSNotificationOperatorComposition *_registrationNotification;
    NSArray *_clientIDs;
}

@property(retain) NSObject<OS_xpc_object> * xpcConnection;
@property(retain) NSMutableDictionary * registeredListeners;
@property(retain) NSMutableDictionary * registeredResponders;
@property(retain) NSDictionary * permissionCache;
@property(retain) PLNSNotificationOperatorComposition * registrationNotification;
@property(retain) NSArray * clientIDs;

+ (id)entryEventPointDefinitionClientLogging;
+ (id)entryEventPointDefinitions;
+ (void)load;

- (void)setClientIDs:(id)arg1;
- (void)setRegistrationNotification:(id)arg1;
- (id)registrationNotification;
- (void)setPermissionCache:(id)arg1;
- (void)setRegisteredResponders:(id)arg1;
- (void)setRegisteredListeners:(id)arg1;
- (void)logMessage:(id)arg1 withPayload:(id)arg2;
- (id)registeredOperatorFromDictionary:(id)arg1 forMessage:(id)arg2;
- (void)respondToEvent:(id)arg1 withResponse:(id)arg2;
- (short)permissionForClientID:(short)arg1 withKey:(id)arg2 withType:(id)arg3 withProcessName:(id)arg4;
- (void)handlePeerListenerEvent:(id)arg1 withMessage:(id)arg2 withClientID:(short)arg3 withProcessName:(id)arg4 withKey:(id)arg5 withPayload:(id)arg6;
- (void)handlePeerResponderEvent:(id)arg1 withMessage:(id)arg2 withClientID:(short)arg3 withProcessName:(id)arg4 withKey:(id)arg5 withPayload:(id)arg6;
- (void)handlePeerShouldLogEvent:(id)arg1 withMessage:(id)arg2 withClientID:(short)arg3 withProcessName:(id)arg4 withKey:(id)arg5;
- (id)permissionCache;
- (id)clientIDs;
- (void)handlePeer:(id)arg1 forEvent:(id)arg2;
- (id)registeredResponders;
- (id)registeredListeners;
- (void)setXpcConnection:(id)arg1;
- (id)xpcConnection;
- (void).cxx_destruct;
- (id)init;

@end
