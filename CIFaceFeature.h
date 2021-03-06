/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIFaceFeature : CIFeature  {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } bounds;
    BOOL hasLeftEyePosition;
    struct CGPoint { 
        float x; 
        float y; 
    } leftEyePosition;
    BOOL hasRightEyePosition;
    struct CGPoint { 
        float x; 
        float y; 
    } rightEyePosition;
    BOOL hasMouthPosition;
    struct CGPoint { 
        float x; 
        float y; 
    } mouthPosition;
    BOOL hasTrackingID;
    int trackingID;
    BOOL hasTrackingFrameCount;
    int trackingFrameCount;
    BOOL hasFaceAngle;
    float faceAngle;
    BOOL hasSmile;
    BOOL leftEyeClosed;
    BOOL rightEyeClosed;
}

@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;
@property BOOL hasLeftEyePosition;
@property struct CGPoint { float x1; float x2; } leftEyePosition;
@property BOOL hasRightEyePosition;
@property struct CGPoint { float x1; float x2; } rightEyePosition;
@property BOOL hasMouthPosition;
@property struct CGPoint { float x1; float x2; } mouthPosition;
@property BOOL hasTrackingID;
@property int trackingID;
@property BOOL hasTrackingFrameCount;
@property int trackingFrameCount;
@property BOOL hasFaceAngle;
@property float faceAngle;
@property BOOL hasSmile;
@property BOOL leftEyeClosed;
@property BOOL rightEyeClosed;

+ (id)faceFeaturesWithBoundsArray:(const struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 count:(unsigned int)arg2;
+ (id)faceFeatureWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

- (id)initWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id).cxx_construct;
- (id)type;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (void)setRightEyeClosed:(BOOL)arg1;
- (BOOL)rightEyeClosed;
- (void)setLeftEyeClosed:(BOOL)arg1;
- (BOOL)leftEyeClosed;
- (void)setHasSmile:(BOOL)arg1;
- (BOOL)hasSmile;
- (void)setHasFaceAngle:(BOOL)arg1;
- (BOOL)hasFaceAngle;
- (void)setTrackingFrameCount:(int)arg1;
- (int)trackingFrameCount;
- (void)setHasTrackingFrameCount:(BOOL)arg1;
- (BOOL)hasTrackingFrameCount;
- (void)setTrackingID:(int)arg1;
- (int)trackingID;
- (void)setHasTrackingID:(BOOL)arg1;
- (BOOL)hasTrackingID;
- (void)setMouthPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)setHasMouthPosition:(BOOL)arg1;
- (void)setRightEyePosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)setHasRightEyePosition:(BOOL)arg1;
- (void)setLeftEyePosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)setHasLeftEyePosition:(BOOL)arg1;
- (id)initWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 hasLeftEyePosition:(BOOL)arg2 leftEyePosition:(struct CGPoint { float x1; float x2; })arg3 hasRightEyePosition:(BOOL)arg4 rightEyePosition:(struct CGPoint { float x1; float x2; })arg5 hasMouthPosition:(BOOL)arg6 mouthPosition:(struct CGPoint { float x1; float x2; })arg7 hasFaceAngle:(BOOL)arg8 faceAngle:(float)arg9 hasTrackingID:(BOOL)arg10 trackingID:(int)arg11 hasTrackingFrameCount:(BOOL)arg12 trackingFrameCount:(int)arg13 hasSmile:(BOOL)arg14 leftEyeClosed:(BOOL)arg15 rightEyeClosed:(BOOL)arg16;
- (struct CGPoint { float x1; float x2; })mouthPosition;
- (BOOL)hasMouthPosition;
- (struct CGPoint { float x1; float x2; })rightEyePosition;
- (BOOL)hasRightEyePosition;
- (struct CGPoint { float x1; float x2; })leftEyePosition;
- (BOOL)hasLeftEyePosition;
- (float)faceAngle;
- (void)setFaceAngle:(float)arg1;

@end
