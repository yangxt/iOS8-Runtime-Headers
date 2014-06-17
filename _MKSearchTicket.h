/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSArray, GEOMapRegion, NSError, NSString, GEOMapServiceTraits;

@interface _MKSearchTicket : _MKTicket <MKMapServiceSearchTicket> {
}

@property(readonly) GEOMapServiceTraits * traits;
@property(readonly) NSArray * exactMapItems;
@property(readonly) NSArray * refinedMapItems;
@property(readonly) GEOMapRegion * boundingRegion;
@property(readonly) NSError * error;
@property(readonly) NSString * searchQuery;


- (id)searchQuery;
- (id)initWithSearchTicket:(id)arg1;

@end