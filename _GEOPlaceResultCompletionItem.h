/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSArray, NSString, GEOPlaceResult, NSData, GEOMapServiceTraits, <GEOMapItem>;

@interface _GEOPlaceResultCompletionItem : NSObject <GEOCompletionItem, _GEOCompletionSearchHint> {
    GEOPlaceResult *_placeResult;
    NSString *_query;
    GEOMapServiceTraits *_traits;
    NSData *_completionMetaData;
}

@property(readonly) NSArray * displayLines;
@property(readonly) <GEOMapItem> * geoMapItem;


- (id)completionLocation;
- (id)geoMapItem;
- (void)applyToLegacySearch:(id)arg1;
- (void)sendFeedback;
- (BOOL)getCoordinate:(struct { double x1; double x2; }*)arg1;
- (id)highlightsForLine:(unsigned int)arg1;
- (id)queryLine;
- (id)calloutTitle;
- (id)displayLines;
- (id)initWithPlaceResult:(id)arg1 query:(id)arg2 completion:(id)arg3 traits:(id)arg4;
- (id)suggestionsOptions;
- (id)query;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;

@end