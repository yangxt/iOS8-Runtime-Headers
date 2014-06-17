/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray, GEOStructuredAddress;

@interface GEOAddress : PBCodable <GEOURLSerializable, NSCopying> {
    NSMutableArray *_formattedAddressLines;
    int _formattedAddressType;
    GEOStructuredAddress *_structuredAddress;
    struct { 
        unsigned int formattedAddressType : 1; 
    } _has;
}

@property(retain) NSMutableArray * formattedAddressLines;
@property(readonly) BOOL hasStructuredAddress;
@property(retain) GEOStructuredAddress * structuredAddress;
@property BOOL hasFormattedAddressType;
@property int formattedAddressType;

+ (id)geoAddressForPlaceData:(id)arg1;

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (BOOL)hasStructuredAddress;
- (id)structuredAddress;
- (void)setStructuredAddress:(id)arg1;
- (BOOL)_isEquivalentURLRepresentationTo:(id)arg1;
- (id)urlRepresentation;
- (id)initWithUrlRepresentation:(id)arg1;
- (BOOL)hasFormattedAddressType;
- (void)setHasFormattedAddressType:(BOOL)arg1;
- (void)setFormattedAddressType:(int)arg1;
- (int)formattedAddressType;
- (id)formattedAddressLineAtIndex:(unsigned int)arg1;
- (void)clearFormattedAddressLines;
- (unsigned int)formattedAddressLinesCount;
- (void)addFormattedAddressLine:(id)arg1;
- (id)bestName;
- (id)initWithAddressString:(id)arg1;
- (id)formattedAddressLines;
- (void)setFormattedAddressLines:(id)arg1;
- (id)initWithAddressDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)addressDictionary;
- (id)singleLineAddress;

@end