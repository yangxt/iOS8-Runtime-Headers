/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDPDFImageProvider : TSDImageProvider  {
    struct CGPDFDocument { } *mPDFDocument;
    struct CGSize { 
        float width; 
        float height; 
    } mNaturalSize;
}


- (BOOL)hasFlushableContent;
- (struct CGSize { float x1; float x2; })naturalSize;
- (BOOL)isValid;
- (void)flush;
- (void)dealloc;
- (int)pageAngle;
- (struct CGPDFDocument { }*)p_load;
- (void)p_loadIfNecessary;
- (struct CGPDFDocument { }*)CGPDFDocument;
- (void)drawImageInContext:(struct CGContext { }*)arg1 rect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;

@end
