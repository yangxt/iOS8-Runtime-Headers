/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSDBezierPath : NSObject <NSCopying, NSCoding> {
    int sfr_elementCount;
    int sfr_elementMax;
    struct PATHSEGMENT { unsigned int x1 : 4; unsigned int x2 : 28; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; } *sfr_head;
    float *sfr_elementLength;
    float sfr_totalLength;
    int sfr_lastSubpathIndex;
    void *sfr_extraSegments;
    float sfr_lineWidth;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } sfr_controlPointBounds;
    float sfr_miterLimit;
    float sfr_flatness;
    float *sfr_dashedLinePattern;
    unsigned int sfr_dashedLineCount;
    float sfr_dashedLinePhase;
    void *sfr_path;
    int sfr_extraSegmentCount;
    int sfr_extraSegmentMax;
    struct { 
        unsigned int sfr_flags : 8; 
        unsigned int sfr_pathState : 2; 
        unsigned int sfr_calculatedLengths : 1; 
        unsigned int sfr_unused : 21; 
    } sfr_bpFlags;
}

+ (float)defaultLineWidth;
+ (void)setDefaultLineWidth:(float)arg1;
+ (unsigned int)defaultLineJoinStyle;
+ (void)setDefaultLineJoinStyle:(unsigned int)arg1;
+ (unsigned int)defaultLineCapStyle;
+ (void)setDefaultLineCapStyle:(unsigned int)arg1;
+ (unsigned int)defaultWindingRule;
+ (void)setDefaultWindingRule:(unsigned int)arg1;
+ (float)defaultFlatness;
+ (void)setDefaultFlatness:(float)arg1;
+ (float)defaultMiterLimit;
+ (void)setDefaultMiterLimit:(float)arg1;
+ (void)strokeLineFromPoint:(struct CGPoint { float x1; float x2; })arg1 toPoint:(struct CGPoint { float x1; float x2; })arg2;
+ (void)clipRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (void)strokeRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (id)bezierPathWithStart:(struct CGPoint { float x1; float x2; })arg1 end:(struct CGPoint { float x1; float x2; })arg2;
+ (void)setWindingRule:(unsigned int)arg1;
+ (unsigned int)windingRule;
+ (void)fillRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (void)initialize;
+ (void)setFlatness:(float)arg1;
+ (float)flatness;
+ (void)setMiterLimit:(float)arg1;
+ (float)miterLimit;
+ (void)setLineJoinStyle:(unsigned int)arg1;
+ (unsigned int)lineJoinStyle;
+ (void)setLineCapStyle:(unsigned int)arg1;
+ (unsigned int)lineCapStyle;
+ (void)setLineWidth:(float)arg1;
+ (float)lineWidth;
+ (id)bezierPathWithCGPath:(struct CGPath { }*)arg1;
+ (id)bezierPathWithRoundedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 cornerRadius:(float)arg2;
+ (id)bezierPathWithOvalInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (id)bezierPathWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (id)bezierPath;

- (void)attachBezierPath:(id)arg1;
- (void)_addPathSegment:(int)arg1 point:(struct CGPoint { float x1; float x2; })arg2;
- (void)appendBezierPathWithArcWithEllipseBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 startAngle:(float)arg2 swingAngle:(float)arg3 angleType:(int)arg4 startNewPath:(BOOL)arg5;
- (void)appendBezierPathWithArcWithEllipseBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 startRadialVector:(struct CGPoint { float x1; float x2; })arg2 endRadialVector:(struct CGPoint { float x1; float x2; })arg3 angleSign:(int)arg4 startNewPath:(BOOL)arg5;
- (id)initWithCString:(const char *)arg1;
- (void)appendBezierPathWithArcFromPoint:(struct CGPoint { float x1; float x2; })arg1 toPoint:(struct CGPoint { float x1; float x2; })arg2 radius:(float)arg3;
- (void)appendBezierPathWithPoints:(struct CGPoint { float x1; float x2; }*)arg1 count:(int)arg2;
- (void)setAssociatedPoints:(struct CGPoint { float x1; float x2; }*)arg1 atIndex:(int)arg2;
- (float)lengthToElement:(int)arg1;
- (float)lengthOfElement:(int)arg1;
- (BOOL)isClockwise;
- (BOOL)isCircular;
- (BOOL)isRectangular;
- (struct CGPath { }*)cgPath;
- (id)_copyFlattenedPath;
- (id)bezierPathByFlatteningPath;
- (void)relativeCurveToPoint:(struct CGPoint { float x1; float x2; })arg1 controlPoint1:(struct CGPoint { float x1; float x2; })arg2 controlPoint2:(struct CGPoint { float x1; float x2; })arg3;
- (void)relativeLineToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)relativeMoveToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_appendArcSegmentWithCenter:(struct CGPoint { float x1; float x2; })arg1 radius:(double)arg2 angle1:(double)arg3 angle2:(double)arg4;
- (void)transformUsingAffineTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)appendBezierPathWithArcWithCenter:(struct CGPoint { float x1; float x2; })arg1 radius:(float)arg2 startAngle:(float)arg3 endAngle:(float)arg4;
- (void)_appendToPath:(id)arg1;
- (void)calculateLengths;
- (float)calculateLengthOfElement:(int)arg1;
- (unsigned int)elementAtIndex:(int)arg1 allPoints:(struct CGPoint { float x1; float x2; }*)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })controlPointBounds;
- (unsigned int)elementAtIndex:(int)arg1 associatedPoints:(struct CGPoint { float x1; float x2; }*)arg2;
- (BOOL)isFlat;
- (void)_doPath;
- (void)curveToPoint:(struct CGPoint { float x1; float x2; })arg1 controlPoint1:(struct CGPoint { float x1; float x2; })arg2 controlPoint2:(struct CGPoint { float x1; float x2; })arg3;
- (void)flattenIntoPath:(id)arg1;
- (void)subdivideBezierWithFlatness:(float)arg1 startPoint:(struct CGPoint { float x1; float x2; })arg2 controlPoint1:(struct CGPoint { float x1; float x2; })arg3 controlPoint2:(struct CGPoint { float x1; float x2; })arg4 endPoint:(struct CGPoint { float x1; float x2; })arg5;
- (void)_deviceClosePath;
- (void)_deviceCurveToPoint:(struct CGPoint { float x1; float x2; })arg1 controlPoint1:(struct CGPoint { float x1; float x2; })arg2 controlPoint2:(struct CGPoint { float x1; float x2; })arg3;
- (void)_deviceLineToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_deviceMoveToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setWindingRule:(unsigned int)arg1;
- (unsigned int)windingRule;
- (unsigned int)elementAtIndex:(int)arg1;
- (int)elementCount;
- (id).cxx_construct;
- (void)setFlatness:(float)arg1;
- (float)flatness;
- (void)setMiterLimit:(float)arg1;
- (float)miterLimit;
- (void)setLineJoinStyle:(unsigned int)arg1;
- (unsigned int)lineJoinStyle;
- (void)setLineCapStyle:(unsigned int)arg1;
- (unsigned int)lineCapStyle;
- (void)setLineWidth:(float)arg1;
- (float)lineWidth;
- (void)appendBezierPathWithArcWithCenter:(struct CGPoint { float x1; float x2; })arg1 radius:(float)arg2 startAngle:(float)arg3 endAngle:(float)arg4 clockwise:(BOOL)arg5;
- (void)appendBezierPathWithOvalInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)appendBezierPathWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)appendBezierPath:(id)arg1;
- (void)lineToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)stroke;
- (void)fill;
- (void)getLineDash:(float*)arg1 count:(int*)arg2 phase:(float*)arg3;
- (void)setLineDash:(const float*)arg1 count:(int)arg2 phase:(float)arg3;
- (BOOL)containsPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })currentPoint;
- (BOOL)isEmpty;
- (id)bezierPathByReversingPath;
- (void)removeAllPoints;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)addClip;
- (void)closePath;
- (void)moveToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (float)length;
- (id)description;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (const char *)cString;

@end
