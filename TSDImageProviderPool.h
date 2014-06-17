/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSUPointerKeyDictionary;

@interface TSDImageProviderPool : NSObject <TSPDataCullingListener> {
    TSUPointerKeyDictionary *mImageDataToImageProviderMap;
    unsigned int mOpenFileDescriptorLimit;
    BOOL mHaveRaisedFileDescriptorLimit;
}

+ (id)_singletonAlloc;
+ (id)sharedPool;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (Class)p_providerClassForData:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)retainCount;
- (void)dealloc;
- (id)autorelease;
- (id)retain;
- (oneway void)release;
- (id)init;
- (void)flushImageProviders;
- (void)willCloseDocumentContext:(id)arg1;
- (unsigned int)p_removeProvidersWithZeroInterest;
- (void)p_freeFileDescriptorsWithProviderCount:(unsigned int)arg1;
- (unsigned int)p_providerLimitForFileDescriptorLimit:(unsigned int)arg1;
- (id)p_providerForData:(id)arg1 temporary:(BOOL)arg2 shouldValidate:(BOOL)arg3;
- (void)p_didReceiveMemoryWarning:(id)arg1;
- (void)p_updateFileDescriptorLimit;
- (id)temporaryProviderForData:(id)arg1 shouldValidate:(BOOL)arg2;
- (id)providerForData:(id)arg1 shouldValidate:(BOOL)arg2;
- (void)removeInterestInProviderForData:(id)arg1;
- (void)addInterestInProviderForData:(id)arg1;
- (void)willCullData:(id)arg1;

@end