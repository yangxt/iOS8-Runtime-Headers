/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@class NSString;

@interface NSURLCacheInternal : NSObject  {
    unsigned int memoryCapacity;
    unsigned int diskCapacity;
    NSString *diskPath;
    unsigned int currentMemoryUsage;
    unsigned int currentDiskUsage;
    struct _CFURLCache { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __CFURLCache {} *x2; } *_cacheRef;
}


- (void)dealloc;
- (void)finalize;

@end
