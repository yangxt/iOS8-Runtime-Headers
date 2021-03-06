/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMOnBodyStatus : CMLogItem  {
    int fResult;
    int fConfidence;
}

@property(readonly) int result;
@property(readonly) int confidence;


- (int)result;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (int)confidence;
- (id)initWithOnBodyResult:(int)arg1 confidence:(int)arg2 timestamp:(double)arg3;

@end
