/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DPerspectiveLens : TSCH3DLens  {
    float mFOV;
    float mAspect;
}

@property float fov;
@property float aspect;
@property(readonly) float width;
@property(readonly) float height;


- (struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; })matrix;
- (float)height;
- (float)width;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)matrixDescription;
- (id)asFrustumLens;
- (void)setAspect:(float)arg1;
- (float)aspect;
- (float)fov;
- (struct FrustumRect { float x1; float x2; float x3; float x4; })frustumRectAtDistance:(float)arg1;
- (id)shiftedByPercentage:(struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; }*)arg1;
- (id)narrowedByNormalizedBounds:(struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; } x1; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_2_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_2_1_2; } x2; }*)arg1;
- (struct FrustumRect { float x1; float x2; float x3; float x4; })frustumRect;
- (void)calculateCullingPlanes:(struct vector<TSCH3D::Math::ExtendedTypesDetails::plane<glm::detail::tvec3<float> >, std::__1::allocator<TSCH3D::Math::ExtendedTypesDetails::plane<glm::detail::tvec3<float> > > > { struct plane<glm::detail::tvec3<float> > {} *x1; struct plane<glm::detail::tvec3<float> > {} *x2; struct __compressed_pair<TSCH3D::Math::ExtendedTypesDetails::plane<glm::detail::tvec3<float> > *, std::__1::allocator<TSCH3D::Math::ExtendedTypesDetails::plane<glm::detail::tvec3<float> > > > { struct plane<glm::detail::tvec3<float> > {} *x_3_1_1; } x3; }*)arg1;
- (void)setFov:(float)arg1;

@end
