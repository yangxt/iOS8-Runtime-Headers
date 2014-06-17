/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class NSString, NSData, NSDictionary, GKPlayerInternal;

@interface GKInviteInternal : GKInternalRepresentation  {
    NSString *_inviteID;
    NSData *_sessionToken;
    GKPlayerInternal *_player;
    NSString *_message;
    NSDictionary *_localizableMessage;
    NSString *_deviceID;
    NSString *_bundleID;
    NSString *_peerID;
    NSData *_peerPushToken;
    NSData *_peerNATIP;
    NSData *_peerBlob;
    NSString *_rid;
    int _playerGroup;
    unsigned int _playerAttributes;
    int _peerNATType;
    unsigned int _matchType;
    unsigned char _version;
    NSString *_participantID;
}

@property(retain) NSString * inviteID;
@property(retain) NSData * sessionToken;
@property(retain) GKPlayerInternal * player;
@property(retain) NSString * message;
@property(retain) NSDictionary * localizableMessage;
@property unsigned int matchType;
@property int playerGroup;
@property unsigned int playerAttributes;
@property(retain) NSString * peerID;
@property(retain) NSData * peerPushToken;
@property int peerNATType;
@property(retain) NSData * peerNATIP;
@property(retain) NSData * peerBlob;
@property(retain) NSString * rid;
@property unsigned char version;
@property(retain) NSString * participantID;
@property(retain) NSString * deviceID;
@property(retain) NSString * bundleID;
@property(readonly) BOOL isNearby;

+ (id)inviteWithBulletin:(id)arg1;
+ (id)nearbyInviteIDForPlayerID:(id)arg1 deviceID:(id)arg2 bundleID:(id)arg3;
+ (id)inviteFromNearbyPlayer:(id)arg1 participantID:(id)arg2 deviceID:(id)arg3 bundleID:(id)arg4 connectionData:(id)arg5;
+ (id)secureCodedPropertyKeys;

- (unsigned int)matchType;
- (id)player;
- (void)setParticipantID:(id)arg1;
- (id)participantID;
- (void)setPeerBlob:(id)arg1;
- (void)setPeerNATIP:(id)arg1;
- (void)setPeerNATType:(int)arg1;
- (void)setPeerPushToken:(id)arg1;
- (void)setInviteID:(id)arg1;
- (void)setSessionToken:(id)arg1;
- (id)rid;
- (void)setPlayerAttributes:(unsigned int)arg1;
- (void)setPlayerGroup:(int)arg1;
- (void)setLocalizableMessage:(id)arg1;
- (id)localizableMessage;
- (void)setRid:(id)arg1;
- (void)setMatchType:(unsigned int)arg1;
- (BOOL)isNearby;
- (id)peerNATIP;
- (int)peerNATType;
- (id)peerPushToken;
- (id)sessionToken;
- (id)peerBlob;
- (unsigned int)playerAttributes;
- (int)playerGroup;
- (id)inviteID;
- (void)setBundleID:(id)arg1;
- (void)setDeviceID:(id)arg1;
- (id)bundleID;
- (id)deviceID;
- (unsigned char)version;
- (void)setVersion:(unsigned char)arg1;
- (void)setMessage:(id)arg1;
- (id)message;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setPeerID:(id)arg1;
- (id)peerID;

@end