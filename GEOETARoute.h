/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray, NSData;

@interface GEOETARoute : PBCodable <NSCopying> {
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    } _incidentEndOffsetsInETARoutes;
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    } _trafficColorOffsets;
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    } _trafficColors;
    unsigned int _historicTravelTime;
    NSMutableArray *_incidentsOffReRoutes;
    NSMutableArray *_incidentsOnETARoutes;
    NSMutableArray *_incidentsOnReRoutes;
    NSMutableArray *_invalidSectionZilchPoints;
    NSMutableArray *_reroutedRoutes;
    NSData *_routeID;
    NSMutableArray *_steps;
    NSData *_zilchPoints;
    BOOL _routeNoLongerValid;
    struct { 
        unsigned int historicTravelTime : 1; 
        unsigned int routeNoLongerValid : 1; 
    } _has;
}

@property(readonly) double expectedTime;
@property(readonly) BOOL hasRouteID;
@property(retain) NSData * routeID;
@property(retain) NSMutableArray * steps;
@property(readonly) BOOL hasZilchPoints;
@property(retain) NSData * zilchPoints;
@property BOOL hasRouteNoLongerValid;
@property BOOL routeNoLongerValid;
@property(retain) NSMutableArray * reroutedRoutes;
@property(retain) NSMutableArray * invalidSectionZilchPoints;
@property(readonly) unsigned int trafficColorsCount;
@property(readonly) unsigned int* trafficColors;
@property(readonly) unsigned int trafficColorOffsetsCount;
@property(readonly) unsigned int* trafficColorOffsets;
@property(retain) NSMutableArray * incidentsOnETARoutes;
@property(retain) NSMutableArray * incidentsOnReRoutes;
@property(retain) NSMutableArray * incidentsOffReRoutes;
@property BOOL hasHistoricTravelTime;
@property unsigned int historicTravelTime;
@property(readonly) unsigned int incidentEndOffsetsInETARoutesCount;
@property(readonly) unsigned int* incidentEndOffsetsInETARoutes;


- (id)steps;
- (unsigned int)stepsCount;
- (unsigned int*)trafficColors;
- (unsigned int*)trafficColorOffsets;
- (unsigned int)trafficColorOffsetsCount;
- (unsigned int)trafficColorsCount;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)invalidSectionZilchPoints;
- (id)reroutedRoutes;
- (void)setIncidentEndOffsetsInETARoutes:(unsigned int*)arg1 count:(unsigned int)arg2;
- (unsigned int*)incidentEndOffsetsInETARoutes;
- (BOOL)hasRouteNoLongerValid;
- (void)setHasRouteNoLongerValid:(BOOL)arg1;
- (void)setRouteNoLongerValid:(BOOL)arg1;
- (void)addIncidentEndOffsetsInETARoute:(unsigned int)arg1;
- (unsigned int)incidentEndOffsetsInETARouteAtIndex:(unsigned int)arg1;
- (void)clearIncidentEndOffsetsInETARoutes;
- (unsigned int)incidentEndOffsetsInETARoutesCount;
- (id)incidentsOffReRoutesAtIndex:(unsigned int)arg1;
- (void)clearIncidentsOffReRoutes;
- (unsigned int)incidentsOffReRoutesCount;
- (id)incidentsOnReRoutesAtIndex:(unsigned int)arg1;
- (void)clearIncidentsOnReRoutes;
- (unsigned int)incidentsOnReRoutesCount;
- (id)incidentsOnETARouteAtIndex:(unsigned int)arg1;
- (void)clearIncidentsOnETARoutes;
- (id)invalidSectionZilchPointsAtIndex:(unsigned int)arg1;
- (void)clearInvalidSectionZilchPoints;
- (unsigned int)invalidSectionZilchPointsCount;
- (void)clearReroutedRoutes;
- (void)addIncidentsOffReRoutes:(id)arg1;
- (void)addIncidentsOnReRoutes:(id)arg1;
- (void)addIncidentsOnETARoute:(id)arg1;
- (void)addInvalidSectionZilchPoints:(id)arg1;
- (void)addReroutedRoute:(id)arg1;
- (void)setIncidentsOffReRoutes:(id)arg1;
- (void)setIncidentsOnReRoutes:(id)arg1;
- (void)setIncidentsOnETARoutes:(id)arg1;
- (void)setInvalidSectionZilchPoints:(id)arg1;
- (id)incidentsOffReRoutes;
- (id)incidentsOnReRoutes;
- (BOOL)routeNoLongerValid;
- (void)setReroutedRoutes:(id)arg1;
- (id)reroutedRouteAtIndex:(unsigned int)arg1;
- (unsigned int)reroutedRoutesCount;
- (id)incidentsOnETARoutes;
- (unsigned int)incidentsOnETARoutesCount;
- (unsigned int)historicTravelTime;
- (BOOL)hasHistoricTravelTime;
- (void)setHasHistoricTravelTime:(BOOL)arg1;
- (void)setHistoricTravelTime:(unsigned int)arg1;
- (void)setTrafficColorOffsets:(unsigned int*)arg1 count:(unsigned int)arg2;
- (void)setTrafficColors:(unsigned int*)arg1 count:(unsigned int)arg2;
- (void)addTrafficColorOffset:(unsigned int)arg1;
- (unsigned int)trafficColorOffsetAtIndex:(unsigned int)arg1;
- (void)clearTrafficColorOffsets;
- (void)addTrafficColor:(unsigned int)arg1;
- (unsigned int)trafficColorAtIndex:(unsigned int)arg1;
- (void)clearTrafficColors;
- (void)clearSteps;
- (void)addStep:(id)arg1;
- (void)setSteps:(id)arg1;
- (double)remainingTimeAlongRoute:(unsigned int)arg1 currentStepRemainingDistance:(double)arg2;
- (id)stepAtIndex:(unsigned int)arg1;
- (double)expectedTime;
- (id)zilchPoints;
- (id)routeID;
- (BOOL)hasZilchPoints;
- (BOOL)hasRouteID;
- (void)setZilchPoints:(id)arg1;
- (void)setRouteID:(id)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;

@end
