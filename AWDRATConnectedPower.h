/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDRATConnectedPower : PBCodable <NSCopying> {
    unsigned int _powerConnSetupMicroWatt;
    unsigned int _powerConnectedMicroWatt;
    int _rAT;
    struct { 
        unsigned int powerConnSetupMicroWatt : 1; 
        unsigned int powerConnectedMicroWatt : 1; 
        unsigned int rAT : 1; 
    } _has;
}

@property BOOL hasRAT;
@property int rAT;
@property BOOL hasPowerConnectedMicroWatt;
@property unsigned int powerConnectedMicroWatt;
@property BOOL hasPowerConnSetupMicroWatt;
@property unsigned int powerConnSetupMicroWatt;


- (unsigned int)powerConnSetupMicroWatt;
- (unsigned int)powerConnectedMicroWatt;
- (BOOL)hasPowerConnSetupMicroWatt;
- (void)setHasPowerConnSetupMicroWatt:(BOOL)arg1;
- (void)setPowerConnSetupMicroWatt:(unsigned int)arg1;
- (BOOL)hasPowerConnectedMicroWatt;
- (void)setHasPowerConnectedMicroWatt:(BOOL)arg1;
- (void)setPowerConnectedMicroWatt:(unsigned int)arg1;
- (int)rAT;
- (BOOL)hasRAT;
- (void)setHasRAT:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setRAT:(int)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end