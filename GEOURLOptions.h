/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOURLCamera, NSString, GEOURLCenterSpan, GEOURLRouteHandle;

@interface GEOURLOptions : PBCodable <GEOURLSerializable, NSCopying> {
    GEOURLCamera *_camera;
    GEOURLCenterSpan *_centerSpan;
    int _mapType;
    NSString *_referralIdentifier;
    GEOURLRouteHandle *_routeHandle;
    int _transportType;
    int _userTrackingMode;
    BOOL _enableTraffic;
    struct { 
        unsigned int mapType : 1; 
        unsigned int transportType : 1; 
        unsigned int userTrackingMode : 1; 
        unsigned int enableTraffic : 1; 
    } _has;
}

@property BOOL hasEnableTraffic;
@property BOOL enableTraffic;
@property BOOL hasMapType;
@property int mapType;
@property BOOL hasTransportType;
@property int transportType;
@property(readonly) BOOL hasCenterSpan;
@property(retain) GEOURLCenterSpan * centerSpan;
@property(readonly) BOOL hasCamera;
@property(retain) GEOURLCamera * camera;
@property(readonly) BOOL hasReferralIdentifier;
@property(retain) NSString * referralIdentifier;
@property BOOL hasUserTrackingMode;
@property int userTrackingMode;
@property(readonly) BOOL hasRouteHandle;
@property(retain) GEOURLRouteHandle * routeHandle;


- (int)transportType;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCamera:(id)arg1;
- (id)camera;
- (void)setMapType:(int)arg1;
- (int)mapType;
- (int)userTrackingMode;
- (BOOL)hasUserTrackingMode;
- (void)setHasUserTrackingMode:(BOOL)arg1;
- (void)setUserTrackingMode:(int)arg1;
- (void)setHasEnableTraffic:(BOOL)arg1;
- (void)setHasMapType:(BOOL)arg1;
- (id)urlRepresentation;
- (id)referralIdentifier;
- (BOOL)enableTraffic;
- (id)centerSpan;
- (BOOL)hasReferralIdentifier;
- (BOOL)hasMapType;
- (BOOL)hasEnableTraffic;
- (void)setReferralIdentifier:(id)arg1;
- (void)setEnableTraffic:(BOOL)arg1;
- (void)setCenterSpan:(id)arg1;
- (BOOL)hasCenterSpan;
- (BOOL)hasCamera;
- (id)initWithUrlRepresentation:(id)arg1;
- (BOOL)hasTransportType;
- (void)setHasTransportType:(BOOL)arg1;
- (id)routeHandle;
- (BOOL)hasRouteHandle;
- (void)setRouteHandle:(id)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (void)setTransportType:(int)arg1;
- (id)launchOptions;
- (id)initWithLaunchOptions:(id)arg1;

@end
