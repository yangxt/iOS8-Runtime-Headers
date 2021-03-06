/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DExtrusionGeometry : TSCH3DGeometry  {
    struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > { 
        struct tvec2<float> {} *__begin_; 
        struct tvec2<float> {} *__end_; 
        struct __compressed_pair<glm::detail::tvec2<float> *, std::__1::allocator<glm::detail::tvec2<float> > > { 
            struct tvec2<float> {} *__first_; 
        } __end_cap_; 
    } mCrossSection;
    struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > { 
        struct tvec3<float> {} *__begin_; 
        struct tvec3<float> {} *__end_; 
        struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > > { 
            struct tvec3<float> {} *__first_; 
        } __end_cap_; 
    } mSpine;
    struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > { 
        struct tvec2<float> {} *__begin_; 
        struct tvec2<float> {} *__end_; 
        struct __compressed_pair<glm::detail::tvec2<float> *, std::__1::allocator<glm::detail::tvec2<float> > > { 
            struct tvec2<float> {} *__first_; 
        } __end_cap_; 
    } mScale;
    BOOL mBeginCap;
    BOOL mEndCap;
    float mCrossSectionCreaseAngle;
    float mSpineCreaseAngle;
    unsigned int mEndCapOffset;
    int mEndCapCount;
    unsigned int mBeginCapOffset;
    int mBeginCapCount;
    struct tvec3<float> { 
        union { 
            float x; 
            float r; 
            float s; 
        } ; 
        union { 
            float y; 
            float g; 
            float t; 
        } ; 
        union { 
            float z; 
            float b; 
            float p; 
        } ; 
    } mNormalBias;
    struct tvec3<float> { 
        union { 
            float x; 
            float r; 
            float s; 
        } ; 
        union { 
            float y; 
            float g; 
            float t; 
        } ; 
        union { 
            float z; 
            float b; 
            float p; 
        } ; 
    } mSpineDirectionBias;
}

@property BOOL beginCap;
@property BOOL endCap;
@property float crossSectionCreaseAngle;
@property float spineCreaseAngle;
@property struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; } normalBias;
@property(readonly) unsigned int capOffset;
@property(readonly) int capCount;
@property struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; } spineDirectionBias;


- (BOOL)endCap;
- (void)setEndCap:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setScale:(const struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> {} *x1; struct tvec2<float> {} *x2; struct __compressed_pair<glm::detail::tvec2<float> *, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> {} *x_3_1_1; } x3; }*)arg1;
- (const struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> {} *x1; struct tvec2<float> {} *x2; struct __compressed_pair<glm::detail::tvec2<float> *, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> {} *x_3_1_1; } x3; }*)scale;
- (void)dealloc;
- (id)init;
- (void)setSpineDirectionBias:(struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; })arg1;
- (struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; })spineDirectionBias;
- (void)setNormalBias:(struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; })arg1;
- (struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; })normalBias;
- (float)spineCreaseAngle;
- (float)crossSectionCreaseAngle;
- (void)setBeginCap:(BOOL)arg1;
- (BOOL)beginCap;
- (void)debug_dumpGeometryBounds;
- (const struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> {} *x1; struct tvec3<float> {} *x2; struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> {} *x_3_1_1; } x3; }*)spine;
- (void)setSpine:(const struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> {} *x1; struct tvec3<float> {} *x2; struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> {} *x_3_1_1; } x3; }*)arg1;
- (const struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> {} *x1; struct tvec2<float> {} *x2; struct __compressed_pair<glm::detail::tvec2<float> *, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> {} *x_3_1_1; } x3; }*)crossSection;
- (void)setCrossSection:(const struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> {} *x1; struct tvec2<float> {} *x2; struct __compressed_pair<glm::detail::tvec2<float> *, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> {} *x_3_1_1; } x3; }*)arg1;
- (void)setSpineCreaseAngle:(float)arg1;
- (void)setCrossSectionCreaseAngle:(float)arg1;
- (int)capCount;
- (void)generateArrays;
- (unsigned int)capOffset;

@end
