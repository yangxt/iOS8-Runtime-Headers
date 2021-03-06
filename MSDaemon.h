/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class NSTimer, NSObject<OS_dispatch_queue>;

@interface MSDaemon : NSObject  {
    BOOL _stabilizedIsBusy;
    int _busyCount;
    int _UIBusyCount;
    NSObject<OS_dispatch_queue> *_idleCountQueue;
    NSTimer *_hysteresisTimer;
}

@property int busyCount;
@property int UIBusyCount;
@property(retain) NSTimer * hysteresisTimer;
@property BOOL stabilizedIsBusy;
@property(retain) NSObject<OS_dispatch_queue> * idleCountQueue;


- (BOOL)isBusy;
- (void)setIdleCountQueue:(id)arg1;
- (void)setUIBusyCount:(int)arg1;
- (int)UIBusyCount;
- (void)releaseUIBusy;
- (void)retainUIBusy;
- (void)stabilizedDidIdle;
- (void)_didChangeIdleBusyState:(BOOL)arg1;
- (void)_hysteresisTimerDidFire:(id)arg1;
- (void)stabilizedDidUnidle;
- (void)setStabilizedIsBusy:(BOOL)arg1;
- (BOOL)stabilizedIsBusy;
- (void)setHysteresisTimer:(id)arg1;
- (id)hysteresisTimer;
- (void)releasePowerAssertion;
- (void)retainPowerAssertion;
- (id)idleCountQueue;
- (void)setBusyCount:(int)arg1;
- (int)busyCount;
- (void)didUnidle;
- (void)didIdle;
- (void)releaseBusy;
- (void)retainBusy;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
