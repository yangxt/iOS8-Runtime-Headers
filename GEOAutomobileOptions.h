/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAutomobileOptions : PBCodable <NSCopying> {
    BOOL _includeHistoricTravelTime;
    struct { 
        unsigned int includeHistoricTravelTime : 1; 
    } _has;
}

@property BOOL hasIncludeHistoricTravelTime;
@property BOOL includeHistoricTravelTime;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (BOOL)includeHistoricTravelTime;
- (BOOL)hasIncludeHistoricTravelTime;
- (void)setHasIncludeHistoricTravelTime:(BOOL)arg1;
- (void)setIncludeHistoricTravelTime:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end