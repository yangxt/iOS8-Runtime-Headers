/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@class NSArray, NSString, NSObject<OS_dispatch_queue>, HMAccessory, NSNumber, HMMessageDispatcher;

@interface HMService : NSObject <NSSecureCoding> {
    BOOL _primary;
    HMAccessory *_accessory;
    NSString *_serviceType;
    NSString *_name;
    NSArray *_characteristics;
    NSNumber *_instanceID;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMMessageDispatcher *_msgDispatcher;
}

@property(readonly) HMAccessory * accessory;
@property(copy,readonly) NSString * serviceType;
@property(getter=isPrimary,readonly) BOOL primary;
@property(copy,readonly) NSString * name;
@property(copy,readonly) NSArray * characteristics;
@property(readonly) NSNumber * instanceID;
@property(retain) NSObject<OS_dispatch_queue> * workQueue;
@property(retain) HMMessageDispatcher * msgDispatcher;

+ (BOOL)supportsSecureCoding;

- (void)configure:(id)arg1;
- (id)workQueue;
- (void)setMsgDispatcher:(id)arg1;
- (id)msgDispatcher;
- (id)serviceType;
- (id)characteristics;
- (void)setWorkQueue:(id)arg1;
- (id)accessory;
- (id)instanceID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (BOOL)hasCharacteristic:(id)arg1;
- (void)_handleUpdateName:(id)arg1;
- (void)updateName:(id)arg1 completionHandler:(id)arg2;
- (BOOL)isPrimary;

@end
