/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@class CHManager;

@interface TUCallServicesRecentsController : NSObject  {
    CHManager *_recentsManager;
}

@property(retain) CHManager * recentsManager;

+ (id)recentCallWithTUCall:(id)arg1;

- (void)setRecentsManager:(id)arg1;
- (id)recentsManager;
- (void)_callFilteredOut:(id)arg1;
- (void)_callStateChanged:(id)arg1;
- (void)dealloc;
- (id)init;

@end