/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSString;

@interface VKDebugSettings : NSObject  {
    BOOL _paintMapTiles;
    BOOL _paintRoadBoundaries;
    BOOL _paintRoadTiles;
    BOOL _paintPointTiles;
    BOOL _paintPolygonTiles;
    BOOL _paintVertices;
    BOOL _paintJunctions;
    BOOL _paintCoastlines;
    BOOL _paintBuildingNormals;
    BOOL _disableRoute;
    BOOL _labelHighlighting;
    BOOL _labelCollisionEnabled;
    BOOL _labelAlternatePositionsEnabled;
    BOOL _labelTileDecodeEnabled;
    BOOL _labelAllowDefaultStyle;
    BOOL _labelUpdateMapTilesContinuously;
    BOOL _paintRouteDebugMarkers;
    BOOL _dontMatchRouteLine;
    BOOL _dontMapMatchToSnappedRouteLine;
    BOOL _highlightUnmatchedRouteLine;
    BOOL _paintRoadSigns;
    BOOL _paintLabelBounds;
    BOOL _paintLabelRoadFeatures;
    BOOL _paintLabelCollisionLines;
    BOOL _paintLabelCounts;
    BOOL _hideDirectionalArrows;
    BOOL _paintTrafficSkeleton;
    BOOL _loadGreenTraffic;
    BOOL _paintRoadsStitchedByName;
    BOOL _realisticWireframeEnabled;
    BOOL _altitudePauseLoading;
    BOOL _altitudeTexturePaging;
    BOOL _altitudeShowTileBounds;
    BOOL _altitudeHighResSatellite;
    BOOL _altitudeMipmapSatellite;
    BOOL _altitudeMipmapFlyover;
    BOOL _altitudeShowNightLight;
    BOOL _altitudeNoTiltLimit;
    float _altitudeLodScale;
    float _altitudeTileQualityThreshold;
    float _altitudeForceGridTime;
    BOOL _altitudeProfilingEnabled;
    unsigned int _altitudeProfilingType;
    unsigned int _altitudeProfilingZones;
    NSString *_altitudeTelemetryURL;
    BOOL _dynamicMapModesEnabled;
    BOOL _isInstalledInLockScreen;
    BOOL _enableLoggingInLockScreen;
    BOOL _useBuildingShadowTexture;
    BOOL _drawContinuously;
    BOOL _layoutContinuously;
    BOOL _enableSignPostEvents;
    BOOL _useTransactionManager;
    BOOL _trackingCameraAutoPitch;
    BOOL _debugStyleAnimations;
    BOOL _renderInSeparateThread;
    BOOL _forceHiResBuildings;
    BOOL _readLandmarksFromDisk;
    BOOL _drawPerformanceHUD;
    BOOL _expandedPerformanceHUD;
    BOOL _immediateRasterTextureLoading;
    BOOL _paintPoiTiles;
    BOOL _useStaticTrafficFeed;
    BOOL _disableStylesheetAnimations;
    BOOL _trackingCameraRoutePanning;
    BOOL _trackingCameraZoomFurther;
}

@property BOOL paintMapTiles;
@property BOOL paintRoadBoundaries;
@property BOOL paintRoadTiles;
@property BOOL paintPoiTiles;
@property BOOL paintPointTiles;
@property BOOL paintPolygonTiles;
@property BOOL paintVertices;
@property BOOL paintJunctions;
@property BOOL paintCoastlines;
@property BOOL paintBuildingNormals;
@property BOOL disableRoute;
@property BOOL labelHighlighting;
@property BOOL labelCollisionEnabled;
@property BOOL labelAlternatePositionsEnabled;
@property BOOL labelTileDecodeEnabled;
@property BOOL labelAllowDefaultStyle;
@property BOOL labelUpdateMapTilesContinuously;
@property BOOL paintRouteDebugMarkers;
@property BOOL dontMatchRouteLine;
@property BOOL dontMapMatchToSnappedRouteLine;
@property BOOL highlightUnmatchedRouteLine;
@property BOOL paintRoadSigns;
@property BOOL paintLabelBounds;
@property BOOL paintLabelRoadFeatures;
@property BOOL paintLabelCollisionLines;
@property BOOL paintLabelCounts;
@property BOOL hideDirectionalArrows;
@property BOOL paintTrafficSkeleton;
@property BOOL loadGreenTraffic;
@property BOOL useStaticTrafficFeed;
@property BOOL paintRoadsStitchedByName;
@property BOOL realisticWireframeEnabled;
@property BOOL altitudePauseLoading;
@property BOOL altitudeTexturePaging;
@property BOOL altitudeShowTileBounds;
@property BOOL altitudeHighResSatellite;
@property BOOL altitudeMipmapSatellite;
@property BOOL altitudeMipmapFlyover;
@property BOOL altitudeShowNightLight;
@property BOOL altitudeNoTiltLimit;
@property BOOL altitudeProfilingEnabled;
@property unsigned int altitudeProfilingType;
@property unsigned int altitudeProfilingZones;
@property float altitudeLodScale;
@property float altitudeTileQualityThreshold;
@property float altitudeForceGridTime;
@property(retain) NSString * altitudeTelemetryURL;
@property BOOL dynamicMapModesEnabled;
@property BOOL isInstalledInLockScreen;
@property BOOL enableLoggingInLockScreen;
@property BOOL useBuildingShadowTexture;
@property BOOL drawContinuously;
@property BOOL layoutContinuously;
@property BOOL enableSignPostEvents;
@property BOOL useTransactionManager;
@property BOOL trackingCameraAutoPitch;
@property BOOL debugStyleAnimations;
@property BOOL disableStylesheetAnimations;
@property BOOL renderInSeparateThread;
@property BOOL forceHiResBuildings;
@property BOOL readLandmarksFromDisk;
@property BOOL drawPerformanceHUD;
@property BOOL expandedPerformanceHUD;
@property BOOL immediateRasterTextureLoading;
@property BOOL trackingCameraRoutePanning;
@property BOOL trackingCameraZoomFurther;

+ (id)sharedSettings;

- (void)setTrackingCameraZoomFurther:(BOOL)arg1;
- (void)setTrackingCameraRoutePanning:(BOOL)arg1;
- (void)setImmediateRasterTextureLoading:(BOOL)arg1;
- (BOOL)expandedPerformanceHUD;
- (BOOL)drawPerformanceHUD;
- (void)setReadLandmarksFromDisk:(BOOL)arg1;
- (BOOL)readLandmarksFromDisk;
- (void)setForceHiResBuildings:(BOOL)arg1;
- (BOOL)forceHiResBuildings;
- (void)setRenderInSeparateThread:(BOOL)arg1;
- (void)setDisableStylesheetAnimations:(BOOL)arg1;
- (void)setDebugStyleAnimations:(BOOL)arg1;
- (BOOL)debugStyleAnimations;
- (void)setTrackingCameraAutoPitch:(BOOL)arg1;
- (BOOL)trackingCameraAutoPitch;
- (void)setUseTransactionManager:(BOOL)arg1;
- (BOOL)useTransactionManager;
- (void)setEnableSignPostEvents:(BOOL)arg1;
- (BOOL)enableSignPostEvents;
- (void)setUseBuildingShadowTexture:(BOOL)arg1;
- (BOOL)useBuildingShadowTexture;
- (void)setEnableLoggingInLockScreen:(BOOL)arg1;
- (id)altitudeTelemetryURL;
- (void)setAltitudeProfilingZones:(unsigned int)arg1;
- (unsigned int)altitudeProfilingZones;
- (void)setAltitudeProfilingType:(unsigned int)arg1;
- (unsigned int)altitudeProfilingType;
- (BOOL)altitudeProfilingEnabled;
- (void)setAltitudeHighResSatellite:(BOOL)arg1;
- (void)setAltitudeNoTiltLimit:(BOOL)arg1;
- (BOOL)altitudeNoTiltLimit;
- (void)setAltitudeShowNightLight:(BOOL)arg1;
- (void)setAltitudeMipmapFlyover:(BOOL)arg1;
- (void)setAltitudeMipmapSatellite:(BOOL)arg1;
- (void)setRealisticWireframeEnabled:(BOOL)arg1;
- (BOOL)realisticWireframeEnabled;
- (void)setPaintRoadsStitchedByName:(BOOL)arg1;
- (BOOL)paintRoadsStitchedByName;
- (void)setUseStaticTrafficFeed:(BOOL)arg1;
- (BOOL)useStaticTrafficFeed;
- (void)setLoadGreenTraffic:(BOOL)arg1;
- (void)setPaintTrafficSkeleton:(BOOL)arg1;
- (BOOL)hideDirectionalArrows;
- (void)setPaintLabelCounts:(BOOL)arg1;
- (void)setPaintLabelCollisionLines:(BOOL)arg1;
- (void)setPaintLabelRoadFeatures:(BOOL)arg1;
- (void)setPaintLabelBounds:(BOOL)arg1;
- (BOOL)paintLabelBounds;
- (void)setPaintRoadSigns:(BOOL)arg1;
- (BOOL)paintRoadSigns;
- (void)setDontMapMatchToSnappedRouteLine:(BOOL)arg1;
- (BOOL)dontMapMatchToSnappedRouteLine;
- (void)setDontMatchRouteLine:(BOOL)arg1;
- (void)setPaintRouteDebugMarkers:(BOOL)arg1;
- (BOOL)paintRouteDebugMarkers;
- (void)setLabelUpdateMapTilesContinuously:(BOOL)arg1;
- (void)setLabelAllowDefaultStyle:(BOOL)arg1;
- (BOOL)labelAllowDefaultStyle;
- (void)setLabelTileDecodeEnabled:(BOOL)arg1;
- (void)setLabelAlternatePositionsEnabled:(BOOL)arg1;
- (void)setLabelCollisionEnabled:(BOOL)arg1;
- (void)setLabelHighlighting:(BOOL)arg1;
- (void)setDisableRoute:(BOOL)arg1;
- (void)setPaintBuildingNormals:(BOOL)arg1;
- (BOOL)paintBuildingNormals;
- (void)setPaintCoastlines:(BOOL)arg1;
- (BOOL)paintCoastlines;
- (void)setPaintJunctions:(BOOL)arg1;
- (BOOL)paintJunctions;
- (void)setPaintVertices:(BOOL)arg1;
- (BOOL)paintVertices;
- (void)setPaintPolygonTiles:(BOOL)arg1;
- (BOOL)paintPolygonTiles;
- (void)setPaintPointTiles:(BOOL)arg1;
- (BOOL)paintPointTiles;
- (void)setPaintPoiTiles:(BOOL)arg1;
- (BOOL)paintPoiTiles;
- (void)setPaintRoadTiles:(BOOL)arg1;
- (BOOL)paintRoadTiles;
- (void)setPaintRoadBoundaries:(BOOL)arg1;
- (BOOL)paintRoadBoundaries;
- (void)setPaintMapTiles:(BOOL)arg1;
- (BOOL)isPerformanceGroupShown:(unsigned int)arg1;
- (void)hidePerformanceGroup:(unsigned int)arg1;
- (void)showPerformanceGroup:(unsigned int)arg1;
- (id)nameForPerformanceGroup:(unsigned int)arg1;
- (unsigned int)numPerformanceGroups;
- (void)setHighlightUnmatchedRouteLine:(BOOL)arg1;
- (void)setAltitudeProfilingEnabled:(BOOL)arg1;
- (void)setAltitudeTelemetryURL:(id)arg1;
- (void)setIsInstalledInLockScreen:(BOOL)arg1;
- (void)setHideDirectionalArrows:(BOOL)arg1;
- (BOOL)overlaysShouldDrawDebug;
- (void)setExpandedPerformanceHUD:(BOOL)arg1;
- (void)setDrawPerformanceHUD:(BOOL)arg1;
- (BOOL)shouldDrawDebug;
- (BOOL)isInstalledInLockScreen;
- (BOOL)enableLoggingInLockScreen;
- (float)altitudeForceGridTime;
- (float)altitudeTileQualityThreshold;
- (float)altitudeLodScale;
- (BOOL)altitudeShowNightLight;
- (BOOL)altitudeMipmapFlyover;
- (BOOL)altitudeMipmapSatellite;
- (BOOL)altitudeHighResSatellite;
- (BOOL)renderInSeparateThread;
- (BOOL)altitudeShowTileBounds;
- (BOOL)altitudeTexturePaging;
- (BOOL)altitudePauseLoading;
- (void)setAltitudeForceGridTime:(float)arg1;
- (void)setAltitudeTileQualityThreshold:(float)arg1;
- (void)setAltitudeShowTileBounds:(BOOL)arg1;
- (void)setAltitudeTexturePaging:(BOOL)arg1;
- (void)setAltitudePauseLoading:(BOOL)arg1;
- (void)setAltitudeLodScale:(float)arg1;
- (BOOL)dontMatchRouteLine;
- (BOOL)paintTrafficSkeleton;
- (BOOL)labelAlternatePositionsEnabled;
- (BOOL)paintLabelCollisionLines;
- (BOOL)paintLabelCounts;
- (BOOL)paintMapTiles;
- (BOOL)paintLabelRoadFeatures;
- (BOOL)labelTileDecodeEnabled;
- (BOOL)labelCollisionEnabled;
- (BOOL)labelUpdateMapTilesContinuously;
- (BOOL)disableRoute;
- (BOOL)highlightUnmatchedRouteLine;
- (BOOL)loadGreenTraffic;
- (BOOL)trackingCameraRoutePanning;
- (BOOL)trackingCameraZoomFurther;
- (BOOL)immediateRasterTextureLoading;
- (BOOL)disableStylesheetAnimations;
- (void)setDynamicMapModesEnabled:(BOOL)arg1;
- (BOOL)dynamicMapModesEnabled;
- (BOOL)labelHighlighting;
- (void)setLayoutContinuously:(BOOL)arg1;
- (BOOL)layoutContinuously;
- (void)setDrawContinuously:(BOOL)arg1;
- (BOOL)drawContinuously;
- (id)init;

@end
