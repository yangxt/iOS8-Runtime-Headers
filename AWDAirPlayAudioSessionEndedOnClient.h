/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDAirPlayAudioSessionEndedOnClient : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _duration;
    unsigned int _futileRetransmits;
    int _reason;
    unsigned int _retransmits;
    NSString *_sessionUUID;
    unsigned int _slowKeepAlives;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int duration : 1; 
        unsigned int futileRetransmits : 1; 
        unsigned int reason : 1; 
        unsigned int retransmits : 1; 
        unsigned int slowKeepAlives : 1; 
    } _has;
}

@property(readonly) BOOL hasSessionUUID;
@property(retain) NSString * sessionUUID;
@property BOOL hasTimestamp;
@property unsigned long long timestamp;
@property BOOL hasReason;
@property int reason;
@property BOOL hasDuration;
@property unsigned int duration;
@property BOOL hasSlowKeepAlives;
@property unsigned int slowKeepAlives;
@property BOOL hasRetransmits;
@property unsigned int retransmits;
@property BOOL hasFutileRetransmits;
@property unsigned int futileRetransmits;


- (unsigned int)futileRetransmits;
- (unsigned int)retransmits;
- (unsigned int)slowKeepAlives;
- (BOOL)hasFutileRetransmits;
- (void)setHasFutileRetransmits:(BOOL)arg1;
- (void)setFutileRetransmits:(unsigned int)arg1;
- (BOOL)hasRetransmits;
- (void)setHasRetransmits:(BOOL)arg1;
- (void)setRetransmits:(unsigned int)arg1;
- (BOOL)hasSlowKeepAlives;
- (void)setHasSlowKeepAlives:(BOOL)arg1;
- (void)setSlowKeepAlives:(unsigned int)arg1;
- (BOOL)hasReason;
- (void)setHasReason:(BOOL)arg1;
- (id)sessionUUID;
- (BOOL)hasSessionUUID;
- (void)setSessionUUID:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setReason:(int)arg1;
- (BOOL)hasDuration;
- (void)setHasDuration:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (BOOL)hasTimestamp;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)reason;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (unsigned int)duration;
- (void)setDuration:(unsigned int)arg1;
- (void)dealloc;

@end
