/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSArray;

@interface MKLocalSearchResponse : NSObject  {
    NSArray *_mapItems;
    struct { 
        struct { 
            double latitude; 
            double longitude; 
        } center; 
        struct { 
            double latitudeDelta; 
            double longitudeDelta; 
        } span; 
    } _boundingRegion;
}

@property(readonly) NSArray * mapItems;
@property(readonly) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } boundingRegion;


- (id)_dictionaryRepresentation;
- (void).cxx_destruct;
- (id)mapItems;
- (id)description;
- (id)_initWithMapItems:(id)arg1 boundingRegion:(id)arg2;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })boundingRegion;

@end