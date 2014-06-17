/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDSpacingGuideUILayer, TSDSwappableAxesGeometry;

@interface TSDCenterAlignmentGuide : TSDAlignmentGuide  {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mLeftGeneratingObjectRect;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mRightGeneratingObjectRect;
    TSDSpacingGuideUILayer *mLeftSpacingUILayer;
    TSDSpacingGuideUILayer *mRightSpacingUILayer;
    TSDSwappableAxesGeometry *mVerticalGeom;
}


- (int)compare:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)layerWithICC:(id)arg1;
- (float)exactOffset;
- (BOOL)canBeSnappedToByEdge:(int)arg1 ofFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)initBetweenRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 andRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 withGuideType:(int)arg3;
- (int)integerOffset;

@end