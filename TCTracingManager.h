/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class TSMTraceBuffer;

@interface TCTracingManager : NSObject  {
    TSMTraceBuffer *mBuffer;
    unsigned int mCount;
}

+ (id)sharedManager;
+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)teardown;
- (void)setup;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)retainCount;
- (void)dealloc;
- (id)autorelease;
- (id)retain;
- (oneway void)release;

@end
