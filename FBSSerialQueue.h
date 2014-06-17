/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@class NSArray, NSObject<OS_dispatch_queue>;

@interface FBSSerialQueue : NSObject  {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSArray *_mainRunLoopModes;
    struct __CFRunLoopSource { } *_runLoopSource;
}

+ (id)queueWithDispatchQueue:(id)arg1;
+ (id)queueWithMainRunLoopModes:(id)arg1;

- (void)performAsync:(id)arg1;
- (id)_initWithDispatchQueue:(id)arg1 mainRunLoopModes:(id)arg2;
- (void)assertOnQueue;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end