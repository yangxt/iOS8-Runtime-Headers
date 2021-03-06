/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@class MTLResourceListPool, MTLIOAccelDeviceShmemPool, NSObject<OS_dispatch_queue>, MTLIOAccelBuffer;

@interface MTLIOAccelDevice : MTLDevice  {
    struct __IOAccelDevice { } *_deviceRef;
    struct __IOAccelShared { } *_sharedRef;
    MTLIOAccelDeviceShmemPool *_kernelCommandShmemPool;
    MTLIOAccelDeviceShmemPool *_segmentListShmemPool;
    id *_hwResourcePools;
    unsigned int _hwResourcePoolCount;
    MTLResourceListPool *_akResourceListPool;
    MTLResourceListPool *_akPrivateResourceListPool;
    struct MTLIOAccelCommandBufferStoragePool { struct storageQueue { struct MTLIOAccelCommandBufferStorage {} *x_1_1_1; struct MTLIOAccelCommandBufferStorage {} **x_1_1_2; } x1; int x2; int x3; int x4; id x5; } *_commandBufferStoragePool;
    unsigned int _configBits;
    unsigned int _deviceBits;
    unsigned long long _textureRam;
    unsigned long long _videoRam;
    unsigned int _accelID;
    unsigned long long _segmentByteThreshold;
    int _numCommandBuffers;
    struct MTLIOAccelHeap { 
        MTLIOAccelBuffer *buffers[64]; 
        struct MTLRangeAllocator { 
            struct MTLRangeAllocatorElement {} *elements; 
            unsigned int numElements; 
            unsigned int capacity; 
            unsigned int capacityIncrement; 
            unsigned int defaultAlignmentMask; 
        } allocators[64]; 
        unsigned int count; 
    } _bufferHeaps[16];
    NSObject<OS_dispatch_queue> *_device_dispatch_queue;
    unsigned int *_defaultBufferOptions;
}

@property(readonly) id* hwResourcePools;
@property(readonly) unsigned int hwResourcePoolCount;
@property(readonly) unsigned int* defaultBufferOptions;
@property(readonly) int numCommandBuffers;

+ (void)registerDevices;

- (int)numCommandBuffers;
- (unsigned int*)defaultBufferOptions;
- (unsigned int)hwResourcePoolCount;
- (id*)hwResourcePools;
- (id)allocBufferSubDataWithLength:(unsigned int)arg1 options:(unsigned int)arg2 alignment:(int)arg3 heapIndex:(short*)arg4 bufferIndex:(short*)arg5 bufferOffset:(int*)arg6;
- (struct __IOAccelDevice { }*)deviceRef;
- (id)akPrivateResourceListPool;
- (id)akResourceListPool;
- (void)setHwResourcePool:(id*)arg1 count:(int)arg2;
- (void)setComputePipelineStateCommandShmemSize:(unsigned int)arg1;
- (void)setSegmentListShmemSize:(unsigned int)arg1;
- (short)heapIndexWithOptions:(unsigned int)arg1;
- (id)initWithAcceleratorPort:(unsigned int)arg1;
- (void)deallocBufferSubData:(id)arg1 heapIndex:(short)arg2 bufferIndex:(short)arg3 bufferOffset:(int)arg4 length:(int)arg5;
- (struct __IOAccelShared { }*)sharedRef;
- (void)dealloc;

@end
