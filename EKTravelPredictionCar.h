/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSString;

@interface EKTravelPredictionCar : EKTravelPrediction <NSSecureCoding> {
    BOOL _hasTrafficIncidentOnRoute;
    unsigned int _currentTrafficDensity;
    unsigned int _historicTrafficDensity;
    int _routeIncidentType;
    int _routeIncidentSignificance;
    NSString *_routeIncidentStreetName;
    unsigned int _travelState;
    double _travelStateScore;
}

@property(readonly) unsigned int currentTrafficDensity;
@property(readonly) unsigned int historicTrafficDensity;
@property(readonly) BOOL hasTrafficIncidentOnRoute;
@property(readonly) int routeIncidentType;
@property(readonly) int routeIncidentSignificance;
@property(readonly) NSString * routeIncidentStreetName;
@property(readonly) unsigned int travelState;
@property(readonly) double travelStateScore;


- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)routeIncidentStreetName;
- (int)routeIncidentSignificance;
- (int)routeIncidentType;
- (BOOL)hasTrafficIncidentOnRoute;
- (unsigned int)historicTrafficDensity;
- (unsigned int)currentTrafficDensity;
- (id)initWithDepartureDate:(id)arg1 arrivalDate:(id)arg2 startingLocation:(id)arg3 predictionDate:(id)arg4 hypothesizer:(id)arg5;
- (void)setTravelState:(unsigned int)arg1 withConfidence:(double)arg2;
- (void)addTrafficIncidentOfType:(int)arg1 withSignificance:(int)arg2 onStreet:(id)arg3;
- (void)setTrafficConditionsCurrent:(unsigned int)arg1 historic:(unsigned int)arg2;
- (double)travelStateScore;
- (unsigned int)travelState;
- (id)advice;

@end