/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class NSDate, NSString, GKGameInternal;

@interface GKFriendPlayerInternal : GKFamiliarPlayerInternal  {
    NSString *_status;
    NSDate *_lastPlayedDate;
    GKGameInternal *_lastPlayedGame;
}

+ (id)secureCodedPropertyKeys;

- (id)lastPlayedGame;
- (BOOL)isFriend;
- (void)setLastPlayedGame:(id)arg1;
- (int)defaultFamiliarity;
- (void)setStatus:(id)arg1;
- (id)status;
- (void)dealloc;
- (void)setLastPlayedDate:(id)arg1;
- (id)lastPlayedDate;

@end