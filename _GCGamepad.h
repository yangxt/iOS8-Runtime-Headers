/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class _GCControllerDirectionPad, GCController, NSString, _GCControllerButtonInput;

@interface _GCGamepad : GCGamepad <GCNamedProfile, NSSecureCoding> {
    GCController *_controller;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _valueChangedHandler;

    _GCControllerDirectionPad *_dpad;
    _GCControllerButtonInput *_button0;
    _GCControllerButtonInput *_button1;
    _GCControllerButtonInput *_button2;
    _GCControllerButtonInput *_button3;
    _GCControllerButtonInput *_leftShoulder;
    _GCControllerButtonInput *_rightShoulder;
    BOOL _dpadFlippedY;
}

@property(readonly) NSString * name;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)setController:(id)arg1;
- (id)controller;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (id)init;
- (void)setPlayerIndex:(int)arg1;
- (id)initWithController:(id)arg1 dpadFlippedY:(BOOL)arg2;
- (id)initWithController:(id)arg1;
- (void)setValueChangedHandler:(id)arg1;
- (id)valueChangedHandler;
- (id)rightShoulder;
- (id)leftShoulder;
- (id)buttonY;
- (id)buttonX;
- (id)buttonB;
- (id)buttonA;
- (id)dpad;

@end