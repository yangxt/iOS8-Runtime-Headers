/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableOrderedSet, GEOFeatureStyleAttributes, NSMutableData, NSData, NSMutableArray;

@interface GEOVectorTile : NSObject  {
    struct _GEOTileKey { 
        unsigned int z : 6; 
        unsigned int x : 26; 
        unsigned int y : 26; 
        unsigned int type : 6; 
        unsigned int pixelSize : 8; 
        unsigned int textScale : 8; 
        unsigned int provider : 8; 
        unsigned int expires : 1; 
        unsigned int reserved1 : 7; 
        unsigned char reserved2[4]; 
    } _key;
    GEOFeatureStyleAttributes *_attributes;
    struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; unsigned long long x_1_1_12; id x_1_1_13; int x_1_1_14; } x1; unsigned int x2; unsigned int x3; int x4; int x5; int x6; unsigned int x7; unsigned int x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; } *_lines;
    unsigned int _linesCount;
    unsigned int _linesVertexCount;
    struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; unsigned long long x_1_1_12; id x_1_1_13; int x_1_1_14; } x1; unsigned int x2; unsigned int x3; int x4; int x5; int x6; unsigned int x7; unsigned int x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; } *_coastlines;
    unsigned int _coastlinesCount;
    struct { struct { struct { id x_1_2_1; char *x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; unsigned int x_1_2_7; unsigned long long x_1_2_8; BOOL x_1_2_9; unsigned long long x_1_2_10; float x_1_2_11; unsigned long long x_1_2_12; id x_1_2_13; int x_1_2_14; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; int x_1_1_5; int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; union { struct { struct { float x_1_4_1; float x_1_4_2; } x_1_3_1; struct { float x_2_4_1; float x_2_4_2; } x_1_3_2; } x_9_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_9_2_2; } x_1_1_9; struct { /* ? */ } *x_1_1_10; struct { unsigned short x_11_2_1[2]; unsigned short x_11_2_2[2]; } x_1_1_11; unsigned char x_1_1_12; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; BOOL x3; unsigned int x4; unsigned int x5; } *_polygons;
    unsigned int _polygonsCount;
    unsigned int _polygonsVertexCount;
    struct { float x1; float x2; } *_polygonLabelPositions;
    unsigned int _polygonLabelPositionsCount;
    struct { struct { struct { id x_1_2_1; char *x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; unsigned int x_1_2_7; unsigned long long x_1_2_8; BOOL x_1_2_9; unsigned long long x_1_2_10; float x_1_2_11; unsigned long long x_1_2_12; id x_1_2_13; int x_1_2_14; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; int x_1_1_5; int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; union { struct { struct { float x_1_4_1; float x_1_4_2; } x_1_3_1; struct { float x_2_4_1; float x_2_4_2; } x_1_3_2; } x_9_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_9_2_2; } x_1_1_9; struct { /* ? */ } *x_1_1_10; struct { unsigned short x_11_2_1[2]; unsigned short x_11_2_2[2]; } x_1_1_11; unsigned char x_1_1_12; } x1; unsigned int x2; unsigned int x3; BOOL x4; } *_buildingFootprints;
    NSMutableData *_extrusionHeightsPool;
    NSMutableData *_baseHeightsPool;
    unsigned int _buildingFootprintsCount;
    struct { struct { struct { id x_1_2_1; char *x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; unsigned int x_1_2_7; unsigned long long x_1_2_8; BOOL x_1_2_9; unsigned long long x_1_2_10; float x_1_2_11; unsigned long long x_1_2_12; id x_1_2_13; int x_1_2_14; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; int x_1_1_5; int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; union { struct { struct { float x_1_4_1; float x_1_4_2; } x_1_3_1; struct { float x_2_4_1; float x_2_4_2; } x_1_3_2; } x_9_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_9_2_2; } x_1_1_9; struct { /* ? */ } *x_1_1_10; struct { unsigned short x_11_2_1[2]; unsigned short x_11_2_2[2]; } x_1_1_11; unsigned char x_1_1_12; } x1; unsigned int x2; unsigned int x3; BOOL x4; } *_hiResBuildingFootprints;
    unsigned int _hiResBuildingFootprintsCount;
    struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; unsigned long long x_1_1_12; id x_1_1_13; int x_1_1_14; } x1; char *x2; unsigned int x3; } *_threeDBuildings;
    unsigned int _threeDBuildingsCount;
    struct { BOOL x1; unsigned int x2; id *x3; } *_extendedPointAttributes;
    unsigned int _extendedPointAttributesCount;
    struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; unsigned long long x_1_1_12; id x_1_1_13; int x_1_1_14; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; unsigned char x3; unsigned char x4; unsigned char x5; struct { /* ? */ } *x6; } *_pois;
    unsigned int _poisCount;
    struct { unsigned short x1; } *_overpasses;
    struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { /* ? */ } *x5; } *_junctions;
    unsigned int _junctionsCount;
    BOOL _hasComputedJunctions;
    struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } *_laneConnections;
    unsigned int _laneConnectionsCount;
    struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } *_pointsOnRoad;
    unsigned int _pointsOnRoadCount;
    struct { /* ? */ } **_sortedPointsOnRoad;
    struct { float x1; float x2; float x3; float x4; float x5; float x6; } *_laneGeometry;
    struct { unsigned char x1; struct { /* ? */ } *x2; unsigned int x3; float *x4; struct _NSRange {} *x5; unsigned int x6; } *_curveLineVertices;
    unsigned int *_curveToLineMapping;
    struct { unsigned char x1; struct { /* ? */ } *x2; unsigned int x3; float *x4; struct _NSRange {} *x5; unsigned int x6; } *_lineVertices;
    struct { unsigned char x1; struct { /* ? */ } *x2; unsigned int x3; float *x4; struct _NSRange {} *x5; unsigned int x6; } *_polygonVertices;
    struct { unsigned char x1; struct { /* ? */ } *x2; unsigned int x3; float *x4; struct _NSRange {} *x5; unsigned int x6; } *_coastlineVertices;
    struct { unsigned char x1; struct { /* ? */ } *x2; unsigned int x3; float *x4; struct _NSRange {} *x5; unsigned int x6; } *_footprintVertices;
    struct { unsigned char x1; struct { /* ? */ } *x2; unsigned int x3; float *x4; struct _NSRange {} *x5; unsigned int x6; } *_hiResFootprintVertices;
    NSData *_labelPool;
    struct { unsigned int x1; unsigned int x2; char *x3; } *_labelPoolLanguages;
    unsigned int _labelPoolLanguagesLength;
    NSMutableData *_localizedLabelPool;
    char *_localizedLabelsLanguage;
    struct { char *x1; char *x2; unsigned int x3; } *_labelIndex;
    unsigned int _labelIndexCount;
    struct GEOFeatureShield { struct { char *x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; } x1; long long x2; } *_shieldIndex;
    unsigned int _shieldIndexCount;
    struct { unsigned int x1; unsigned int x2; unsigned char x3; } *_localizationTable;
    unsigned int _localizationTableCount;
    NSMutableOrderedSet *_uniqueAttributes;
    NSMutableArray *_uniqueFeatureAttributes;
    struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; struct { unsigned int x_2_1_1; int x_2_1_2; float x_2_1_3; BOOL x_2_1_4; BOOL x_2_1_5; BOOL x_2_1_6; BOOL x_2_1_7; BOOL x_2_1_8; struct { unsigned char x_9_2_1; unsigned short x_9_2_2; } x_2_1_9[16]; } x2; } *_lineCharacteristicPoints;
    unsigned int _lineCharacteristicPointCount;
    struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; struct { unsigned int x_2_1_1; int x_2_1_2; float x_2_1_3; BOOL x_2_1_4; BOOL x_2_1_5; BOOL x_2_1_6; BOOL x_2_1_7; BOOL x_2_1_8; struct { unsigned char x_9_2_1; unsigned short x_9_2_2; } x_2_1_9[16]; } x2; } *_polygonCharacteristicPoints;
    unsigned int _polygonCharacteristicPointCount;
    struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; struct { unsigned int x_2_1_1; int x_2_1_2; float x_2_1_3; BOOL x_2_1_4; BOOL x_2_1_5; BOOL x_2_1_6; BOOL x_2_1_7; BOOL x_2_1_8; struct { unsigned char x_9_2_1; unsigned short x_9_2_2; } x_2_1_9[16]; } x2; } *_coastlineCharacteristicPoints;
    unsigned int _coastlineCharacteristicPointCount;
    unsigned int _tileReferenceCount;
    struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; } *_tileReferences;
}

@property(readonly) struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; unsigned long long x_1_1_12; id x_1_1_13; int x_1_1_14; } x1; unsigned int x2; unsigned int x3; int x4; int x5; int x6; unsigned int x7; unsigned int x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; }* lines;
@property(readonly) unsigned int linesCount;
@property(readonly) unsigned int linesVertexCount;
@property(readonly) struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; unsigned long long x_1_1_12; id x_1_1_13; int x_1_1_14; } x1; unsigned int x2; unsigned int x3; int x4; int x5; int x6; unsigned int x7; unsigned int x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; }* coastlines;
@property(readonly) unsigned int coastlinesCount;
@property(readonly) struct { struct { struct { id x_1_2_1; char *x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; unsigned int x_1_2_7; unsigned long long x_1_2_8; BOOL x_1_2_9; unsigned long long x_1_2_10; float x_1_2_11; unsigned long long x_1_2_12; id x_1_2_13; int x_1_2_14; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; int x_1_1_5; int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; union { struct { struct { float x_1_4_1; float x_1_4_2; } x_1_3_1; struct { float x_2_4_1; float x_2_4_2; } x_1_3_2; } x_9_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_9_2_2; } x_1_1_9; struct { /* ? */ } *x_1_1_10; struct { unsigned short x_11_2_1[2]; unsigned short x_11_2_2[2]; } x_1_1_11; unsigned char x_1_1_12; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; BOOL x3; unsigned int x4; unsigned int x5; }* polygons;
@property(readonly) unsigned int polygonsCount;
@property(readonly) unsigned int polygonsVertexCount;
@property(readonly) struct { struct { struct { id x_1_2_1; char *x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; unsigned int x_1_2_7; unsigned long long x_1_2_8; BOOL x_1_2_9; unsigned long long x_1_2_10; float x_1_2_11; unsigned long long x_1_2_12; id x_1_2_13; int x_1_2_14; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; int x_1_1_5; int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; union { struct { struct { float x_1_4_1; float x_1_4_2; } x_1_3_1; struct { float x_2_4_1; float x_2_4_2; } x_1_3_2; } x_9_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_9_2_2; } x_1_1_9; struct { /* ? */ } *x_1_1_10; struct { unsigned short x_11_2_1[2]; unsigned short x_11_2_2[2]; } x_1_1_11; unsigned char x_1_1_12; } x1; unsigned int x2; unsigned int x3; BOOL x4; }* buildingFootprints;
@property(readonly) unsigned int buildingFootprintsCount;
@property(readonly) struct { struct { struct { id x_1_2_1; char *x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; unsigned int x_1_2_7; unsigned long long x_1_2_8; BOOL x_1_2_9; unsigned long long x_1_2_10; float x_1_2_11; unsigned long long x_1_2_12; id x_1_2_13; int x_1_2_14; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; int x_1_1_5; int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; union { struct { struct { float x_1_4_1; float x_1_4_2; } x_1_3_1; struct { float x_2_4_1; float x_2_4_2; } x_1_3_2; } x_9_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_9_2_2; } x_1_1_9; struct { /* ? */ } *x_1_1_10; struct { unsigned short x_11_2_1[2]; unsigned short x_11_2_2[2]; } x_1_1_11; unsigned char x_1_1_12; } x1; unsigned int x2; unsigned int x3; BOOL x4; }* hiResBuildingFootprints;
@property(readonly) unsigned int hiResBuildingFootprintsCount;
@property(readonly) struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; unsigned long long x_1_1_12; id x_1_1_13; int x_1_1_14; } x1; char *x2; unsigned int x3; }* threeDBuildings;
@property(readonly) unsigned int threeDBuildingsCount;
@property(readonly) struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; unsigned long long x_1_1_12; id x_1_1_13; int x_1_1_14; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; unsigned char x3; unsigned char x4; unsigned char x5; struct { /* ? */ } *x6; }* pois;
@property(readonly) unsigned int poisCount;
@property(readonly) struct { unsigned short x1; }* overpasses;
@property(readonly) struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { /* ? */ } *x5; }* junctions;
@property(readonly) unsigned int junctionsCount;
@property(readonly) BOOL hasComputedJunctions;
@property(readonly) struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }* pointsOnRoad;
@property(readonly) unsigned int pointsOnRoadCount;
@property(readonly) struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }* laneConnections;
@property(readonly) unsigned int laneConnectionsCount;
@property(readonly) struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; struct { unsigned int x_2_1_1; int x_2_1_2; float x_2_1_3; BOOL x_2_1_4; BOOL x_2_1_5; BOOL x_2_1_6; BOOL x_2_1_7; BOOL x_2_1_8; struct { unsigned char x_9_2_1; unsigned short x_9_2_2; } x_2_1_9[16]; } x2; }* lineCharacteristicPoints;
@property(readonly) unsigned int lineCharacteristicPointCount;
@property(readonly) struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; struct { unsigned int x_2_1_1; int x_2_1_2; float x_2_1_3; BOOL x_2_1_4; BOOL x_2_1_5; BOOL x_2_1_6; BOOL x_2_1_7; BOOL x_2_1_8; struct { unsigned char x_9_2_1; unsigned short x_9_2_2; } x_2_1_9[16]; } x2; }* polygonCharacteristicPoints;
@property(readonly) unsigned int polygonCharacteristicPointCount;
@property(readonly) struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; struct { unsigned int x_2_1_1; int x_2_1_2; float x_2_1_3; BOOL x_2_1_4; BOOL x_2_1_5; BOOL x_2_1_6; BOOL x_2_1_7; BOOL x_2_1_8; struct { unsigned char x_9_2_1; unsigned short x_9_2_2; } x_2_1_9[16]; } x2; }* coastlineCharacteristicPoints;
@property(readonly) unsigned int coastlineCharacteristicPointCount;
@property(readonly) struct { unsigned char x1; struct { /* ? */ } *x2; unsigned int x3; float *x4; struct _NSRange {} *x5; unsigned int x6; }* curveLineVertices;
@property(readonly) struct { unsigned char x1; struct { /* ? */ } *x2; unsigned int x3; float *x4; struct _NSRange {} *x5; unsigned int x6; }* lineVertices;
@property(readonly) struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; } tileKey;
@property(readonly) BOOL dataIncludesConnectivity;
@property(readonly) unsigned int tileReferenceCount;
@property(readonly) struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }* tileReferences;


- (unsigned int)threeDBuildingsCount;
- (struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; unsigned long long x_1_1_12; id x_1_1_13; int x_1_1_14; } x1; char *x2; unsigned int x3; }*)threeDBuildings;
- (void)forEachRoad:(id)arg1;
- (struct { /* ? */ }**)sortedPointsOnRoad;
- (id)initWithTileData:(id)arg1 localizationData:(id)arg2 tileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg3;
- (void)forEachEdgeInRoad:(struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; unsigned long long x_1_1_12; id x_1_1_13; int x_1_1_14; } x1; unsigned int x2; unsigned int x3; int x4; int x5; int x6; unsigned int x7; unsigned int x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; }*)arg1 visitTwice:(BOOL)arg2 visitor:(id)arg3;
- (void)forEachEdgeOnJunction:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { /* ? */ } *x5; }*)arg1 visitor:(id)arg2;
- (struct { unsigned short x1; }*)overpasses;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { /* ? */ } *x5; }*)junctions;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)pointsOnRoad;
- (unsigned int)junctionsCount;
- (struct { unsigned char x1; struct { /* ? */ } *x2; unsigned int x3; float *x4; struct _NSRange {} *x5; unsigned int x6; }*)lineVertices;
- (struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })tileKey;
- (struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; unsigned long long x_1_1_12; id x_1_1_13; int x_1_1_14; } x1; unsigned int x2; unsigned int x3; int x4; int x5; int x6; unsigned int x7; unsigned int x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; }*)coastlines;
- (unsigned int)coastlinesCount;
- (struct { struct { struct { id x_1_2_1; char *x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; unsigned int x_1_2_7; unsigned long long x_1_2_8; BOOL x_1_2_9; unsigned long long x_1_2_10; float x_1_2_11; unsigned long long x_1_2_12; id x_1_2_13; int x_1_2_14; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; int x_1_1_5; int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; union { struct { struct { float x_1_4_1; float x_1_4_2; } x_1_3_1; struct { float x_2_4_1; float x_2_4_2; } x_1_3_2; } x_9_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_9_2_2; } x_1_1_9; struct { /* ? */ } *x_1_1_10; struct { unsigned short x_11_2_1[2]; unsigned short x_11_2_2[2]; } x_1_1_11; unsigned char x_1_1_12; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; BOOL x3; unsigned int x4; unsigned int x5; }*)polygons;
- (unsigned int)polygonsCount;
- (struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; unsigned long long x_1_1_12; id x_1_1_13; int x_1_1_14; } x1; unsigned int x2; unsigned int x3; int x4; int x5; int x6; unsigned int x7; unsigned int x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; }*)lines;
- (unsigned int)linesCount;
- (struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; unsigned long long x_1_1_12; id x_1_1_13; int x_1_1_14; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; unsigned char x3; unsigned char x4; unsigned char x5; struct { /* ? */ } *x6; }*)pois;
- (unsigned int)poisCount;
- (unsigned int)buildingFootprintsCount;
- (struct { struct { struct { id x_1_2_1; char *x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; unsigned int x_1_2_7; unsigned long long x_1_2_8; BOOL x_1_2_9; unsigned long long x_1_2_10; float x_1_2_11; unsigned long long x_1_2_12; id x_1_2_13; int x_1_2_14; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; int x_1_1_5; int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; union { struct { struct { float x_1_4_1; float x_1_4_2; } x_1_3_1; struct { float x_2_4_1; float x_2_4_2; } x_1_3_2; } x_9_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_9_2_2; } x_1_1_9; struct { /* ? */ } *x_1_1_10; struct { unsigned short x_11_2_1[2]; unsigned short x_11_2_2[2]; } x_1_1_11; unsigned char x_1_1_12; } x1; unsigned int x2; unsigned int x3; BOOL x4; }*)buildingFootprints;
- (BOOL)_readExtendedPointAttributes:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned short x3; unsigned int x4; char *x5; unsigned int x6; struct { unsigned int x_7_1_1; boolx_7_1_2; } x7; }*)arg1;
- (BOOL)_readTileReferences:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned short x3; unsigned int x4; char *x5; unsigned int x6; struct { unsigned int x_7_1_1; boolx_7_1_2; } x7; }*)arg1 key:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2;
- (BOOL)_readHighResBuildings:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned short x3; unsigned int x4; char *x5; unsigned int x6; struct { unsigned int x_7_1_1; boolx_7_1_2; } x7; }*)arg1;
- (BOOL)_read3DBuildings:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned short x3; unsigned int x4; char *x5; unsigned int x6; struct { unsigned int x_7_1_1; boolx_7_1_2; } x7; }*)arg1;
- (BOOL)_readCoastlines:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned short x3; unsigned int x4; char *x5; unsigned int x6; struct { unsigned int x_7_1_1; boolx_7_1_2; } x7; }*)arg1;
- (BOOL)_readPolygons:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned short x3; unsigned int x4; char *x5; unsigned int x6; struct { unsigned int x_7_1_1; boolx_7_1_2; } x7; }*)arg1;
- (BOOL)_readLines:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned short x3; unsigned int x4; char *x5; unsigned int x6; struct { unsigned int x_7_1_1; boolx_7_1_2; } x7; }*)arg1;
- (BOOL)_readPois:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned short x3; unsigned int x4; char *x5; unsigned int x6; struct { unsigned int x_7_1_1; boolx_7_1_2; } x7; }*)arg1;
- (BOOL)_readLabels:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned short x3; unsigned int x4; char *x5; unsigned int x6; struct { unsigned int x_7_1_1; boolx_7_1_2; } x7; }*)arg1;
- (BOOL)_readInfoChapter:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned short x3; unsigned int x4; char *x5; unsigned int x6; struct { unsigned int x_7_1_1; boolx_7_1_2; } x7; }*)arg1 key:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2;
- (BOOL)_handleGenericTile:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned short x3; unsigned int x4; char *x5; unsigned int x6; struct { unsigned int x_7_1_1; boolx_7_1_2; } x7; }*)arg1;
- (BOOL)_addGenericPolygonWithAttributes:(int*)arg1;
- (BOOL)_readModernBuildings:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned short x3; unsigned int x4; char *x5; unsigned int x6; struct { unsigned int x_7_1_1; boolx_7_1_2; } x7; }*)arg1 chapter:(unsigned short)arg2 vertexPool:(struct { /* ? */ }**)arg3 footprints:(struct { /* ? */ }**)arg4 count:(unsigned int*)arg5;
- (BOOL)_readSimpleCoastlines:(struct { unsigned char x1; struct { char *x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; boolx3; char *x4; unsigned int x5; unsigned int x6; }*)arg1 tile:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned short x3; unsigned int x4; char *x5; unsigned int x6; struct { unsigned int x_7_1_1; boolx_7_1_2; } x7; }*)arg2;
- (BOOL)_readWrappingCoastlines:(struct { unsigned char x1; struct { char *x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; boolx3; char *x4; unsigned int x5; unsigned int x6; }*)arg1 tile:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned short x3; unsigned int x4; char *x5; unsigned int x6; struct { unsigned int x_7_1_1; boolx_7_1_2; } x7; }*)arg2;
- (BOOL)_readLowResBuildings:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned short x3; unsigned int x4; char *x5; unsigned int x6; struct { unsigned int x_7_1_1; boolx_7_1_2; } x7; }*)arg1;
- (BOOL)_readPolygons:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned short x3; unsigned int x4; char *x5; unsigned int x6; struct { unsigned int x_7_1_1; boolx_7_1_2; } x7; }*)arg1 ofType:(unsigned short)arg2;
- (id)addAttributes:(id)arg1 toUniqueAttributeSet:(id)arg2;
- (unsigned int)_makeSpaceForShields:(unsigned int)arg1;
- (unsigned int)_makeSpaceForLabels:(unsigned int)arg1;
- (struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)tileReferences;
- (unsigned int)tileReferenceCount;
- (unsigned int)coastlineCharacteristicPointCount;
- (struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; struct { unsigned int x_2_1_1; int x_2_1_2; float x_2_1_3; BOOL x_2_1_4; BOOL x_2_1_5; BOOL x_2_1_6; BOOL x_2_1_7; BOOL x_2_1_8; struct { unsigned char x_9_2_1; unsigned short x_9_2_2; } x_2_1_9[16]; } x2; }*)coastlineCharacteristicPoints;
- (unsigned int)polygonCharacteristicPointCount;
- (struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; struct { unsigned int x_2_1_1; int x_2_1_2; float x_2_1_3; BOOL x_2_1_4; BOOL x_2_1_5; BOOL x_2_1_6; BOOL x_2_1_7; BOOL x_2_1_8; struct { unsigned char x_9_2_1; unsigned short x_9_2_2; } x_2_1_9[16]; } x2; }*)polygonCharacteristicPoints;
- (unsigned int)lineCharacteristicPointCount;
- (struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; struct { unsigned int x_2_1_1; int x_2_1_2; float x_2_1_3; BOOL x_2_1_4; BOOL x_2_1_5; BOOL x_2_1_6; BOOL x_2_1_7; BOOL x_2_1_8; struct { unsigned char x_9_2_1; unsigned short x_9_2_2; } x_2_1_9[16]; } x2; }*)lineCharacteristicPoints;
- (unsigned int)laneConnectionsCount;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)laneConnections;
- (unsigned int)pointsOnRoadCount;
- (BOOL)hasComputedJunctions;
- (unsigned int)hiResBuildingFootprintsCount;
- (struct { struct { struct { id x_1_2_1; char *x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; unsigned int x_1_2_7; unsigned long long x_1_2_8; BOOL x_1_2_9; unsigned long long x_1_2_10; float x_1_2_11; unsigned long long x_1_2_12; id x_1_2_13; int x_1_2_14; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; int x_1_1_5; int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; union { struct { struct { float x_1_4_1; float x_1_4_2; } x_1_3_1; struct { float x_2_4_1; float x_2_4_2; } x_1_3_2; } x_9_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_9_2_2; } x_1_1_9; struct { /* ? */ } *x_1_1_10; struct { unsigned short x_11_2_1[2]; unsigned short x_11_2_2[2]; } x_1_1_11; unsigned char x_1_1_12; } x1; unsigned int x2; unsigned int x3; BOOL x4; }*)hiResBuildingFootprints;
- (struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; unsigned long long x_1_1_12; id x_1_1_13; int x_1_1_14; } x1; unsigned int x2; unsigned int x3; int x4; int x5; int x6; unsigned int x7; unsigned int x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; }*)multiSectionFeatureForGeoID:(unsigned long long)arg1;
- (BOOL)dataIncludesConnectivity;
- (unsigned int)polygonsVertexCount;
- (unsigned int)linesVertexCount;
- (void)forEachJunctionInRoad:(struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; unsigned long long x_1_1_12; id x_1_1_13; int x_1_1_14; } x1; unsigned int x2; unsigned int x3; int x4; int x5; int x6; unsigned int x7; unsigned int x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; }*)arg1 visitor:(id)arg2;
- (void)forEachJunction:(id)arg1;
- (void)forEachPolygon:(id)arg1;
- (void)forEachPoint:(id)arg1;
- (struct { float x1; float x2; }*)polygonLabelPositions;
- (id)baseHeightsPool;
- (id)extrusionHeightsPool;
- (struct { unsigned char x1; struct { /* ? */ } *x2; unsigned int x3; float *x4; struct _NSRange {} *x5; unsigned int x6; }*)curveLineVertices;
- (void)_trimWhitespace;
- (void)_findOverpasses;
- (void)_findJunctions;
- (void)_attachRoadPoints;
- (id)_initWithVMP4:(id)arg1 localizationData:(id)arg2 tileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg3;
- (id)_initWithVMP3:(id)arg1 localizationData:(id)arg2 tileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg3;
- (id)description;
- (void)dealloc;

@end