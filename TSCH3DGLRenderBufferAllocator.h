/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCH3DRenderBufferStorage;

@interface TSCH3DGLRenderBufferAllocator : NSObject <TSCH3DRenderBufferAllocator> {
    TSCH3DRenderBufferStorage *mStorage;
}

@property(readonly) BOOL isTexturable;

+ (id)allocatorWithStorage:(id)arg1;
+ (id)allocator;

- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)bufferWithAllocatorInfo:(const struct RenderbufferAllocatorInfo { struct FramebufferAttributes {} *x1; struct tvec2<int> {} *x2; id x3; }*)arg1 internalFormat:(unsigned int)arg2 attachment:(unsigned int)arg3;
- (id)initWithStorage:(id)arg1;
- (id)depthbufferWithAllocatorInfo:(const struct RenderbufferAllocatorInfo { struct FramebufferAttributes {} *x1; struct tvec2<int> {} *x2; id x3; }*)arg1;
- (id)colorbufferWithAllocatorInfo:(const struct RenderbufferAllocatorInfo { struct FramebufferAttributes {} *x1; struct tvec2<int> {} *x2; id x3; }*)arg1;
- (BOOL)isTexturable;

@end