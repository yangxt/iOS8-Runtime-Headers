/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSDStrokePattern, TSUColor;

@interface TSDStroke : NSObject <TSSThemeAsset, TSDPathPainter, TSDMixing, NSCopying, NSMutableCopying> {
    TSUColor *mColor;
    float mWidth;
    float mActualWidth;
    int mCap;
    int mJoin;
    TSDStrokePattern *mPattern;
    float mMiterLimit;
}

@property(readonly) BOOL dontClearBackground;
@property(readonly) BOOL empty;
@property(readonly) BOOL solid;
@property(readonly) float effectiveWidth;
@property(retain) TSUColor * color;
@property float width;
@property float actualWidth;
@property int cap;
@property int join;
@property float miterLimit;
@property(retain) TSDStrokePattern * pattern;
@property(readonly) BOOL isNullStroke;
@property(readonly) BOOL isDash;
@property(readonly) BOOL isRoundDash;
@property(readonly) BOOL shouldRender;
@property(readonly) BOOL supportsPattern;
@property(readonly) BOOL supportsWidth;
@property(readonly) BOOL supportsColor;
@property(readonly) BOOL supportsLineOptions;
@property(readonly) float suggestedMinimumLineWidth;
@property(readonly) BOOL isFrame;
@property(readonly) BOOL isNearlyWhite;
@property(readonly) float dashSpacing;
@property(readonly) BOOL drawsOutsideStrokeBounds;
@property(readonly) struct _TSDStrokeOutsets { float x1; float x2; float x3; float x4; } outsets;

+ (id)stroke;
+ (id)strokeWithColor:(id)arg1 width:(float)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5;
+ (Class)mutableClass;
+ (id)p_newEmptyStroke;
+ (id)p_newStroke;
+ (BOOL)canMixWithNilObjects;
+ (id)emptyStroke;
+ (id)strokeWithColor:(id)arg1 width:(float)arg2;
+ (id)instanceWithArchive:(const struct StrokeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Color {} *x3; float x4; int x5; int x6; float x7; struct StrokePatternArchive {} *x8; struct SmartStrokeArchive {} *x9; struct FrameArchive {} *x10; struct PatternedStrokeArchive {} *x11; int x12; unsigned int x13[1]; }*)arg1 unarchiver:(id)arg2;

- (BOOL)empty;
- (void)setPattern:(id)arg1;
- (id)pattern;
- (float)dashSpacing;
- (int)join;
- (int)cap;
- (void)setJoin:(int)arg1;
- (void)setCap:(int)arg1;
- (void)paintPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (void)paintRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (BOOL)isNearlyWhite;
- (BOOL)isFrame;
- (BOOL)supportsColor;
- (void)setWidth:(float)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setColor:(id)arg1;
- (id)color;
- (float)width;
- (void)setMiterLimit:(float)arg1;
- (float)miterLimit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (BOOL)isEqualToStroke:(id)arg1;
- (float)effectiveWidth;
- (BOOL)dontClearBackground;
- (BOOL)solid;
- (id)strokeByTransformingByTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (BOOL)shouldAntialiasDefeat;
- (BOOL)drawsInOneStep;
- (void)applyToCAShapeLayer:(id)arg1 withScale:(float)arg2;
- (BOOL)prefersToApplyToCAShapeLayerDuringManipulation;
- (void)applyToRepCALayer:(id)arg1 withScale:(float)arg2;
- (float)suggestedMinimumLineWidth;
- (id)pathForLineEnd:(id)arg1 wrapPath:(BOOL)arg2 atPoint:(struct CGPoint { float x1; float x2; })arg3 atAngle:(float)arg4 withScale:(float)arg5;
- (void)paintLineEnd:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2 atAngle:(float)arg3 withScale:(float)arg4 inContext:(struct CGContext { }*)arg5;
- (void)paintPathWithNormalClip:(struct CGPath { }*)arg1 wantsInteriorStroke:(BOOL)arg2 inContext:(struct CGContext { }*)arg3;
- (id)strokeLineEnd:(id)arg1;
- (float)lineEndInsetAdjustment;
- (void)applyInteriorWrapPropertiesToContext:(struct CGContext { }*)arg1 insideStroke:(BOOL)arg2;
- (void)p_setPatternPropertiesFromStroke:(id)arg1;
- (void)p_setPropertiesFromStroke:(id)arg1;
- (struct _TSDStrokeOutsets { float x1; float x2; float x3; float x4; })outsets;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsForPath:(id)arg1;
- (BOOL)needsToExtendJoinsForBoundsCalculation;
- (BOOL)drawsOutsideStrokeBounds;
- (BOOL)canApplyToCAShapeLayer;
- (BOOL)canApplyDirectlyToRepCALayer;
- (void)paintLineEnd:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2 atAngle:(float)arg3 withScale:(float)arg4 inContext:(struct CGContext { }*)arg5 useFastDrawing:(BOOL)arg6;
- (void)paintPath:(struct CGPath { }*)arg1 wantsInteriorStroke:(BOOL)arg2 inContext:(struct CGContext { }*)arg3 useFastDrawing:(BOOL)arg4;
- (void)paintRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 wantsInteriorStroke:(BOOL)arg2 inContext:(struct CGContext { }*)arg3;
- (id)colorForCGContext:(struct CGContext { }*)arg1;
- (void)setActualWidth:(float)arg1;
- (BOOL)supportsPattern;
- (BOOL)supportsLineOptions;
- (BOOL)supportsWidth;
- (id)initWithColor:(id)arg1 width:(float)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5 miterLimit:(float)arg6;
- (id)initWithColor:(id)arg1 width:(float)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5;
- (BOOL)isDash;
- (void)applyToCAShapeLayer:(id)arg1 insideStroke:(BOOL)arg2 withScale:(float)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsForLineEnd:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2 atAngle:(float)arg3 withScale:(float)arg4 transform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg5;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1;
- (void)aaDefeatedPaintLineEnd:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2 atAngle:(float)arg3 withScale:(float)arg4 inContext:(struct CGContext { }*)arg5;
- (void)paintPath:(struct CGPath { }*)arg1 wantsInteriorStroke:(BOOL)arg2 inContext:(struct CGContext { }*)arg3;
- (void)applyToContext:(struct CGContext { }*)arg1 insideStroke:(BOOL)arg2;
- (void)applyToContext:(struct CGContext { }*)arg1;
- (float)actualWidth;
- (BOOL)isRoundDash;
- (BOOL)shouldRender;
- (BOOL)isNullStroke;
- (SEL)mapThemeAssetSelector;
- (BOOL)isThemeEquivalent:(id)arg1;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (id)initWithArchive:(const struct StrokeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Color {} *x3; float x4; int x5; int x6; float x7; struct StrokePatternArchive {} *x8; struct SmartStrokeArchive {} *x9; struct FrameArchive {} *x10; struct PatternedStrokeArchive {} *x11; int x12; unsigned int x13[1]; }*)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct StrokeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Color {} *x3; float x4; int x5; int x6; float x7; struct StrokePatternArchive {} *x8; struct SmartStrokeArchive {} *x9; struct FrameArchive {} *x10; struct PatternedStrokeArchive {} *x11; int x12; unsigned int x13[1]; }*)arg1 archiver:(id)arg2;

@end