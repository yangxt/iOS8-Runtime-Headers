/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@class <FBUIApplicationServiceDelegate>, NSObject<OS_dispatch_queue>;

@interface FBUIApplicationService : NSObject  {
    <FBUIApplicationServiceDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
}

@property <FBUIApplicationServiceDelegate> * delegate;
@property(retain) NSObject<OS_dispatch_queue> * queue;

+ (id)sharedInstance;

- (BOOL)handleApplicationProcess:(id)arg1 setNextWakeInterval:(double)arg2;
- (void)handleApplicationProcess:(id)arg1 requestBrightness:(float)arg2 completion:(id)arg3;
- (void)handleApplication:(id)arg1 getBadgeValueWithCompletion:(id)arg2;
- (void)handleApplication:(id)arg1 setBadgeValue:(id)arg2;
- (void)setQueue:(id)arg1;
- (id)queue;
- (id)initWithQueue:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end
