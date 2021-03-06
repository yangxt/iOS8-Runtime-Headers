/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEONameInfo;

@interface GEORouteName : PBCodable <NSCopying> {
    int _lastZilchStitchedIndex;
    GEONameInfo *_nameInfo;
    struct { 
        unsigned int lastZilchStitchedIndex : 1; 
    } _has;
}

@property(readonly) BOOL hasNameInfo;
@property(retain) GEONameInfo * nameInfo;
@property BOOL hasLastZilchStitchedIndex;
@property int lastZilchStitchedIndex;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)nameInfo;
- (BOOL)hasLastZilchStitchedIndex;
- (void)setHasLastZilchStitchedIndex:(BOOL)arg1;
- (void)setLastZilchStitchedIndex:(int)arg1;
- (int)lastZilchStitchedIndex;
- (BOOL)hasNameInfo;
- (void)setNameInfo:(id)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (struct CGImage { }*)_mapKitImage;

@end
