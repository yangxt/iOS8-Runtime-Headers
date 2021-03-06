/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@class MSPDroppedPin, NSString, PBUnknownFields;

@interface MSPPinStorage : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_deviceID;
    MSPDroppedPin *_droppedPin;
    NSString *_syncID;
    int _type;
    struct { 
        unsigned int type : 1; 
    } _has;
}

@property(readonly) BOOL hasDeviceID;
@property(retain) NSString * deviceID;
@property(readonly) BOOL hasSyncID;
@property(retain) NSString * syncID;
@property BOOL hasType;
@property int type;
@property(readonly) BOOL hasDroppedPin;
@property(retain) MSPDroppedPin * droppedPin;
@property(readonly) PBUnknownFields * unknownFields;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (BOOL)hasType;
- (void)setHasType:(BOOL)arg1;
- (id)droppedPin;
- (id)syncID;
- (BOOL)hasDroppedPin;
- (BOOL)hasSyncID;
- (BOOL)hasDeviceID;
- (void)setDroppedPin:(id)arg1;
- (void)setSyncID:(id)arg1;
- (id)unknownFields;
- (void)setDeviceID:(id)arg1;
- (id)deviceID;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end
