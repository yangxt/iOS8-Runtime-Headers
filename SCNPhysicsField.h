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

@class SCNPhysicsWorld, SCNNode;

@interface SCNPhysicsField : NSObject <NSCopying, NSSecureCoding> {
    void *_reserved;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    } _halfExtent;
    float _strength;
    float _falloffExponent;
    float _minimumDistance;
    BOOL _active;
    int _scope;
    BOOL _usesEllipsoidalExtent;
    BOOL _exclusive;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    } _offset;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    } _direction;
    unsigned int _categoryBitMask;
    SCNPhysicsWorld *_world;
    SCNNode *_node;

  /* Error parsing encoded ivar type info: ^{c3dPhysicsField=^^?{?=[4]}{?=[4]}fffIBBBBf} */
    struct c3dPhysicsField { int (**x1)(); struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[4]; } x2; float x3; float x4; float x5; unsigned int x6; boolx7; boolx8; boolx9; boolx10; float x11; } *_field;

}

@property float strength;
@property float falloffExponent;
@property float minimumDistance;
@property(getter=isActive) BOOL active;
@property(getter=isExclusive) BOOL exclusive;
@property struct SCNVector3 { float x1; float x2; float x3; } halfExtent;
@property BOOL usesEllipsoidalExtent;
@property int scope;
@property struct SCNVector3 { float x1; float x2; float x3; } offset;
@property struct SCNVector3 { float x1; float x2; float x3; } direction;
@property unsigned int categoryBitMask;

+ (BOOL)supportsSecureCoding;
+ (id)SCNJSExportProtocol;
+ (id)customFieldWithEvaluationBlock:(id)arg1;
+ (id)magneticField;
+ (id)electricField;
+ (id)springField;
+ (id)turbulenceField;
+ (id)noiseFieldWithSmoothness:(float)arg1 scale:(float)arg2 animationSpeed:(float)arg3;
+ (id)linearGravityField;
+ (id)radialGravityField;
+ (id)vortexField;
+ (id)dragField;
+ (id)field;

- (void)setScope:(int)arg1;
- (int)scope;
- (void)setCategoryBitMask:(unsigned int)arg1;
- (unsigned int)categoryBitMask;
- (void)setStrength:(float)arg1;
- (float)strength;
- (float)minimumDistance;
- (void)setMinimumDistance:(float)arg1;
- (id).cxx_construct;
- (void)setActive:(BOOL)arg1;
- (struct SCNVector3 { float x1; float x2; float x3; })offset;
- (void)setOffset:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (struct SCNVector3 { float x1; float x2; float x3; })direction;
- (void)setDirection:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)_commonInit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isActive;
- (struct c3dPhysicsField { int (**x1)(); struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[4]; } x2; float x3; float x4; float x5; unsigned int x6; boolx7; boolx8; boolx9; boolx10; float x11; }*)_handle;
     /* Encoded args for previous method: ^{c3dPhysicsField=^^?{?=[4]}{?=[4]}fffIBBBBf}8@0:4 */

- (id)_owner;
- (void)_setWorld:(id)arg1;
- (void)_setOwner:(id)arg1;
- (void)_setupCommonProperties;
- (struct c3dPhysicsField { int (**x1)(); struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[4]; } x2; float x3; float x4; float x5; unsigned int x6; boolx7; boolx8; boolx9; boolx10; float x11; }*)_createField;
     /* Encoded args for previous method: ^{c3dPhysicsField=^^?{?=[4]}{?=[4]}fffIBBBBf}8@0:4 */

- (void)setUsesEllipsoidalExtent:(BOOL)arg1;
- (BOOL)usesEllipsoidalExtent;
- (void)setHalfExtent:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (struct SCNVector3 { float x1; float x2; float x3; })halfExtent;
- (void)setExclusive:(BOOL)arg1;
- (BOOL)isExclusive;
- (void)setFalloffExponent:(float)arg1;
- (float)falloffExponent;
- (void)_removeOwner;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copy;
- (void)dealloc;
- (id)init;

@end
