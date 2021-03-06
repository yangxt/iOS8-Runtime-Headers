/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface TSDImageAdjustments : NSObject <NSCopying, NSMutableCopying, TSDMixing> {
    float mExposure;
    float mSaturation;
    float mContrast;
    float mHighlights;
    float mShadows;
    float mSharpness;
    float mDenoise;
    float mTemperature;
    float mTint;
    float mBottomLevel;
    float mTopLevel;
    float mGamma;
    BOOL mEnhance;
    BOOL mRepresentsSageAdjustments;
}

@property(readonly) float exposure;
@property(readonly) float saturation;
@property(readonly) float contrast;
@property(readonly) float highlights;
@property(readonly) float shadows;
@property(readonly) float sharpness;
@property(readonly) float denoise;
@property(readonly) float temperature;
@property(readonly) float tint;
@property(readonly) float bottomLevel;
@property(readonly) float topLevel;
@property(readonly) float gamma;
@property(readonly) BOOL enhance;
@property(readonly) BOOL representsSageAdjustments;


- (float)temperature;
- (float)exposure;
- (float)tint;
- (float)gamma;
- (float)shadows;
- (float)contrast;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (float)sharpness;
- (id)description;
- (id)init;
- (float)saturation;
- (BOOL)representsSageAdjustments;
- (void)i_initFromDefaultArchive;
- (float)denoise;
- (float)highlights;
- (float)topLevel;
- (float)bottomLevel;
- (BOOL)enhance;
- (id)imageAdjustmentsWithoutEnhance;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1;
- (id)initWithArchive:(const struct ImageAdjustmentsArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; boolx15; boolx16; int x17; unsigned int x18[1]; }*)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct ImageAdjustmentsArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; boolx15; boolx16; int x17; unsigned int x18[1]; }*)arg1 archiver:(id)arg2;

@end
