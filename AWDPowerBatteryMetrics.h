/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDPowerBatteryMetrics : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _cycleCountKey;
    unsigned int _durationDispOn;
    unsigned int _durationPartialDispOff;
    unsigned int _durationPartialDispOn;
    unsigned int _energyChargedMicroWatt;
    unsigned int _energyConsumedDisplayOffMicroWatt;
    unsigned int _energyConsumedDisplayOnMicroWatt;
    unsigned int _energyConsumedPartailDispOnMicrowatt;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int cycleCountKey : 1; 
        unsigned int durationDispOn : 1; 
        unsigned int durationPartialDispOff : 1; 
        unsigned int durationPartialDispOn : 1; 
        unsigned int energyChargedMicroWatt : 1; 
        unsigned int energyConsumedDisplayOffMicroWatt : 1; 
        unsigned int energyConsumedDisplayOnMicroWatt : 1; 
        unsigned int energyConsumedPartailDispOnMicrowatt : 1; 
    } _has;
}

@property BOOL hasTimestamp;
@property unsigned long long timestamp;
@property BOOL hasEnergyConsumedDisplayOnMicroWatt;
@property unsigned int energyConsumedDisplayOnMicroWatt;
@property BOOL hasEnergyConsumedDisplayOffMicroWatt;
@property unsigned int energyConsumedDisplayOffMicroWatt;
@property BOOL hasEnergyChargedMicroWatt;
@property unsigned int energyChargedMicroWatt;
@property BOOL hasCycleCountKey;
@property unsigned int cycleCountKey;
@property BOOL hasEnergyConsumedPartailDispOnMicrowatt;
@property unsigned int energyConsumedPartailDispOnMicrowatt;
@property BOOL hasDurationDispOn;
@property unsigned int durationDispOn;
@property BOOL hasDurationPartialDispOn;
@property unsigned int durationPartialDispOn;
@property BOOL hasDurationPartialDispOff;
@property unsigned int durationPartialDispOff;


- (unsigned int)durationPartialDispOff;
- (unsigned int)durationPartialDispOn;
- (unsigned int)durationDispOn;
- (unsigned int)energyConsumedPartailDispOnMicrowatt;
- (unsigned int)cycleCountKey;
- (unsigned int)energyChargedMicroWatt;
- (unsigned int)energyConsumedDisplayOffMicroWatt;
- (unsigned int)energyConsumedDisplayOnMicroWatt;
- (BOOL)hasDurationPartialDispOff;
- (void)setHasDurationPartialDispOff:(BOOL)arg1;
- (void)setDurationPartialDispOff:(unsigned int)arg1;
- (BOOL)hasDurationPartialDispOn;
- (void)setHasDurationPartialDispOn:(BOOL)arg1;
- (BOOL)hasDurationDispOn;
- (void)setHasDurationDispOn:(BOOL)arg1;
- (BOOL)hasEnergyConsumedPartailDispOnMicrowatt;
- (void)setHasEnergyConsumedPartailDispOnMicrowatt:(BOOL)arg1;
- (BOOL)hasCycleCountKey;
- (void)setHasCycleCountKey:(BOOL)arg1;
- (BOOL)hasEnergyChargedMicroWatt;
- (void)setHasEnergyChargedMicroWatt:(BOOL)arg1;
- (BOOL)hasEnergyConsumedDisplayOffMicroWatt;
- (void)setHasEnergyConsumedDisplayOffMicroWatt:(BOOL)arg1;
- (BOOL)hasEnergyConsumedDisplayOnMicroWatt;
- (void)setHasEnergyConsumedDisplayOnMicroWatt:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCycleCountKey:(unsigned int)arg1;
- (void)setDurationPartialDispOn:(unsigned int)arg1;
- (void)setDurationDispOn:(unsigned int)arg1;
- (void)setEnergyChargedMicroWatt:(unsigned int)arg1;
- (void)setEnergyConsumedPartailDispOnMicrowatt:(unsigned int)arg1;
- (void)setEnergyConsumedDisplayOffMicroWatt:(unsigned int)arg1;
- (void)setEnergyConsumedDisplayOnMicroWatt:(unsigned int)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (BOOL)hasTimestamp;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end
