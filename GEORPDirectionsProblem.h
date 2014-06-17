/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSData;

@interface GEORPDirectionsProblem : PBCodable <NSCopying> {
    NSData *_directionsResponseId;
    NSData *_overviewScreenshotImageData;
    unsigned int _problematicStepIndex;
    struct { 
        unsigned int problematicStepIndex : 1; 
    } _has;
}

@property(readonly) BOOL hasDirectionsResponseId;
@property(retain) NSData * directionsResponseId;
@property(readonly) BOOL hasOverviewScreenshotImageData;
@property(retain) NSData * overviewScreenshotImageData;
@property BOOL hasProblematicStepIndex;
@property unsigned int problematicStepIndex;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)problematicStepIndex;
- (id)overviewScreenshotImageData;
- (id)directionsResponseId;
- (BOOL)hasProblematicStepIndex;
- (void)setHasProblematicStepIndex:(BOOL)arg1;
- (void)setProblematicStepIndex:(unsigned int)arg1;
- (BOOL)hasOverviewScreenshotImageData;
- (BOOL)hasDirectionsResponseId;
- (void)setOverviewScreenshotImageData:(id)arg1;
- (void)setDirectionsResponseId:(id)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;

@end