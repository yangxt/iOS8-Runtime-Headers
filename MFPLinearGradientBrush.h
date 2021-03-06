/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OITSUColor;

@interface MFPLinearGradientBrush : MFPGradientBrush  {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mBounds;
    OITSUColor *mStartColor;
    OITSUColor *mEndColor;
}


- (id)endColor;
- (id)startColor;
- (void)createShading;
- (void)setEndColor:(id)arg1;
- (void)setStartColor:(id)arg1;
- (id).cxx_construct;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
