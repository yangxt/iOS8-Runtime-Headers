/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOPlace, NSString, GEOPlaceSearchRequest, NSMutableArray, GEOAddress;

@interface GEOPlaceResult : PBCodable <NSCopying> {
    unsigned long long _flyoverTourMuid;
    NSMutableArray *_additionalPlaces;
    NSMutableArray *_matchedTokens;
    NSMutableArray *_namedFeatures;
    GEOPlace *_place;
    NSString *_quad;
    GEOPlaceSearchRequest *_revgeoRequestTemplate;
    NSString *_suggestedQuery;
    GEOAddress *_tokenEntity;
    unsigned int _travelDistance;
    unsigned int _travelTime;
    NSMutableArray *_unmatchedStrings;
    struct { 
        unsigned int flyoverTourMuid : 1; 
        unsigned int travelDistance : 1; 
        unsigned int travelTime : 1; 
    } _has;
}

@property(retain) GEOPlace * place;
@property(retain) NSMutableArray * additionalPlaces;
@property(readonly) BOOL hasSuggestedQuery;
@property(retain) NSString * suggestedQuery;
@property BOOL hasTravelTime;
@property unsigned int travelTime;
@property BOOL hasTravelDistance;
@property unsigned int travelDistance;
@property(readonly) BOOL hasTokenEntity;
@property(retain) GEOAddress * tokenEntity;
@property(readonly) BOOL hasQuad;
@property(retain) NSString * quad;
@property(retain) NSMutableArray * unmatchedStrings;
@property(retain) NSMutableArray * namedFeatures;
@property(readonly) BOOL hasRevgeoRequestTemplate;
@property(retain) GEOPlaceSearchRequest * revgeoRequestTemplate;
@property(retain) NSMutableArray * matchedTokens;
@property BOOL hasFlyoverTourMuid;
@property unsigned long long flyoverTourMuid;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)additionalPlaces;
- (unsigned int)additionalPlacesCount;
- (id)place;
- (unsigned long long)flyoverTourMuid;
- (id)matchedTokens;
- (id)revgeoRequestTemplate;
- (id)namedFeatures;
- (id)unmatchedStrings;
- (id)tokenEntity;
- (unsigned int)travelDistance;
- (id)suggestedQuery;
- (BOOL)hasFlyoverTourMuid;
- (void)setHasFlyoverTourMuid:(BOOL)arg1;
- (void)setFlyoverTourMuid:(unsigned long long)arg1;
- (BOOL)hasRevgeoRequestTemplate;
- (BOOL)hasQuad;
- (BOOL)hasTokenEntity;
- (BOOL)hasTravelDistance;
- (void)setHasTravelDistance:(BOOL)arg1;
- (void)setTravelDistance:(unsigned int)arg1;
- (BOOL)hasTravelTime;
- (void)setHasTravelTime:(BOOL)arg1;
- (BOOL)hasSuggestedQuery;
- (id)matchedTokenAtIndex:(unsigned int)arg1;
- (void)clearMatchedTokens;
- (unsigned int)matchedTokensCount;
- (id)namedFeatureAtIndex:(unsigned int)arg1;
- (void)clearNamedFeatures;
- (unsigned int)namedFeaturesCount;
- (id)unmatchedStringAtIndex:(unsigned int)arg1;
- (void)clearUnmatchedStrings;
- (unsigned int)unmatchedStringsCount;
- (id)additionalPlaceAtIndex:(unsigned int)arg1;
- (void)clearAdditionalPlaces;
- (void)addMatchedToken:(id)arg1;
- (void)addNamedFeature:(id)arg1;
- (void)addUnmatchedString:(id)arg1;
- (void)addAdditionalPlace:(id)arg1;
- (void)setMatchedTokens:(id)arg1;
- (void)setRevgeoRequestTemplate:(id)arg1;
- (void)setNamedFeatures:(id)arg1;
- (void)setUnmatchedStrings:(id)arg1;
- (void)setQuad:(id)arg1;
- (void)setTokenEntity:(id)arg1;
- (void)setSuggestedQuery:(id)arg1;
- (void)setAdditionalPlaces:(id)arg1;
- (void)setPlace:(id)arg1;
- (id)dictionaryRepresentation;
- (id)quad;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (void)setTravelTime:(unsigned int)arg1;
- (unsigned int)travelTime;
- (id)relativeNameToPlaceResult:(id)arg1 locationWithAccuracy:(id)arg2;

@end
