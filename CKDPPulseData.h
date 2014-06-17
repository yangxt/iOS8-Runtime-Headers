/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPDate, CKDPIdentifier;

@interface CKDPPulseData : PBCodable <NSCopying> {
    long long _customState;
    long long _stateTTLMillis;
    CKDPDate *_lastCustom;
    CKDPDate *_lastEdited;
    CKDPDate *_lastInvisible;
    CKDPDate *_lastViewed;
    int _state;
    CKDPIdentifier *_user;
    struct { 
        unsigned int customState : 1; 
        unsigned int stateTTLMillis : 1; 
        unsigned int state : 1; 
    } _has;
}

@property(readonly) BOOL hasUser;
@property(retain) CKDPIdentifier * user;
@property BOOL hasState;
@property int state;
@property BOOL hasCustomState;
@property long long customState;
@property BOOL hasStateTTLMillis;
@property long long stateTTLMillis;
@property(readonly) BOOL hasLastViewed;
@property(retain) CKDPDate * lastViewed;
@property(readonly) BOOL hasLastEdited;
@property(retain) CKDPDate * lastEdited;
@property(readonly) BOOL hasLastCustom;
@property(retain) CKDPDate * lastCustom;
@property(readonly) BOOL hasLastInvisible;
@property(retain) CKDPDate * lastInvisible;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)lastInvisible;
- (id)lastCustom;
- (id)lastEdited;
- (id)lastViewed;
- (BOOL)hasLastInvisible;
- (BOOL)hasLastCustom;
- (BOOL)hasLastEdited;
- (BOOL)hasLastViewed;
- (BOOL)hasStateTTLMillis;
- (void)setHasStateTTLMillis:(BOOL)arg1;
- (long long)stateTTLMillis;
- (BOOL)hasCustomState;
- (void)setHasCustomState:(BOOL)arg1;
- (long long)customState;
- (BOOL)hasUser;
- (void)setLastInvisible:(id)arg1;
- (void)setLastCustom:(id)arg1;
- (void)setLastEdited:(id)arg1;
- (void)setLastViewed:(id)arg1;
- (BOOL)hasState;
- (void)setHasState:(BOOL)arg1;
- (void)setStateTTLMillis:(long long)arg1;
- (void)setCustomState:(long long)arg1;
- (void)setUser:(id)arg1;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setState:(int)arg1;
- (int)state;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)user;

@end