/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDPreferences : NSObject  {
}

+ (id)sharedPreferences;

- (double)serverTimeoutInterval;
- (void)reset;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)synchronize;

@end
