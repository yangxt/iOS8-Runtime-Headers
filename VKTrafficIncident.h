/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSDate, NSString;

@interface VKTrafficIncident : NSObject <NSCopying> {
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    } _worldPoint;
    NSString *_title;
    NSString *_subtitle;
    int _type;
    int _routeRelevance;
    int _significance;
    BOOL _isNotForDisplay;
    BOOL _isOnSelectedRoute;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    } _routeOffset;
    unsigned int _routeOffsetInMeters;
    struct { 
        double latitude; 
        double longitude; 
    } _location;
    NSString *_street;
    NSString *_crossStreet;
    NSString *_info;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDate *_lastUpdatedDate;
    float _minZoom;
    float _maxZoom;
    unsigned long long _uniqueID;
    NSString *_uniqueString;
}

@property(copy,readonly) NSString * title;
@property(copy,readonly) NSString * subtitle;
@property(readonly) unsigned long long uniqueID;
@property(readonly) NSString * uniqueString;
@property(readonly) int type;
@property(readonly) BOOL isNotForDisplay;
@property int routeRelevance;
@property BOOL isOnSelectedRoute;
@property struct PolylineCoordinate { unsigned int x1; float x2; } routeOffset;
@property unsigned int routeOffsetInMeters;
@property(readonly) NSString * street;
@property(readonly) NSString * crossStreet;
@property(readonly) NSString * info;
@property(readonly) NSDate * startDate;
@property(readonly) NSDate * endDate;
@property(readonly) NSDate * lastUpdatedDate;
@property(readonly) struct VKPoint { double x1; double x2; double x3; } worldPoint;
@property(readonly) float minZoom;
@property(readonly) float maxZoom;
@property(readonly) int significance;


- (float)maxZoom;
- (float)minZoom;
- (id)lastUpdatedDate;
- (id)endDate;
- (id)startDate;
- (void)setRouteOffsetInMeters:(unsigned int)arg1;
- (unsigned int)routeOffsetInMeters;
- (void)setRouteOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)setIsOnSelectedRoute:(BOOL)arg1;
- (unsigned long long)uniqueID;
- (id)initWithRouteIncident:(id)arg1 routeRelevance:(int)arg2;
- (id)initWithIncident:(id)arg1 vertices:(struct { int x1; int x2; }*)arg2 tileRect:(struct { double x1; double x2; double x3; double x4; })arg3 tileSize:(double)arg4;
- (id)crossStreet;
- (id)street;
- (int)significance;
- (id)initWithIncidentData:(const struct Incident { struct GeoCoordinates { struct Longitude { unsigned int x_1_2_1; } x_1_1_1; struct Latitude { unsigned int x_2_2_1; } x_1_1_2; } x1; struct String { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; struct String { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_3_1_1; } x3; int x4; struct String { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_5_1_1; } x5; struct String { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_6_1_1; } x6; long long x7; long long x8; long long x9; long long x10; int x11; unsigned char x12; boolx13; int x14; unsigned char x15; unsigned char x16; }*)arg1 worldPoint:(struct VKPoint { double x1; double x2; double x3; }*)arg2;
- (struct VKPoint { double x1; double x2; double x3; })worldPoint;
- (void)setRouteRelevance:(int)arg1;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeOffset;
- (BOOL)hasSameIdentifier:(id)arg1;
- (BOOL)isNotForDisplay;
- (int)routeRelevance;
- (BOOL)isOnSelectedRoute;
- (id)uniqueString;
- (id).cxx_construct;
- (id)info;
- (id)subtitle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)type;
- (id)title;
- (void)dealloc;

@end
