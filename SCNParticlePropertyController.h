/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@class NSString, SCNNode, CAAnimation;

@interface SCNParticlePropertyController : NSObject <NSSecureCoding, NSCopying> {
    id _reserved;
    CAAnimation *_animation;
    int _inputMode;
    float _inputScale;
    float _inputBias;
    SCNNode *_inputOrigin;
    NSString *_inputProperty;
}

@property(retain) CAAnimation * animation;
@property int inputMode;
@property float inputScale;
@property float inputBias;
@property SCNNode * inputOrigin;
@property(copy) NSString * inputProperty;

+ (BOOL)supportsSecureCoding;
+ (id)particlePropertyControllerWithAnimation:(id)arg1;
+ (id)controllerWithAnimation:(id)arg1;
+ (id)SCNJSExportProtocol;

- (int)inputMode;
- (void)setAnimation:(id)arg1;
- (void)setInputMode:(int)arg1;
- (id)animation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setInputProperty:(id)arg1;
- (void)setInputOrigin:(id)arg1;
- (void)setInputBias:(float)arg1;
- (void)setInputScale:(float)arg1;
- (id)inputProperty;
- (id)inputOrigin;
- (float)inputBias;
- (float)inputScale;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copy;
- (void)dealloc;
- (id)init;

@end