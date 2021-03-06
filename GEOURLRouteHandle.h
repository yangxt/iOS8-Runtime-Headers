/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSData;

@interface GEOURLRouteHandle : PBCodable <NSCopying> {
    NSData *_directionsResponseID;
    NSData *_routeID;
    NSData *_zilchPoints;
}

@property(readonly) BOOL hasDirectionsResponseID;
@property(retain) NSData * directionsResponseID;
@property(readonly) BOOL hasRouteID;
@property(retain) NSData * routeID;
@property(readonly) BOOL hasZilchPoints;
@property(retain) NSData * zilchPoints;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)zilchPoints;
- (id)routeID;
- (id)directionsResponseID;
- (BOOL)hasZilchPoints;
- (BOOL)hasRouteID;
- (BOOL)hasDirectionsResponseID;
- (void)setZilchPoints:(id)arg1;
- (void)setRouteID:(id)arg1;
- (void)setDirectionsResponseID:(id)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;

@end
