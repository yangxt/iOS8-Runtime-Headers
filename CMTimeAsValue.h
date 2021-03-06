/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface CMTimeAsValue : NSValue  {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _time;
}

+ (id)valueWithCMTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

- (struct { long long x1; int x2; unsigned int x3; long long x4; })CMTimeValue;
- (BOOL)charValue;
- (unsigned char)unsignedCharValue;
- (short)shortValue;
- (long)longValue;
- (unsigned long long)unsignedLongLongValue;
- (const char *)objCType;
- (long long)longLongValue;
- (unsigned int)unsignedIntegerValue;
- (void)getValue:(void*)arg1;
- (int)integerValue;
- (double)doubleValue;
- (unsigned long)unsignedLongValue;
- (unsigned int)unsignedIntValue;
- (int)intValue;
- (BOOL)boolValue;
- (float)floatValue;
- (id)description;
- (unsigned short)unsignedShortValue;

@end
