/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOURLCenterSpan : PBCodable <NSCopying> {
    double _latitude;
    double _latitudeDelta;
    double _longitude;
    double _longitudeDelta;
    struct { 
        unsigned int latitude : 1; 
        unsigned int latitudeDelta : 1; 
        unsigned int longitude : 1; 
        unsigned int longitudeDelta : 1; 
    } _has;
}

@property BOOL hasLatitude;
@property double latitude;
@property BOOL hasLongitude;
@property double longitude;
@property BOOL hasLatitudeDelta;
@property double latitudeDelta;
@property BOOL hasLongitudeDelta;
@property double longitudeDelta;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasLongitudeDelta:(BOOL)arg1;
- (void)setHasLatitudeDelta:(BOOL)arg1;
- (double)longitudeDelta;
- (double)latitudeDelta;
- (BOOL)hasLongitudeDelta;
- (BOOL)hasLatitudeDelta;
- (void)setLongitudeDelta:(double)arg1;
- (void)setLatitudeDelta:(double)arg1;
- (BOOL)hasLongitude;
- (void)setHasLongitude:(BOOL)arg1;
- (BOOL)hasLatitude;
- (void)setHasLatitude:(BOOL)arg1;
- (double)longitude;
- (double)latitude;
- (void)setLongitude:(double)arg1;
- (void)setLatitude:(double)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end
