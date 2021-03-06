/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTStrokeWidthCache : NSObject  {
    unsigned int mCount;
    struct _opaque_pthread_rwlock_t { 
        long __sig; 
        BOOL __opaque[124]; 
    } mLock;
    struct vector<float, std::__1::allocator<float> > { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::__1::allocator<float> > { 
            float *__first_; 
        } __end_cap_; 
    } mStrokeWidth;
}


- (void).cxx_destruct;
- (id).cxx_construct;
- (void)invalidate;
- (void)dealloc;
- (id)init;
- (void)setStrokeWidth:(float)arg1 forGridIndex:(unsigned int)arg2;
- (float)strokeWidthForGridIndex:(unsigned int)arg1;

@end
