/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class UIBezierPath;

@interface SCNShape : SCNGeometry  {
    id _reserved;
    float _chamferRadius;
    float _extrusionDepth;
    float _discretizedStraightLineMaxLength;
    struct UIBezierPath { Class x1; struct CGPath {} *x2; float *x3; unsigned int x4; float x5; float x6; float x7; float x8; int x9; int x10; BOOL x11; struct CGPath {} *x12; BOOL x13; } *_chamferProfile;
    int _primitiveType;
    int _chamferMode;
    struct UIBezierPath { Class x1; struct CGPath {} *x2; float *x3; unsigned int x4; float x5; float x6; float x7; float x8; int x9; int x10; BOOL x11; struct CGPath {} *x12; BOOL x13; } *_path;
}

@property(copy) UIBezierPath * path;
@property float extrusionDepth;
@property int chamferMode;
@property float chamferRadius;
@property(copy) UIBezierPath * chamferProfile;

+ (BOOL)supportsSecureCoding;
+ (id)shapeWithPath:(id)arg1 extrusionDepth:(float)arg2;
+ (id)SCNJSExportProtocol;

- (int)primitiveType;
- (void)setPath:(struct UIBezierPath { Class x1; struct CGPath {} *x2; float *x3; unsigned int x4; float x5; float x6; float x7; float x8; int x9; int x10; BOOL x11; struct CGPath {} *x12; BOOL x13; }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)_customDecodingOfSCNShape:(id)arg1;
- (void)_customEncodingOfSCNShape:(id)arg1;
- (id)initWithShapeGeometryRef:(struct __C3DShapeGeometry { struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_3_1; unsigned char x_1_3_2[4]; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; int x_1_2_6; int x_1_2_7; } x_1_1_1; struct __C3DMesh {} *x_1_1_2; struct __C3DMaterial {} *x_1_1_3; struct __CFArray {} *x_1_1_4; struct __CFArray {} *x_1_1_5; struct __CFSet {} *x_1_1_6; struct __CFArray {} *x_1_1_7; struct __C3DAABB {} *x_1_1_8; int (*x_1_1_9)(); struct { boolx_10_2_1; boolx_10_2_2; unsigned short x_10_2_3; unsigned short x_10_2_4; float x_10_2_5; float x_10_2_6; unsigned char x_10_2_7; unsigned char x_10_2_8; unsigned char x_10_2_9; unsigned char x_10_2_10; struct __C3DMeshElement {} *x_10_2_11; struct __C3DMeshSource {} *x_10_2_12; struct __C3DMesh {} *x_10_2_13; boolx_10_2_14; boolx_10_2_15; void *x_10_2_16; void *x_10_2_17; } x_1_1_10; } x1; struct { BOOL x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; long x_2_1_5; float x_2_1_6; struct CGPath {} *x_2_1_7; void *x_2_1_8; struct CGPath {} *x_2_1_9; void *x_2_1_10; } x2; struct __C3DMesh {} *x3; unsigned char x4[16]; }*)arg1;
- (void)setChamferMode:(int)arg1;
- (int)chamferMode;
- (id)initPresentationShapeGeometryWithShapeGeometryRef:(struct __C3DShapeGeometry { struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_3_1; unsigned char x_1_3_2[4]; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; int x_1_2_6; int x_1_2_7; } x_1_1_1; struct __C3DMesh {} *x_1_1_2; struct __C3DMaterial {} *x_1_1_3; struct __CFArray {} *x_1_1_4; struct __CFArray {} *x_1_1_5; struct __CFSet {} *x_1_1_6; struct __CFArray {} *x_1_1_7; struct __C3DAABB {} *x_1_1_8; int (*x_1_1_9)(); struct { boolx_10_2_1; boolx_10_2_2; unsigned short x_10_2_3; unsigned short x_10_2_4; float x_10_2_5; float x_10_2_6; unsigned char x_10_2_7; unsigned char x_10_2_8; unsigned char x_10_2_9; unsigned char x_10_2_10; struct __C3DMeshElement {} *x_10_2_11; struct __C3DMeshSource {} *x_10_2_12; struct __C3DMesh {} *x_10_2_13; boolx_10_2_14; boolx_10_2_15; void *x_10_2_16; void *x_10_2_17; } x_1_1_10; } x1; struct { BOOL x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; long x_2_1_5; float x_2_1_6; struct CGPath {} *x_2_1_7; void *x_2_1_8; struct CGPath {} *x_2_1_9; void *x_2_1_10; } x2; struct __C3DMesh {} *x3; unsigned char x4[16]; }*)arg1;
- (float)discretizedStraightLineMaxLength;
- (void)setDiscretizedStraightLineMaxLength:(float)arg1;
- (struct { BOOL x1; float x2; float x3; long x4; float x5; void *x6; void *x7; })params;
- (void)setChamferProfile:(struct UIBezierPath { Class x1; struct CGPath {} *x2; float *x3; unsigned int x4; float x5; float x6; float x7; float x8; int x9; int x10; BOOL x11; struct CGPath {} *x12; BOOL x13; }*)arg1;
- (struct UIBezierPath { Class x1; struct CGPath {} *x2; float *x3; unsigned int x4; float x5; float x6; float x7; float x8; int x9; int x10; BOOL x11; struct CGPath {} *x12; BOOL x13; }*)chamferProfile;
- (float)extrusionDepth;
- (void)setExtrusionDepth:(float)arg1;
- (float)chamferRadius;
- (void)setChamferRadius:(float)arg1;
- (void)_syncObjCModel:(struct __C3DShapeGeometry { struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_3_1; unsigned char x_1_3_2[4]; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; int x_1_2_6; int x_1_2_7; } x_1_1_1; struct __C3DMesh {} *x_1_1_2; struct __C3DMaterial {} *x_1_1_3; struct __CFArray {} *x_1_1_4; struct __CFArray {} *x_1_1_5; struct __CFSet {} *x_1_1_6; struct __CFArray {} *x_1_1_7; struct __C3DAABB {} *x_1_1_8; int (*x_1_1_9)(); struct { boolx_10_2_1; boolx_10_2_2; unsigned short x_10_2_3; unsigned short x_10_2_4; float x_10_2_5; float x_10_2_6; unsigned char x_10_2_7; unsigned char x_10_2_8; unsigned char x_10_2_9; unsigned char x_10_2_10; struct __C3DMeshElement {} *x_10_2_11; struct __C3DMeshSource {} *x_10_2_12; struct __C3DMesh {} *x_10_2_13; boolx_10_2_14; boolx_10_2_15; void *x_10_2_16; void *x_10_2_17; } x_1_1_10; } x1; struct { BOOL x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; long x_2_1_5; float x_2_1_6; struct CGPath {} *x_2_1_7; void *x_2_1_8; struct CGPath {} *x_2_1_9; void *x_2_1_10; } x2; struct __C3DMesh {} *x3; unsigned char x4[16]; }*)arg1;
- (void)setPrimitiveType:(int)arg1;
- (struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_2_1; unsigned char x_1_2_2[4]; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; int x_1_1_6; int x_1_1_7; } x1; struct __C3DMesh {} *x2; struct __C3DMaterial {} *x3; struct __CFArray {} *x4; struct __CFArray {} *x5; struct __CFSet {} *x6; struct __CFArray {} *x7; struct __C3DAABB {} *x8; int (*x9)(); struct { boolx_10_1_1; boolx_10_1_2; unsigned short x_10_1_3; unsigned short x_10_1_4; float x_10_1_5; float x_10_1_6; unsigned char x_10_1_7; unsigned char x_10_1_8; unsigned char x_10_1_9; unsigned char x_10_1_10; struct __C3DMeshElement {} *x_10_1_11; struct __C3DMeshSource {} *x_10_1_12; struct __C3DMesh {} *x_10_1_13; boolx_10_1_14; boolx_10_1_15; void *x_10_1_16; void *x_10_1_17; } x10; }*)__createCFObject;
- (BOOL)getBoundingSphereCenter:(struct SCNVector3 { float x1; float x2; float x3; }*)arg1 radius:(float*)arg2;
- (BOOL)getBoundingBoxMin:(struct SCNVector3 { float x1; float x2; float x3; }*)arg1 max:(struct SCNVector3 { float x1; float x2; float x3; }*)arg2;
- (id)presentationGeometry;
- (struct __C3DAnimationChannel { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __C3DAnimation {} *x2; struct __CFArray {} *x3; void *x4; struct __C3DModelTarget {} *x5; struct __CFString {} *x6; }*)copyAnimationChannelForKeyPath:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct UIBezierPath { Class x1; struct CGPath {} *x2; float *x3; unsigned int x4; float x5; float x6; float x7; float x8; int x9; int x10; BOOL x11; struct CGPath {} *x12; BOOL x13; }*)path;
- (id)copy;
- (id)description;
- (void)dealloc;
- (id)init;

@end