/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
 */

@class NSDateFormatter, NSMutableDictionary, UsageFeed;

@interface AppLaunchStatsNetwork : NSObject  {
    NSMutableDictionary *bundleDict;
    UsageFeed *symptomsfeed;
    NSDateFormatter *symptomsfmt;
}


- (void)bundleEnd:(id)arg1 seqNum:(long long)arg2 endHandler:(id)arg3;
- (void)bundleStart:(id)arg1 seqNum:(long long)arg2;
- (id)findOrCreate:(id)arg1;
- (void).cxx_destruct;
- (id)init;

@end