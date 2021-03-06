/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
 */

@interface CLLatLonPolygon : PBCodable <NSCopying> {
    struct { 
        double *list; 
        unsigned int count; 
        unsigned int size; 
    } _latitudes;
    struct { 
        double *list; 
        unsigned int count; 
        unsigned int size; 
    } _longitudes;
}

@property(readonly) unsigned int latitudesCount;
@property(readonly) double* latitudes;
@property(readonly) unsigned int longitudesCount;
@property(readonly) double* longitudes;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setLongitudes:(double*)arg1 count:(unsigned int)arg2;
- (double*)longitudes;
- (void)setLatitudes:(double*)arg1 count:(unsigned int)arg2;
- (double*)latitudes;
- (void)addLongitude:(double)arg1;
- (double)longitudeAtIndex:(unsigned int)arg1;
- (void)clearLongitudes;
- (unsigned int)longitudesCount;
- (void)addLatitude:(double)arg1;
- (double)latitudeAtIndex:(unsigned int)arg1;
- (void)clearLatitudes;
- (unsigned int)latitudesCount;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;

@end
