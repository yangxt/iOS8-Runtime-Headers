/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray, NSString;

@interface GEOSearchAttribution : PBCodable <NSCopying> {
    NSMutableArray *_attributionURLs;
    NSString *_sourceIdentifier;
    unsigned int _sourceVersion;
}

@property(retain) NSString * sourceIdentifier;
@property unsigned int sourceVersion;
@property(retain) NSMutableArray * attributionURLs;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)sourceIdentifier;
- (id)attributionURLsAtIndex:(unsigned int)arg1;
- (void)clearAttributionURLs;
- (void)addAttributionURLs:(id)arg1;
- (void)setAttributionURLs:(id)arg1;
- (void)setSourceIdentifier:(id)arg1;
- (void)setSourceVersion:(unsigned int)arg1;
- (id)attributionURLs;
- (unsigned int)attributionURLsCount;
- (unsigned int)sourceVersion;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;

@end