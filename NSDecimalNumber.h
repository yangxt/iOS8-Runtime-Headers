/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSDecimalNumber : NSNumber  {
    unsigned int _exponent : 8;
    unsigned int _length : 4;
    unsigned int _isNegative : 1;
    unsigned int _isCompact : 1;
    unsigned int _reserved : 1;
    unsigned int _hasExternalRefCount : 1;
    unsigned int _refs : 16;
    unsigned short _mantissa[0];
}

@property(readonly) struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; } decimalValue;
@property(readonly) const char * objCType;
@property(readonly) double doubleValue;

+ (id)decimalNumberWithString:(id)arg1 locale:(id)arg2;
+ (id)numberWithUnsignedChar:(unsigned char)arg1;
+ (id)numberWithShort:(short)arg1;
+ (id)numberWithUnsignedShort:(unsigned short)arg1;
+ (id)numberWithLong:(long)arg1;
+ (id)numberWithUnsignedLong:(unsigned long)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)numberWithChar:(BOOL)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)numberWithInteger:(int)arg1;
+ (id)numberWithLongLong:(long long)arg1;
+ (id)numberWithDouble:(double)arg1;
+ (id)numberWithUnsignedInt:(unsigned int)arg1;
+ (id)numberWithUnsignedLongLong:(unsigned long long)arg1;
+ (id)numberWithFloat:(float)arg1;
+ (id)numberWithBool:(BOOL)arg1;
+ (id)numberWithUnsignedInteger:(unsigned int)arg1;
+ (id)numberWithInt:(int)arg1;
+ (void)setDefaultBehavior:(id)arg1;
+ (id)one;
+ (id)maximumDecimalNumber;
+ (id)minimumDecimalNumber;
+ (id)decimalNumberWithMantissa:(unsigned long long)arg1 exponent:(short)arg2 isNegative:(BOOL)arg3;
+ (id)defaultBehavior;
+ (id)notANumber;
+ (id)decimalNumberWithDecimal:(struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; })arg1;
+ (id)zero;
+ (id)decimalNumberWithString:(id)arg1;
+ (id)two;

- (id)descriptionWithLocale:(id)arg1;
- (BOOL)charValue;
- (unsigned char)unsignedCharValue;
- (short)shortValue;
- (long)longValue;
- (unsigned long long)unsignedLongLongValue;
- (const char *)objCType;
- (int)compare:(id)arg1;
- (long long)longLongValue;
- (id)initWithString:(id)arg1;
- (Class)classForCoder;
- (void)getValue:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)doubleValue;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long)unsignedLongValue;
- (unsigned int)unsignedIntValue;
- (int)intValue;
- (BOOL)boolValue;
- (float)floatValue;
- (id)copy;
- (id)description;
- (id)decimalNumberByRoundingAccordingToBehavior:(id)arg1;
- (id)decimalNumberByMultiplyingByPowerOf10:(short)arg1;
- (id)decimalNumberByRaisingToPower:(unsigned int)arg1;
- (id)decimalNumberBySubtracting:(id)arg1;
- (id)decimalNumberBySubstracting:(id)arg1 withBehavior:(id)arg2;
- (id)decimalNumberBySubstracting:(id)arg1;
- (id)decimalNumberByAdding:(id)arg1;
- (id)decimalNumberByMultiplyingBy:(id)arg1;
- (id)decimalNumberByMultiplyingByPowerOf10:(short)arg1 withBehavior:(id)arg2;
- (id)decimalNumberByRaisingToPower:(unsigned int)arg1 withBehavior:(id)arg2;
- (id)decimalNumberByDividingBy:(id)arg1 withBehavior:(id)arg2;
- (id)decimalNumberByMultiplyingBy:(id)arg1 withBehavior:(id)arg2;
- (id)decimalNumberBySubtracting:(id)arg1 withBehavior:(id)arg2;
- (id)decimalNumberByAdding:(id)arg1 withBehavior:(id)arg2;
- (id)initWithMantissa:(unsigned long long)arg1 exponent:(short)arg2 isNegative:(BOOL)arg3;
- (id)initWithDecimal:(struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; })arg1;
- (id)initWithString:(id)arg1 locale:(id)arg2;
- (id)decimalNumberByDividingBy:(id)arg1;
- (struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; })decimalValue;
- (bool)_getCString:(char *)arg1 length:(int)arg2 multiplier:(double)arg3;
- (unsigned short)unsignedShortValue;

@end