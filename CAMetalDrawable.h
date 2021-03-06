/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@class CAMetalLayer, <MTLTexture>;

@interface CAMetalDrawable : NSObject <CAMetalDrawable> {
    CAMetalLayer *_layer;
    struct _CAMetalDrawablePrivate { struct Atomic { struct { int x_1_2_1; } x_1_1_1; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; boolx7; boolx8; unsigned long long x9; id x10; struct _CAMetalLayerPrivate {} *x11; struct __IOSurface {} *x12; id x13; } *_priv;
}

@property(readonly) <MTLTexture> * texture;
@property(readonly) CAMetalLayer * layer;


- (id)texture;
- (void)present;
- (void)presentAtTime:(double)arg1;
- (struct _CAMetalDrawablePrivate { struct Atomic { struct { int x_1_2_1; } x_1_1_1; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; boolx7; boolx8; unsigned long long x9; id x10; struct _CAMetalLayerPrivate {} *x11; struct __IOSurface {} *x12; id x13; }*)priv;
- (id)initWithDrawablePrivate:(struct _CAMetalDrawablePrivate { struct Atomic { struct { int x_1_2_1; } x_1_1_1; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; boolx7; boolx8; unsigned long long x9; id x10; struct _CAMetalLayerPrivate {} *x11; struct __IOSurface {} *x12; id x13; }*)arg1 layer:(id)arg2;
- (id)layer;
- (void)dealloc;

@end
