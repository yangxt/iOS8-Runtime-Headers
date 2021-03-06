/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDAirPlayAudioSessionStartedOnClient : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _announceMs;
    unsigned int _authMs;
    unsigned int _bonjourMs;
    unsigned int _compressionType;
    unsigned int _connectMs;
    unsigned int _encryptionType;
    unsigned int _recordMs;
    NSString *_sessionUUID;
    unsigned int _setupAudioMs;
    unsigned int _setupScreenMs;
    int _status;
    unsigned int _transportType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int announceMs : 1; 
        unsigned int authMs : 1; 
        unsigned int bonjourMs : 1; 
        unsigned int compressionType : 1; 
        unsigned int connectMs : 1; 
        unsigned int encryptionType : 1; 
        unsigned int recordMs : 1; 
        unsigned int setupAudioMs : 1; 
        unsigned int setupScreenMs : 1; 
        unsigned int status : 1; 
        unsigned int transportType : 1; 
    } _has;
}

@property(readonly) BOOL hasSessionUUID;
@property(retain) NSString * sessionUUID;
@property BOOL hasTimestamp;
@property unsigned long long timestamp;
@property BOOL hasStatus;
@property int status;
@property BOOL hasTransportType;
@property unsigned int transportType;
@property BOOL hasCompressionType;
@property unsigned int compressionType;
@property BOOL hasEncryptionType;
@property unsigned int encryptionType;
@property BOOL hasBonjourMs;
@property unsigned int bonjourMs;
@property BOOL hasConnectMs;
@property unsigned int connectMs;
@property BOOL hasAuthMs;
@property unsigned int authMs;
@property BOOL hasAnnounceMs;
@property unsigned int announceMs;
@property BOOL hasSetupAudioMs;
@property unsigned int setupAudioMs;
@property BOOL hasSetupScreenMs;
@property unsigned int setupScreenMs;
@property BOOL hasRecordMs;
@property unsigned int recordMs;


- (unsigned int)recordMs;
- (unsigned int)setupScreenMs;
- (unsigned int)setupAudioMs;
- (unsigned int)announceMs;
- (unsigned int)authMs;
- (unsigned int)compressionType;
- (BOOL)hasRecordMs;
- (void)setHasRecordMs:(BOOL)arg1;
- (void)setRecordMs:(unsigned int)arg1;
- (BOOL)hasSetupScreenMs;
- (void)setHasSetupScreenMs:(BOOL)arg1;
- (void)setSetupScreenMs:(unsigned int)arg1;
- (BOOL)hasSetupAudioMs;
- (void)setHasSetupAudioMs:(BOOL)arg1;
- (void)setSetupAudioMs:(unsigned int)arg1;
- (BOOL)hasAnnounceMs;
- (void)setHasAnnounceMs:(BOOL)arg1;
- (void)setAnnounceMs:(unsigned int)arg1;
- (BOOL)hasAuthMs;
- (void)setHasAuthMs:(BOOL)arg1;
- (void)setAuthMs:(unsigned int)arg1;
- (BOOL)hasEncryptionType;
- (void)setHasEncryptionType:(BOOL)arg1;
- (BOOL)hasCompressionType;
- (void)setHasCompressionType:(BOOL)arg1;
- (void)setCompressionType:(unsigned int)arg1;
- (unsigned int)connectMs;
- (unsigned int)bonjourMs;
- (BOOL)hasConnectMs;
- (void)setHasConnectMs:(BOOL)arg1;
- (void)setConnectMs:(unsigned int)arg1;
- (BOOL)hasBonjourMs;
- (void)setHasBonjourMs:(BOOL)arg1;
- (void)setBonjourMs:(unsigned int)arg1;
- (id)sessionUUID;
- (BOOL)hasSessionUUID;
- (void)setSessionUUID:(id)arg1;
- (unsigned int)transportType;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setEncryptionType:(unsigned int)arg1;
- (unsigned int)encryptionType;
- (BOOL)hasTransportType;
- (void)setHasTransportType:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (BOOL)hasStatus;
- (void)setHasStatus:(BOOL)arg1;
- (BOOL)hasTimestamp;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (void)setTransportType:(unsigned int)arg1;

@end
