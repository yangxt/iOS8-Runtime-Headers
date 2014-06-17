/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCH3DNormalDirectionMapper;

@interface TSCH3DPieWedgeGeometry : TSCH3DGeometry  {
    float mStartAngle;
    float mEndAngle;
    int mAngleSteps;
    int mRadiusSteps;
    int mBevelEdgeSteps;
    float mRadius;
    float mBottomZ;
    float mTopZ;
    int mCapOffset;
    int mCapCount;
    TSCH3DNormalDirectionMapper *mNormalDirectionMapper;
}

@property float startAngle;
@property float endAngle;
@property int angleSteps;
@property int radiusSteps;
@property int bevelEdgeSteps;
@property float radius;
@property float bottomZ;
@property float topZ;
@property(readonly) int capOffset;
@property(readonly) int capCount;
@property(readonly) TSCH3DNormalDirectionMapper * normalDirectionMapper;


- (int)geometryCount;
- (float)endAngle;
- (void)setEndAngle:(float)arg1;
- (float)startAngle;
- (void)setStartAngle:(float)arg1;
- (float)radius;
- (void)setRadius:(float)arg1;
- (void)dealloc;
- (id)init;
- (int)bevelEdgeSteps;
- (float)bottomZ;
- (int)radiusSteps;
- (int)angleSteps;
- (float)topZ;
- (BOOL)isFullCircle;
- (void)p_generateAngles:(struct vector<float, std::__1::allocator<float> > { float *x1; float *x2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_1_1; } x3; }*)arg1;
- (void)p_generateBevelCoordinates:(struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> {} *x1; struct tvec3<float> {} *x2; struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> {} *x_3_1_1; } x3; }*)arg1 andAngles:(struct vector<float, std::__1::allocator<float> > { float *x1; float *x2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_1_1; } x3; }*)arg2 radiusArray:(const struct vector<float, std::__1::allocator<float> > { float *x1; float *x2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_1_1; } x3; }*)arg3 topArray:(const struct vector<float, std::__1::allocator<float> > { float *x1; float *x2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_1_1; } x3; }*)arg4;
- (void)generateRoundedTop:(struct vector<float, std::__1::allocator<float> > { float *x1; float *x2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_1_1; } x3; }*)arg1 radiusArray:(struct vector<float, std::__1::allocator<float> > { float *x1; float *x2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_1_1; } x3; }*)arg2;
- (float)bevelHeight;
- (id)selectionKnobPositions;
- (int)capCount;
- (id)normalDirectionMapper;
- (void)setTopZ:(float)arg1;
- (void)setBottomZ:(float)arg1;
- (void)setBevelEdgeSteps:(int)arg1;
- (void)setRadiusSteps:(int)arg1;
- (void)setAngleSteps:(int)arg1;
- (void)generateArrays;
- (int)capOffset;

@end