/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@class <MTLComputePipelineState>, NSMutableDictionary, NSDictionary;

@interface MTLDebugComputeCommandEncoder : MTLToolsComputeCommandEncoder  {
    NSMutableDictionary *_bufferDict;
    NSMutableDictionary *_textureDict;
    NSMutableDictionary *_samplerDict;
    NSMutableDictionary *_localMemorySizeDict;
    BOOL canDealloc;
    BOOL canEndEncoding;
    BOOL canSetComputePipelineState;
    <MTLComputePipelineState> *_computePipelineState;
}

@property(readonly) <MTLComputePipelineState> * computePipelineState;
@property(readonly) NSDictionary * bufferDict;
@property(readonly) NSDictionary * textureDict;
@property(readonly) NSDictionary * samplerDict;
@property(readonly) NSDictionary * localMemorySizeDict;


- (void).cxx_destruct;
- (id)localMemorySizeDict;
- (id)samplerDict;
- (id)textureDict;
- (id)bufferDict;
- (id)computePipelineState;
- (void)executeBarrier;
- (void)executeKernelWithWorkGroupSize:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg1 workGroupCount:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg2;
- (void)setLocalMemorySize:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (void)setSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned int)arg4;
- (void)setSamplerState:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setTexture:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setBuffer:(id)arg1 offset:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (void)setComputePipelineState:(id)arg1;
- (id)initWithComputeCommandEncoder:(id)arg1 commandBuffer:(id)arg2;
- (void)_validateAllFunctionArguments;
- (void)_setDefaults;
- (void)endEncoding;
- (void)dealloc;

@end
