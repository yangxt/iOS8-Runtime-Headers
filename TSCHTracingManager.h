/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSURL, NSString, TSMTraceBuffer;

@interface TSCHTracingManager : NSObject  {
    BOOL mTraceLevelSet;
    unsigned int mTraceLevel;
    BOOL mBufferSizeSet;
    unsigned int mBufferSize;
    TSMTraceBuffer *mBuffer;
    NSURL *mLastTraceFileURL;
    NSString *mTag;
}

@property unsigned int traceLevel;
@property unsigned int bufferSize;
@property(readonly) NSURL * lastTraceFileURL;
@property(copy) NSString * tag;

+ (id)sharedManager;
+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)teardown;
- (void)setup;
- (unsigned int)bufferSize;
- (void)setBufferSize:(unsigned int)arg1;
- (void)setTag:(id)arg1;
- (id)tag;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)retainCount;
- (void)dealloc;
- (id)autorelease;
- (id)retain;
- (oneway void)release;
- (id)init;
- (id)lastTraceFileURL;
- (void)setTraceLevel:(unsigned int)arg1;
- (unsigned int)traceLevel;

@end
