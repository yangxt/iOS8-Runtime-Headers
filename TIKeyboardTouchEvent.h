/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardTouchEvent : NSObject <NSSecureCoding> {
    float _radius;
    int _pathIndex;
    int _stage;
    int _forcedKeyCode;
    struct CGPoint { 
        float x; 
        float y; 
    } _location;
    double _timestamp;
}

@property(readonly) int stage;
@property(readonly) struct CGPoint { float x1; float x2; } location;
@property(readonly) float radius;
@property(readonly) double timestamp;
@property(readonly) int pathIndex;
@property(readonly) int forcedKeyCode;

+ (id)touchEventWithStage:(int)arg1 location:(struct CGPoint { float x1; float x2; })arg2 radius:(float)arg3 timestamp:(double)arg4 pathIndex:(int)arg5 forcedKeyCode:(int)arg6;
+ (BOOL)supportsSecureCoding;

- (int)forcedKeyCode;
- (id)initWithStage:(int)arg1 location:(struct CGPoint { float x1; float x2; })arg2 radius:(float)arg3 timestamp:(double)arg4 pathIndex:(int)arg5 forcedKeyCode:(int)arg6;
- (int)pathIndex;
- (int)stage;
- (struct CGPoint { float x1; float x2; })location;
- (double)timestamp;
- (float)radius;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end
