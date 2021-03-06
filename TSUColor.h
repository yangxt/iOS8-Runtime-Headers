/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface TSUColor : NSObject <TSSPreset, TSSPresetSource, TSSThemeAsset, NSCopying> {
    struct CGColor { } *mCGColor;
}

@property(readonly) NSString * presetKind;
@property(readonly) struct CGColor { }* CGColor;

+ (id)randomColor;
+ (id)colorWithUIColor:(id)arg1;
+ (id)colorWithPatternImage:(id)arg1;
+ (id)colorWithHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4;
+ (id)colorWithCGColor:(struct CGColor { }*)arg1;
+ (id)colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
+ (id)brownColor;
+ (id)purpleColor;
+ (id)orangeColor;
+ (id)yellowColor;
+ (id)magentaColor;
+ (id)cyanColor;
+ (id)blueColor;
+ (id)greenColor;
+ (id)redColor;
+ (id)lightGrayColor;
+ (id)grayColor;
+ (id)whiteColor;
+ (id)colorWithWhite:(float)arg1 alpha:(float)arg2;
+ (id)clearColor;
+ (id)blackColor;
+ (id)p_defaultPresetColors:(int)arg1;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (id)presetKinds;

- (id)initWithMessage:(const struct Color { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; int x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; int x13; unsigned int x14[1]; }*)arg1;
- (void)paintPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (void)paintRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (id)blendedColorWithFraction:(float)arg1 ofColor:(id)arg2;
- (BOOL)isNearlyWhite;
- (float)luminance;
- (id)invertedColor;
- (id)grayscaleColor;
- (id)UIColor;
- (void)getRGBAComponents:(float*)arg1;
- (BOOL)isAlmostEqualToColor:(id)arg1;
- (id)newBlendedColorWithFraction:(float)arg1 ofColor:(id)arg2;
- (float)p_rgbComponentWithIndex:(unsigned char)arg1;
- (float)blueComponent;
- (float)greenComponent;
- (float)redComponent;
- (id)initWithUIColor:(id)arg1;
- (id)initWithPatternImage:(id)arg1;
- (id)initWithCGColor:(struct CGColor { }*)arg1;
- (float)alphaComponent;
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (id)initWithWhite:(float)arg1 alpha:(float)arg2;
- (id)initWithHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4;
- (BOOL)isOpaque;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)colorWithAlphaComponent:(float)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (struct CGColor { }*)CGColor;
- (void)dealloc;
- (BOOL)isThemeEquivalent:(id)arg1;
- (id)presetKind;
- (id)initWithArchive:(const struct Color { }*)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct Color { }*)arg1 archiver:(id)arg2;
- (void)saveToMessage:(struct Color { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; int x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; int x13; unsigned int x14[1]; }*)arg1;

@end
