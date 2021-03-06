/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@class NSNumberFormatter, NSString;

@interface PLValue : NSObject  {
    short _formatter;
    id _value;
    NSString *_unit;
}

@property(retain) id value;
@property(retain) NSString * unit;
@property short formatter;
@property(readonly) NSNumberFormatter * numberFormatter;

+ (id)valueWithNumber:(id)arg1 withUnit:(id)arg2 withFormat:(short)arg3;
+ (id)valueWithLong:(long)arg1 withUnit:(id)arg2 withFormat:(short)arg3;
+ (id)valueWithBool:(BOOL)arg1 withUnit:(id)arg2 withFormat:(short)arg3;
+ (id)valueWithString:(id)arg1 withUnit:(id)arg2 withFormat:(short)arg3;
+ (id)valueWithDouble:(double)arg1 withUnit:(id)arg2 withFormat:(short)arg3;
+ (id)valueWithUnsignedLongLong:(unsigned long long)arg1 withUnit:(id)arg2 withFormat:(short)arg3;
+ (void)resetTimestampFormaterTimezone;
+ (id)valueWithDate:(id)arg1 withUnit:(id)arg2 withFormat:(short)arg3;
+ (id)valueWithTimeIntervalSince1970:(double)arg1 withUnit:(id)arg2 withFormat:(short)arg3;
+ (id)valueWithUnsignedLong:(unsigned long)arg1 withUnit:(id)arg2 withFormat:(short)arg3;
+ (id)valueWithLongLong:(long long)arg1 withUnit:(id)arg2 withFormat:(short)arg3;
+ (id)formattedStringForDate:(id)arg1;
+ (id)valueWithValue:(id)arg1 withUnit:(id)arg2 withFormat:(short)arg3;
+ (BOOL)isFormater:(short)arg1 validForObject:(id)arg2;

- (void)setUnit:(id)arg1;
- (id)unit;
- (long)longValue;
- (double)timeIntervalSince1970;
- (void).cxx_destruct;
- (unsigned long long)unsignedLongLongValue;
- (int)compare:(id)arg1;
- (long long)longLongValue;
- (id)value;
- (void)setValue:(id)arg1;
- (double)doubleValue;
- (unsigned long)unsignedLongValue;
- (BOOL)boolValue;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)numberFormatter;
- (void)setFormatter:(short)arg1;
- (short)formatter;

@end
