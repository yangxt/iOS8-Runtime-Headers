/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableDictionary, NSMutableArray;

@interface TSCH3DTextureAtlas : NSObject  {
    NSMutableDictionary *mCachedLabels;
    NSMutableArray *mTextures;
    float mSamples;
}

@property(readonly) float samples;

+ (id)atlas;
+ (id)atlasWithSamples:(float)arg1;

- (id)textureAtIndex:(int)arg1;
- (float)samples;
- (void)dealloc;
- (struct tvec3<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; union { int x_3_1_1; int x_3_1_2; int x_3_1_3; } x3; })positionForLabel:(id)arg1;
- (struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })textureSizeAtIndex:(int)arg1;
- (struct tvec3<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; union { int x_3_1_1; int x_3_1_2; int x_3_1_3; } x3; })p_addLabel:(id)arg1;
- (id)initWithSamples:(float)arg1;

@end
