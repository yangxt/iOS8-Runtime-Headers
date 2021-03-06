/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUBacktrace : NSObject  {
    void **_callstack;
    int _frames;
    int _initAdjustment;
}

+ (id)callee;
+ (id)caller;
+ (id)backtrace;
+ (id)new;

- (id)backtraceString;
- (id)callee;
- (id)caller;
- (id)callerAtIndex:(int)arg1;
- (id)initWithAdjustment:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;

@end
