/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@class NSString;

@interface EAWiFiUnconfiguredAccessory : NSObject  {
    NSString *_name;
    NSString *_manufacturer;
    NSString *_model;
    NSString *_ssid;
    NSString *_macAddress;
    unsigned int _properties;
}

@property(copy,readonly) NSString * name;
@property(copy,readonly) NSString * manufacturer;
@property(copy,readonly) NSString * model;
@property(copy,readonly) NSString * ssid;
@property(copy,readonly) NSString * macAddress;
@property(readonly) unsigned int properties;


- (id)macAddress;
- (id)ssid;
- (id)manufacturer;
- (void).cxx_destruct;
- (unsigned int)properties;
- (id)model;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (id)description;
- (id)initWithAirPortAssistantWACDevice:(id)arg1;

@end
