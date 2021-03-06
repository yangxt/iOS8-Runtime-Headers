/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSDictionary, NSString, NSUUID;

@interface HMMessage : NSObject  {
    NSString *_name;
    NSUUID *_identifier;
    NSDictionary *_messagePayload;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _responseHandler;

    id _transport;
}

@property(readonly) NSString * name;
@property(readonly) NSUUID * identifier;
@property(readonly) NSDictionary * messagePayload;
@property(readonly) id responseHandler;
@property(readonly) id transport;

+ (id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 responseHandler:(id)arg4;
+ (id)messageWithName:(id)arg1 messagePayload:(id)arg2 transport:(id)arg3 responseHandler:(id)arg4;
+ (id)messageWithName:(id)arg1 messagePayload:(id)arg2 responseHandler:(id)arg3;
+ (id)messageWithName:(id)arg1 messagePayload:(id)arg2 transport:(id)arg3;
+ (id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 transport:(id)arg4;
+ (id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 transport:(id)arg4 responseHandler:(id)arg5;
+ (id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3;
+ (id)messageWithName:(id)arg1 messagePayload:(id)arg2;

- (id)arrayForKey:(id)arg1;
- (id)calendarForKey:(id)arg1;
- (id)errorForKey:(id)arg1;
- (id)initWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 transport:(id)arg4 responseHandler:(id)arg5;
- (id)nullForKey:(id)arg1;
- (id)dateComponentsForKey:(id)arg1;
- (id)timeZoneForKey:(id)arg1;
- (id)dateForKey:(id)arg1;
- (id)messagePayload;
- (id)numberForKey:(id)arg1;
- (id)uuidForKey:(id)arg1;
- (id)responseHandler;
- (id)transport;
- (id)dictionaryForKey:(id)arg1;
- (void).cxx_destruct;
- (id)stringForKey:(id)arg1;
- (id)identifier;
- (BOOL)boolForKey:(id)arg1;
- (id)name;
- (id)dataForKey:(id)arg1;

@end
