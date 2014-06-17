/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class NSString, NSData, NSDate, NSDictionary;

@interface RadioPlayEvent : NSObject <NSCopying, NSMutableCopying> {
    NSDate *_datePlayed;
    int _endReason;
    double _endTimeInTrack;
    NSString *_externalIdentifier;
    double _startTimeInTrack;
    long long _storeID;
    NSData *_timedMetadata;
    NSDictionary *_trackInfo;
    int _type;
}

@property(readonly) NSDate * datePlayed;
@property(readonly) int endReason;
@property(readonly) double endTimeInTrack;
@property(copy,readonly) NSString * externalIdentifier;
@property(readonly) double startTimeInTrack;
@property(readonly) long long storeID;
@property(copy,readonly) NSData * timedMetadata;
@property(copy,readonly) NSDictionary * trackInfo;
@property(readonly) int type;


- (int)endReason;
- (id)trackInfo;
- (double)startTimeInTrack;
- (double)endTimeInTrack;
- (id)playDictionary;
- (id)datePlayed;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithType:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)type;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)externalIdentifier;
- (id)description;
- (long long)storeID;
- (id)timedMetadata;

@end