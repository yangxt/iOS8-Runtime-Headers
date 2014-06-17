/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class NSDictionary, NSString, NSMutableDictionary;

@interface SWWorkout : NSObject  {
    NSString *_workoutState;
    NSMutableDictionary *_workoutData;
    double _timeOfLastActivation;
    double _elapsedTimePreviousToLastActivation;
}

@property(readonly) NSString * workoutState;
@property(readonly) NSDictionary * workoutData;


- (id)workoutState;
- (void)pauseWorkout;
- (void)activateWorkout;
- (id)workoutData;
- (double)getElapsedTimeInSeconds;
- (void)dealloc;
- (id)init;

@end