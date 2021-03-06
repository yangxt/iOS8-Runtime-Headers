/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDLayout;

@interface TSDAbstractGuide : NSObject  {
    float mOffset;
    TSDLayout *mSnappingObjectLayout;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mSnappingObjectFrame;
    BOOL mLocationInvalidated;
    struct CGColor { } *mGuideColor;
}

@property(retain) TSDLayout * snappingObjectLayout;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } snappingObjectFrame;
@property float offset;
@property struct CGColor { }* guideColor;


- (float)offset;
- (void)setOffset:(float)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)snappingObjectLayout;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })snappingObjectFrame;
- (struct CGColor { }*)guideColor;
- (void)setGuideColor:(struct CGColor { }*)arg1;
- (void)setSnappingObjectLayout:(id)arg1;
- (id)layerWithICC:(id)arg1;
- (void)setSnappingObjectFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)canBeSnappedToByEdge:(int)arg1 ofFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;

@end
