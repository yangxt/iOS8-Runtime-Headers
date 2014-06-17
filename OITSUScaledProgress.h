/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OITSUScaledProgressStorage, OITSUProgress, NSObject<OS_dispatch_queue>;

@interface OITSUScaledProgress : OITSUProgress  {
    OITSUScaledProgressStorage *mStorage;
    OITSUProgress *mProgress;
    id mProgressObserver;
    NSObject<OS_dispatch_queue> *mProgressQueue;
}

@property(retain) OITSUProgress * progress;
@property double maxValue;


- (void)p_addProgressObserverToProgressInQueue;
- (void)p_removeProgressObserverFromProgressInQueue;
- (void)removeProgressObserver:(id)arg1;
- (id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(id)arg3;
- (BOOL)isIndeterminate;
- (id)progress;
- (void)setMaxValue:(double)arg1;
- (void)setProgress:(id)arg1;
- (double)value;
- (double)maxValue;
- (void)dealloc;
- (id)init;

@end