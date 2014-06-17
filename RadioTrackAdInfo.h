/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class NSString;

@interface RadioTrackAdInfo : NSObject <NSSecureCoding> {
    BOOL _gatewayAdSlot;
    NSString *_slotIdentifier;
}

@property(getter=isGatewayAdSlot,readonly) BOOL gatewayAdSlot;
@property(copy,readonly) NSString * slotIdentifier;

+ (BOOL)supportsSecureCoding;

- (BOOL)isGatewayAdSlot;
- (id)slotIdentifier;
- (id)initWithAdInfoDictionary:(id)arg1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end