/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLocationShiftFunctionResponse : NSObject  {
    struct { 
        double latitude; 
        double longitude; 
    } _originalCoordinate;
    struct { 
        double latitude; 
        double longitude; 
    } _shiftedCoordinate;
    double _creationTime;
    double _params[9];
    double _radius;
    BOOL _isPolyLocationShift;
    BOOL _shouldUsePolyShiftFunction;
}

@property struct { double x1; double x2; } originalCoordinate;


- (void)setOriginalCoordinate:(struct { double x1; double x2; })arg1;
- (id)initWithPolyLocationShiftResponse:(id)arg1 originalCoordinate:(struct { double x1; double x2; })arg2;
- (id)initWithLocationShiftResponse:(id)arg1 originalCoordinate:(struct { double x1; double x2; })arg2;
- (struct { double x1; double x2; })shiftedCoordinateForCoordinate:(struct { double x1; double x2; })arg1 accuracy:(double*)arg2;
- (BOOL)wantsNewFunctionForCoordinate:(struct { double x1; double x2; })arg1;
- (BOOL)needsNewFunctionForCoordinate:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })originalCoordinate;

@end