/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLProbabalisticHoughTransform : NSObject  {
    int _cols;
    int _rows;
    float _rho;
    float _theta;
    int _threshold;
    int _lineLength;
    int _lineGap;
    int _numGoodLines;
}


- (void)leastSquareSmooth:(struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; float *x3; float x4; int x5; int x6; float x7; float x8; float x9; float x10; float x11; float x12; struct CGPoint { float x_13_1_1; float x_13_1_2; } x13; struct CGPoint { float x_14_1_1; float x_14_1_2; } x14; float x15; int x16; int x17; int x18; int x19; }*)arg1;
- (struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; float *x3; float x4; int x5; int x6; float x7; float x8; float x9; float x10; float x11; float x12; struct CGPoint { float x_13_1_1; float x_13_1_2; } x13; struct CGPoint { float x_14_1_1; float x_14_1_2; } x14; float x15; int x16; int x17; int x18; int x19; }*)houghLinesProbabalistic:(char *)arg1 rows:(int)arg2 cols:(int)arg3 numLines:(int*)arg4;

@end
