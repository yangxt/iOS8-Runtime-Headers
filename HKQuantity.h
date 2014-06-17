/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@class HKUnit;

@interface HKQuantity : NSObject <NSSecureCoding, NSCopying> {
    double _value;
    HKUnit *_unit;
}

@property(getter=_unit,readonly) HKUnit * unit;

+ (BOOL)supportsSecureCoding;
+ (id)quantityWithUnit:(id)arg1 doubleValue:(double)arg2;

- (void).cxx_destruct;
- (int)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)init;
- (BOOL)isCompatibleWithUnit:(id)arg1;
- (double)doubleValueForUnit:(id)arg1;
- (id)_unit;
- (id)_initWithUnit:(id)arg1 doubleValue:(double)arg2;

@end