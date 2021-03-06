/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class GKGameRecordInternal, NSDate, GKPlayerInternal;

@interface GKRecentMatchInternal : GKInternalRepresentation  {
    GKPlayerInternal *_player;
    GKGameRecordInternal *_game;
    NSDate *_date;
}

@property(retain) GKPlayerInternal * player;
@property(retain) GKGameRecordInternal * game;
@property(retain) NSDate * date;

+ (id)secureCodedPropertyKeys;

- (id)player;
- (id)game;
- (void)setGame:(id)arg1;
- (void)setDate:(id)arg1;
- (id)date;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)dealloc;

@end
