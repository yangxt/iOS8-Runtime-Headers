/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class NSData, NSFileHandle, NSMutableData;

@interface SWVicFileLogger : NSObject  {
    NSFileHandle *_vicFileHandle;
    NSMutableData *_vicFileData;
    NSData *_previousPacket;
}


- (void)logPacket:(id)arg1 rssi:(BOOL)arg2;
- (void)dealloc;
- (id)init;

@end
