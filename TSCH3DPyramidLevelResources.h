/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSUPair, TSCH3DPyramidBlurFBOResource;

@interface TSCH3DPyramidLevelResources : NSObject  {
    TSUPair *mResourcePair;
}

@property(readonly) TSCH3DPyramidBlurFBOResource * finalResource;
@property(readonly) TSCH3DPyramidBlurFBOResource * temporaryResource;
@property(readonly) struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; } size;

+ (id)resourcesWithFBOSize:(struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1;

- (id)finalResource;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })size;
- (void)dealloc;
- (id)temporaryResource;
- (id)initWithFBOSize:(struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1;

@end
