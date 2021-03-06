/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAMediaTimingFunction : NSObject <NSCoding> {
    struct CAMediaTimingFunctionPrivate { float x1[2]; float x2[2]; } *_priv;
}

+ (id)functionWithName:(id)arg1;
+ (id)functionWithControlPoints:(float)arg1 :(float)arg2 :(float)arg3 :(float)arg4;
+ (void)CAMLParserEndElement:(id)arg1 content:(id)arg2;
+ (id)uiFunctionWithControlPoints:(const struct CGPoint { float x1; float x2; }*)arg1;
+ (id)_kbTimingFunction;
+ (id)sigmoidFunction;

- (float)_solveForInput:(float)arg1;
- (void)getControlPointAtIndex:(unsigned long)arg1 values:(float[2])arg2;
- (id)CAMLType;
- (void)_getPoints:(double*)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithControlPoints:(float)arg1 :(float)arg2 :(float)arg3 :(float)arg4;
- (float)TSD_valueAtPercent:(double)arg1;

@end
