/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class NSArray, NSString, GKScoreInternal, NSDate, NSDictionary;

@interface GKLeaderboardInternal : GKInternalRepresentation  {
    NSString *_identifier;
    NSString *_groupIdentifier;
    NSString *_title;
    NSString *_leaderboardSetIdentifier;
    NSDate *_lastSubmittedDate;
    NSDictionary *_icons;
    unsigned int _overallRank;
    unsigned int _overallRankCount;
    unsigned short _friendRank;
    unsigned short _friendRankCount;
    unsigned int _maxRank;
    NSArray *_scores;
    GKScoreInternal *_playerScore;
}

@property(retain) NSString * localizedTitle;
@property(retain) NSString * category;
@property(readonly) unsigned int maxRange;
@property(retain) NSString * identifier;
@property(retain) NSString * groupIdentifier;
@property(retain) NSString * leaderboardSetIdentifier;
@property(retain) NSString * title;
@property(retain) NSDate * lastSubmittedDate;
@property(retain) NSDictionary * icons;
@property unsigned int overallRank;
@property unsigned int overallRankCount;
@property unsigned short friendRank;
@property unsigned short friendRankCount;
@property unsigned int maxRank;
@property(retain) NSArray * scores;
@property(retain) GKScoreInternal * playerScore;

+ (id)secureCodedPropertyKeys;

- (unsigned int)maxRange;
- (unsigned short)friendRank;
- (void)setFriendRankCount:(unsigned short)arg1;
- (unsigned short)friendRankCount;
- (void)setOverallRankCount:(unsigned int)arg1;
- (unsigned int)overallRankCount;
- (void)setOverallRank:(unsigned int)arg1;
- (unsigned int)overallRank;
- (void)setPlayerScore:(id)arg1;
- (void)setLastSubmittedDate:(id)arg1;
- (id)lastSubmittedDate;
- (void)setLeaderboardSetIdentifier:(id)arg1;
- (id)leaderboardSetIdentifier;
- (void)setMaxRank:(unsigned int)arg1;
- (unsigned int)maxRank;
- (void)setFriendRank:(unsigned short)arg1;
- (id)playerScore;
- (void)setScores:(id)arg1;
- (id)scores;
- (id)localizedTitle;
- (void)setIcons:(id)arg1;
- (void)setCategory:(id)arg1;
- (id)category;
- (void)setIdentifier:(id)arg1;
- (id)icons;
- (id)title;
- (id)identifier;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)dealloc;
- (void)setLocalizedTitle:(id)arg1;
- (void)setGroupIdentifier:(id)arg1;
- (id)groupIdentifier;

@end
