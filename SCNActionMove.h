/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface SCNActionMove : SCNAction  {

  /* Error parsing encoded ivar type info: ^{SCNCActionMove=^^?f@BddffdBB@?^{__CFString}ifffffcc} */
    struct SCNCActionMove { int (**x1)(); float x2; id x3; boolx4; double x5; double x6; float x7; float x8; double x9; boolx10; boolx11; id x12; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x13; struct __CFString {} *x14; int x15; float x16; float x17; float x18; float x19; float x20; BOOL x21; BOOL x22; } *_mycaction;

}

+ (BOOL)supportsSecureCoding;
+ (id)moveTo:(struct SCNVector3 { float x1; float x2; float x3; })arg1 duration:(double)arg2;
+ (id)moveBy:(struct SCNVector3 { float x1; float x2; float x3; })arg1 duration:(double)arg2;
+ (id)moveToX:(float)arg1 y:(float)arg2 z:(float)arg3 duration:(double)arg4;
+ (id)moveByX:(float)arg1 y:(float)arg2 z:(float)arg3 duration:(double)arg4;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)reversedAction;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
