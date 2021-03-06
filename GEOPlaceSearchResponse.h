/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOMapRegion, NSMutableArray, NSData;

@interface GEOPlaceSearchResponse : PBCodable <NSCopying> {
    double _turnaroundTime;
    GEOMapRegion *_mapRegion;
    NSMutableArray *_namedFeatures;
    NSMutableArray *_placeResults;
    int _status;
    int _statusCodeInfo;
    NSMutableArray *_suggestionEntryLists;
    NSData *_suggestionMetadata;
    struct { 
        unsigned int turnaroundTime : 1; 
        unsigned int statusCodeInfo : 1; 
    } _has;
}

@property int status;
@property(retain) NSMutableArray * placeResults;
@property(readonly) BOOL hasMapRegion;
@property(retain) GEOMapRegion * mapRegion;
@property(retain) NSMutableArray * suggestionEntryLists;
@property(readonly) BOOL hasSuggestionMetadata;
@property(retain) NSData * suggestionMetadata;
@property(retain) NSMutableArray * namedFeatures;
@property BOOL hasStatusCodeInfo;
@property int statusCodeInfo;
@property BOOL hasTurnaroundTime;
@property double turnaroundTime;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setMapRegion:(id)arg1;
- (id)mapRegion;
- (id)placeResultAtIndex:(unsigned int)arg1;
- (unsigned int)placeResultsCount;
- (void)_geoMapItemsWithTraits:(id)arg1 handler:(id)arg2;
- (double)turnaroundTime;
- (int)statusCodeInfo;
- (id)suggestionMetadata;
- (id)suggestionEntryLists;
- (id)placeResults;
- (BOOL)hasTurnaroundTime;
- (void)setHasTurnaroundTime:(BOOL)arg1;
- (void)setTurnaroundTime:(double)arg1;
- (BOOL)hasStatusCodeInfo;
- (void)setHasStatusCodeInfo:(BOOL)arg1;
- (void)setStatusCodeInfo:(int)arg1;
- (BOOL)hasSuggestionMetadata;
- (id)namedFeaturesAtIndex:(unsigned int)arg1;
- (id)suggestionEntryListsAtIndex:(unsigned int)arg1;
- (void)clearSuggestionEntryLists;
- (unsigned int)suggestionEntryListsCount;
- (void)clearPlaceResults;
- (void)addNamedFeatures:(id)arg1;
- (void)addSuggestionEntryLists:(id)arg1;
- (void)addPlaceResult:(id)arg1;
- (void)setSuggestionMetadata:(id)arg1;
- (void)setSuggestionEntryLists:(id)arg1;
- (void)setPlaceResults:(id)arg1;
- (id)namedFeatures;
- (void)clearNamedFeatures;
- (unsigned int)namedFeaturesCount;
- (void)setNamedFeatures:(id)arg1;
- (BOOL)hasMapRegion;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;

@end
