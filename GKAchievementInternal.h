/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class NSString, NSDictionary, NSDate, GKPlayerInternal;

@interface GKAchievementInternal : GKInternalRepresentation  {
    NSString *_identifier;
    NSString *_groupIdentifier;
    NSString *_title;
    NSString *_achievedDescription;
    NSString *_unachievedDescription;
    NSDictionary *_icons;
    GKPlayerInternal *_player;
    union { 
        struct { 
            unsigned int _maximumPoints : 16; 
            unsigned int _hidden : 1; 
            unsigned int _replayable : 1; 
            unsigned int _reserved : 14; 
        } ; 
        unsigned int _value; 
    } _attributes;
    NSDate *_lastReportedDate;
    double _percentComplete;
}

@property(retain) NSString * identifier;
@property(retain) NSString * groupIdentifier;
@property(retain) NSString * title;
@property(retain) NSString * achievedDescription;
@property(retain) NSString * unachievedDescription;
@property(retain) NSDictionary * icons;
@property unsigned short maximumPoints;
@property(getter=isHidden) BOOL hidden;
@property(getter=isReplayable) BOOL replayable;
@property(retain) NSDate * lastReportedDate;
@property double percentComplete;
@property(retain) GKPlayerInternal * player;
@property unsigned int attributes;

+ (id)secureCodedPropertyKeys;
+ (BOOL)supportsSecureCoding;

- (id)player;
- (BOOL)isReplayable;
- (unsigned short)maximumPoints;
- (id)lastReportedDate;
- (void)mergePropertiesFromDescription:(id)arg1;
- (void)setUnachievedDescription:(id)arg1;
- (void)setAchievedDescription:(id)arg1;
- (void)setReplayable:(BOOL)arg1;
- (void)setMaximumPoints:(unsigned short)arg1;
- (id)unachievedDescription;
- (id)achievedDescription;
- (void)setLastReportedDate:(id)arg1;
- (id)serverRepresentation;
- (void)setAttributes:(unsigned int)arg1;
- (unsigned int)attributes;
- (void)setIcons:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (id)icons;
- (id)title;
- (id)identifier;
- (double)percentComplete;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setPercentComplete:(double)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isHidden;
- (void)setPlayer:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)dealloc;
- (void)setGroupIdentifier:(id)arg1;
- (id)groupIdentifier;

@end
